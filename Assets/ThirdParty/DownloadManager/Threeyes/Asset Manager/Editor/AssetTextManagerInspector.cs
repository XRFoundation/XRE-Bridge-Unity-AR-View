using UnityEditor;
using Threeyes.AssetManager;

[CustomEditor(typeof(AssetTextManager), false)]
public class AssetTextManagerInspector : AssetFileManagerBaseInspector<AssetTextManager, string>
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
    }
}
