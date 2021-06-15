using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameTest : MonoBehaviour
{

    void Start()
    {   
        UIManager.GetInstance().UIHideAllThenShow("UITest");
    }

}
