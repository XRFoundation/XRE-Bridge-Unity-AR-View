using UnityEngine;
using System;
using Threeyes.AssetManager.Extension;

namespace Threeyes.AssetManager
{

    /// <summary>
    /// Text file (eg: xml txt csv)
    /// </summary>
    public class AssetTextManager : AssetFileManagerBase<AssetTextManager, string>
    {

        #region Override

        protected override void GetDataAndSave(WWW www, bool isLoadSuccess, Action<string> saveCallback)
        {
            if (isLoadSuccess)
            {
                saveCallback.Excute(www.text);
            }
        }

        protected override string debugAssetTypeName { get { return "Text"; } }

        #endregion

    }
}