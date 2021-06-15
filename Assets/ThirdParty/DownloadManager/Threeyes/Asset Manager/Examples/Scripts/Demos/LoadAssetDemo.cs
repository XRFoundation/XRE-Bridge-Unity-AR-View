using UnityEngine;
using Threeyes.AssetManager;

/// <summary>
/// This Demo shows: 
/// Load asset from url and use it in a simple way. you can try this by follow steps:
/// 1. Click the "Load Texture" Button: 
///    It will load a texture and show.
/// 2. After the texture is loaded, Click the "Destroy Texture" Button, then Click the "Load Texture" Button again: 
///    The texture will show faster because it is loaded from cache this time.
/// 
/// Tips: 
/// * The order of showing textures may be different each time when they download from url, because some url takes more time to access.
/// </summary>
public class LoadAssetDemo : DemoBase
{

    void OnGUI()
    {
        if (GUILayout.Button("Load Texture"))
        {
            //Start Download texture from url or cache, once download finished it will
            //get the texture and pass it to "InitTexture" Method. Juse one line code!
            AssetTextureManager.Load(url, InitCube);
        }

        if (GUILayout.Button("Destroy Texture"))
        {
            DestroyCube();
        }

        if (GUILayout.Button("Delete Texture Cache"))
        {
            AssetTextureManager.DeleteCache(url);//Delete the texture's cache by passing url (you can also just pass the file name with extension)
        }
    }


    string url { get { return "http://docs.unity3d.com/uploads/Main/SurfaceShaderWorldReflNormalmap.png"; } }

}
