using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Singleton template class
/// </summary>
/// <typeparam name="T"></typeparam>
public class SingletonMonoBehaviour<T> : MonoBehaviour where T : Component
{
    private static T ms_Instance;

    public static T GetInstance()
    {
        return ms_Instance;
    }

    protected virtual void Awake()
    {
        ms_Instance = this as T;
    }
}
