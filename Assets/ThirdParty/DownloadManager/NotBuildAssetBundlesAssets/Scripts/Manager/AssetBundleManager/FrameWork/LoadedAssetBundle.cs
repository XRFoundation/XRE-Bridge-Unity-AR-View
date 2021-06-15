using UnityEngine;

/// <summary>
/// AssetBundle which has been loaded with reference counting
/// </summary>
public class LoadedAssetBundle
{
    //Reference counting
    public int referenceCount = 1;

    //AssetBundle
    public AssetBundle assetBundle = null;

    public LoadedAssetBundle(AssetBundle assetBundle)
    {
        this.referenceCount = 1;

        this.assetBundle = assetBundle;
    }
}
