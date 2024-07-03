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


    // Start is called before the first frame update
    void Start()
    {
        string score = PlayerPrefs.GetString("highScore", "0");

        highscore.text = score;

    }

    // Update is called once per frame
    void Update()
    {

    }
    public void playClick()
    {
        mainMenu.SetActive(false);
        instantiateEnemy.SetActive(true);
        

    }
}
