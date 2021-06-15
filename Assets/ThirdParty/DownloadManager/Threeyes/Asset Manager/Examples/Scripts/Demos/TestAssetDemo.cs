using UnityEngine;
using Threeyes.AssetManager;
/// <summary>
/// This Demo shows:
/// You can test your assets by download them from local folder instead of server.
/// Once you finish testing, put them to server in the final build, so that you can save lots of time from transmitting file.
/// In this demo, you can put an image named "Cat.jpg" to E:/Test then run the game,
/// Check the Console, you can see where the asset downloaded from. 
/// 
/// Tips: 
/// * To use it, check the [Test Asset] and set the test directory path of AssetTextureManager in Inspector, then put the test file to that path.
/// * It only works on Editor Mode, if the test asset exists in test directory, it will be downloaded from that path and don't cache,
/// otherwise it will still be downloaded from url or cache.
/// </summary>
public class TestAssetDemo : DemoBase
{
    void OnGUI()
    {
        if (GUILayout.Button("Load Texture"))
        {
            AssetTextureManager.Load(url, InitCube);//Note: You don't have to change the url or this code at all.
        }

        if (GUILayout.Button("Delete Texture"))
        {
            DestroyCube();
        }
    }


    string url { get { return AssetPath.InStreamingAssets("Textures/Cat.jpg"); } }

}
