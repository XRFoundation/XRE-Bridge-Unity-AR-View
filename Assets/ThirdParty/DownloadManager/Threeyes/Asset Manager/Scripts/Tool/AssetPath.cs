using UnityEngine;
using Threeyes.AssetManager.Extension;

namespace Threeyes.AssetManager
{

    /// <summary>
    /// Get asset local path base on platform, The path with protocol is only use for WWW. 
    /// </summary>
    public static class AssetPath
    {

        /// <summary>
        /// Get asset path, the asset is locate in StreamingAssetPath
        /// </summary>
        /// <param name="relativeFilePath">Relative to "StreamingAsset" Folder which store the read-only Data</param>
        /// <returns></returns>
        public static string InStreamingAssets(string relativeFilePath)
        {
            return AddProtocol(Application.streamingAssetsPath.Combine(relativeFilePath));
        }


        /// <summary>
        /// Get asset path, the asset is locate in persistentDataPath
        /// </summary>
        /// <param name="relativeFilePath">Relative to the Folder which store the read-write persistent Data</param>
        /// <returns></returns>
        public static string InPersistent(string relativeFilePath)
        {
            return AddProtocol(Application.persistentDataPath.Combine(relativeFilePath));
        }


        /// <summary>
        /// Convert url to local path
        /// </summary>
        /// <returns></returns>
        public static string UrlToLocalPath(string url, string directoryPath, bool isAddProtocol = true)
        {
            string localPath = directoryPath.Combine(url.FileName());
            if (isAddProtocol)
                localPath = AddProtocol(localPath);
            return localPath;
        }


        /// <summary>
        /// Add protocol in front of the path 
        /// </summary>
        /// <param name="directoryPath"></param>
        /// <returns></returns>
        public static string AddProtocol(string directoryPath)
        {
            switch (Application.platform)
            {
                //Android: 
                //only Application.streamingAssetsPath has protocol "jar:file://", because the folder is compressed into the .apk file.
                // -> file:///D:/Unity/Data/Documentation/html/en/Manual/StreamingAssets.html
                //the other's  has same protocol "File://" as IOS
                case RuntimePlatform.Android:
                    if (!directoryPath.StartsWith("jar:file://"))
                        directoryPath = "file://" + directoryPath;
                    break;

                // When using file protocol on Windows and Windows Store Apps for accessing local files, you have to specify file:///__ (with three slashes).
                case RuntimePlatform.WindowsEditor:
                case RuntimePlatform.WindowsPlayer:
                    directoryPath = "file:///" + directoryPath; break;

                case RuntimePlatform.IPhonePlayer:
                    directoryPath = "file://" + directoryPath; break;

                default:
                    directoryPath = "file://" + directoryPath; break;
            }
            return directoryPath;
        }

    }
}