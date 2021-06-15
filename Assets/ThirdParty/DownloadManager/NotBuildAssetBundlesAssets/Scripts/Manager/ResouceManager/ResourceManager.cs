#if UNITY_EDITOR
using UnityEditor;
#endif

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;

/// <summary>
/// This is the manager of all assets
/// </summary>
public class ResourceManager : SingletonMonoBehaviour<ResourceManager>
{
    /// <summary>
    ///The asynchronous task class
    /// </summary>
    public class AsyncTaskInfo
    {
        //asset relative path which we will load asynchronously
        public string assetPath;

        //the reference of asynchronous task
        public IEnumerator task;

        public AsyncTaskInfo(string assetPath, IEnumerator task)
        {
            this.assetPath = assetPath;

            this.task = task;
        }
    }

    private List<AsyncTaskInfo> m_AsyncLoadAssetTaskList;

#if UNITY_EDITOR

    /// <summary>
    /// The mode of loading asset,
    /// 0 represents loading asset from the BuildAssetBundlesSourceAbsolutePath writed in ConfigureManager directly,
    ///   without using or loading assetbundle.
    ///   (This mode is used for developing game if you don't want to build assetbundle frequently,
    ///   but you want to see the effect of loading assets)
    /// 1 represents loading asset from assetbundle which need to be built correctly and loaded from 
    ///   BuildUnEncryptAssetBundlesOutputAbsolutePath or BuildEncryptAssetBundlesOutputAbsolutePath writed in ConfigureManager.
    /// 2 represents loading asset from assetbudle which need to be built correctly and loaded from AssetBundlesLocalPath 
    ///   writed in ConfigureManager.
    ///   In this mode,first of all,you should build your own asset server,secondly put your assetbundles which be built correctly 
    ///   to your own asset server.finally set the AssetBundlesServerURL writed in ConfigureManager to your asset server url
    /// </summary>
    private int ms_ResouceMode = 0;

    /// <summary>
    ///  All the resource files in this path will generate the AssetBundle files
    /// </summary>
    private string ms_BuildAssetBundlesSourceAbsolutePath;

    protected override void Awake()
    {
        base.Awake();

        DontDestroyOnLoad(this);
   
    }

    /// <summary>
    /// Initialize the resource manager
    /// </summary>
    public void ResourceManagerInit()
    {
        ms_ResouceMode = ConfigureManager.AssetBundleEditorMode;

        ms_BuildAssetBundlesSourceAbsolutePath = ConfigureManager.BuildAssetBundlesSourceAbsolutePath;

        if (ms_ResouceMode != 0)
        {
            AssetBundleManager.GetInstance().AssetBundleManagerInit();
        }
        else
        {
            m_AsyncLoadAssetTaskList = new List<AsyncTaskInfo>();

            StartCoroutine(StartExecuteAsyncLoadAssetList());
        }
    }

    /// <summary>
    /// execute the asynchronous task one by one
    /// </summary>
    public IEnumerator StartExecuteAsyncLoadAssetList()
    {
        while (true)
        {
            for (int i = m_AsyncLoadAssetTaskList.Count - 1; i >= 0; i--)
            {
                IEnumerator task = m_AsyncLoadAssetTaskList[i].task;

                yield return StartCoroutine(task);

                m_AsyncLoadAssetTaskList.RemoveAt(i);
            }

            yield return null;
        }
    }

    /// <summary>
    /// load asset's assetbundle and asset to memory,then return the reference of this asset
    /// </summary>
    /// <param name="assetPath">The assetPath is a relative path,relative to BuildAssetBundlesSourceAbsolutePath</param>
    /// <returns>the reference of this asset</returns>
    public UnityEngine.Object LoadAsset(string assetPath)
    {
        UnityEngine.Object asset = null;

        if (ms_ResouceMode == 0)
        {
            asset = LoadFromGivenFolder(assetPath);
        }
        else
        {
            asset = AssetBundleManager.GetInstance().LoadAsset(assetPath);
        }

        return asset;
    }

