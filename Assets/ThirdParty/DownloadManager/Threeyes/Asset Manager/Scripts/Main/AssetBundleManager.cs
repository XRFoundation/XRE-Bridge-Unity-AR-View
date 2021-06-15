using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using Threeyes.AssetManager.Extension;

namespace Threeyes.AssetManager
{

    /// <summary>
    /// AssetBundle
    /// </summary>
    public class AssetBundleManager : AssetManagerBase<AssetBundleManager, AssetBundle>
    {

        #region Override

        protected override string cacheDirectory
        {
            //IOS:The downloaded asset bundle files are stored in the "Library/UnityCache" folder sandbox and have the No Backup flag set on them. 
            get { return "Unity Web Cache Folder"; }
        }

        protected override double cacheSpaceOccupied
        {
            get { return Math.Round(Caching.spaceOccupied / 1024D / 1024D, 2); }
        }

        protected override IEnumerator _IEBaseLoad(string url, Action<WWW, bool> loadFinishCallback = null, int version = 1, bool isCache = true, Action<bool> loadStateCallback = null)
        {
            #region If the same assetBundle is loading, it will wait till it's done

            while (LoadingAssetBundle.IsLoading(url, version))
            {
                DebugPrint(url, ELogMessage.Loading, version);
                yield return null;
            }

            #endregion

            LoadingAssetBundle loadAB = new LoadingAssetBundle(url, version);
            loadAB.Record();


            bool isInCache = _IsVersionCached(url, version);
            ELogMessage logDownloadSource = isInCache ? ELogMessage.LoadFromCache : ELogMessage.LoadFromUrl;

            bool isTestFileExist = UrlToTestPathInEditor(ref url, ref logDownloadSource);


            bool isLoadSuccess = true;

            #region Begin Load

            if (isInCache && loadFinishCallback == null)
            {
                DebugPrint(url, ELogMessage.ExistInCache, version);//Tell user the asset is already downloaded
                yield return null;
            }
            else
            {
                using (WWW www = ((IsCacheAsset && isCache) && !isTestFileExist) ? WWW.LoadFromCacheOrDownload(url, version) : new WWW(url))
                {
                    yield return www;

                    //Load success
                    if (www.error.IsNullOrEnpty())//AssetBundle can't check bytes, because it will casue error.
                    {
                        DebugPrint(url, logDownloadSource, version);
                        if (loadFinishCallback != null)
                        {
                            loadFinishCallback.Excute(www, true);
                            www.assetBundle.Unload(false);//Unload but don't release reference
                        }

                        //Save to Cache (don't save if test)
                        if ((IsCacheAsset && isCache) && !isInCache && !isTestFileExist)
                        {
                            DebugPrint(url, ELogMessage.SaveToCache, version);
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

            loadAB.RemoveFromRecord();

            #endregion

            loadStateCallback.Excute(isLoadSuccess);
        }

        protected override void GetDataAndSave(WWW www, bool isLoadSuccess, Action<AssetBundle> saveCallback)
        {
            if (isLoadSuccess)
                saveCallback(www.assetBundle);
        }


        protected override bool _IsVersionCached(string url, int version)
        {
            return Caching.IsVersionCached(url, version);
        }

        protected override void _DeleteCache(string urlOrFileName)
        {
            Debug.LogWarning("Unity Don't support delete the specific assetBundle in newer verion");
        }

        protected override void _CleanCache()
        {
            DebugPrint("", ELogMessage.CleanCache, 1);//the version is useless
#if Unity_4
            Caching.CleanCache();
#else
            Caching.ClearCache();
#endif
        }

        protected override string debugAssetTypeName { get { return "AssetBundle"; } }

        #endregion

        /// <summary>
        /// Record the loading AssetBundle, make sure a single instance of a particular AssetBundle is loading.
        /// 
        /// It can avoid the Error: "Cannot load cached AssetBundle. A file of the same name is already loaded from another AssetBundle."
        /// Before Unity 5 all bundles would finish loading before any of the bundles would be unloaded. So calling AssetBundle.
        /// Unload function while some of the bundles are still being loaded will block the execution of the rest of the code until all bundles are loaded. 
        /// This will add a performance hiccup. This has been reworked in Unity 5.
        /// -> http://docs.unity3d.com/Manual/keepingtrackofloadedassetbundles.html
        /// </summary>
        class LoadingAssetBundle
        {
            /// <summary>
            /// 读取中的AssetBundle(加密的）
            /// </summary>
            public static List<LoadingAssetBundle> listLoadingAB = new List<LoadingAssetBundle>();


            public string url;
            public int version;
            public LoadingAssetBundle(string url, int version)
            {
                this.url = url;
                this.version = version;
            }


            /// <summary>
            /// 记录
            /// </summary>
            public void Record()
            {
                listLoadingAB.Add(this);
            }

            /// <summary>
            /// 从记录中移除
            /// </summary>
            public void RemoveFromRecord()
            {
                listLoadingAB.Remove(this);
            }

            public static bool IsLoading(string url, int version)
            {
                return listLoadingAB.Find(ab => ((ab.url == url) && (ab.version == version))) != null;
            }

            public static void Clear()
            {
                listLoadingAB.Clear();
            }
        };

    }
}