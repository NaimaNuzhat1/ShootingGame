using UnityEngine;
using TMPro;
using System;
using UnityEngine.SceneManagement;


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
        
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Enemy"))
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

}
