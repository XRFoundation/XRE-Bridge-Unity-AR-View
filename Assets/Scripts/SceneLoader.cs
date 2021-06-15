using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour {

    void Start()
    {
        Invoke("LateStart", .1f);
    }
    void LateStart()
    {
        StartCoroutine(Load());
    }
    IEnumerator Load()
    {
        yield return null;
        AsyncOperation async = SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1, LoadSceneMode.Single);
        yield return async;
        yield return null;
        async.allowSceneActivation = true;

    }

}
