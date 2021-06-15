
#if UNITY_EDITOR
using UnityEditor;
#endif

using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

/// <summary>
/// this class is the manager of configuring hot fixed system
/// </summary>
public class ConfigurationScriptableObject:ScriptableObject
{

    /// <summary>
    /// This folder is parent directory of the folder that stores the unencrypted AssetBundles on current platform.
    /// </summary>
    [Tooltip("This folder is parent directory of the folder that stores the unencrypted AssetBundles on current platform")]
    public  string BuildUnEncryptAssetBundlesOutputPathFolderName = "UnEncryptAssetBundlesFolder";

    /// <summary>
    /// This folder is parent directory of the folder that stores the encrypted AssetBundles on current platform.
    /// </summary>
    [Tooltip(" This folder is parent directory of the folder that stores the encrypted AssetBundles on current platform")]
    public string BuildEncryptAssetBundlesOutputPathFolderName = "EncryptAssetBundlesFolder";

    /// <summary>
    /// The folder name that stores the unencrypted AssetBundles on current platform
    /// </summary>
    public string UnEncryptAssetBundlesFolderName
    {
        get { return string.Format("{0}{1}", CurrentPlatformName, "UnEncrypt"); }
    }

    /// <summary>
    /// The folder name that stores the encrypted AssetBundles on current platform
    /// </summary>
    public string EncryptAssetBundlesFolderName
    {
        get { return string.Format("{0}{1}", CurrentPlatformName, "Encrypt"); }
    }

    /// <summary>
    /// persistent data path on current platform 
    /// </summary>
    public string AssetBundlesLocalURL
    {
        get { return Application.persistentDataPath; }
    }

    /// <summary>
    /// The path which we store our AssetBundle files 
    /// </summary>
    public string AssetBundlesLocalPath
    {
        get
        {
            if (AssetBundlesUseCipher)
            {
                return string.Format("{0}/{1}/{2}", AssetBundlesLocalURL, BuildEncryptAssetBundlesOutputPathFolderName, EncryptAssetBundlesFolderName);
            }
            else
            {
                return string.Format("{0}/{1}/{2}", AssetBundlesLocalURL, BuildUnEncryptAssetBundlesOutputPathFolderName, UnEncryptAssetBundlesFolderName);
            }

        }
    }

    /// <summary>
    /// The server url when we update our Assetbundle files
    /// </summary>
    [Tooltip("The server url when we update our Assetbundle files")]
    public string AssetBundlesServerURL = "http://localhost:8080";

    /// <summary>
    /// The Extensions AssetBundle file
    /// </summary>
    [Tooltip("The Extensions AssetBundle file")]
    public string AssetBundleExtensions = ".unity3d";

    /// <summary>
    /// Do we want to encrypt the AssetBundles
    /// </summary>
    [Tooltip(" Do we want to encrypt the AssetBundles")]
    public bool AssetBundlesUseCipher = true;

    /// <summary>
    /// The encryption key when we build encrypt AssetBundles
    /// </summary>
    [Tooltip("The encryption key when we build encrypt AssetBundles")]
    public string AssetBundleEncryptKey = "SwordMasterFramework";

    /// <summary>
    /// The initialization vector of encryption key when we build encrypt AssetBundles
    /// </summary>
    [Tooltip("The initialization vector of encryption key when we build encrypt AssetBundles")]
    public string AssetBundleIV = "SwordMaster";

    /// <summary>
    /// Encryption algorithm type of AssetBundles
    /// </summary>
     [Tooltip(" Encryption algorithm type of AssetBundles")]
    public  EnryptType AssetBundleEnryptType = EnryptType.AES;

#if UNITY_EDITOR

 
    //
    public static string AssetBundleEditorModeFlag = "AssetBundleEditorModeFlag";


    public static int AssetBundleEditorMode
    {
        get { return EditorPrefs.GetInt(AssetBundleEditorModeFlag, 0); }
    }

    /// <summary>
    /// All the resource files in this folder will generate the AssetBundle files
    /// </summary>
    public string BuildAssetBundlesSourceFolderName = "BuildAssetBundlesSourcePath";

    /// <summary>
    /// All the resource files in this path will generate the AssetBundle files
    /// </summary>
    public string BuildAssetBundlesSourceAbsolutePath
    {
        get { return string.Format("{0}/{1}", Application.dataPath, BuildAssetBundlesSourceFolderName); }
    } 


    /// <summary>
    /// The name of folder stored AssetBundle when we build unencrypt AssetBundles
    /// </summary>
    public string BuildUnEncryptAssetBundlesFolderName 
    {
        get { return string.Format("{0}{1}", EditorUserBuildSettings.activeBuildTarget.ToString(), "UnEncrypt"); }
    }


    /// <summary>
    /// The name of folder stored AssetBundle when we build encrypt AssetBundles
    /// </summary>
    public string BuildEncryptAssetBundlesFolderName
    {
        get { return string.Format("{0}{1}", EditorUserBuildSettings.activeBuildTarget.ToString(), "Encrypt");}
    }

