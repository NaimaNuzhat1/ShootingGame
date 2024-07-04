using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class WaveCounter : MonoBehaviour
{
    public GameObject waveWin;
    public TMP_Text score;
    public TMP_Text waveCounter;
    bool isActive = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        int result = Int32.Parse(score.text);
        if(result % 10 == 0 && isActive==false)
        {
            isActive = true;
            int counter = Int32.Parse(waveCounter.text);
            counter++;
            waveCounter.text = counter.ToString();
            StartCoroutine(waveWinSet());
            
        }
        else if(result % 10 != 0)
        {
            isActive = false;
        }


       
    }
    IEnumerator waveWinSet()
    {
        waveWin.SetActive(true);
        yield return new WaitForSeconds(1);
        waveWin.SetActive(false);
    }
}
