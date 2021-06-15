using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// The manager of GameObjectPool
/// </summary>
public class GameObjectPoolManager
{
    /// <summary>
    /// The dictionary stored specific gameobject pool
    /// </summary>
    private static Dictionary<string, GameObjectPool> m_GameObjectPoolsDictionary = new Dictionary<string, GameObjectPool>();

    /// <summary>
    /// The function for initialize
    /// </summary>
    public static void GameObjectPoolManagerInit() { }

    /// <summary>
    /// Get the specific gameObject pool
    /// </summary>
    /// <param name="gameObjectPoolName"></param>
    /// <returns></returns>
    public static GameObjectPool GetGameObjectPool(string gameObjectPoolName)
    {
        GameObjectPool gameObjectPool = null;

        bool isHaveGameObjectPool = m_GameObjectPoolsDictionary.TryGetValue(gameObjectPoolName, out gameObjectPool);

        if (isHaveGameObjectPool == false)
        {
            Debug.LogError(string.Format("GetGameObjectPool():There is no named {0} gameObjectPool in m_GameObjectPoolsDictionary", gameObjectPoolName));
        }

        return gameObjectPool;
    }

    /// <summary>
    /// Regist a specific gameObject pool 
    /// </summary>
    /// <param name="gameObjectPoolName"></param>
    /// <param name="gameObjectPool"></param>
    private static void RegistGameObjectPoolToGameObjectPoolsDictionary(string gameObjectPoolName, GameObjectPool gameObjectPool)
    {
        m_GameObjectPoolsDictionary.Add(gameObjectPoolName, gameObjectPool);
    }

    /// <summary>
    /// Remove a specific gameObject pool 
    /// </summary>
    /// <param name="gameObjectPoolName"></param>
    private static void UnRegistGameObjectPoolFromGameObjectPoolsDictionary(string gameObjectPoolName)
    {
        if (m_GameObjectPoolsDictionary.ContainsKey(gameObjectPoolName))
        {
            m_GameObjectPoolsDictionary.Remove(gameObjectPoolName);
        }
        else
        {
            Debug.LogError(string.Format("UnRegist():There is no named {0} gameObjectPool in m_GameObjectPoolsDictionary", gameObjectPoolName));
        }
    }

    /// <summary>
    /// Create the specific gameobject pool
    /// </summary>
    /// <param name="gameObjectPoolName"></param>
    /// <param name="gameObjectPrefab"></param>
    /// <param name="preloadAmount"></param>
    public static void CreateGameObjectPoolForGameObject(string gameObjectPoolName, GameObject gameObjectPrefab, int preloadAmount)
    {
        if (HasGameObjectPool(gameObjectPoolName) == true)
        {
            Debug.LogErrorFormat("GameObjectPoolManager has already created the gameObjectPool which name is : {0}", gameObjectPoolName);

            return;
        }

        GameObject gameobjectPoolCarrier = new GameObject(gameObjectPoolName, typeof(GameObjectPool));

        GameObjectPool gameObjectPool = gameobjectPoolCarrier.GetComponent<GameObjectPool>();

        gameObjectPool.GameObjectPoolInitialize(gameObjectPrefab, preloadAmount);

        RegistGameObjectPoolToGameObjectPoolsDictionary(gameObjectPoolName, gameObjectPool);
    }

    public static bool HasGameObjectPool(string gameObjectPoolName)
    {
       return m_GameObjectPoolsDictionary.ContainsKey(gameObjectPoolName);
    }

    /// <summary>
    /// Destroy the specific gameObject pool
    /// </summary>
    /// <param name="gameObjectPoolName"></param>
    public static void DestroyGameObjectPool(string gameObjectPoolName)
    {
        GameObjectPool gameObjectPool = GetGameObjectPool(gameObjectPoolName);

        if (gameObjectPool == null)
        {
            Debug.LogErrorFormat("The gameObjectPool has already been destroy which name is : {0}", gameObjectPoolName);
        }

        GameObjectPoolItem[] gameObjectPoolItems = GameObject.FindObjectsOfType<GameObjectPoolItem>();

        for (int i = 0; i < gameObjectPoolItems.Length; i++)
        {
            GameObjectPoolItem gameObjectPoolItem = gameObjectPoolItems[i];

            if ((gameObjectPoolItem.GameObjectPool == gameObjectPool) && (gameObjectPoolItem.IsInGameObjectPool == false))
            {
                gameObjectPoolItem.Recycle();
            }
        }

        GameObject gameObjectPoolCarrier = gameObjectPool.gameObject;

        gameObjectPool.GameObjectPoolOnDestroy();

        UnRegistGameObjectPoolFromGameObjectPoolsDictionary(gameObjectPoolName);

        MonoBehaviour.Destroy(gameObjectPool);

        MonoBehaviour.Destroy(gameObjectPoolCarrier);
    }

    public static void DestroyAllGameObjectPool()
    {
        GameObjectPoolItem[] gameObjectPoolItems = GameObject.FindObjectsOfType<GameObjectPoolItem>();

        for (int i = 0; i < gameObjectPoolItems.Length; i++)
        {
            GameObjectPoolItem gameObjectPoolItem = gameObjectPoolItems[i];

            if (gameObjectPoolItem.IsInGameObjectPool == false)
            {
                gameObjectPoolItem.Recycle();
            }
        }


        foreach (KeyValuePair<string, GameObjectPool> kv in m_GameObjectPoolsDictionary)
        {
            GameObjectPool gameObjectPool = kv.Value;

            if (gameObjectPool != null)
            {
                gameObjectPool.GameObjectPoolOnDestroy();

                GameObject gameObjectPoolCarrier = gameObjectPool.gameObject;

                MonoBehaviour.Destroy(gameObjectPool);

                MonoBehaviour.Destroy(gameObjectPoolCarrier);
            }
           
        }

        m_GameObjectPoolsDictionary.Clear();
    }

    public static void ClearGameObjectPoolsDictionary()
    { 
        m_GameObjectPoolsDictionary.Clear();
    }

}
