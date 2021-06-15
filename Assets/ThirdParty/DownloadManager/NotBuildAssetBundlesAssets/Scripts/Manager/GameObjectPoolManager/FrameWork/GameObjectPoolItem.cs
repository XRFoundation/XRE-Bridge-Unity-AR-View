using UnityEngine;
using System.Collections;

/// <summary>
/// the gameObject which is in the pool of GameObject
/// </summary>
public class GameObjectPoolItem : MonoBehaviour
{
    /// <summary>
    /// Mark whether the object is in the object pool
    /// </summary>
    protected bool m_IsInGameObjectPool;

    public bool IsInGameObjectPool
    {
        get { return m_IsInGameObjectPool; }
    }


    private GameObjectPool m_GameObjectPool;

    public GameObjectPool GameObjectPool
    {
        get { return m_GameObjectPool; }
    }

    public void Initialize(string name,Transform transformParent,GameObjectPool gameObjectPool)
    {
        this.gameObject.name = name;

        this.gameObject.transform.SetParent(transformParent);

        this.m_GameObjectPool = gameObjectPool;

        this.gameObject.SetActive(false);

        m_IsInGameObjectPool = true;
    }

    public void Reuse(Vector3 position,Quaternion rotation)
    {
        this.gameObject.transform.position = position;

        this.gameObject.transform.rotation = rotation;

        this.gameObject.transform.SetParent(null);

        this.gameObject.SetActive(true);

        m_IsInGameObjectPool = false;
    }



    /// <summary>
    /// despawn this gameObject,then put it back to the gameObject pool which it belongs to
    /// </summary>
    public void Recycle()
    {
        if (m_GameObjectPool.GameObjectQueue.Contains(this.gameObject) == false)
        {
            this.transform.SetParent(this.m_GameObjectPool.gameObject.transform);

            m_IsInGameObjectPool = true;

            this.gameObject.SetActive(false);

            m_GameObjectPool.GameObjectQueue.Enqueue(this.gameObject);
        }
        else
        {
            Debug.LogError("GameObjectPoolItem has already been recycle !");
        }

    }

}
