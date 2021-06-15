using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
#if UNITY_EDITOR
using UnityEditor;
#endif

/// <summary>
/// The start of the game 
/// </summary>
public class AppStartManager : SingletonMonoBehaviour<AppStartManager>
{
    protected override void Awake()
    {  
        base.Awake();
    }

    void Start()
    {
#if UNITY_EDITOR

        if (ConfigureManager.AssetBundleEditorMode == 0)//if you choose the no Assetbundle mode
        {
            Destroy(AssetBundleUpdateManager.GetInstance().gameObject);

            Init();
        }
        else//if you not choose the no Assetbundle mode
        {
            AssetBundleUpdateManager.GetInstance().StartUpdateAssetBundles
            (
                delegate
                {
                    Init();
                }
            );
        }


#else
        AssetBundleUpdateManager.GetInstance().StartUpdateAssetBundles
        (
             delegate
             {
                    Init();
             }
        );
#endif
    }

    private void Init()
    {
        //Initialize the ResourceManager
        ResourceManager.GetInstance().ResourceManagerInit();

        //Initialize the UIManager
        UIManager.GetInstance().UIManagerInit();

        //UIDestroy All the UI panel
        UIManager.GetInstance().UIDestroyAll();

        //Initialize the logic code for demo
        new GameObject("GameTest", typeof(GameTest));

        Destroy(this.gameObject);

    }

}
