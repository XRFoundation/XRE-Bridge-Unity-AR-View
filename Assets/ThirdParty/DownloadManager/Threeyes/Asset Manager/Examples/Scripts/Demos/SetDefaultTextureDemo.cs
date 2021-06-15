using UnityEngine;
using Threeyes.AssetManager;

/// <summary>
/// This Demo shows: 
/// You can preset the default texture, so when the load texture operation failed (eg: file not found or request time out), 
/// it will replace the origanal texture to tell player: this texture is failed to load.
/// 
/// Tips:
/// * Set the [Default Texture] of AssetTextureManager in Inspector.
/// * This option is avaliable on AssetTextureManager only, the other Manager will not excute the callback function if load operation failed.
/// </summary>
public class SetDefaultTextureDemo : DemoBase
{

    void OnGUI()
    {
        if (GUILayout.Button("Load Texture that doesn't exist"))
        {
            //No texture will return from this error url, so the texture will be replaced by AssetTextureManager.DefaultTexture
            AssetTextureManager.Load(errorUrl, InitCube);
        }
    }

    string errorUrl { get { return "http://aaa.bbb.com/Dont_Exist.jpg"; } }

}
