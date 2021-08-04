using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class BaseUIURP : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnClickLogout()
    {

    }

    public void OnClickBack(string nextScene)
    {
        SceneManager.LoadScene(nextScene);
    }
}
