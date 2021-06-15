using UnityEngine;
using System;
using System.Collections;
using Threeyes.AssetManager.Extension;

namespace Threeyes.AssetManager
{

    /// <summary>
    /// File that can convert to Texture (eg: jpg, png)
    /// </summary>
    public class AssetTextureManager : AssetFileManagerBase<AssetTextureManager, Texture2D>
    {
        #region Public

        /// <summary>
        /// The texture you want to replace the origin one when load failed, you should set it first.
        /// </summary>
        public Texture2D DefaultTexture;

        /// <summary>
        /// Load Texture2D
        /// </summary>
        /// <param name="saveDataCallback">Return the data after load finish</param>
        /// <param name="isCache">If you want to save the asset into cache, you need to set global[IsCacheAsset] and this true</param>
        /// <param name="isCompress">Compress texture, set true if you want to save menory and don't use read bytes function such as Texture2D.EncodeToJPG. Only work at PC</param>
        /// <param name="isCreateMipMap">Create mipmap for texture</param>
        /// <param name="anisoLevel">Set Texture's anisoLevel</param>
        public static void LoadAndSet(string url, Action<Texture2D> saveDataCallback = null, int version = 1, bool isCache = true, bool isCompress = false, bool isCreateMipMap = false, int anisoLevel = 1)
        {
            Instance.StartCoroutine(IELoadAndSet(url, saveDataCallback, version, isCache, isCompress, isCreateMipMap, anisoLevel));
        }


        /// <summary>
        /// Load Texture2D
        /// </summary>
        /// <param name="saveDataCallback">Return the data after load finish</param>
        /// <param name="isCache">If you want to save the asset into cache, you need to set global[IsCacheAsset] and this true</param>
        /// <param name="isCompress">Compress texture, set true if you want to save menory and don't use read bytes function such as Texture2D.EncodeToJPG. Only work at PC</param>
        /// <param name="isCreateMipMap">Create mipmap for texture</param>
        /// <param name="anisoLevel">Set Texture's anisoLevel</param>
        /// <returns></returns>
        public static IEnumerator IELoadAndSet(string url, Action<Texture2D> saveDataCallback = null, int version = 1, bool isCache = true, bool isCompress = false, bool isCreateMipMap = false, int anisoLevel = 1)
        {
            return Instance._IEBaseLoad(url, (www, isLoadSuccess) => Instance.GetDataAndSave(www, isLoadSuccess, url.FileNameWithoutExtension(), isCompress, isCreateMipMap, anisoLevel, saveDataCallback), version, isCache);
        }

        #endregion


        #region Override

        protected override void GetDataAndSave(WWW www, bool isLoadSuccess, Action<Texture2D> saveCallback)
        {
            if (isLoadSuccess)
            {
                Texture2D tex = www.texture;
                tex.name = www.url.FileName();
                saveCallback.Excute(tex);
            }
            else
            {
                if (DefaultTexture == null)
                    Debug.LogWarning("Please set the DefaultTexture");
                else
                    saveCallback.Excute(DefaultTexture);
            }
        }


        protected override string debugAssetTypeName { get { return "Texture"; } }

        #endregion


        void GetDataAndSave(WWW www, bool isLoadSuccess, string texName, bool isCompress = false, bool isCreateMipMap = false, int anisoLevel = 1, Action<Texture2D> saveCallback = null)
        {
            if (isLoadSuccess)
            {
                Texture2D tex = new Texture2D(4, 4, TextureFormat.RGB24, isCreateMipMap);
                if (tex.LoadImage(www.bytes))//JPG files are loaded into RGB24 format, PNG files are loaded into ARGB32 format. http://docs.unity3d.com/ScriptReference/Texture2D.LoadImage.html
                {
                    tex.name = texName;
                    tex.anisoLevel = anisoLevel;

                    //Comperss
                    if ((tex.width % 4 == 0) && (tex.height % 4 == 0))
                    {
                        if (isCompress)
                            tex.Compress(true);//Texture will be in DXT1 format if the original texture had no alpha channel, and in DXT5 format if it had alpha channel. 
                    }
                }
                saveCallback.Excute(tex);
            }
            else
            {
                if (DefaultTexture == null)
                    Debug.LogWarning("Please set the DefaultTexture");
                else
                    saveCallback.Excute(DefaultTexture);
            }
        }
  
    }
}
