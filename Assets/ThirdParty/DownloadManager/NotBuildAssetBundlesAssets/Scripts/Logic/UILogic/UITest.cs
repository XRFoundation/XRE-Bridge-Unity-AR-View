using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

/// <summary>
/// Display loaded asset from its assetBundle or unload asset
/// </summary>
public class UITest : MonoBehaviour
{
    // The name for the specific asset's gameobject pool
    private string m_GameObjectSphereGameObjectPoolName = null;
    private string m_GameObjectCubeGameObjectPoolName = null;
    private string m_GameObjectCylinderGameObjectPoolName = null;
    private string m_GameObjectCapsuleGameObjectPoolName = null;

    private bool m_CreateGameObjectPoolsLock = false;

    //create gameobject pools for have been loaded assets
    private Button m_CreateSomeGameObjectPoolButton;

    //destory gameobject pools for have been loaded assets
    private Button m_ClearAllGameObjectPoolButton;

    //spawn specific asset from gameobject pool which belong to this asset
    private Button m_SpawnSphereButton;
    private Button m_SpawnCubeButton;
    private Button m_SpawnCylinderButton;
    private Button m_SpawnCapsuleButton;

    void Awake()
    {
        m_CreateSomeGameObjectPoolButton = transform.Find("CreateSomeGameObjectPoolButton").GetComponent<Button>();

        m_CreateSomeGameObjectPoolButton.onClick.AddListener(delegate()
        {
            CreateSomeGameObjectPool();
        });

        m_ClearAllGameObjectPoolButton = transform.Find("ClearAllGameObjectPoolButton").GetComponent<Button>();

        m_ClearAllGameObjectPoolButton.onClick.AddListener(delegate()
        {
            ClearAllGameObjectPool();
        });

        m_SpawnSphereButton = transform.Find("SpawnSphereButton").GetComponent<Button>();

        m_SpawnSphereButton.onClick.AddListener(delegate()
        {
            GameObjectPoolManager.GetGameObjectPool(m_GameObjectSphereGameObjectPoolName).SpawnGameObjectPoolItem(Camera.main.transform.position + new Vector3(Random.Range(-10.0f, 10.0f), Random.Range(-10.0f, 10.0f), 15.0f), Quaternion.identity);
        });

        m_SpawnCubeButton = transform.Find("SpawnCubeButton").GetComponent<Button>();

        m_SpawnCubeButton.onClick.AddListener(delegate()
        {
            GameObjectPoolManager.GetGameObjectPool(m_GameObjectCubeGameObjectPoolName).SpawnGameObjectPoolItem(Camera.main.transform.position + new Vector3(Random.Range(-10.0f, 10.0f), Random.Range(-10.0f, 10.0f), 15.0f), Quaternion.identity);
        });

        m_SpawnCylinderButton = transform.Find("SpawnCylinderButton").GetComponent<Button>();

        m_SpawnCylinderButton.onClick.AddListener(delegate()
        {
            GameObjectPoolManager.GetGameObjectPool(m_GameObjectCylinderGameObjectPoolName).SpawnGameObjectPoolItem(Camera.main.transform.position + new Vector3(Random.Range(-10.0f, 10.0f), Random.Range(-10.0f, 10.0f), 15.0f), Quaternion.identity);
        });

        m_SpawnCapsuleButton = transform.Find("SpawnCapsuleButton").GetComponent<Button>();

        m_SpawnCapsuleButton.onClick.AddListener(delegate()
        {
            GameObjectPoolManager.GetGameObjectPool(m_GameObjectCapsuleGameObjectPoolName).SpawnGameObjectPoolItem(Camera.main.transform.position + new Vector3(Random.Range(-10.0f, 10.0f), Random.Range(-10.0f, 10.0f), 15.0f), Quaternion.identity);
        });
    }

