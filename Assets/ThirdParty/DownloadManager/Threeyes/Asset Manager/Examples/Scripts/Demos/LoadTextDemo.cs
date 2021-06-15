using UnityEngine;
using System.Xml;
using Threeyes.AssetManager;

/// <summary>
/// If you want to load data from text asset (eg: .xml .csv .rar),
/// use AssetTextManager download these asset then get data.
/// 
/// Tips:
/// * If you want to update the text asset at cache but it doesn't have the newer version, you can 
///   delete the exist asset and reload it from url again.
/// </summary>
public class LoadTextDemo : MonoBehaviour
{
    void OnGUI()
    {
        if (GUILayout.Button("Load XML Asset and Read"))
        {
            AssetTextManager.Load(url, GetXml);
        }

        GUILayout.TextArea(xmlData);
    }


    void GetXml(string text)
    {
        if (!string.IsNullOrEmpty(text))
        {
            XmlDocument xmlDoc = new XmlDocument();
            xmlDoc.LoadXml(text);
            foreach (XmlNode node in xmlDoc.DocumentElement)
            {
                xmlData += "\r\n" + node.Name + " = " + node.InnerText;//Show the node info
            }
        }
    }


    string url { get { return AssetPath.InStreamingAssets("Texts/Product.xml"); } }
    string xmlData = "Xml content:";

}
