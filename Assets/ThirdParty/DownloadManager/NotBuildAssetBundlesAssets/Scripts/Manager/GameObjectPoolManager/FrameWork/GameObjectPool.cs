using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// The GameObject Pool Class
/// </summary>
public class GameObjectPool : MonoBehaviour
{
    //the GameObject asset that will be clone
    private GameObject m_GameObjectPrefab;

    //Record how many objects have been generated in the object pool history
    private int m_HitstoryCounter = 0;

    private bool m_IsInitialized;

    private Queue<GameObject> m_GameObjectQueue;

    public Queue<GameObject> GameObjectQueue
    {
        get { return m_GameObjectQueue; }
    }

    /// <summary>
    /// the function for initializing the GameObject pool
    /// </summary>
    /// <param name="preloadAmount">The number of pregenerated gameObjects.</param>
    /// <param name="gameObjectPrefab">the GameObject asset that will be clone.</param>
    public void GameObjectPoolInitialize(GameObject gameObjectPrefab, int preloadAmount)
    {
        if (m_IsInitialized == true)
        {
            Debug.LogError("GameObjectPool has already been initialized !");

            return;
        }

        m_GameObjectQueue = new Queue<GameObject>(preloadAmount);

        this.m_GameObjectPrefab = gameObjectPrefab;

        for (int i = 0; i < preloadAmount; i++)
        {
            GameObject gameObjectClone = Instantiate(this.m_GameObjectPrefab);

            m_HitstoryCounter++;

            string gameObjectCloneName = string.Format("{0}{1}", gameObjectClone.name, m_HitstoryCounter.ToString());

            GameObjectPoolItem gameObjectPoolItem = gameObjectClone.GetComponent<GameObjectPoolItem>();

            gameObjectPoolItem.Initialize(gameObjectCloneName, this.gameObject.transform, this);

            m_GameObjectQueue.Enqueue(gameObjectClone);
        }

        m_IsInitialized = true;
    }

    /// <summary>
    /// the function to destroy the object pool
    /// </summary>
    public void GameObjectPoolOnDestroy()
    {
        m_GameObjectPrefab = null;

        m_HitstoryCounter = 0;

        while(m_GameObjectQueue.Count != 0)
        {
            GameObject gameObjectInGameObjectPool = m_GameObjectQueue.Dequeue();

            Destroy(gameObjectInGameObjectPool);
        }

    }

    /// <summary>
    /// the function for spawn the item of GameObject pool
    /// </summary>
    public GameObject SpawnGameObjectPoolItem(Vector3 position, Quaternion rotation)
    {
        //If found, remove it from the object pool    
        if (m_GameObjectQueue.Count != 0)
        {
            // gameObject are available; It's just reinitializing
            GameObject gameObjectInGameObjectPool = m_GameObjectQueue.Dequeue();

            GameObjectPoolItem gameObjectPoolItem = gameObjectInGameObjectPool.GetComponent<GameObjectPoolItem>();

            gameObjectPoolItem.Reuse(position, rotation);

            return gameObjectInGameObjectPool;
         
        }
        //If not found, to generate the new gameObject
        else
        {
            GameObject gameObjectClone = Instantiate(this.m_GameObjectPrefab);

            m_HitstoryCounter++;

            string gameObjectCloneName = string.Format("{0}{1}", gameObjectClone.name, m_HitstoryCounter.ToString());

            GameObjectPoolItem gameObjectPoolItem = gameObjectClone.GetComponent<GameObjectPoolItem>();

            gameObjectPoolItem.Initialize(gameObjectCloneName, this.gameObject.transform, this);

            gameObjectPoolItem.Reuse(position, rotation);

            return gameObjectClone;
        }
    }

}