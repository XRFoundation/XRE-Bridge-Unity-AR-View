using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Threeyes.AssetManager;//Use this namespace

/// <summary>
/// This Demo shows: 
/// If you want to predownload many assets and store them into cache in loading scene, just open several download lists. 
/// 
/// Tips:
/// * To use the Manager Component (AssetTextureManager, AssetTextManager, AssetBundleManager and so on, In this demo is AssetTextureManager),
///   just attach it to the GameObject that always active so that it can download assets properly.
/// * To store the asset into cache, check the [Cache Asset] and set the cache directory path of AssetTextureManager in Inspector;
/// * If you don't want to see the Debug message in Console, uncheck the [Debug Message] of AssetTextureManager in Inspector.
/// * If the same or higer version of the asset exists in cache, it won't be downloaded again.
/// </summary>
public class DownloadAssetDemo : MonoBehaviour
{

    void OnGUI()
    {
        //Download once at a time.
        //Note: if one of the queue is busy, the whole queue will be blocked.
        if (GUILayout.Button("Download Textures once a time"))
        {
            if (!isBeginDownload)
            {
                isBeginDownload = true;
                StartCoroutine(IEDownloadTextures(listUrl));//Start a download queue
            }
        }

        //Download more than once at a time.
        //Note: Even if one queue is blocked, the other queue will still work, just like multi-thread.
        //It may be faster than single queue, however, you should limit the number of queues under 5 to avoid frequently access server at the same time.
        if (GUILayout.Button("Donwload Textures twice a time"))
        {
            if (!isBeginDownload)
            {
                isBeginDownload = true;
                StartCoroutine(IEDownloadTextures(listUrl.GetRange(0, 5)));//Start download queue 1
                StartCoroutine(IEDownloadTextures(listUrl.GetRange(5, listUrl.Count - 5)));//Start download queue 2
            }
        }

        if (GUILayout.Button("Clean All Textures Cache"))
        {
            totalDownload = 0;
            isBeginDownload = false;
            AssetTextureManager.CleanCache();//Clean all textures cache
        }

        GUILayout.Label("Download Process: " + ((totalDownload == listUrl.Count) ? "Complete!" : totalDownload + "/" + listUrl.Count));
    }


    IEnumerator IEDownloadTextures(List<string> urls)
    {
        foreach (string url in urls)
        {
            //Start coroutine and begin download asset, Once download finished it will callback "UpdateLoadingState" Function with a downloadstate(Bool) argument.
            //If you want to use the asset right after finish download, use AssetTextureManager.IELoad instead.
            yield return StartCoroutine(AssetTextureManager.IEDownload(url, UpdateLoadingState ));
        }
    }

    void UpdateLoadingState(bool isLoadSuccess)
    {
        Debug.Log("Download " + (isLoadSuccess ? "Success" : "Failed"));
        totalDownload++;
    }

    List<string> listUrl
    {
        get
        {
            return new List<string>()
            { 
                //Local Path
                AssetPath.InStreamingAssets("Textures/Cat.jpg"),//In Application.streamingAssetsPath
                //AssetPath.InPersistent("Textures/Cat.jpg"),//In Application.persistentDataPath

                //Url in Unity3d Server
                "https://docs.unity3d.com/uploads/Main/SurfaceShaderSimple.png",
                "https://docs.unity3d.com/uploads/Main/SurfaceShaderDiffuseTex.png",
                "https://docs.unity3d.com/uploads/Main/SurfaceShaderDiffuseBump.png",
                "https://docs.unity3d.com/uploads/Main/SurfaceShaderRim.png",
                "https://docs.unity3d.com/uploads/Main/SurfaceShaderDetailTex.png",
                "https://docs.unity3d.com/uploads/Main/SurfaceShaderDetailTexScreenPos.png",
                "https://docs.unity3d.com/uploads/Main/SurfaceShaderWorldRefl.png",
                "https://docs.unity3d.com/uploads/Main/SurfaceShaderWorldReflNormalmap.png",
                "https://docs.unity3d.com/uploads/Main/SurfaceShaderSlices.png",
            };
        }
    }
    bool isBeginDownload = false;
    int totalDownload = 0;

}
