using UnityEngine;
using UnityEditor;
using Threeyes.AssetManager;

[CustomEditor(typeof(Threeyes.AssetManager.AssetBundleManager), false)]
public class AssetBundleManagerInspector : AssetManagerBaseInspector<Threeyes.AssetManager.AssetBundleManager, AssetBundle>
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
    }
}
