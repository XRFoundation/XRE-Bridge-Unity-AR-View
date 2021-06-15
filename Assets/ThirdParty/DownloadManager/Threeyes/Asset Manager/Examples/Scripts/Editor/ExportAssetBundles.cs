using UnityEngine;
using UnityEditor;
using System.IO;
public class ExportAssetBundles
{

    [MenuItem("Assets/Build AssetBundles")]
    static void ExportAll()
    {
        //Iphone(Unity5 has change to ios)
        #if UNITY_4
                ExportResource("Iphone", BuildTarget.iPhone);
        #else
                ExportResource("Iphone", BuildTarget.iOS);
        #endif

        ExportResource("Android", BuildTarget.Android);
        ExportResource("StandAlone", BuildTarget.StandaloneWindows);

        AssetDatabase.Refresh();
    }

    static void ExportResource(string folderName, BuildTarget bt)
    {
        Object[] selection = Selection.GetFiltered(typeof(Object), SelectionMode.DeepAssets);
        string folderPath = "Assets/StreamingAssets/AssetBundles/" + folderName;
        if (!Directory.Exists(folderPath))
            Directory.CreateDirectory(folderPath);
        string path = folderPath + "/" + selection[0].name + ".unity3d";
        BuildPipeline.BuildAssetBundle(Selection.activeObject, null, path, BuildAssetBundleOptions.CollectDependencies, bt);
        Debug.LogWarning("Build " + bt + "AssetBundles  Finish");
    }

}
