using UnityEngine;

public class DemoBase : MonoBehaviour
{
    GameObject cube;


    protected void InitCube(Texture2D texture)
    {
        DestroyCube();//Delete Old Cube

        cube = GameObject.CreatePrimitive(PrimitiveType.Quad);
        cube.GetComponent<Renderer>().material.shader = Shader.Find("Unlit/Texture");//("UI/Default");
        cube.GetComponent<Renderer>().material.mainTexture = texture;//Use the Texture
        cube.transform.localScale = new Vector3((float)texture.width / (float)texture.height, 1, 1);
    }

    protected void InitSkewCube(Texture2D texture)
    {
        DestroyCube();

        cube = GameObject.CreatePrimitive(PrimitiveType.Quad);
        cube.transform.eulerAngles = new Vector3(0, 40, 0);
        cube.GetComponent<Renderer>().material.shader = Shader.Find("Unlit/Texture");
        cube.GetComponent<Renderer>().material.mainTexture = texture;
    }

    protected void DestroyCube()
    {
        if (cube != null)
        {
            Destroy(cube);

            //Collect unuse menory
            Resources.UnloadUnusedAssets();
            System.GC.Collect();
        }
    }

}