    /// <summary>
    /// load asset's assetbundle and asset to memory,then return the reference of this asset
    /// </summary>
    /// <param name="assetPath">The assetPath is a relative path,relative to BuildAssetBundlesSourceAbsolutePath</param>
    /// <returns>the reference of this asset</returns>
    public T LoadAsset<T>(string assetPath) where T : UnityEngine.Object
    {
        T asset = null;

        if (ms_ResouceMode == 0)
        {
            asset = LoadFromGivenFolder<T>(assetPath);
        }
        else
        {
            asset = AssetBundleManager.GetInstance().LoadAsset<T>(assetPath);
        }

        return asset;
    }

    /// <summary>
    /// load asset's assetbundle and asset to memory asynchronously,then invoke the callback function
    /// </summary>
    /// <param name="assetPath">The assetPath is a relative path,relative to BuildAssetBundlesSourceAbsolutePath</param>
    /// <param name="action">The callback function</param>
    public void LoadAssetAsync<T>(string assetPath,Action<T> action) where T : UnityEngine.Object
    {
        if (ms_ResouceMode == 0)
        {
            for (int i = 0; i < m_AsyncLoadAssetTaskList.Count; i++)
            {
                string assetPathInList = m_AsyncLoadAssetTaskList[i].assetPath;

                if (assetPath.Equals(assetPathInList) == true)
                {
                    Debug.LogErrorFormat("Already have the same async loading task in progress:{0}", assetPath);

                    return;
                }
            }

            IEnumerator task = AsyncLoadFromGivenFolderTask<T>(assetPath,action);

            AsyncTaskInfo asyncTaskInfo = new AsyncTaskInfo(assetPath, task);

            m_AsyncLoadAssetTaskList.Add(asyncTaskInfo);
        }
        else
        {
           AssetBundleManager.GetInstance().LoadAssetAsync<T>(assetPath, action);
        }

    }

    /// <summary>
    /// unload asset's assetbundle from memory
    /// </summary>
    /// <param name="assetPath">The assetPath is a relative path,relative to BuildAssetBundlesSourceAbsolutePath</param>
    public void UnLoadAssetBundleOfAsset(string assetPath)
    {
        if (ms_ResouceMode == 0)
        {

        }
        else
        {
            AssetBundleManager.GetInstance().UnloadAssetBundleManually(assetPath);
        }
    }

    /// <summary>
    /// load asset to memory without loading asset's assetbundle,then return the reference of this asset
    /// </summary>
    /// <param name="assetPath">The assetPath is a relative path,relative to BuildAssetBundlesSourceAbsolutePath</param>
    /// <returns>the reference of this asset</returns>
    private UnityEngine.Object LoadFromGivenFolder(string assetPath)
    {
        int lastIndex = assetPath.LastIndexOf("/");

        //Read all the assets from this directory
        string fixedParentPath = ms_BuildAssetBundlesSourceAbsolutePath;

        //the asset name
        string fileName = null;

        //the folder the asset located in
        string detailAssetFolderPath = null;

        if (lastIndex > 0)
        {
            string relativePathFolderName = assetPath.Substring(0, lastIndex);

            fileName = assetPath.Substring(lastIndex + 1);

            //the full path of asset
            detailAssetFolderPath = string.Format("{0}/{1}", fixedParentPath, relativePathFolderName);
        }
        else
        {
            fileName = assetPath;

            detailAssetFolderPath = fixedParentPath;
        }


        string searchFileName = string.Format("{0}.*", fileName);

        string[] filesFullPath = Directory.GetFiles(detailAssetFolderPath, searchFileName);

        string resultAssetName = null;

        for (int i = 0; i < filesFullPath.Length; i++)
        {
            if (filesFullPath[i].EndsWith(".meta") == false)
            {
                resultAssetName = filesFullPath[i].Replace("\\", "/");

                break;
            }
        }

        //if asset not exist, return null
        if ((filesFullPath.Length == 0) || resultAssetName == null)
        {
            Debug.LogErrorFormat("file: {0} can not find in : {1}", fileName, detailAssetFolderPath);

            return null;
        }

        resultAssetName = resultAssetName.Substring(Application.dataPath.Length - 6);
        
        //get the reference of asset
        UnityEngine.Object loadAsset = AssetDatabase.LoadAssetAtPath(resultAssetName, typeof(UnityEngine.Object));

        return loadAsset;
    }

