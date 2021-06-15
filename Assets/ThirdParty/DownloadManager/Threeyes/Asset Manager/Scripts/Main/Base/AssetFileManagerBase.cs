using UnityEngine;
using System.Collections;
using System;
using System.IO;
using Threeyes.AssetManager.Extension;

namespace Threeyes.AssetManager
{

    /// <summary>
    /// Base class for the Component that manage the single asset that can directly get from www stream(eg: www.text, www.texture),
    /// load data from asset by the override the GetData function.
    /// </summary>
    /// <typeparam name="AssetType">Type of data that load from asset</typeparam>
    public abstract class AssetFileManagerBase<SonType, AssetType> : AssetManagerBase<SonType, AssetType>
        where SonType : AssetFileManagerBase<SonType, AssetType>
        where AssetType : class
    {

        #region Public

        /// <summary>
        /// Which directory to cache the assets
        /// </summary>
        public EBaseCacheDirectory eBaseCacheDirectory = EBaseCacheDirectory.TempDirectory;

        /// <summary>
        /// The asset path realtive to BaseCacheDirectory
        /// </summary>
        public string AssetDirectoryInCache = "Asset";

        #endregion


        #region Override

        protected sealed override string cacheDirectory
        {
            get
            {
                string path = "";
                switch (eBaseCacheDirectory)
                {
                    case EBaseCacheDirectory.TempDirectory:
                        path = Application.temporaryCachePath; break;
                    case EBaseCacheDirectory.PersistentDirectory:
                        path = Application.persistentDataPath; break;
                }

                if (!AssetDirectoryInCache.IsNullOrEnpty())
                    path = path.Combine(AssetDirectoryInCache);

                if (!Directory.Exists(path))
                    Directory.CreateDirectory(path);
                return path;
            }
        }

        protected sealed override double cacheSpaceOccupied
        {
            get
            {
                long sumLength = 0;

#if !UNITY_WEBPLAYER
                DirectoryInfo dirInfo = new DirectoryInfo(CacheDirectory);
                foreach (FileInfo fileInfo in dirInfo.GetFiles())
                {
                    sumLength += fileInfo.Length;
                }
#endif
                return Math.Round(sumLength / 1024D / 1024D, 2);//Convert B to MB
            }
        }


        protected sealed override IEnumerator _IEBaseLoad(string url, Action<WWW, bool> loadFinishCallback = null, int version = 1, bool isCache = true, Action<bool> loadStateCallback = null)
        {
            bool isInCache = _IsVersionCached(url, version);
            ELogMessage logDownloadSource = ELogMessage.LoadFromUrl;//Download source

            bool isTestFileExist = UrlToTestPathInEditor(ref url, ref logDownloadSource);

            #region Change url to Cache Directory

            if (isInCache && !isTestFileExist)
            {
                url = AssetPath.UrlToLocalPath(url, CacheDirectory);
                logDownloadSource = ELogMessage.LoadFromCache;
            }

            #endregion

            bool isLoadSuccess = true;

            #region Begin Load

            if (isInCache && loadFinishCallback == null)
            {
                DebugPrint(url, ELogMessage.ExistInCache, version);//Tell user the asset is already downloaded
            }
            else
            {
                using (WWW www = new WWW(url))
                {
                    yield return www;

                    //Load success
                    if (www.error.IsNullOrEnpty() && www.bytes.Length > 0)//Note: if connect to a public wifi that need password, it may not return error message, but it can't access the asset either.
                    {
                        DebugPrint(url, logDownloadSource, version);

                        if (loadFinishCallback != null)
                        {
                            loadFinishCallback.Excute(www, true);
                        }

                        //Save to Cache (don't save if test)
                        if ((IsCacheAsset && isCache) && !isInCache && !isTestFileExist)
                        {
                            DebugPrint(url, ELogMessage.SaveToCache, version);
                            SaveToCache(url, version, www.bytes);//Save to cache
                        }
                    }
                    //Load failed
                    else
                    {
                        isLoadSuccess = false;
                        ErrorPrint(url, www.error, ELogError.DownLoad, version);
                        loadFinishCallback.Excute(www, false);
                    }
                }
            }

            #endregion

            loadStateCallback.Excute(isLoadSuccess);//return the load state
        }

        protected sealed override bool _IsVersionCached(string url, int version)
        {
#if UNITY_WEBPLAYER
            return false;
#else
            string filePath = CacheDirectory.Combine(url.FileName());//source file path
            return File.Exists(filePath) && IsLocalVersionHigherOrEqualTo(url, version);
#endif
        }

        protected sealed override void _DeleteCache(string urlOrFileName)
        {
#if !UNITY_WEBPLAYER
            try
            {
                string assetfilePath = CacheDirectory.Combine(urlOrFileName.FileName());
                string recordFilePath = GetRecordFilePath(urlOrFileName);
                if (File.Exists(assetfilePath))
                {
                    File.Delete(assetfilePath);
                    DebugPrint(urlOrFileName, ELogMessage.DeleteFromCache, GetLocalVersion(urlOrFileName));
                }
                if (File.Exists(recordFilePath))
                {
                    File.Delete(recordFilePath);
                }
            }
            catch (System.Exception e)
            {
                Debug.LogError(e);
            }
#endif
        }

        protected sealed override void _CleanCache()
        {
#if !UNITY_WEBPLAYER
            try
            {
                DebugPrint("", ELogMessage.CleanCache, 1);
                foreach (string files in Directory.GetFiles(CacheDirectory))
                {
                    File.Delete(files);
                }
            }
            catch (System.Exception e)
            {
                Debug.LogError(e);
            }
#endif
        }


        protected virtual void Start()
        {
            NoBackupIfIphone(CacheDirectory);
        }

        #endregion


        #region Private

        void SaveToCache(string url, int version, byte[] bytes)
        {
#if !UNITY_WEBPLAYER
            try
            {
                string curTimeStamp = ((int)(System.DateTime.Now - System.TimeZone.CurrentTimeZone.ToLocalTime(new System.DateTime(1970, 1, 1))).TotalSeconds).ToString();//saved time
                string recordText = version + "\r\n" + curTimeStamp;

                string sourceFilePath = CacheDirectory.Combine(url.FileName());
                string recordFilePath = GetRecordFilePath(url);
                File.WriteAllBytes(sourceFilePath, EncryptAsset(bytes));//Save the source file
                File.WriteAllText(recordFilePath, recordText, System.Text.Encoding.UTF8);//Save the record file. the contents are version + curTimeStamp

                NoBackupIfIphone(sourceFilePath);
                NoBackupIfIphone(recordFilePath);
            }
            catch (System.Exception e)
            {
                Debug.LogError(e);
            }
#endif
        }

        /// <summary>
        /// Load asset' bytes from cache, Use by File.ReadAllBytes.
        /// (only one version of the specific asset exists in cache, so don't require version params)
        /// </summary>
        /// <param name="url"></param>
        /// <returns></returns>
        byte[] LoadFromCache(string url)
        {
#if UNITY_WEBPLAYER
            return new byte[] { };
#else
            try
            {
                return DecryptAsset(File.ReadAllBytes(CacheDirectory.Combine(url.FileName())));
            }
            catch (System.Exception e)
            {
                Debug.LogError(e);
                return new byte[] { };
            }
#endif
        }

        /// <summary>
        /// Encrypt the asset
        /// </summary>
        private byte[] EncryptAsset(byte[] bytes)
        {
            return bytes;
        }

        /// <summary>
        /// Decrypt the asset
        /// </summary>
        private byte[] DecryptAsset(byte[] bytes)
        {
            return bytes;
        }


        bool IsLocalVersionHigherOrEqualTo(string url, int version)
        {
#if !UNITY_WEBPLAYER
            string tmpRecordPath = GetRecordFilePath(url);//record file path
            if (File.Exists(tmpRecordPath))
            {
                string[] contents = File.ReadAllLines(tmpRecordPath);
                if (contents.Length > 0)
                {
                    //Check the version
                    if (contents[0].ToInt() != null)
                    {
                        int localVersion = contents[0].ToInt().Value;
                        return localVersion.CompareTo(version) >= 0;//return true if local version is greater than or equal to the server version
                    }
                }
            }
#endif
            return false;
        }

        int GetLocalVersion(string url)
        {
            int localVersion = 1;
#if !UNITY_WEBPLAYER
            string tmpRecordPath = GetRecordFilePath(url);//record file path
            if (File.Exists(tmpRecordPath))
            {
                string[] contents = File.ReadAllLines(tmpRecordPath);
                if (contents.Length > 0)
                {
                    //Check the version
                    if (contents[0].ToInt() != null)
                    {
                        localVersion = contents[0].ToInt().Value;
                    }
                }
            }
#endif
            return localVersion;
        }

        #endregion


        #region Tool

        string GetRecordFilePath(string urlOrFileName)
        {
            string recordPath = CacheDirectory.Combine("Version/");
            if (!Directory.Exists(recordPath))
                Directory.CreateDirectory(recordPath);

            return recordPath + GetRecordFileName(urlOrFileName);
        }

        /// <summary>
        /// eg: file name is A.jpg, so the record file name is A.jpg_version
        /// </summary>
        static string GetRecordFileName(string url)
        {
            return url.FileName() + recordFileExtension;
        }

        static string recordFileExtension { get { return "_version"; } }


        /// <summary>
        /// IOS: 
        /// Set the No Backup flag on the cache files to prevent them being backed up to iCloud.
        /// If you don’t set the No Backup flag, your app may be rejected when you submit it to the App Store.
        /// -> http://docs.unity3d.com/Manual/iphone-Downloadable-Content.html
        /// As a side-effect, if it was located in Caches folder, it won't be deleted by OS.
        /// </summary>
        static void NoBackupIfIphone(string path)
        {
#if UNITY_IPHONE
            try
            {
#if UNITY_5_0 || UNITY_5_1
                UnityEngine.iOS.Device.SetNoBackupFlag(path);
#else
                UnityEngine.iOS.Device.SetNoBackupFlag(path);
#endif
            }
            catch { }
#endif
        }

        #endregion

    }

    /// <summary>
    /// The base directory that can store the asset.
    /// Read follow webpage if you want to build for Ios -> 
    /// http://docs.unity3d.com/Manual/iphone-Downloadable-Content.html
    /// https://developer.apple.com/library/ios/documentation/FileManagement/Conceptual/FileSystemProgrammingGuide/FileSystemOverview/FileSystemOverview.html
    /// </summary>
    public enum EBaseCacheDirectory
    {
        /// <summary>
        /// The Directory that store temp data. 
        /// 
        /// In IOS: it is "Your Application Directory/Library/Caches", and it is regularly “cleaned out” by the OS;
        /// In Android: it is "/data/data/Your Application Bundle Identifier/cache".
        /// </summary>
        TempDirectory,

        /// <summary>
        /// The public directory that store user data, files in this location won't be erased with each update of the App.
        /// -> http://docs.unity3d.com/ScriptReference/Application-persistentDataPath.html
        /// 
        /// In IOS: it is "Your Application Directory/Documents", Use this to store user-generated content,
        /// this directory should only contain files that you may wish to expose to the user.
        /// In Android: it is "/data/data/Your Application Bundle Identifier/files".
        /// </summary>
        PersistentDirectory,
    }

}