    /// <summary>
    /// The manifest name when we build unencrypt AssetBundles
    /// </summary>
    public string BuildUnEncryptAssetBundlesManifestName
    {
        get{return BuildUnEncryptAssetBundlesFolderName;}
    }

    /// <summary>
    /// The manifest name when we build encrypt AssetBundles
    /// </summary>
    public string BuildEncryptAssetBundlesManifestName
    {
        get{return BuildEncryptAssetBundlesFolderName;}
    }

    public string BuildUnEncryptAssetBundlesOutputRelativePath
    {
        get{return string.Format("{0}/{1}", BuildUnEncryptAssetBundlesOutputPathFolderName, BuildUnEncryptAssetBundlesFolderName);}
    }

    public string BuildEncryptAssetBundlesOutputRelativePath
    {
        get{return string.Format("{0}/{1}", BuildEncryptAssetBundlesOutputPathFolderName, BuildEncryptAssetBundlesFolderName);}
    }

    /// <summary>
    /// The absolute path whicn stored unencrypted assetbundle file when we build Assetbundles
    /// </summary>
    public string BuildUnEncryptAssetBundlesOutputAbsolutePath
    {
        get{return string.Format("{0}/{1}", Application.dataPath.Substring(0, Application.dataPath.Length - 7), BuildUnEncryptAssetBundlesOutputRelativePath);}
    } 

    /// <summary>
    /// The absolute path whicn stored encrypted assetbundle file when we build Assetbundles
    /// </summary>
    public string BuildEncryptAssetBundlesOutputAbsolutePath
    {
        get{return string.Format("{0}/{1}", Application.dataPath.Substring(0, Application.dataPath.Length - 7), BuildEncryptAssetBundlesOutputRelativePath);}
    }

    /// <summary>
    /// The absolute path whicn stored unencrypted manifest file when we build Assetbundles
    /// </summary>
    public string BuildUnEncryptAssetBundleManifestAbsolutePath
    {
        get{return string.Format("{0}/{1}", BuildUnEncryptAssetBundlesOutputAbsolutePath, BuildUnEncryptAssetBundlesManifestName);}
    }


    /// <summary>
    /// The absolute path which stored encrypted manifest file when we build Assetbundles
    /// </summary>
    public string BuildEncryptAssetBundleManifestAbsolutePath
    {
        get{return string.Format("{0}/{1}", BuildEncryptAssetBundlesOutputAbsolutePath, BuildEncryptAssetBundlesManifestName);}
    } 

    /// <summary>
    /// The server absolute path when we update our Assetbundle files
    /// </summary>
    public string AssetBundlesServerPath
    {
        get
        {
            int assetbundleEditorMode = EditorPrefs.GetInt(AssetBundleEditorModeFlag);

            if (assetbundleEditorMode == 1)
            {
                string assetBundleDebugModeServerPath = null;

                if (AssetBundlesUseCipher)
                {
                    assetBundleDebugModeServerPath = string.Format("{0}{1}", "file:///", BuildEncryptAssetBundlesOutputAbsolutePath);
                }
                else
                {
                    assetBundleDebugModeServerPath = string.Format("{0}{1}", "file:///", BuildUnEncryptAssetBundlesOutputAbsolutePath);
                }

                return assetBundleDebugModeServerPath;
            }
            else
            {
                string assetBundleServerPath = null;

                if (AssetBundlesUseCipher)
                {
                    assetBundleServerPath = string.Format("{0}/{1}/{2}", AssetBundlesServerURL, BuildEncryptAssetBundlesOutputPathFolderName, EncryptAssetBundlesFolderName);
                }
                else
                {
                    assetBundleServerPath = string.Format("{0}/{1}/{2}", AssetBundlesServerURL, BuildUnEncryptAssetBundlesOutputPathFolderName, UnEncryptAssetBundlesFolderName);
                }

                return assetBundleServerPath;
            }
        }
    }

    /// <summary>
    /// the platform name the game is running on
    /// but when we in unity edtor,CurrentPlatformName is stand for currently active build target platorm,
    /// </summary>
    public string CurrentPlatformName
    {
        get { return EditorUserBuildSettings.activeBuildTarget.ToString(); }
    }

#else
    public  string AssetBundlesServerPath
    {
        get
        {
            string assetBundleServerPath = null;

            if (AssetBundlesUseCipher)
            {
                assetBundleServerPath = string.Format("{0}/{1}/{2}", AssetBundlesServerURL, BuildEncryptAssetBundlesOutputPathFolderName, EncryptAssetBundlesFolderName);
            }
            else
            {
                assetBundleServerPath = string.Format("{0}/{1}/{2}", AssetBundlesServerURL, BuildUnEncryptAssetBundlesOutputPathFolderName, UnEncryptAssetBundlesFolderName);
            }

            return assetBundleServerPath;
        }
    }

    public  string CurrentPlatformName
    {
        get { return Application.platform.ToString(); }
    }

    
#endif




}
