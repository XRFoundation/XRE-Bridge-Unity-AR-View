using UnityEngine;
using System;
using System.IO;
using System.Collections;
using Threeyes.AssetManager.Extension;

namespace Threeyes.AssetManager
{

    /// <summary>
    /// Base class for all asset manager Component.
    /// </summary>
    /// <typeparam name="SonType">Type of the class that actually manage assets, use this generic type to create a singleton instance component, so that each instance has it's own static property and method</typeparam>
    public abstract class AssetManagerBase<SonType, AssetType> : MonoBehaviour
        where SonType : AssetManagerBase<SonType, AssetType>
        where AssetType : class
    {

        #region Public

        /// <summary>
        /// Cache asset (global setting)
        /// </summary>
        public bool IsCacheAsset = true;

        /// <summary>
        /// Cache directory path. (eg: C:/Temp/Asset)
        /// </summary>
        public string CacheDirectory { get { return cacheDirectory; } }

        /// <summary>
        /// Total cache used space (MB)
        /// </summary>
        public double CacheSpaceOccupied { get { return cacheSpaceOccupied; } }


        /// <summary>
        /// Test asset (Load asset from Test Directory if they exists, otherwise load it from url as usual) 
        /// </summary>
        public bool IsTestAsset = false;

        /// <summary>
        /// Test directory path, place the testing asset here. (eg: E;/Test)
        /// </summary>
        public string TestDirectory = "";


        /// <summary>
        /// Show the Log message
        /// </summary>
        public bool IsDebug = false;


        /// <summary>
        /// Singleton
        /// </summary>
        public static SonType Instance
        {
            get
            {
                if (instance == null)
                    instance = FindOrCreateInstance<SonType>();
                return instance;
            }
        }
        private static SonType instance = null;



        /// <summary>
        /// Download Asset (auto start a coroutine)
        /// </summary>
        /// <param name="downloadStateCallback">Return whether download success after download finish</param>
        public static void Download(string url, Action<bool> downloadStateCallback = null, int version = 1)
        {
            Instance.StartCoroutine(IEDownload(url, downloadStateCallback, version));
        }

        /// <summary>
        /// Download Asset (start the coroutine by yourself -> http://docs.unity3d.com/Manual/Coroutines.html)
        /// </summary>
        /// <param name="downloadStateCallback">Return whether download success after download finish</param>
        /// <returns></returns>
        public static IEnumerator IEDownload(string url, Action<bool> downloadStateCallback = null, int version = 1)
        {
            return Instance._IEBaseLoad(url, version: version, loadStateCallback: downloadStateCallback);
        }


        /// <summary>
        /// Load Asset then return the specific data
        /// </summary>
        /// <param name="saveDataCallback">Return the data after load finish</param>
        /// <param name="isCache">Is cache the asset after download?</param>
        public static void Load(string url, Action<AssetType> saveDataCallback = null, int version = 1, bool isCache = true)
        {
            Instance.StartCoroutine(IELoad(url, saveDataCallback, version, isCache));
        }

        /// <summary>
        /// Load Asset then return the specific data
        /// </summary>
        /// <param name="saveDataCallback">Return the data after load finish</param>
        /// <param name="isCache">Is cache the asset after download?</param>
        /// <returns></returns>
        public static IEnumerator IELoad(string url, Action<AssetType> saveDataCallback = null, int version = 1, bool isCache = true)
        {
            return Instance._IEBaseLoad(url, (www, isLoadSuccess) => Instance.GetDataAndSave(www, isLoadSuccess, saveDataCallback), version, isCache);
        }


        /// <summary>
        /// Is the same or higher version of the asset cached
        /// </summary>
        public static bool IsVersionCached(string urlOrFileName, int version)
        {
            return Instance._IsVersionCached(urlOrFileName, version);
        }

        /// <summary>
        /// Delete the specific asset from cache
        /// </summary>
        /// <param name="urlOrFileName"></param>
        public static void DeleteCache(string urlOrFileName)
        {
            Instance._DeleteCache(urlOrFileName);
        }

        /// <summary>
        /// Delete all cached assets
        /// </summary>
        public static void CleanCache()
        {
            Instance._CleanCache();
        }

        #endregion


        #region Override

        protected abstract string cacheDirectory { get; }

        protected abstract double cacheSpaceOccupied { get; }


        /// <summary>
        /// The base load and cache function
        /// </summary>
        /// <param name="url"></param>
        /// <param name="loadFinishCallback">callback with www parmas after load finish. Check WWWTool.IsLoadSuccess(www) to see if load success</param>
        /// <param name="version"></param>
        /// <param name="isCache"></param>
        /// <param name="loadStateCallback"></param>
        /// <returns></returns>
        protected abstract IEnumerator _IEBaseLoad(string url, Action<WWW, bool> loadFinishCallback = null, int version = 1, bool isCache = true, Action<bool> loadStateCallback = null);

        /// <summary>
        /// Get data from www and callback the Del.
        /// </summary>
        protected virtual void GetDataAndSave(WWW www, bool isLoadSuccess, Action<AssetType> saveDataCallback) { Debug.LogWarning("Not override yet!"); }

        protected abstract bool _IsVersionCached(string url, int version);

        protected abstract void _DeleteCache(string urlOrFileName);

        protected abstract void _CleanCache();


        #endregion


        #region Tool

        /// <summary>
        /// Find or create an instance component
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        static T FindOrCreateInstance<T>() where T : Component
        {
            T component = null;

            //Find Instance in Active GameObject
            T componentInScene = GameObject.FindObjectOfType<T>();
            if (componentInScene != null)
            {
                component = componentInScene;
                //Don't set DontDestroyOnLoad
            }
            //Create Instance if not found
            else
            {
                GameObject go = GameObject.Find("_AssetManager");
                if (go == null)
                {
                    go = new GameObject("_AssetManager");
                    DontDestroyOnLoad(go);
                }

                component = go.GetComponent<T>();
                if (component == null)
                    component = go.AddComponent<T>();
            }

            return component;
        }


        /// <summary>
        /// Change Asset's Url to local Path in Test Directory (In Editor)
        /// </summary>
        /// <param name="url">change this if in editor and the file exists</param>
        /// <param name="logDownloadSoucre">change this if in editor and the file exists</param>
        /// <returns>Is the test asset exist</returns>
        protected bool UrlToTestPathInEditor(ref string url, ref ELogMessage logDownloadSoucre)
        {
            bool isTestAssetExist = false;
            if (IsTestAsset && (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.OSXEditor))
            {
                if (File.Exists(AssetPath.UrlToLocalPath(url, TestDirectory, false)))//File.Exist don't recognize  protocol
                {
                    url = AssetPath.UrlToLocalPath(url, TestDirectory);

                    isTestAssetExist = true;
                    logDownloadSoucre = ELogMessage.LoadFromTestFolder;
                }
            }
            return isTestAssetExist;
        }

        #endregion


        #region Debug

        /// <summary>
        /// Use this to show the asset type in Console. (eg: Assetbundle, Text, Texture)
        /// </summary>
        protected virtual string debugAssetTypeName { get { return ""; } }

        string GetAssetInfo(string url, int version)
        {
            return debugAssetTypeName + "  <b>" + url.FileName() + " " + "</b>  ";//don't display the version, because it may load the newer version
        }


        protected enum ELogMessage
        {
            ExistInCache,
            SaveToCache,
            LoadFromCache,
            LoadFromUrl,
            LoadFromTestFolder,
            Loading,

            DeleteFromCache,
            CleanCache,
        }

        protected void DebugPrint(string url, ELogMessage Log, int version)
        {
            if (IsDebug)
            {
                string message = "";

                string assetInfo = GetAssetInfo(url, version);
                string cacheFilePath = CacheDirectory.Combine(url.FileName());
                switch (Log)
                {
                    case ELogMessage.LoadFromCache:
                        message = "Load " + assetInfo + "From Cache:\n" + cacheFilePath; break;
                    case ELogMessage.SaveToCache:
                        message = "Save " + assetInfo + "to Cache:\n" + cacheFilePath; break;
                    case ELogMessage.ExistInCache:
                        message = assetInfo + "Exist in Cache:\n" + cacheFilePath; break;
                    case ELogMessage.DeleteFromCache:
                        message = "Delete " + assetInfo + "From Cache:\n" + cacheFilePath; break;
                    case ELogMessage.CleanCache:
                        message = "Clean All " + debugAssetTypeName + " Cache at:\n" + CacheDirectory; break;

                    case ELogMessage.LoadFromTestFolder:
                        message = "Load " + assetInfo + "From Test Folder:\n" + url; break;

                    case ELogMessage.LoadFromUrl:
                        message = "Load " + assetInfo + "From Url:\n" + url; break;
                    case ELogMessage.Loading:
                        message = assetInfo + "is Loading, Wait..."; break;
                }

                if (!string.IsNullOrEmpty(message))
                    Debug.Log(message);
            }
        }


        protected enum ELogError
        {
            DownLoad,
        }

        protected void ErrorPrint(string url, string errorMessage, ELogError logErrorType, int version)
        {
            switch (logErrorType)
            {
                case ELogError.DownLoad:
                    Debug.LogError("Can't DownLoad " + GetAssetInfo(url, version) + "From Url:\n" + url + "\nError: " + errorMessage); break;
            }
        }

        #endregion

    }
}