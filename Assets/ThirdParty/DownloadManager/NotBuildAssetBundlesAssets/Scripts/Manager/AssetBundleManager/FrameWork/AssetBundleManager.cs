using UnityEngine;
using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;


public class AssetBundleManager: SingletonMonoBehaviour<AssetBundleManager>
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

    private Dictionary<string, LoadedAssetBundle> m_LoadedAssetBundleDictionary;//the cache of loaded Assetbundle in memory

    private Dictionary<string, string[]> m_LoadedAssetBundleDependenciesDictionary;//the cache which record dependencies between Assetbundles

    private List<AsyncTaskInfo> m_AsyncLoadAssetTaskList;//store the asynchronous task

    private AssetBundleManifest m_AssetBundleManifest;//the manifest file of all Assetbundles

    private string m_AssetBundleExtensions;//the extension of Assetbundle file

    private bool m_IsAssetBundleUseCipher;//if we want to encrypt the AssetBundles

    private string m_AssetBundleEncryptKey;//The encryption key when we build encrypt AssetBundles

    private string m_AssetBundleIV;//The initialization vector of encryption key when we build encrypt AssetBundles

    private EnryptType m_AssetBundleEnryptType;//The encryption algorithm type

    private string m_AssetBundleLocalPath;//The path which we store our AssetBundle files on current platform


    protected override void Awake()
    {
        base.Awake();

        DontDestroyOnLoad(this);
    }

    /// <summary>
    /// The initialization funtion of AssetBundle Manager
    /// </summary>
    public void AssetBundleManagerInit()
    {
        m_LoadedAssetBundleDictionary = new Dictionary<string, LoadedAssetBundle>();

        m_LoadedAssetBundleDependenciesDictionary = new Dictionary<string, string[]>();

        m_AsyncLoadAssetTaskList = new List<AsyncTaskInfo>();

        m_AssetBundleExtensions = ConfigureManager.AssetBundleExtensions;

        m_IsAssetBundleUseCipher = ConfigureManager.AssetBundlesUseCipher;

        m_AssetBundleEncryptKey = ConfigureManager.AssetBundleEncryptKey;

        m_AssetBundleIV = ConfigureManager.AssetBundleIV;

        m_AssetBundleEnryptType = ConfigureManager.AssetBundleEnryptType;

        m_AssetBundleLocalPath = ConfigureManager.AssetBundlesLocalPath;

        string assetBundleFolderName = null;

        if (m_IsAssetBundleUseCipher)
        {
            assetBundleFolderName = ConfigureManager.EncryptAssetBundlesFolderName;
        }
        else
        {
            assetBundleFolderName = ConfigureManager.UnEncryptAssetBundlesFolderName;
        }

        string assetBundleManifestName = assetBundleFolderName;


        LoadAssetBundleManifest(assetBundleManifestName, out m_AssetBundleManifest);

        StartCoroutine(StartAsyncLoadAssetTaskList());

    }

    /// <summary>
    /// load AssetBundleManifest file to memory
    /// </summary>
    private void LoadAssetBundleManifest(string assetBundleManifestName, out AssetBundleManifest assetBundleManifest)
    {
        string assetBundleManifestPath = string.Format("{0}/{1}", m_AssetBundleLocalPath, assetBundleManifestName);

        AssetBundle assetBundle = null;

        if (m_IsAssetBundleUseCipher)
        {
            byte[] encryptAssetBytes = FileIOManager.FileConvertToBytes(assetBundleManifestPath);

            byte[] decryptAssetBytes = CipherManager.Decrypt(encryptAssetBytes, m_AssetBundleEncryptKey, m_AssetBundleIV, m_AssetBundleEnryptType);

            assetBundle = AssetBundle.LoadFromMemory(decryptAssetBytes);
        }
        else
        {
            assetBundle = AssetBundle.LoadFromFile(assetBundleManifestPath);
        }

        assetBundleManifest = (AssetBundleManifest)assetBundle.LoadAsset("AssetBundleManifest");

        assetBundle.Unload(false);

    }

    /// <summary>
    /// load asset to memory,and then return the reference of this asset 
    /// </summary>
    /// <param name="assetPath"></param>
    /// <returns></returns>
    public UnityEngine.Object LoadAsset(string assetPath)
    {
        string assetBundlePath = string.Format("{0}{1}", assetPath, m_AssetBundleExtensions).ToLower();

        AssetBundle assetBundle = LoadAssetBundle(assetBundlePath);

        string assetName = null;

        int endIndex = assetPath.LastIndexOf("/");

        if (endIndex > 0)
        {
            assetName = assetPath.Substring(endIndex + 1);
        }
        else
        {
            assetName = assetPath;
        }

        UnityEngine.Object asset = assetBundle.LoadAsset(assetName);

        return asset;
    }

    /// <summary>
    /// load asset to memory,and then return the reference of this asset 
    /// </summary>
    public T LoadAsset<T>(string assetPath) where T : UnityEngine.Object
    {
        string assetBundlePath = string.Format("{0}{1}", assetPath, m_AssetBundleExtensions).ToLower();

        AssetBundle assetBundle = LoadAssetBundle(assetBundlePath);

        int endIndex = assetPath.LastIndexOf("/");

        string assetName = null;

        if (endIndex > 0)
        {
            assetName = assetPath.Substring(endIndex + 1);
        }
        else
        {
            assetName = assetPath;
        }

        T asset = assetBundle.LoadAsset<T>(assetName);

        return asset;
    }

    /// <summary>
    /// load AssetBundle to memory,and put it into the dictionary of loaded Assetbundle,then return the reference of this Assetbundle
    /// </summary>
    public AssetBundle LoadAssetBundleManually(string assetPath)
    {
        string assetBundlePath = string.Format("{0}{1}", assetPath, m_AssetBundleExtensions).ToLower();

        AssetBundle assetBundle = LoadAssetBundle(assetBundlePath);

        return assetBundle;
    }

    /// <summary>
    /// unload AssetBundle from memory,and clear it from the dictionary of loaded Assetbundle
    /// </summary>
    public void UnloadAssetBundleManually(string assetPath)
    {
        string assetBundlePath = string.Format("{0}{1}", assetPath, m_AssetBundleExtensions).ToLower();

        UnloadAssetBundle(assetBundlePath);
    }

    /// <summary>
    /// load AssetBundle to memory,and put it into the dictionary of loaded Assetbundle,then return the reference of this Assetbundle
    /// </summary>
    private AssetBundle LoadAssetBundle(string assetBundleName)
    {
        LoadAssetBundleDependencies(assetBundleName);

        LoadedAssetBundle loadedAssetBundle = null;

        bool isHaveLoadedAssetBundle = m_LoadedAssetBundleDictionary.TryGetValue(assetBundleName, out loadedAssetBundle);

        if (isHaveLoadedAssetBundle)
        {
            loadedAssetBundle.referenceCount++;

            return loadedAssetBundle.assetBundle;
        }
        else
        {
            string assetBundlePath = string.Format("{0}/{1}", m_AssetBundleLocalPath, assetBundleName);

            AssetBundle assetBundle = null;

            if (m_IsAssetBundleUseCipher == true)
            {
                byte[] assetEncryptedBytes = FileIOManager.FileConvertToBytes(assetBundlePath);

                byte[] assetDecryptedBytes = CipherManager.Decrypt(assetEncryptedBytes, m_AssetBundleEncryptKey, m_AssetBundleIV, m_AssetBundleEnryptType);

                assetBundle = AssetBundle.LoadFromMemory(assetDecryptedBytes);
            }
            else
            {
                assetBundle = AssetBundle.LoadFromFile(assetBundlePath);
            }

            m_LoadedAssetBundleDictionary.Add(assetBundleName, new LoadedAssetBundle(assetBundle));

            return assetBundle;

        }

    }

    /// <summary>
    /// unload AssetBundle from memory,and clear it from the dictionary of loaded Assetbundle
    /// </summary>
    private void UnloadAssetBundle(string assetBundleName)
    {
        LoadedAssetBundle loadedAssetBundle = null;

        bool isHaveLoadedAssetBundle = m_LoadedAssetBundleDictionary.TryGetValue(assetBundleName, out loadedAssetBundle);

        if (isHaveLoadedAssetBundle)
        {
            loadedAssetBundle.referenceCount--;

            if (loadedAssetBundle.referenceCount == 0)
            {
                m_LoadedAssetBundleDictionary.Remove(assetBundleName);

                AssetBundle assetBundle = loadedAssetBundle.assetBundle;

                loadedAssetBundle = null;

                assetBundle.Unload(false);

                UnLoadAssetBundleDependencies(assetBundleName);
            }
        }
        else
        {
            Debug.LogError(string.Format("UnLoadAssetBundle Function:There is no {0} in loadedAssetBundleDictionary", assetBundleName));
        }

    }

    /// <summary>
    /// load the dependencies of this AssetBundle
    /// </summary>
    private void LoadAssetBundleDependencies(string assetBundleName)
    {
        string[] assetBundleDependenciesNames = m_AssetBundleManifest.GetAllDependencies(assetBundleName);

        for (int i = 0; i < assetBundleDependenciesNames.Length; i++)
        {
            LoadAssetBundle(assetBundleDependenciesNames[i]);
        }

        if (!m_LoadedAssetBundleDependenciesDictionary.ContainsKey(assetBundleName))
        {
            m_LoadedAssetBundleDependenciesDictionary.Add(assetBundleName, assetBundleDependenciesNames);
        }

    }

    /// <summary>
    /// unload the dependencies of this AssetBundle
    /// </summary>
    private void UnLoadAssetBundleDependencies(string assetBundleName)
    {
        string[] assetBundleDependenciesNames = null;

        bool isHaveAssetBundleDependencies = m_LoadedAssetBundleDependenciesDictionary.TryGetValue(assetBundleName, out assetBundleDependenciesNames);

        if (isHaveAssetBundleDependencies == true)
        {
            for (int i = 0; i < assetBundleDependenciesNames.Length; i++)
            {
                UnloadAssetBundle(assetBundleDependenciesNames[i]);
            }

            m_LoadedAssetBundleDependenciesDictionary.Remove(assetBundleName);
        }
        else
        {
            Debug.LogError(string.Format("There is no {0} 's assetBundleDependencies in loadedAssetBundleDependenciesDictionary", assetBundleName));
        }

    }



     /// <summary>
    /// load asset to memory asynchronously, then invoke the callback function
    /// </summary>
    public void LoadAssetAsync<T>(string assetPath, Action<T> action) where T : UnityEngine.Object
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

        IEnumerator task = LoadAssetAsyncTask<T>(assetPath,action);

        AsyncTaskInfo asyncTaskInfo = new AsyncTaskInfo(assetPath, task);

        m_AsyncLoadAssetTaskList.Add(asyncTaskInfo);

    }

    /// <summary>
    /// load asset to memory asynchronously, then invoke the callback function
    /// </summary>
    public IEnumerator LoadAssetAsyncTask<T>(string assetPath, Action<T> action) where T : UnityEngine.Object
    {
        string assetBundlePath = string.Format("{0}{1}", assetPath, m_AssetBundleExtensions).ToLower();

        yield return StartCoroutine(LoadAssetBundleAsync(assetBundlePath, true, (assetBundle) =>
        {
            int endIndex = assetPath.LastIndexOf("/");

            string assetName = null;

            if (endIndex > 0)
            {
                assetName = assetPath.Substring(endIndex + 1);
            }
            else
            {
                assetName = assetPath;
            }

            T asset = assetBundle.LoadAsset<T>(assetName);

            action(asset);
        }));

    }

      /// <summary>
    /// load asset to memory asynchronously, then invoke the callback function
    /// </summary>
    private IEnumerator LoadAssetBundleAsyncManually(string assetPath, Action<AssetBundle> assetBundleAction)
    {
        string assetBundlePath = string.Format("{0}{1}", assetPath, m_AssetBundleExtensions).ToLower();

        yield return StartCoroutine(LoadAssetBundleAsync(assetBundlePath,true,assetBundleAction));
    }

    /// <summary>
    /// load AssetBundle to memory asynchronously,and put it into the dictionary of loaded Assetbundle,then invoke the callback function
    /// </summary>
    private IEnumerator LoadAssetBundleAsync(string assetBundleName,bool isRootAssetBundle,Action<AssetBundle> assetBundleAction)
    {
        yield return StartCoroutine(LoadAssetBundleDependenciesAsync(assetBundleName));

        AssetBundle assetBundle = null;

        LoadedAssetBundle loadedAssetBundle = null;

        bool isHaveLoadedAssetBundle = m_LoadedAssetBundleDictionary.TryGetValue(assetBundleName, out loadedAssetBundle);

        if (isHaveLoadedAssetBundle == true)
        {
            loadedAssetBundle.referenceCount++;

            assetBundle = loadedAssetBundle.assetBundle;
        }
        else
        {
            string assetBundlePath = string.Format("{0}/{1}", m_AssetBundleLocalPath, assetBundleName);
            
            AssetBundleCreateRequest assetBundleCreateRequest = null;

            if (m_IsAssetBundleUseCipher == true)
            {
                byte[] assetEncryptedBytes = FileIOManager.FileConvertToBytes(assetBundlePath);

                byte[] assetDecryptedBytes = CipherManager.Decrypt(assetEncryptedBytes, m_AssetBundleEncryptKey, m_AssetBundleIV, m_AssetBundleEnryptType);

                assetBundleCreateRequest = AssetBundle.LoadFromMemoryAsync(assetDecryptedBytes);
            }
            else
            {
                assetBundleCreateRequest = AssetBundle.LoadFromFileAsync(assetBundlePath);
            }

            assetBundle = assetBundleCreateRequest.assetBundle;

            m_LoadedAssetBundleDictionary.Add(assetBundleName, new LoadedAssetBundle(assetBundle));
                      
        }

        if (isRootAssetBundle == true && assetBundleAction != null)
        {
            assetBundleAction(assetBundle);
        }
    }

    /// <summary>
    ///  load the dependencies of this AssetBundle asynchronously
    /// </summary>
    private IEnumerator LoadAssetBundleDependenciesAsync(string assetBundleName)
    {
        string[] assetBundleDependenciesNames = m_AssetBundleManifest.GetAllDependencies(assetBundleName);

        for (int i = 0; i < assetBundleDependenciesNames.Length; i++)
        {
            yield return StartCoroutine(LoadAssetBundleAsync(assetBundleDependenciesNames[i],false,null));
        }

        if (m_LoadedAssetBundleDependenciesDictionary.ContainsKey(assetBundleName) == false)
        {
            m_LoadedAssetBundleDependenciesDictionary.Add(assetBundleName, assetBundleDependenciesNames);
        }
    }

    /// <summary>
    /// execute the asynchronous task one by one
    /// </summary>
    public IEnumerator StartAsyncLoadAssetTaskList()
    {
        while(true)
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

}
