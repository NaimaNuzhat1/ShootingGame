using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class WaveCounter : MonoBehaviour
{
    public GameObject waveWin;
    public GameObject startWindow;
    public TMP_Text score;
    public TMP_Text waveCounter;
    bool isActive = false;
    bool isEnabled = false;

    // Start is called before the first frame update
    private void OnEnable()
    {
        isEnabled = true;

    }


    // Update is called once per frame
    void Update()
    {
        int result = Int32.Parse(score.text);
        if(result % 20 == 0 && isActive==false && isEnabled)
        {
            isActive = true;
            int counter = Int32.Parse(waveCounter.text);
            counter++;
            waveCounter.text = counter.ToString();
            StartCoroutine(winSet(waveWin));
            
        }
        else if(result % 20 != 0)
        {
            isActive = false;
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
