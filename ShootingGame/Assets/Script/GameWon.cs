using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameWon : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject WinWindow;
    public GameObject BackgorundMusic;
    public AudioClip audio;
    public TMP_Text Score;
    public TMP_Text HighScore;
    private void OnEnable()
    {

        Score.text = PlayerPrefs.GetString("Score", "0");

    }

    // Update is called once per frame
    private void LateUpdate()
    {
        if (PlayerPrefs.GetString("Won") == "true")
        {
            WinWindow.SetActive(true);
            AudioSource src = BackgorundMusic.GetComponent<AudioSource>();
            src.clip = audio;
            src.Play();
            PlayerPrefs.DeleteAll();
            PlayerPrefs.Save();
            int result = Int32.Parse(Score.text);
            int high = Int32.Parse(HighScore.text);
            if (result > high)
            {
                PlayerPrefs.SetString("HighScore", Score.text);
                }
            GameObject[] enemiesActive = GameObject.FindGameObjectsWithTag("Enemy");
            foreach (GameObject enemy in enemiesActive)
            {
                Destroy(enemy);

            }
        }
    }
}
