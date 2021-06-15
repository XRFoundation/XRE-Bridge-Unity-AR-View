
#if UNITY_EDITOR
using UnityEditor;
#endif

using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

/// <summary>
/// this class is the manager of configuring hot fixed system
/// </summary>
public class ConfigureManager
{
    public const string ConfigurationFileName = "ConfigurationFile";

    public static ConfigurationScriptableObject configuration;

    public static ConfigurationScriptableObject Configuration
    {
        get
        {
            if (configuration == null)
            {
                configuration = Resources.Load(ConfigurationFileName) as ConfigurationScriptableObject;

                #if UNITY_EDITOR

                if (configuration == null)
                {
                    ConfigurationScriptableObject configurationFile = ScriptableObject.CreateInstance<ConfigurationScriptableObject>();

                    UnityEditor.AssetDatabase.CreateAsset(configurationFile, string.Format("{0}{1}{2}", "Assets/NotBuildAssetBundlesAssets/Resources/", ConfigurationFileName, ".asset"));

                    configuration = Resources.Load(ConfigurationFileName) as ConfigurationScriptableObject;
                }
               
                #else

                 Debug.LogError("The configuration file is missing !");

                #endif

            }

            return configuration;
        }
    }

    /// <summary>
    /// This folder is parent directory of the folder that stores the unencrypted AssetBundles on current platform.
    /// </summary>
    public static string BuildUnEncryptAssetBundlesOutputPathFolderName
    {
        get { return Configuration.BuildUnEncryptAssetBundlesOutputPathFolderName; }
    }

    /// <summary>
    /// This folder is parent directory of the folder that stores the encrypted AssetBundles on current platform.
    /// </summary>
    public static string BuildEncryptAssetBundlesOutputPathFolderName
    {
        get { return Configuration.BuildEncryptAssetBundlesOutputPathFolderName; }
    }

    /// <summary>
    /// The folder name that stores the unencrypted AssetBundles on current platform
    /// </summary>
    public static string UnEncryptAssetBundlesFolderName
    {
        get { return Configuration.UnEncryptAssetBundlesFolderName; }
    }

    /// <summary>
    /// The folder name that stores the encrypted AssetBundles on current platform
    /// </summary>
    public static string EncryptAssetBundlesFolderName
    {
        get { return Configuration.EncryptAssetBundlesFolderName; }
    }

    /// <summary>
    /// persistent data path on current platform 
    /// </summary>
    public static string AssetBundlesLocalURL
    {
        get { return Configuration.AssetBundlesLocalURL; }
    }

    /// <summary>
    /// The path which we store our AssetBundle files 
    /// </summary>
    public static string AssetBundlesLocalPath
    {
        get { return Configuration.AssetBundlesLocalPath; }
    }

    /// <summary>
    /// The server url when we update our Assetbundle files
    /// </summary>
    public static string AssetBundlesServerURL
    {
        get { return Configuration.AssetBundlesServerURL; }
    }

    /// <summary>
    /// The Extensions AssetBundle file
    /// </summary>
    public static string AssetBundleExtensions
    {
        get { return Configuration.AssetBundleExtensions; }
    }

    /// <summary>
    /// Do we want to encrypt the AssetBundles
    /// </summary>
    public static bool AssetBundlesUseCipher
    {
        get { return Configuration.AssetBundlesUseCipher; }
    }

    /// <summary>
    /// The encryption key when we build encrypt AssetBundles
    /// </summary>
    public static string AssetBundleEncryptKey
    {
        get { return Configuration.AssetBundleEncryptKey; }
    }

    /// <summary>
    /// The initialization vector of encryption key when we build encrypt AssetBundles
    /// </summary>
    public static string AssetBundleIV
    {
        get { return Configuration.AssetBundleIV; }
    }

    /// <summary>
    /// Encryption algorithm type of AssetBundles
    /// </summary>
    public static EnryptType AssetBundleEnryptType
    {
        get { return Configuration.AssetBundleEnryptType; }
    }

#if UNITY_EDITOR
    //
    public const string NoAssetBundleModeToggleOnMenuPosition = "AssetBundles/AssetBundleMode/NoAssetBundleMode";
    //
    public const string AssetBundleDebugModeToggleOnMenuPosition = "AssetBundles/AssetBundleMode/AssetBundleDebugMode";
    //
    public const string AssetBundleCompleteModeToggleOnMenuPosition = "AssetBundles/AssetBundleMode/AssetBundleCompleteMode";
    
    //
    public static string AssetBundleEditorModeFlag = "AssetBundleEditorModeFlag";


    [MenuItem(NoAssetBundleModeToggleOnMenuPosition)]
    public static void SelectNoBundleMode()
    {
        EditorPrefs.SetInt(AssetBundleEditorModeFlag, 0);

        ShowAssetBundleInWhichMode();
    }

    [MenuItem(NoAssetBundleModeToggleOnMenuPosition, true)]
    public static bool SelectNoBundleModeValidate()
    {
        if (EditorPrefs.HasKey(AssetBundleEditorModeFlag) == false)
        {
            EditorPrefs.SetInt(AssetBundleEditorModeFlag, 0);
        }

        ShowAssetBundleInWhichMode();

        return true;
    }

