using UnityEngine;
using UnityEditor;
using System.IO;
using Threeyes.AssetManager;
using Threeyes.AssetManager.Extension;

public class AssetManagerBaseInspector<SonType, AssetType> : Editor
    where SonType : AssetManagerBase<SonType, AssetType>
    where AssetType : class
{
    public override void OnInspectorGUI()
    {
        SonType inst = target as SonType;
        SpaceLine();

        //Cache
        bool isCacheAsset = CacheAsset(inst);
        SpaceLine();

        //Test
        bool isTestAsset = TestAsset(inst);
        SpaceLine();

        //Debug
        bool isDebug = EditorGUILayout.Toggle("Debug Message", inst.IsDebug);

        RecordUndo(() =>
            {
                inst.IsCacheAsset = isCacheAsset;
                inst.IsTestAsset = isTestAsset;
                inst.IsDebug = isDebug;
            });
    }


    protected static void SpaceLine()
    {
        string str = "";
        for (int i = 0; i != (int)EditorGUIUtility.labelWidth; i++)
        {
            str += "-";
        }
        GUILayout.Label(str);
    }


    public double sumUsed = 0;
    bool CacheAsset(SonType inst)
    {
        bool isCacheAsset = EditorGUILayout.Toggle("Cache Asset", inst.IsCacheAsset);
        if (isCacheAsset)
        {
            GUIInCacheAsset(inst);//The extra GUI when enable cache


            if (GUILayout.Button("Check Used Space: " + sumUsed.ToString() + "MB"))
                sumUsed = inst.CacheSpaceOccupied;

            if (GUILayout.Button("Clean Cache"))
            {
                AssetManagerBase<SonType, AssetType>.CleanCache();//The function belong AssetManagerBase<T>
                sumUsed = inst.CacheSpaceOccupied;
            }
        }
        return isCacheAsset;
    }

    protected virtual void GUIInCacheAsset(SonType inst)
    {

    }


    bool TestAsset(SonType inst)
    {
        bool isTestAsset = EditorGUILayout.Toggle("Test Asset", inst.IsTestAsset);
        if (isTestAsset)
        {
            EditorGUILayout.BeginHorizontal();
            GUILayout.Label("From", GUILayout.Width(40));
            string testDirectory = EditorGUILayout.TextField("", inst.TestDirectory, GUILayout.MaxWidth(1000));
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.HelpBox("Input the exist directory path like this:\n E:/Test", MessageType.Info);

            if (GUILayout.Button("Open Test Directory"))
                if (Directory.Exists(inst.TestDirectory))
                    EditorUtility.RevealInFinder(inst.TestDirectory);

            RecordUndo(() =>
           {
               inst.TestDirectory = testDirectory;
           });
        }
        return isTestAsset;
    }


    protected void OpenDirectoryButton(string buttonName, string path, string warinMessage = "")
    {
        if (GUILayout.Button(buttonName))
            if (Directory.Exists(path))
                EditorUtility.RevealInFinder(path);

        //Show warning if directory not exist
        if (!warinMessage.IsNullOrEnpty() && !Directory.Exists(path))
        {
            EditorGUILayout.HelpBox(warinMessage, MessageType.Warning);
        }
    }


    /// <summary>
    /// Record the undo operation and save it to disk
    /// </summary>
    /// <param name="record"></param>
    protected void RecordUndo(System.Action record)
    {
        if (GUI.changed)
        {
            Undo.RecordObject(target, "AssetManagerInspector Change");

            record.Excute();

            //Save to disk
            EditorUtility.SetDirty(target);
        }
    }

}
