using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Collections.Generic;
using TMPro;
using System;
using UnityEngine.SceneManagement;
using Unity.VisualScripting;


public class gameOver : MonoBehaviour
{
    public GameObject gameOverWin;
    public TMP_Text score;
    public TMP_Text Hscore;
    public GameObject instantiateEnemy;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Enemy"))
        {
            gameOverWin.SetActive(true);
            gameOverWin.GetComponent<AudioSource>().Play();

            instantiateEnemy.SetActive(false);
            int result = Int32.Parse(score.text);
            int high = Int32.Parse(Hscore.text);
            if (result > high)
            {
                PlayerPrefs.SetString("highScore", score.text);
            }
            GameObject[] enemiesActive = GameObject.FindGameObjectsWithTag("Enemy");
            foreach (GameObject enemy in enemiesActive)
            {
                Destroy(enemy);
            }

        }
        

    }
    public void retryClick()
    {
        gameOverWin.gameObject.SetActive(false);


        SceneManager.LoadScene("Game");
    }
}