    [MenuItem(AssetBundleDebugModeToggleOnMenuPosition)]
    public static void SelectBundleDebugMode()
    {
        EditorPrefs.SetInt(AssetBundleEditorModeFlag, 1);

        ShowAssetBundleInWhichMode();
    }

    [MenuItem(AssetBundleCompleteModeToggleOnMenuPosition)]
    public static void SelectBundleMode()
    {
        EditorPrefs.SetInt(AssetBundleEditorModeFlag, 2);

        ShowAssetBundleInWhichMode();
    }

    // [MenuItem("AssetBundles/Create Configuration")]
    //public static void CreateConfiguration()
    //{ 
    //     ConfigurationScriptableObject configurationFile = ScriptableObject.CreateInstance<ConfigurationScriptableObject>();

    //     UnityEditor.AssetDatabase.CreateAsset(configurationFile, string.Format("{0}{1}{2}", "Assets/NotBuildAssetBundlesAssets/Resources/", ConfigurationFileName, ".asset"));
    //}

    private static void ShowAssetBundleInWhichMode()
    {
        int assetBundleEditorMode = EditorPrefs.GetInt(AssetBundleEditorModeFlag);

        Menu.SetChecked(NoAssetBundleModeToggleOnMenuPosition, assetBundleEditorMode == 0);

        Menu.SetChecked(AssetBundleDebugModeToggleOnMenuPosition, assetBundleEditorMode == 1);

        Menu.SetChecked(AssetBundleCompleteModeToggleOnMenuPosition, assetBundleEditorMode == 2);
    }

    public static int AssetBundleEditorMode
    {
        get{ return EditorPrefs.GetInt(AssetBundleEditorModeFlag,0);}
    }


    /// <summary>
    /// All the resource files in this folder will generate the AssetBundle files
    /// </summary>
    public static string BuildAssetBundlesSourceFolderName
    {
        get { return Configuration.BuildAssetBundlesSourceFolderName; }
    }

    /// <summary>
    /// All the resource files in this path will generate the AssetBundle files
    /// </summary>
    public static string BuildAssetBundlesSourceAbsolutePath
    {
        get { return Configuration.BuildAssetBundlesSourceAbsolutePath; }
    }


    /// <summary>
    /// The name of folder stored AssetBundle when we build unencrypt AssetBundles
    /// </summary>
    public static string BuildUnEncryptAssetBundlesFolderName
    {
        get { return Configuration.BuildUnEncryptAssetBundlesFolderName; }
    }


    /// <summary>
    /// The name of folder stored AssetBundle when we build encrypt AssetBundles
    /// </summary>
    public static string BuildEncryptAssetBundlesFolderName
    {
        get { return Configuration.BuildEncryptAssetBundlesFolderName; }
    }

    /// <summary>
    /// The manifest name when we build unencrypt AssetBundles
    /// </summary>
    public static string BuildUnEncryptAssetBundlesManifestName
    {
        get { return Configuration.BuildUnEncryptAssetBundlesManifestName; }
    }

    /// <summary>
    /// The manifest name when we build encrypt AssetBundles
    /// </summary>
    public static string BuildEncryptAssetBundlesManifestName
    {
        get { return Configuration.BuildEncryptAssetBundlesManifestName; }
    }

    public static string BuildUnEncryptAssetBundlesOutputRelativePath
    {
        get { return Configuration.BuildUnEncryptAssetBundlesOutputRelativePath; }
    }

    public static string BuildEncryptAssetBundlesOutputRelativePath
    {
        get { return Configuration.BuildEncryptAssetBundlesOutputRelativePath; }
    }

    /// <summary>
    /// The absolute path whicn stored unencrypted assetbundle file when we build Assetbundles
    /// </summary>
    public static string BuildUnEncryptAssetBundlesOutputAbsolutePath
    {
        get { return Configuration.BuildUnEncryptAssetBundlesOutputAbsolutePath; }
    }

    /// <summary>
    /// The absolute path whicn stored encrypted assetbundle file when we build Assetbundles
    /// </summary>
    public static string BuildEncryptAssetBundlesOutputAbsolutePath
    {
        get { return Configuration.BuildEncryptAssetBundlesOutputAbsolutePath; }
    }

    /// <summary>
    /// The absolute path whicn stored unencrypted manifest file when we build Assetbundles
    /// </summary>
    public static string BuildUnEncryptAssetBundleManifestAbsolutePath
    {
        get { return Configuration.BuildUnEncryptAssetBundleManifestAbsolutePath; }
    }


    /// <summary>
    /// The absolute path which stored encrypted manifest file when we build Assetbundles
    /// </summary>
    public static string BuildEncryptAssetBundleManifestAbsolutePath
    {
        get { return Configuration.BuildEncryptAssetBundleManifestAbsolutePath; }
    }
    
    /// <summary>
    /// The server absolute path when we update our Assetbundle files
    /// </summary>
    public static string AssetBundlesServerPath
    {
        get { return Configuration.AssetBundlesServerPath; }
    }

    /// <summary>
    /// the platform name the game is running on
    /// but when we in unity edtor,CurrentPlatformName is stand for currently active build target platorm,
    /// </summary>
    public static string CurrentPlatformName
    {
        get { return Configuration.CurrentPlatformName; }
    }

    #else

    public static string AssetBundlesServerPath
    {
        get { return Configuration.AssetBundlesServerPath; }
    }
    

#endif

  



}
