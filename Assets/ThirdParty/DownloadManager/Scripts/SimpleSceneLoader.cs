using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SimpleSceneLoader : MonoBehaviour {

    public void LoadScene(int sceneToLoad){
        SceneManager.LoadScene(sceneToLoad);
    }
}
