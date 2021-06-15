using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.Collections;

/// <summary>
/// This class is used for showing the progress when updating the assetbundle from the server of asset
/// </summary>
public class UIShowUpdateAssetBundlesProgress : SingletonMonoBehaviour<UIShowUpdateAssetBundlesProgress>
{
    private bool m_UpdateLock = false;

    private bool m_NextStep = false;

    public bool NextStep
    {
        set { m_NextStep = value; }
    }

    /// <summary>
    /// the scrollBar UI component which will display the progress when downloading assetbundles
    /// </summary>
    private Scrollbar m_AssetBundleUpdateProgressScrollbar;

    /// <summary>
    /// the Text UI components which will display text message when downloading assetbundles
    /// </summary>
    private Text m_AssetBundleUpdateProgressText;

    /// <summary>
    /// The delayed current number of assetbundles which has been updated.This value will lerp to m_TargetDownloadedAssetBundlesNum
    /// </summary>
    private float m_CurrentDownloadedAssetBundlesNum;

    /// <summary>
    /// The actual current number of assetbundles which has been updated
    /// </summary>
    private float m_TargetDownloadedAssetBundlesNum;

    /// <summary>
    /// The total number of assetbundles which need to be updated
    /// </summary>
    private float m_NeedDownloadAssetbundlesTotalNum;

    /// <summary>
    /// repersent the current progress in downloading assetbundles.This variable is between 0.0f and 1.0f
    /// </summary>
    private float m_CurrentDownloadedProgress;

    /// <summary>
    /// repersent target progress in downloading assetbundles .This variable will be set to 1.0f
    /// </summary>
    private float m_TargetDownloadedProgress;

    /// <summary>
    /// when all assetbundles have been updated,invoke this action
    /// </summary>
    public Action eventWhenUpdateAssetBundlesComplete;

    public float TargetDownloadedProgress
    {
        set { m_TargetDownloadedProgress = value; }
    }

    private float m_DownloadedProgressDamping = 1.0f;

    /// <summary>
    /// update the m_TargetDownloadedProgress value when updating assetbundles
    /// </summary>
    /// <param name="currentDownloadedNum"></param>
    /// <param name="needDownloadTotalNum"></param>
    public void SetTargetDownloadedProgress(int currentDownloadedNum, int needDownloadTotalNum)
    {
        if (needDownloadTotalNum == 0)
        {
            return;
        }

        m_TargetDownloadedAssetBundlesNum = (float)currentDownloadedNum;

        m_NeedDownloadAssetbundlesTotalNum = (float)needDownloadTotalNum;

        m_TargetDownloadedProgress = m_TargetDownloadedAssetBundlesNum / m_NeedDownloadAssetbundlesTotalNum;

    }

    protected override void Awake()
    {
        base.Awake();

        m_AssetBundleUpdateProgressScrollbar = transform.Find("Scrollbar").GetComponent<Scrollbar>();

        m_AssetBundleUpdateProgressText = transform.Find("ProgressNum").GetComponent<Text>();
    }

    /// <summary>
    /// updating the information when updating assetbundles
    /// </summary>
    void Update()
    {
        m_CurrentDownloadedAssetBundlesNum = Mathf.MoveTowards(m_CurrentDownloadedAssetBundlesNum, m_TargetDownloadedAssetBundlesNum, Time.deltaTime * m_DownloadedProgressDamping * m_NeedDownloadAssetbundlesTotalNum);

        m_CurrentDownloadedProgress = Mathf.MoveTowards(m_CurrentDownloadedProgress, m_TargetDownloadedProgress, Time.deltaTime * m_DownloadedProgressDamping);

        if (m_TargetDownloadedProgress == 0.0f || m_NeedDownloadAssetbundlesTotalNum == 0.0f)
        {
            m_AssetBundleUpdateProgressText.text = "";
        }
        else
        {
            m_AssetBundleUpdateProgressText.text = string.Format("Updating AssetBundles：{0}/{1}", (int)m_CurrentDownloadedAssetBundlesNum, (int)m_NeedDownloadAssetbundlesTotalNum);
        }

        m_AssetBundleUpdateProgressScrollbar.size = m_CurrentDownloadedProgress;

        if ((m_AssetBundleUpdateProgressScrollbar.size == 1.0f) && m_NextStep && (!m_UpdateLock))
        {
            m_UpdateLock = true;

            if (eventWhenUpdateAssetBundlesComplete != null)
            {
                eventWhenUpdateAssetBundlesComplete();
            }
        }
    }
}
