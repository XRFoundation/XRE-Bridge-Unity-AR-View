using UnityEngine;
using UnityEditor;
using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;

/// <summary>  
/// build all the files to Assetbundles from BuildAssetBundlesSourcePath to BuildAssetBundlesOutputPath
/// </summary>  
public class BuildAssetBundlesScript : Editor
{
    /// <summary>
    /// build unencrypted AssetBundles function
    /// </summary>
    [MenuItem("AssetBundles/Build AssetBundles/Build UnEncrypt AssetBundles")]
    public static void BuildUnEncryptAssetBundles()
    {
        string buildAssetBundlesSourceAbsolutePath = ConfigureManager.BuildAssetBundlesSourceAbsolutePath;

        string buildUnEncryptAssetBundlesOutputRelativePath = ConfigureManager.BuildUnEncryptAssetBundlesOutputRelativePath;

        string buildUnEncryptAssetBundlesOutputAbsolutePath = ConfigureManager.BuildUnEncryptAssetBundlesOutputAbsolutePath;

        string buildUnEncryptAssetBundleManifestAbsolutePath = ConfigureManager.BuildUnEncryptAssetBundleManifestAbsolutePath;

        ClearUnityConsole();

        ClearAllAssetBundleNames();

        SetEachFileInThisFolderAssetBundleName(buildAssetBundlesSourceAbsolutePath);


        if (Directory.Exists(buildUnEncryptAssetBundlesOutputAbsolutePath) == false)
        {
            Directory.CreateDirectory(buildUnEncryptAssetBundlesOutputAbsolutePath);
        }



        byte[] oldAssetBundleManifestBytes = null;

        AssetBundle oldAssetBundle = null;

        AssetBundleManifest oldAssetBundleManifest = null;


        try
        {
            
            oldAssetBundleManifestBytes = FileIOManager.FileConvertToBytes(buildUnEncryptAssetBundleManifestAbsolutePath);

            oldAssetBundle = AssetBundle.LoadFromMemory(oldAssetBundleManifestBytes);

            oldAssetBundleManifest = (AssetBundleManifest)oldAssetBundle.LoadAsset("AssetBundleManifest");

            oldAssetBundle.Unload(false);

        }
        catch(Exception exception) 
        {
            Debug.LogWarning(exception.ToString());

            Debug.LogWarning("Don't worry,maybe first build assetBundles");
        }


        //Build AssetBundles
        BuildPipeline.BuildAssetBundles(buildUnEncryptAssetBundlesOutputRelativePath, BuildAssetBundleOptions.None, EditorUserBuildSettings.activeBuildTarget);


        
        byte[] newAssetBundleManifestBytes = FileIOManager.FileConvertToBytes(buildUnEncryptAssetBundleManifestAbsolutePath);

        AssetBundle newAssetBundle = AssetBundle.LoadFromMemory(newAssetBundleManifestBytes);

        AssetBundleManifest newAssetBundleManifest = (AssetBundleManifest)newAssetBundle.LoadAsset("AssetBundleManifest");

        newAssetBundle.Unload(false);


        
        DeleteAssetBundlesIsNotInCurrentAssetBundleManifest(oldAssetBundleManifest, newAssetBundleManifest, buildUnEncryptAssetBundlesOutputAbsolutePath);


       
        oldAssetBundleManifest = null;

        newAssetBundleManifest = null;

        Resources.UnloadUnusedAssets();

        for (int i = 0; i < 3; i++)
        {
            System.GC.Collect(i);
        }

       
        AssetDatabase.Refresh();

        Debug.Log("Build UnEncrypt AssetBundle Complete");
    }

