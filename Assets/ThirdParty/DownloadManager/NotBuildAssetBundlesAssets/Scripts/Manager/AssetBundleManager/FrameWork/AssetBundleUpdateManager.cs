using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// This class is used for updating AssetBundles files to local machine from server
/// </summary>
public class AssetBundleUpdateManager : SingletonMonoBehaviour<AssetBundleUpdateManager>
{
    //if the AssetBundles in local machine is different from the AssetBundles in server
    private bool m_LocalAssetBundlesIsNotEqualServerAssetBundles = false;

    //the num of Assetbundles which we should update
    private int m_NeedDownLoadAssetBundlesTotalNum = 0;

    //the num of Assetbundles which we has updated
    private int m_CurrentDownLoadedAssetBundlesTotalNum = 0;

    //The list stored AssetBundle names which will be update  
    private List<string> m_NeedDownloadAssetBundleNamesList = new List<string>();

    //the asset relative path of ui progress bar 
    private string m_ShowUpdateAssetBundleProgressUIAssetPath = "UI/Prefab/UIShowUpdateAssetBundleProgress";

    //the ui gameObject of progress bar
    private GameObject m_ShowUpdateAssetBundleProgressUIAsset;

    //if occur error when update Assetbundle from server
    private bool m_HasError;

    protected override void Awake()
    {
        base.Awake();

        m_ShowUpdateAssetBundleProgressUIAsset = Resources.Load<GameObject>(m_ShowUpdateAssetBundleProgressUIAssetPath);
    }

    /// <summary>
    /// start update AssetBundles
    /// </summary>
    /// <param name="eventWhenUpdateAssetBundlesComplete"></param>
    public void StartUpdateAssetBundles(Action eventWhenUpdateAssetBundlesComplete)
    {
        StartShowUpdateAssetBundleProgressUI(eventWhenUpdateAssetBundlesComplete);

        StartCoroutine(AssetBundlesUpdateStart());
    }

    /// <summary>
    /// start show progress bar of updating AssetBundles
    /// </summary>
    /// <param name="eventWhenUpdateAssetBundlesComplete"></param>
    private void StartShowUpdateAssetBundleProgressUI(Action eventWhenUpdateAssetBundlesComplete)
    {
        GameObject uiGameobject = Instantiate<GameObject>(m_ShowUpdateAssetBundleProgressUIAsset);

        uiGameobject.GetComponent<UIShowUpdateAssetBundlesProgress>().eventWhenUpdateAssetBundlesComplete = eventWhenUpdateAssetBundlesComplete;

        uiGameobject.name = "UIShowUpdateAssetBundleProgress";

        Transform uiRootTransform = UIManager.GetInstance().UIRootTransform;

        uiGameobject.transform.SetParent(uiRootTransform, false);

        uiGameobject.transform.SetAsLastSibling();
    }

    IEnumerator AssetBundlesUpdateStart()
    {
        bool isAssetBundlesUseCipher = ConfigureManager.AssetBundlesUseCipher;

        Debug.Log(string.Format("{0}{1}", "UseCipher:", isAssetBundlesUseCipher));

        string assetBundleServerPath = ConfigureManager.AssetBundlesServerPath;

        string assetBundleLocalPath = ConfigureManager.AssetBundlesLocalPath;

        yield return StartCoroutine(UpdateAssetBundle(assetBundleServerPath, assetBundleLocalPath, isAssetBundlesUseCipher));

        if (m_HasError)
        {
            
        }
        else
        {
            UIShowUpdateAssetBundlesProgress.GetInstance().TargetDownloadedProgress = 1.0f;

            UIShowUpdateAssetBundlesProgress.GetInstance().NextStep = true;

            Destroy(this.gameObject);
        }
    }