    /// <summary>
    /// create gameobject pools for these assets,and load these assets to memory
    /// </summary>
    private void CreateSomeGameObjectPool()
    {
        if (m_CreateGameObjectPoolsLock == true)
        {
            return;
        }

        //load asset's assetbundle and asset to memory asynchronously,then invoke the callback function
        //these path is relative to BuildAssetBundlesSourceAbsolutePath writed in ConfigureManager
        ResourceManager.GetInstance().LoadAssetAsync<GameObject>("Test/Prefab/Sphere", (data) =>
        {
            ResourceManager.GetInstance().UnLoadAssetBundleOfAsset("Test/Prefab/Sphere");

            //give the name for the specific asset's gameobject pool
            m_GameObjectSphereGameObjectPoolName = "gameObjectSphereGameObjectPool";

            //The number of preload asset
            int gameObjectSpherePreloadAmount = 6;
            
            GameObject gameobject = data as GameObject;

            //create gameobject pools for this assets
            GameObjectPoolManager.CreateGameObjectPoolForGameObject(m_GameObjectSphereGameObjectPoolName, gameobject, gameObjectSpherePreloadAmount);
        });


        GameObject gameObjectCube = ResourceManager.GetInstance().LoadAsset<GameObject>("Test/Prefab/Cube");
        GameObject gameObjectCylinder = ResourceManager.GetInstance().LoadAsset<GameObject>("Test/Prefab/Cylinder");
        GameObject gameObjectCapsule = ResourceManager.GetInstance().LoadAsset<GameObject>("Test/Prefab/Capsule");

        //unload asset's assetbundle from memory
        //these path is relative to BuildAssetBundlesSourceAbsolutePath writed in ConfigureManager
        ResourceManager.GetInstance().UnLoadAssetBundleOfAsset("Test/Prefab/Cube");
        ResourceManager.GetInstance().UnLoadAssetBundleOfAsset("Test/Prefab/Cylinder");
        ResourceManager.GetInstance().UnLoadAssetBundleOfAsset("Test/Prefab/Capsule");
        
        //give the name for the specific asset's gameobject pool
        m_GameObjectCubeGameObjectPoolName = "gameObjectCubeGameObjectPool";
        m_GameObjectCylinderGameObjectPoolName = "gameObjectCylinderGameObjectPool";
        m_GameObjectCapsuleGameObjectPoolName = "gameObjectCapsuleGameObjectPool";

        //The number of preload asset
        int gameObjectCubePreloadAmount = 6;
        int gameObjectCylinderPreloadAmount = 6;
        int gameObjectCapsulePreloadAmount = 6;

        //create gameobject pools for these assets 
        GameObjectPoolManager.CreateGameObjectPoolForGameObject(m_GameObjectCubeGameObjectPoolName, gameObjectCube, gameObjectCubePreloadAmount);
        GameObjectPoolManager.CreateGameObjectPoolForGameObject(m_GameObjectCylinderGameObjectPoolName, gameObjectCylinder, gameObjectCylinderPreloadAmount);
        GameObjectPoolManager.CreateGameObjectPoolForGameObject(m_GameObjectCapsuleGameObjectPoolName, gameObjectCapsule, gameObjectCapsulePreloadAmount);       

        m_CreateGameObjectPoolsLock = true;
    }

    /// <summary>
    /// destory gameobject pools for these assets,and unload these assets from memory
    /// </summary>
    private void ClearAllGameObjectPool()
    {
        if (m_CreateGameObjectPoolsLock == false)
        {
            return;
        }

        //destory gameobject pools for these assets 
        GameObjectPoolManager.DestroyGameObjectPool(m_GameObjectSphereGameObjectPoolName);

        GameObjectPoolManager.DestroyGameObjectPool(m_GameObjectCubeGameObjectPoolName);

        GameObjectPoolManager.DestroyGameObjectPool(m_GameObjectCylinderGameObjectPoolName);

        GameObjectPoolManager.DestroyGameObjectPool(m_GameObjectCapsuleGameObjectPoolName);

        //Unloads assets whose reference count is zero
        Resources.UnloadUnusedAssets();

        for (int i = 0; i < 3; i++)
        {
            System.GC.Collect(i);
        }

        m_CreateGameObjectPoolsLock = false;
    }
}
