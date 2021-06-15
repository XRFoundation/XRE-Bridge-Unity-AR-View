using UnityEngine;
using Threeyes.AssetManager;

/// <summary>
/// This Demo shows:
/// Set the texture's Quality after loaded success.
/// 
/// Tips:
/// * AssetTextureManager only.
/// </summary>
public class TextureImportSettingDemo : DemoBase
{
    void OnGUI()
    {
        if (GUILayout.Button("Load Texture And Compress"))
        {
            //If you want to reduce the menory usage of texture, you can compress it.
            //If the platform support DXT format (eg: PC, Mac, some android device which use Nvidia Tegra),
            //it will be compressed to DXT format, otherwise it will do nothing. -> http://docs.unity3d.com/ScriptReference/Texture2D.Compress.html
            //Note: How ever, DXT compression have quality loss,
            //and you can't read texture's bytes (eg: Texture2D.EncodeToJPG only works on ARGB32 and RGB24 texture formats),
            AssetTextureManager.LoadAndSet(url, InitSkewCube, isCompress: true);
        }


        if (GUILayout.Button("Load Texture And Create Mipmap"))
        {
            //If the texture is used by 3D Model, you may want to create mipmap and set the anisoLevel.
            //-> http://docs.unity3d.com/Manual/class-TextureImporter.html
            AssetTextureManager.LoadAndSet(url, InitSkewCube, isCreateMipMap: true, anisoLevel: 9);
        }
    }


    string url { get { return AssetPath.InStreamingAssets("Textures/Cat.jpg"); } }

}
