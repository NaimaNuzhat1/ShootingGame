using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms.Impl;

public class WaveCounter : MonoBehaviour
{
    public GameObject waveWin;
    public GameObject startWindow;
    public TMP_Text score;
    public TMP_Text waveCounter;
    bool isActive = false;
    bool isEnabled = false;
    float moveSpeed = 3f;

    // Start is called before the first frame update
    private void OnEnable()
    {
        isEnabled = true;

    }


    // Update is called once per frame
    void Update()
    {
        int result = Int32.Parse(score.text)/20 +1;
        int counter = Int32.Parse(waveCounter.text);
        if (result >counter && !isActive)
        {
            PlayerPrefs.SetString("Wave", "true");
            isActive = true;
            moveSpeed += 0.25f;
            PlayerPrefs.SetFloat("MoveSpeed", moveSpeed);
            counter++;
            waveCounter.text = counter.ToString();
            StartCoroutine(winSet(waveWin));
            
        }
        else if (result <= counter)
        {
            PlayerPrefs.SetString("Wave", "false");
            isActive = false;
        }
        if(counter==5)
        { 
            PlayerPrefs.SetString("Boss","true");
            PlayerPrefs.SetString("Score", score.text);

            SceneManager.LoadScene("BossLevel");

        }

       
    }
    IEnumerator winSet(GameObject window)
    {
        window.SetActive(true);
        yield return new WaitForSeconds(1);
        window.SetActive(false);
        isActive = true;
    }
}