    /// <summary>
    /// build encrypted AssetBundles function
    /// </summary>
    [MenuItem("AssetBundles/Build AssetBundles/Build Encrypt AssetBundles")]
    public static void BuildEncryptAssetBundles()
    {
        string buildAssetBundlesSourceAbsolutePath = ConfigureManager.BuildAssetBundlesSourceAbsolutePath;

        string buildEncryptAssetBundlesOutputRelativePath = ConfigureManager.BuildEncryptAssetBundlesOutputRelativePath;

        string buildEncryptAssetBundlesOutputAbsolutePath = ConfigureManager.BuildEncryptAssetBundlesOutputAbsolutePath;

        ClearUnityConsole();

        ClearAllAssetBundleNames();

        SetEachFileInThisFolderAssetBundleName(buildAssetBundlesSourceAbsolutePath);


        if (Directory.Exists(buildEncryptAssetBundlesOutputAbsolutePath))
        {
            Directory.Delete(buildEncryptAssetBundlesOutputAbsolutePath, true);
        }

        Directory.CreateDirectory(buildEncryptAssetBundlesOutputAbsolutePath);

        BuildPipeline.BuildAssetBundles(buildEncryptAssetBundlesOutputRelativePath, BuildAssetBundleOptions.None, EditorUserBuildSettings.activeBuildTarget);

        DeleteEachAssetBundle_ManifestFileInThisFolder(buildEncryptAssetBundlesOutputAbsolutePath);

        EncryptEachFileInThisFolder(buildEncryptAssetBundlesOutputAbsolutePath);

        AssetDatabase.Refresh();

        Debug.Log("Build Encrypt AssetBundle Complete");
    }

    /// <summary>
    /// clear all the information in the console
    /// </summary>
    private static void ClearUnityConsole()
    {
#if UNITY_2017_1_OR_NEWER || UNITY_2018_1_OR_NEWER
        System.Type logEntries = System.Type.GetType("UnityEditor.LogEntries,UnityEditor.dll");
#else
        System.Type logEntries = System.Type.GetType("UnityEditorInternal.LogEntries,UnityEditor.dll");
#endif

        

        System.Reflection.MethodInfo clearMethod = logEntries.GetMethod("Clear", System.Reflection.BindingFlags.Static | System.Reflection.BindingFlags.Public);

        clearMethod.Invoke(null, null);
    }

    /// <summary>  
    /// clear Assetbundle name of all files 
    /// </summary>  
    private static void ClearAllAssetBundleNames()
    {
        string[] allAssetBundleNames = AssetDatabase.GetAllAssetBundleNames();

        for (int i = 0; i < allAssetBundleNames.Length; i++)
        {
            AssetDatabase.RemoveAssetBundleName(allAssetBundleNames[i], true);
        }
    }

    /// <summary>
    /// set Assetbundle name for every file in this folder
    /// </summary>
    private static void SetEachFileInThisFolderAssetBundleName(string folderPath)
    {
        DirectoryInfo directoryInfo = new DirectoryInfo(folderPath);

        FileSystemInfo[] fileSystemInfo = directoryInfo.GetFileSystemInfos();

        int fileSystemInfoLength = fileSystemInfo.Length;

        for (int i = 0; i < fileSystemInfoLength; i++)
        {
            if (fileSystemInfo[i] is DirectoryInfo)
            {
                SetEachFileInThisFolderAssetBundleName(fileSystemInfo[i].FullName);
            }
            else
            {
                if (!fileSystemInfo[i].Name.EndsWith(".meta"))
                {
                    SetFileAssetBundleName(fileSystemInfo[i].FullName);
                }
            }
        }
    }

    /// <summary>
    /// encrypt each Assetbundles in this folder
    /// </summary>
    private static void EncryptEachFileInThisFolder(string folderPath)
    {
        DirectoryInfo directoryInfo = new DirectoryInfo(folderPath);

        FileSystemInfo[] fileSystemInfo = directoryInfo.GetFileSystemInfos();

        int fileSystemInfoLength = fileSystemInfo.Length;

        for (int i = 0; i < fileSystemInfoLength; i++)
        {
            if (fileSystemInfo[i] is DirectoryInfo)
            {
                EncryptEachFileInThisFolder(fileSystemInfo[i].FullName);
            }
            else
            {
                EncryptFile(fileSystemInfo[i].FullName);
            }
        }
    }