    /// <summary>
    /// load asset to memory without loading asset's assetbundle,then return the reference of this asset
    /// </summary>
    /// <param name="assetPath">The assetPath is a relative path,relative to BuildAssetBundlesSourceAbsolutePath</param>
    /// <returns>the reference of this asset</returns>
    private T LoadFromGivenFolder<T>(string assetPath) where T : UnityEngine.Object
    {
        int lastIndex = assetPath.LastIndexOf("/");

        //Read all the assets from this directory
        string fixedParentPath = ms_BuildAssetBundlesSourceAbsolutePath;

        //the asset name
        string fileName = null;

        //the folder the asset located in
        string detailAssetFolderPath = null;

        if (lastIndex > 0)
        {
            string relativePathFolderName = assetPath.Substring(0, lastIndex);

            fileName = assetPath.Substring(lastIndex + 1);

            //the full path of asset
            detailAssetFolderPath = string.Format("{0}/{1}", fixedParentPath, relativePathFolderName);
        }
        else
        {
            fileName = assetPath;

            detailAssetFolderPath = fixedParentPath;
        }


        string searchFileName = string.Format("{0}.*", fileName);

        string[] filesFullPath = Directory.GetFiles(detailAssetFolderPath, searchFileName);

        string resultAssetName = null;

        for (int i = 0; i < filesFullPath.Length; i++)
        {
            if (filesFullPath[i].EndsWith(".meta") == false)
            {
                resultAssetName = filesFullPath[i].Replace("\\", "/");

                break;
            }
        }

        //if asset not exist,return null
        if ((filesFullPath.Length == 0) || resultAssetName == null)
        {
            Debug.LogErrorFormat("file: {0} can not find in : {1}", fileName, detailAssetFolderPath);

            return null;
        }

        resultAssetName = resultAssetName.Substring(Application.dataPath.Length - 6);

        //get the reference of asset
        T loadAsset = AssetDatabase.LoadAssetAtPath(resultAssetName, typeof(T)) as T;
        
        return loadAsset;
    }


    /// <summary>
    /// load asset to memory without loading asset's assetbundle,then invoke the callback function
    /// </summary>
    /// <param name="assetPath">The assetPath is a relative path,relative to BuildAssetBundlesSourceAbsolutePath</param>
    /// <param name="action">The callback function</param>
    private IEnumerator AsyncLoadFromGivenFolderTask<T>(string assetPath,Action<T> action) where T : UnityEngine.Object
    {
        T asset = LoadFromGivenFolder<T>(assetPath);

        action(asset);

        yield return null;
    }

#else

    /// <summary>
    /// Initialize the resource manager
    /// </summary>
    public void ResourceManagerInit()
    {
        AssetBundleManager.GetInstance().AssetBundleManagerInit();
    }

    /// <summary>
    /// load asset's assetbundle and asset to memory,then return the reference of this asset
    /// </summary>
    /// <param name="assetPath">The assetPath is a relative path,relative to BuildAssetBundlesSourceAbsolutePath</param>
    /// <returns>the reference of this asset</returns>
    public UnityEngine.Object LoadAsset(string assetPath)
    {
        return AssetBundleManager.GetInstance().LoadAsset(assetPath);
    }

    /// <summary>
    /// load asset's assetbundle and asset to memory,then return the reference of this asset
    /// </summary>
    /// <param name="assetPath">The assetPath is a relative path,relative to BuildAssetBundlesSourceAbsolutePath</param>
    /// <returns>the reference of this asset</returns>
    public T LoadAsset<T>(string assetPath) where T : UnityEngine.Object
    {
        return AssetBundleManager.GetInstance().LoadAsset<T>(assetPath);
    } 

    /// <summary>
    /// load asset's assetbundle and asset to memory asynchronously,then invoke the callback function
    /// </summary>
    /// <param name="assetPath">The assetPath is a relative path,relative to BuildAssetBundlesSourceAbsolutePath</param>
    /// <param name="action">The callback function</param>
    public void LoadAssetAsync<T>(string assetPath, Action<T> action) where T : UnityEngine.Object
    {
         AssetBundleManager.GetInstance().LoadAssetAsync<T>(assetPath, action);
    }

    /// <summary>
    /// unload asset's assetbundle from memory
    /// </summary>
    /// <param name="assetPath">The assetPath is a relative path,relative to BuildAssetBundlesSourceAbsolutePath</param>
    public void UnLoadAssetBundleOfAsset(string assetPath)
    {
        AssetBundleManager.GetInstance().UnloadAssetBundleManually(assetPath);
    }


#endif


}
