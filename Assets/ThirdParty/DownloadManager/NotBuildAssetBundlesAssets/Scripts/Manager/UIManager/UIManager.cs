using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// The UI manager for all ui panel
/// </summary>
public class UIManager : SingletonMonoBehaviour<UIManager>
{
    /// <summary>
    /// The root of all ui panels
    /// </summary>
    private Transform m_UIRootTransform;

    public Transform UIRootTransform
    {
        get { return m_UIRootTransform; }
    }

    /// <summary>
    /// The ui panels asset cache
    /// </summary>
    private Dictionary<string, GameObject> m_UIPrefabAssetDictionary;

    protected override void Awake()
    {
        base.Awake();

        DontDestroyOnLoad(this);

        m_UIRootTransform = this.transform.Find("Canvas");

        m_UIPrefabAssetDictionary = new Dictionary<string, GameObject>();
    }

    /// <summary>
    /// Preload some ui panel assets to the ui panels cache
    /// </summary>
    public void UIManagerInit()
    {
        PreLoadUIPrefabAsset("UI/Prefab/UITest");

        //PreLoadUIPrefabAsset("UI/Prefab/UITest");

        //PreLoadUIPrefabAsset("UI/Prefab/UITest");

        //PreLoadUIPrefabAsset("UI/Prefab/UITest");

        //PreLoadUIPrefabAsset("UI/Prefab/UITest");

        UnloadAssetBundleOfPreLoadUIPrefabAsset("UI/Prefab/UITest");

        //UnloadAssetBundleOfPreLoadUIPrefabAsset("UI/Prefab/UITest");

        //UnloadAssetBundleOfPreLoadUIPrefabAsset("UI/Prefab/UITest");

        //UnloadAssetBundleOfPreLoadUIPrefabAsset("UI/Prefab/UITest");

        //UnloadAssetBundleOfPreLoadUIPrefabAsset("UI/Prefab/UITest");

    }

    /// <summary>
    ///Preload specific ui panel asset to the ui panels cache
    /// </summary>
    private void PreLoadUIPrefabAsset(string uiPrefabPath)
    {
        if (m_UIPrefabAssetDictionary.ContainsKey(uiPrefabPath) == false)
        {
            GameObject uiPrefabAsset = ResourceManager.GetInstance().LoadAsset<GameObject>(uiPrefabPath);

            if (uiPrefabAsset != null)
            {
                m_UIPrefabAssetDictionary.Add(uiPrefabPath, uiPrefabAsset);
            }
            else
            {
                Debug.LogErrorFormat("load uiPrefabAsset failed, {0} is not exist", uiPrefabPath);
            }
        }

    }

    private void UnloadAssetBundleOfPreLoadUIPrefabAsset(string uiPrefabPath)
    {
        ResourceManager.GetInstance().UnLoadAssetBundleOfAsset(uiPrefabPath);
    }


    /// <summary>
    /// try to get the asset of ui panel from m_UIPrefabAssetDictionary
    /// </summary>
    private GameObject GetUIPrefabAsset(string uiPrefabPath)
    {
        GameObject uiPrefabAsset = null;

        bool uiPrefabAssetHasBeenLoaded = m_UIPrefabAssetDictionary.TryGetValue(uiPrefabPath, out uiPrefabAsset);

        if (uiPrefabAssetHasBeenLoaded == false)
        {
            Debug.LogWarningFormat("{0} is not be loaded,you better preload in UIManagerInit() first!", uiPrefabPath);
        }

        return uiPrefabAsset;
    }

    /// <summary>
    /// Show the specific ui panel
    /// </summary>
    /// <param name="uiPrefabName"></param>
    public void UIShow(string uiPrefabName)
    {
        Transform uiTransform = m_UIRootTransform.Find(uiPrefabName);

        if (uiTransform != null)
        {
            uiTransform.gameObject.SetActive(true);

            uiTransform.SetAsLastSibling();
        }
        else
        {
            string uiPrefabPath = string.Format("UI/Prefab/{0}", uiPrefabName);

            GameObject uiPrefabAsset = GetUIPrefabAsset(uiPrefabPath);

            if (uiPrefabAsset == null)
            {
                uiPrefabAsset = ResourceManager.GetInstance().LoadAsset<GameObject>(uiPrefabPath);

                if (uiPrefabAsset == null)
                {
                    Debug.LogErrorFormat("load uiPrefabAsset failed, {0} is not exist", uiPrefabPath);

                    return;
                }
                else
                {
                    ResourceManager.GetInstance().UnLoadAssetBundleOfAsset(uiPrefabPath);

                    m_UIPrefabAssetDictionary.Add(uiPrefabPath, uiPrefabAsset);
                }
            }

            GameObject uiGameObject = Instantiate(uiPrefabAsset);

            uiGameObject.name = uiPrefabName;

            uiGameObject.transform.SetParent(m_UIRootTransform, false);

            uiGameObject.transform.SetAsLastSibling();
        }

    }

    /// <summary>
    /// Hide the specific ui panel
    /// </summary>
    /// <param name="uiPrefabName"></param>
    public void UIHide(string uiPrefabName)
    {
        GameObject UIGameObject = m_UIRootTransform.Find(uiPrefabName).gameObject;

        UIGameObject.transform.SetAsFirstSibling();

        UIGameObject.SetActive(false);
    }

    /// <summary>
    ///  Hide all ui panels
    /// </summary>
    public void UIHideAll()
    {
        for (int i = 0; i < m_UIRootTransform.childCount; i++)
        {
            GameObject uiGameobject = m_UIRootTransform.GetChild(i).gameObject;

            uiGameobject.SetActive(false);
        }
    }

    /// <summary>
    /// Hide all ui panels then show the specific ui panel
    /// </summary>
    /// <param name="uiPrefabName"></param>
    public void UIHideAllThenShow(string uiPrefabName)
    {
        UIHideAll();

        UIShow(uiPrefabName);
    }

    /// <summary>
    /// Destroy the specific ui panel
    /// </summary>
    /// <param name="uiPrefabName"></param>
    public void UIDestroy(string uiPrefabName)
    {
        GameObject uiGameObject = m_UIRootTransform.Find(uiPrefabName).gameObject;

        uiGameObject.transform.SetAsFirstSibling();

        Destroy(uiGameObject);
    }

    /// <summary>
    /// Destroy all ui panels
    /// </summary>
    public void UIDestroyAll()
    {
        for (int i = 0; i < m_UIRootTransform.childCount; i++)
        {
            GameObject uiGameobject = m_UIRootTransform.GetChild(i).gameObject;

            Destroy(uiGameobject);
        }
    }

    /// <summary>
    /// Destroy all ui panel then show the specific ui panel
    /// </summary>
    /// <param name="uiPrefabName"></param>
    public void UIDestroyAllThenShow(string uiPrefabName)
    {
        UIDestroyAll();

        UIShow(uiPrefabName);
    }
}
