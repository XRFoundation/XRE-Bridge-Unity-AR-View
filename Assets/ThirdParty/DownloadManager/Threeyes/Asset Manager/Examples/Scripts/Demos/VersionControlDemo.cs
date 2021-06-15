using UnityEngine;
using Threeyes.AssetManager;
using Threeyes.AssetManager.Extension;
/// <summary>
/// This Demo shows: 
/// When you download a newer version asset, the older one will be replaced.
/// try this by Click the "Load Texture 1.0" Button, after the texture displays, Click the "Load Texture 2.0" Button,
/// the newer texture will replace the older one.
/// 
/// Tips:
/// * The version control only depends on filename and version, so all domain and path information in url is ignored,
///   just like WWW.LoadFromCacheOrDownload -> http://docs.unity3d.com/ScriptReference/WWW.LoadFromCacheOrDownload.html
/// </summary>
public class VersionControlDemo : DemoBase
{
    void OnGUI()
    {
        if (GUILayout.Button("Load Texture 1.0"))
        {
            AssetTextureManager.Load(urlVersion1, InitCube, 1);//Version 1
        }

        if (GUILayout.Button("Load Texture 2.0"))
        {
            AssetTextureManager.Load(urlVersion2, InitCube, 2);//Version 2
        }

        if (GUILayout.Button("Delete Texture Cache"))
        {
            AssetTextureManager.DeleteCache("Cat.jpg");
        }

        if (GUILayout.Button("Check if Texture v1.0 or higher in Cache"))
        {
            bool isCached = AssetTextureManager.IsVersionCached(urlVersion1, 1);//Check
            content = "The Texture " + urlVersion1.FileName() + (isCached ? " is" : " is not") + " in Cache";
        }

        GUILayout.Label(content);
    }


    string urlVersion1 { get { return AssetPath.InStreamingAssets("Textures/Cat.jpg"); } }
    string urlVersion2 { get { return AssetPath.InStreamingAssets("Textures/Version_2.0/Cat.jpg"); } }
    string content = "";

}
