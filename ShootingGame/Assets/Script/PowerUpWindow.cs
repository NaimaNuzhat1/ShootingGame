using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PowerUpWindow : MonoBehaviour
{
    // Start is called before the first frame update
    TMP_Text powerUpText;
    public GameObject powerUpWindow;
    bool isSpawning = false;
    void Start()
    {
        powerUpText = powerUpWindow.GetComponentInChildren<TMP_Text>();
    }

    // Update is called once per frame
    void Update()
    {
        string p1 = PlayerPrefs.GetString("P1");
        if (p1 == "Active" && !isSpawning)
        {
            powerUpText.text = "Freeze Enemy for 5 seconds";
            isSpawning = true; 

            StartCoroutine(powerUpWin());
        }
        float p2 = PlayerPrefs.GetFloat("P2");
        if (p2==0.3f&& !isSpawning)
        {
            powerUpText.text = "Shoot Speed increased for 5 Seconds!";
            isSpawning = true;

            StartCoroutine(powerUpWin());
        }
    }
    IEnumerator powerUpWin()
    {
        powerUpWindow.SetActive(true);
        yield return new WaitForSeconds(1f);
        powerUpWindow.SetActive(false);
        yield return new WaitForSeconds(5f);
        isSpawning = false;
    }
}
