using UnityEngine;
using System.Collections;

public class Missile : GameObjectPoolItem
{
    // Use this for initialization
    void OnEnable()
    {
        StartCoroutine(test());
    }

    // Update is called once per frame
    void Update()
    {

    }

    /// <summary>
    /// waiting for 3 sec,then depawn this gameobject to its gameobject pool
    /// </summary>
    /// <returns></returns>
    IEnumerator test()
    {
        yield return new WaitForSeconds(3.0f);

        this.Recycle();
    }
}
