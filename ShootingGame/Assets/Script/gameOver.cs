using UnityEngine;
using TMPro;
using System;
using UnityEngine.SceneManagement;
using Unity.VisualScripting;


public class gameOver : MonoBehaviour
{
    public GameObject gameOverWin;
    public TMP_Text score;
    public TMP_Text Hscore;
    public GameObject player;
    public GameObject tank;
    

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(PlayerPrefs.GetString("GameOver")=="true")
        {
            onGameOver();

        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if(PlayerPrefs.GetString("Won")!="true")
       { 
            if (other.CompareTag("Enemy"))
            {
                onGameOver();
            }
        }
        

    }

    public void onGameOver()
    {
        gameOverWin.SetActive(true);
        gameOverWin.GetComponent<AudioSource>().Play();
        GameObject[] objs = GameObject.FindGameObjectsWithTag("Finish");

        foreach (var obj in objs)
        {
            obj.SetActive(false);
        }
        player.SetActive(false);
        tank.SetActive(true);


        PlayerPrefs.DeleteAll();
        PlayerPrefs.Save();
        int result = Int32.Parse(score.text);
        int high = Int32.Parse(Hscore.text);
        if (result > high)
        {
            PlayerPrefs.SetString("HighScore", score.text);
        }



        GameObject[] enemiesActive = GameObject.FindGameObjectsWithTag("Enemy");
        foreach (GameObject enemy in enemiesActive)
        {
            Destroy(enemy);

        }
    }

}