    /// <summary>
    /// the function of updating AssetBundles from server to local machine
    /// </summary>
    /// <param name="assetBundleServerPath"></param>
    /// <param name="assetBundleLocalPath"></param>
    /// <param name="isAssetBundlesUseCipher"></param>
    /// <returns></returns>
    IEnumerator UpdateAssetBundle(string assetBundleServerPath, string assetBundleLocalPath, bool isAssetBundlesUseCipher)
    {
        string assetBundleFolderName = null;

        if (isAssetBundlesUseCipher)
        {
            assetBundleFolderName = ConfigureManager.EncryptAssetBundlesFolderName;
        }
        else
        {
            assetBundleFolderName = ConfigureManager.UnEncryptAssetBundlesFolderName;
        }

        string assetBundleManifestFileName = assetBundleFolderName;


        string localAssetBundleManifestPath = string.Format("{0}/{1}", assetBundleLocalPath, assetBundleManifestFileName);

        string serverAssetBundleManifestPath = string.Format("{0}/{1}", assetBundleServerPath, assetBundleManifestFileName);



        //load AssetBundleManifest of local machine to memory ,if AssetBundleManifest of local machine is not exist,then download
        //it from server,and download all AssetBundles Whose name is in AssetBundleManifest just downloaded
        if (FileIOManager.CheckFileIsExist(localAssetBundleManifestPath) == false)
        {
            yield return StartCoroutine(DownLoadAssetBundle(serverAssetBundleManifestPath, localAssetBundleManifestPath, false));

            if (m_HasError)
            {
                yield break;
            }

            AssetBundle _localAssetbundle = null;

            if (isAssetBundlesUseCipher == true)
            {
                byte[] _localEncryptAssetBundleManifestBytes = FileIOManager.FileConvertToBytes(localAssetBundleManifestPath);

                byte[] _localDecryptAssetBundleManifestBytes = CipherManager.Decrypt(_localEncryptAssetBundleManifestBytes, ConfigureManager.AssetBundleEncryptKey, ConfigureManager.AssetBundleIV, ConfigureManager.AssetBundleEnryptType);

                _localAssetbundle = AssetBundle.LoadFromMemory(_localDecryptAssetBundleManifestBytes);
            }
            else
            {
                _localAssetbundle = AssetBundle.LoadFromFile(localAssetBundleManifestPath);
            }

            AssetBundleManifest _localAssetBundleManifest = (AssetBundleManifest)_localAssetbundle.LoadAsset("AssetBundleManifest");

            _localAssetbundle.Unload(false);

            string[] allAssetBundlesNames = _localAssetBundleManifest.GetAllAssetBundles();

            m_NeedDownLoadAssetBundlesTotalNum = allAssetBundlesNames.Length;

            for (int i = 0; i < allAssetBundlesNames.Length; i++)
            {
                string assetBundleName = allAssetBundlesNames[i];

                string serverAssetBundlesPath = string.Format("{0}/{1}", assetBundleServerPath, assetBundleName);

                string localAssetBundlesPath = string.Format("{0}/{1}", assetBundleLocalPath, assetBundleName);

                yield return StartCoroutine(DownLoadAssetBundle(serverAssetBundlesPath, localAssetBundlesPath, true));

                if (m_HasError)
                {
                    yield break;
                }
            }

            _localAssetBundleManifest = null;

            Resources.UnloadUnusedAssets();

            for (int i = 0; i < 3; i++)
            {
                System.GC.Collect(i);
            }

            yield break;
        }



        //load AssetBundleManifest to memory from local machine
        byte[] localAssetBundleManifestBytes = null;

        if (isAssetBundlesUseCipher)
        {
            byte[] localEncryptAssetBundleManifestBytes = FileIOManager.FileConvertToBytes(localAssetBundleManifestPath);

            byte[] localDecryptAssetBundleManifestBytes = CipherManager.Decrypt(localEncryptAssetBundleManifestBytes, ConfigureManager.AssetBundleEncryptKey, ConfigureManager.AssetBundleIV, ConfigureManager.AssetBundleEnryptType);

            localAssetBundleManifestBytes = localDecryptAssetBundleManifestBytes;
        }
        else
        {
            localAssetBundleManifestBytes = FileIOManager.FileConvertToBytes(localAssetBundleManifestPath);
        }

        AssetBundle localAssetbundle = AssetBundle.LoadFromMemory(localAssetBundleManifestBytes);

        AssetBundleManifest localAssetBundleManifest = (AssetBundleManifest)localAssetbundle.LoadAsset("AssetBundleManifest");

        localAssetbundle.Unload(false);



        //load AssetBundleManifest to memory from server
        WWW serverWWW = new WWW(serverAssetBundleManifestPath);

        yield return serverWWW;

        if(serverWWW.error!=null)
        {
            m_HasError = true;

            Debug.LogErrorFormat("{0} Error : {1}",serverAssetBundleManifestPath, serverWWW.error.ToString());

            yield break;
        }


        byte[] serverAssetBundleManifestBytes = null;

        if (isAssetBundlesUseCipher)
        {
            byte[] serverEncryptAssetBundleManifestBytes = serverWWW.bytes;

            byte[] serverDecryptAssetBundleManifestBytes = CipherManager.Decrypt(serverEncryptAssetBundleManifestBytes, ConfigureManager.AssetBundleEncryptKey, ConfigureManager.AssetBundleIV, ConfigureManager.AssetBundleEnryptType);

            serverAssetBundleManifestBytes = serverDecryptAssetBundleManifestBytes;
        }
        else
        {
            serverAssetBundleManifestBytes = serverWWW.bytes;
        }

        serverWWW.Dispose();

        AssetBundle serverAssetBundle = AssetBundle.LoadFromMemory(serverAssetBundleManifestBytes);

        AssetBundleManifest serverAssetBundleManifest = (AssetBundleManifest)serverAssetBundle.LoadAsset("AssetBundleManifest");

        serverAssetBundle.Unload(false);


        string localAssetBundleManifestMD5 = FileIOManager.CalculateMd5(localAssetBundleManifestBytes);

        string serverAssetBundleManifestMD5 = FileIOManager.CalculateMd5(serverAssetBundleManifestBytes);


        if (localAssetBundleManifestMD5.Equals(serverAssetBundleManifestMD5))
        {
            Debug.Log("localAssetBundleManifest is equal to serverAssetBundleManifest");

            yield break;
        }
        else
        {
            Debug.Log("localAssetBundleManifest is not equal to serverAssetBundleManifest");
        }


        string[] localAssetBundleNames = localAssetBundleManifest.GetAllAssetBundles();

        string[] serverAssetBundleNames = serverAssetBundleManifest.GetAllAssetBundles();


        List<string> localAssetBundleNamesList = new List<string>(localAssetBundleNames);

        List<string> serverAssetBundleNamesList = new List<string>(serverAssetBundleNames);



        ///Check each AssetBundles from server 
        for (int i = 0; i < serverAssetBundleNamesList.Count; i++)
        {
            string assetBundleName = serverAssetBundleNamesList[i];

            if (localAssetBundleNamesList.Contains(assetBundleName))
            {
                Hash128 localAssetBundleHash = localAssetBundleManifest.GetAssetBundleHash(assetBundleName);

                Hash128 serverAssetBundleHash = serverAssetBundleManifest.GetAssetBundleHash(assetBundleName);

                //if the hash value is different,delete the AssetBundle file in local machine,then download the AssetBundle from server  
                if (localAssetBundleHash != serverAssetBundleHash)
                {
                    MarkLocalAssetBundles_IsNotEqual_ServerAssetBundles_OnlyOnce();

                    m_NeedDownloadAssetBundleNamesList.Add(assetBundleName);

                }
            }
            else
            {
                MarkLocalAssetBundles_IsNotEqual_ServerAssetBundles_OnlyOnce();

                m_NeedDownloadAssetBundleNamesList.Add(assetBundleName);
            }
        }



        if (m_NeedDownloadAssetBundleNamesList.Count == 0)
        {
            for (int i = 0; i < serverAssetBundleNamesList.Count; i++)
            {
                string serverAssetBundleName = serverAssetBundleNamesList[i];

                string[] serverAssetBundleDependenciesNames = serverAssetBundleManifest.GetAllDependencies(serverAssetBundleName);

                string localAssetbundleName = serverAssetBundleName;

                string[] localAssetBundleDependenciesNames = localAssetBundleManifest.GetAllDependencies(localAssetbundleName);

                if (localAssetBundleDependenciesNames.Length == serverAssetBundleDependenciesNames.Length)
                {
                    bool localIsNotEqualServer = false;

                    for (int j = 0; j < localAssetBundleDependenciesNames.Length; j++)
                    {
                        if (localAssetBundleDependenciesNames[j] != serverAssetBundleDependenciesNames[j])
                        {
                            MarkLocalAssetBundles_IsNotEqual_ServerAssetBundles_OnlyOnce();

                            localIsNotEqualServer = true;

                            break;
                        }
                    }

                    if (localIsNotEqualServer)
                    {
                        break;
                    }
                }
                else
                {
                    MarkLocalAssetBundles_IsNotEqual_ServerAssetBundles_OnlyOnce();

                    break;
                }
            }
        }




        //delete redundant AssetBundles in local machine
        for (int i = 0; i < localAssetBundleNamesList.Count; i++)
        {
            string assetBundleName = localAssetBundleNamesList[i];

            if (!serverAssetBundleNamesList.Contains(assetBundleName))
            {
                MarkLocalAssetBundles_IsNotEqual_ServerAssetBundles_OnlyOnce();

                string deleteAssetBundlePath = string.Format("{0}/{1}", assetBundleLocalPath, assetBundleName);

                //delete redundant AssetBundles

                FileIOManager.DeleteFile(deleteAssetBundlePath);

                FileIOManager.IfDeletedFileCurrentDirectoryIsEmptyDeleteRecursively(deleteAssetBundlePath);

            }
        }




        m_NeedDownLoadAssetBundlesTotalNum = m_NeedDownLoadAssetBundlesTotalNum + m_NeedDownloadAssetBundleNamesList.Count;

        //下载更新资源
        for (int i = 0; i < m_NeedDownloadAssetBundleNamesList.Count; i++)
        {
            string assetBundleName = m_NeedDownloadAssetBundleNamesList[i];

            string serverAssetBundlePath = string.Format("{0}/{1}", assetBundleServerPath, assetBundleName);

            string localAssetBundlePath = string.Format("{0}/{1}", assetBundleLocalPath, assetBundleName);

            yield return StartCoroutine(DownLoadAssetBundle(serverAssetBundlePath, localAssetBundlePath, true));

            if (m_HasError)
            {
                yield break;
            }
        }


        //if we need update AssetBundleManifest file in local machine
        if (m_LocalAssetBundlesIsNotEqualServerAssetBundles)
        {
            //update AssetBundleManifest file to local machine from server
            yield return StartCoroutine(DownLoadAssetBundle(serverAssetBundleManifestPath, localAssetBundleManifestPath, true));

            if (m_HasError)
            {
                yield break;
            }
        }


        localAssetBundleManifest = null;

        serverAssetBundleManifest = null;

        Resources.UnloadUnusedAssets();

        for (int i = 0; i < 3; i++)
        {
            System.GC.Collect(i);
        }

    }

