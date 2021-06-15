using UnityEngine;
using UnityEditor;
using System.IO;
using Threeyes.AssetManager;

public class AssetFileManagerBaseInspector<SonType, AssetType> : AssetManagerBaseInspector<SonType, AssetType>
    where SonType : AssetFileManagerBase<SonType, AssetType>
    where AssetType : class
{

    protected override void GUIInCacheAsset(SonType inst)
    {
        EditorGUILayout.BeginHorizontal();
        GUILayout.Label("To", GUILayout.Width(40));
        EBaseCacheDirectory eBaseCacheDirectory = (EBaseCacheDirectory)EditorGUILayout.EnumPopup("", inst.eBaseCacheDirectory, GUILayout.Width(120));
        GUILayout.Label("/");
        string assetDirectoryInCache = EditorGUILayout.TextField("", inst.AssetDirectoryInCache, GUILayout.MinWidth(50), GUILayout.MaxWidth(1000));
        EditorGUILayout.EndHorizontal();

        RecordUndo(
            () =>
            {
                inst.eBaseCacheDirectory = eBaseCacheDirectory;
                inst.AssetDirectoryInCache = assetDirectoryInCache;
            });


        if (GUILayout.Button("Open Cache Directory"))
            if (Directory.Exists(inst.CacheDirectory))//Check inst.CacheDirectory here, because it contain's Directory.CreateDirectory and it may frequently Create Directory when it change.
                EditorUtility.RevealInFinder(inst.CacheDirectory);
    }
}
