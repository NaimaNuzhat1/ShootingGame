
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class ButtonScript : MonoBehaviour
{


    public GameObject MainMenu;
    public GameObject GameOverWindow;


    public Button autoButton;
    public Button manualButton;


    // Start is called before the first frame update
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

}