    /// <summary>
    /// mark AssetBundles in local machine is different from Assetbundles in server
    /// </summary>
    private void MarkLocalAssetBundles_IsNotEqual_ServerAssetBundles_OnlyOnce()
    {
        if (m_LocalAssetBundlesIsNotEqualServerAssetBundles == false)
        {
            m_LocalAssetBundlesIsNotEqualServerAssetBundles = true;

            m_NeedDownLoadAssetBundlesTotalNum = m_NeedDownLoadAssetBundlesTotalNum + 1;
        }
    }

    /// <summary>
    /// error occor when we update AssetBundles,then what should we do
    /// </summary>
    private void ErrorHandle()
    {
        FileIOManager.DeleteDirectory(ConfigureManager.AssetBundlesLocalPath, true);
    }

    /// <summary>
    /// download AssetBundle from server to local machine 
    /// </summary>
    /// <param name="assetBundleServerPath"></param>
    /// <param name="assetBundleLocalPath"></param>
    /// <param name="needCountFile"></param>
    /// <returns></returns>
    private IEnumerator DownLoadAssetBundle(string assetBundleServerPath, string assetBundleLocalPath, bool needCountFile = false)
    {
        WWW www = new WWW(assetBundleServerPath);

        yield return www;

        if (www.error != null)
        {
            Debug.LogErrorFormat("{0} download error : {1}", assetBundleServerPath, www.error.ToString());

            m_HasError = true;

            ErrorHandle();

            yield break;
        }

        byte[] bytes = www.bytes;

        www.Dispose();

        FileIOManager.BytesConvertToFileIfFileCurrentDirectoryNotExistThenCreateDirectoryFirst(bytes, assetBundleLocalPath);

        if (needCountFile)
        {
            m_CurrentDownLoadedAssetBundlesTotalNum++;
        }

        UIShowUpdateAssetBundlesProgress.GetInstance().SetTargetDownloadedProgress(m_CurrentDownLoadedAssetBundlesTotalNum, m_NeedDownLoadAssetBundlesTotalNum);
    }
}
