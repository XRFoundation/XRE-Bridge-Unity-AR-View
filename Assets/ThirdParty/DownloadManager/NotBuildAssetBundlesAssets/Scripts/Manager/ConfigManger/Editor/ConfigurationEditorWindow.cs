using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class ConfigurationEditorWindow : EditorWindow 
{
    private Editor editor;


     [MenuItem("AssetBundles/Show Configuration")]
     public static void Init()
     {
         ConfigurationEditorWindow window = EditorWindow.GetWindow<ConfigurationEditorWindow>(true, "AssetBundle Configuration", true);

        window.editor = Editor.CreateEditor(ConfigureManager.Configuration);
     }
	
     void OnGUI()
     {
         this.editor.OnInspectorGUI();
     }
}
