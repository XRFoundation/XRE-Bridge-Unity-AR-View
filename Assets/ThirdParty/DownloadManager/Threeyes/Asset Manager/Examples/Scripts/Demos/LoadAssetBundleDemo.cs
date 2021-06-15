using UnityEngine;
using System.Collections.Generic;
using Threeyes.AssetManager;

/// <summary>
/// This Demo shows: load assetbundle and release memory after use.
/// 1. Locate the Asset Manager\Examples\Models\Model.prefab, right click and select "Build AssetBundles", it will auto create three assetbundles
///     matching your unity version and store them at "StreamingAssets/AssetBundles" folder.
/// 2. Run the game, then Click the "Load AssetBundle" Button: 
///    It will load assetbundle then get object from it.
/// 3. Click the "Destroy Model and Release memory" Button after the asset is loaded:
///    It will release memory by unloading the asset that loaded from assetbundle when you don't use it,
///    Open Profiler and check the memory use, the "Used Total" will return to the original value after doing this,
///    that means the asset no longer exists in memory.
/// 
/// Tips: 
/// * AssetBundle is a good choice to contain assets (eg: prefab, script),
///   but you have to build for specific platform and different version of Unity.
/// * AssetBundleManager works like AssetTextureManager, but it's base on Unity API
///   so it can't choose where to cache these assetbunle, and it don't support delete the specific asset from cache.
/// </summary>
public class LoadAssetBundleDemo : MonoBehaviour
{
    void OnGUI()
    {
        GUILayout.Label("Tips: Please Build the demo AssetBundle First!");
 
        if (GUILayout.Button("Load AssetBundle"))
        {
			Threeyes.AssetManager.AssetBundleManager.Load(url, InitModel);
        }

        if (GUILayout.Button("Destroy Model and Release memory"))
        {
            DestroyModelAndReleaseMemory();
        }

        if (GUILayout.Button("Clean All AssetBundle Caches"))
        {
			Threeyes.AssetManager.AssetBundleManager.CleanCache();
        }
    }

    void InitModel(AssetBundle assetBundle)
    {
        if (goModel == null)
        {
#if Unity_4
            goModel = Instantiate(assetBundle.Load("Model")) as GameObject;
#else
            goModel = Instantiate(assetBundle.LoadAsset<GameObject>("Model"));//Get object from assetbundle
#endif
        }
    }

    void DestroyModelAndReleaseMemory()
    {
        if (goModel != null)
        {
            //Step 1: remove all reference in scene or scripts
            Destroy(goModel);//Destroy the asset in scene
            goModel = null;//Set all script reference to null

            //Step 2: Invoke follow method to unload asset and release memory
            Resources.UnloadUnusedAssets();//Unloads all the unused assets
            System.GC.Collect();//Force an immediate garbage collection of all generation. https://msdn.microsoft.com/zh-cn/library/system.gc.collect.aspx
        }
    }


    string url
    {
        get
        {
            string folderName = "";

            //Choose the avaliable assetBundle for cur platform http://docs.unity3d.com/ScriptReference/AssetBundle.html
            switch (Application.platform)
            {
                case RuntimePlatform.IPhonePlayer:
                    folderName = "Iphone"; break;
                case RuntimePlatform.Android:
                    folderName = "Android"; break;
                default:
                    folderName = "StandAlone"; break;
            }

            return AssetPath.InStreamingAssets("AssetBundles/" + folderName + "/Model.unity3d");
        }
    }
    GameObject goModel;

}
