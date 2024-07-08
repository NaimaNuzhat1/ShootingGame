
using System;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms.Impl;
using UnityEngine.UI;
public class ButtonScript : MonoBehaviour
{


    public GameObject MainMenu;
    public GameObject GameOverWindow;


    public Button autoButton;
    public Button manualButton;

    public TMP_Text HighScore;
    public TMP_Text Score;

    // Start is called before the first frame update
    private void Start()
    {
        HighScore.text = PlayerPrefs.GetString("HighScore", "0");

    }
    void Update()
    {
        string Mode = PlayerPrefs.GetString("Mode","Manual");

        if (Mode == "Auto")
        {

            autoButton.image.enabled = true;
            manualButton.image.enabled = false;
        }
        if (Mode == "Manual")
        {
            autoButton.image.enabled = false;
            manualButton.image.enabled = true;
        }
        int result = Int32.Parse(Score.text);
        int high = Int32.Parse(HighScore.text);
        if (result > high)
        {
            PlayerPrefs.SetString("HighScore", Score.text);

        }




        
    }
    
    public void onPlayClicked()
    {
        MainMenu.SetActive(false);
    }

    public void onRetryClick()
    {
        GameOverWindow.gameObject.SetActive(false);

        SceneManager.LoadScene("Game");
    }
    public void onQuitClicked()
    {
        Application.Quit();
    }

    public void manualClicked()
    {
        Debug.Log("Manuak Clicked");
        PlayerPrefs.SetString("Mode", "Manual");

    }
    public void autoClicked()
    {

        PlayerPrefs.SetString("Mode", "Auto");

    }

    public void onContinueClicked()
    {
        SceneManager.LoadScene("game");
    }
}
