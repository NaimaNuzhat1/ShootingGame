using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class MenuScript : MonoBehaviour
{
    public GameObject mainMenu;
    public GameObject instantiateEnemy;
    public TMP_Text highscore;

    string Mode;
    GameObject gunMode;
    GameObject autoButton;
    Button ABackground;
    Button MBackground;
    GameObject manualButton;



    // Start is called before the first frame update
    void Start()

    {
        string score = PlayerPrefs.GetString("highScore", "0");
        highscore.text = score;

        gunMode = gameObject.transform.Find("GunMode").gameObject;
        autoButton = gunMode.transform.Find("AutoButton").gameObject;
        manualButton = gunMode.transform.Find("ManualButton").gameObject;
        ABackground = autoButton.GetComponent<Button>();
        MBackground = manualButton.GetComponent<Button>();
    }

    // Update is called once per frame
    void Update()
    {
        Mode = PlayerPrefs.GetString("Mode", "Manual");
        if (Mode == "Auto")
        {
            ABackground.image.enabled = true;
            MBackground.image.enabled = false;
        }
        if (Mode == "Manual")
        {
            ABackground.image.enabled = false;
            MBackground.image.enabled = true;
        }
    }
    public void playClick()
    {
        mainMenu.SetActive(false);
        instantiateEnemy.SetActive(true);
        

    }
}
