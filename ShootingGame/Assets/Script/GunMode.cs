using Microsoft.Unity.VisualStudio.Editor;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GunMode : MonoBehaviour
{
    string Mode;
    GameObject autoButton;
    Button ABackground;  
    Button MBackground;
    GameObject manualButton;
    // Start is called before the first frame update
    void Start()
    {
        autoButton = gameObject.transform.Find("AutoButton").gameObject;
        manualButton = gameObject.transform.Find("ManualButton").gameObject;
        ABackground = autoButton.GetComponent<Button>();
        MBackground = manualButton.GetComponent<Button>();
        //PlayerPrefs.SetString("Mode", "Auto");

    }

    // Update is called once per frame
    void Update()
    {
        Mode = PlayerPrefs.GetString("Mode", "Manual");
        if(Mode=="Auto")
        {
            ABackground.image.enabled = true;
            ABackground.image.enabled = false;
        }
        if (Mode == "Manual")
        {
            ABackground.image.enabled = false;
            ABackground.image.enabled = true;
        }
    }

}