    /// <summary>
    /// Remove the file with the suffix called .manifest in this folder
    /// </summary>
    private static void DeleteEachAssetBundle_ManifestFileInThisFolder(string folderPath)
    {
        DirectoryInfo directoryInfo = new DirectoryInfo(folderPath);

        FileSystemInfo[] fileSystemInfo = directoryInfo.GetFileSystemInfos();

        int fileSystemInfoLength = fileSystemInfo.Length;

        for (int i = 0; i < fileSystemInfoLength; i++)
        {
            if (fileSystemInfo[i] is DirectoryInfo)
            {
                DeleteEachAssetBundle_ManifestFileInThisFolder(fileSystemInfo[i].FullName);
            }
            else
            {
                if (fileSystemInfo[i].Name.EndsWith(".manifest"))
                {
                    FileIOManager.DeleteFile(fileSystemInfo[i].FullName);
                }
            }
        }
    }

    /// <summary>
    /// encrypt this file
    /// </summary>
    private static void EncryptFile(string filePath)
    {
        byte[] unEncryptBytes = FileIOManager.FileConvertToBytes(filePath);

        byte[] EncryptBytes = CipherManager.Encrypt(unEncryptBytes,ConfigureManager.AssetBundleEncryptKey,ConfigureManager.AssetBundleIV,ConfigureManager.AssetBundleEnryptType);

        FileIOManager.BytesConvertToFile(EncryptBytes, filePath);

    }

    /// <summary>
    /// set Assetbundle name for this file
    /// </summary>
    private static void SetFileAssetBundleName(string filePath)
    {
        string filePathAbsolute = filePath.Replace("\\", "/");

        string filePathRelativeToProjectFolder = filePathAbsolute.Substring(Application.dataPath.Length - 6);

        string filePathRelativeToAssetsFolder = filePathAbsolute.Substring(Application.dataPath.Length + 1);

        AssetImporter assetImporter = AssetImporter.GetAtPath(filePathRelativeToProjectFolder);

        string assetName = filePathRelativeToAssetsFolder.Substring(filePathRelativeToAssetsFolder.IndexOf("/") + 1);

        assetName = assetName.Replace(Path.GetExtension(assetName), ConfigureManager.AssetBundleExtensions);

        assetImporter.assetBundleName = assetName;
    }

    /// <summary>
    /// delete Assetbundle which not in AssetBundleManifest's list
    /// </summary>
    private static void DeleteAssetBundlesIsNotInCurrentAssetBundleManifest(AssetBundleManifest oldAssetBundleManifest, AssetBundleManifest newAssetBundleManifest, string folderPath)
    {
        if(oldAssetBundleManifest == null||newAssetBundleManifest==null||folderPath==null|folderPath=="")
        {
            return;
        }

        string[] oldAssetBundlesNames = oldAssetBundleManifest.GetAllAssetBundles();

        string[] newAssetBundlesNames = newAssetBundleManifest.GetAllAssetBundles();

        List<string> newAssetBundlesNamesList = new List<string>(newAssetBundlesNames);

        for (int i = 0; i < oldAssetBundlesNames.Length; i++)
        {
            string assetBundleNameInOldAssetBundleManifest = oldAssetBundlesNames[i];

            if (!newAssetBundlesNamesList.Contains(assetBundleNameInOldAssetBundleManifest))
            {
                string filePath = string.Format("{0}/{1}", folderPath, assetBundleNameInOldAssetBundleManifest);

                string file_ManifestPath = string.Format("{0}.{1}", filePath, "manifest");

                FileIOManager.DeleteFile(filePath);

                FileIOManager.DeleteFile(file_ManifestPath);

                FileIOManager.IfDeletedFileCurrentDirectoryIsEmptyDeleteRecursively(filePath);
            }
        }

    }
}






