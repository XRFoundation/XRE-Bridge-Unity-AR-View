using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class SettingsMenuURP : BaseUI
{
    // Start is called before the first frame update

    public Text txtName;
    public Text txtEmail;
        
    public void OnClickGotoENFTportal()
    {
        Application.OpenURL("");
    }
}
