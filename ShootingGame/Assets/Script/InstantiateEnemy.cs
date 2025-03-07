using System;
using System.Collections;

using TMPro;
using UnityEngine;
using UnityEngine.UIElements;

public class InstantiateEnemy : MonoBehaviour
{
    public GameObject[] enemy;
    float[] positions = { -3.5f, 0, 3.5f };
    bool isSpawning = false;
    float waitTime = 2.8f;
    public TMP_Text score;
    bool isActive = false;
    public GameObject boss;
    bool spawBoss = false;


    // Start is called before the first frame update
    void Start()
    {

    }


    // Update is called once per frame
    void Update()
    {
        string check = PlayerPrefs.GetString("Boss");
        string wave = PlayerPrefs.GetString("Wave");
        if (!check.Equals("true"))
            {

            if (wave == "true" && isActive == false)
            {
                isActive = true;
                waitTime -= 0.3f;

            }
            else if(wave == "false")
            {
                isActive = false;
            }
            if (!isSpawning)
            {

                string p1 = PlayerPrefs.GetString("P1");

                if (p1 == "InActive")
                {
                    isSpawning = true; //Yep, we're going to spawn

                    StartCoroutine(spawnEnemy());
                }
            }
        }
        else
        {
            waitTime = 2.2f;
            if (!spawBoss)
            {
                StartCoroutine(instantiateBoss());
                spawBoss = true;
           }

        }
        if (!isSpawning)
        {

          string p1 = PlayerPrefs.GetString("P1");

            if (p1 == "InActive")
            {
               isSpawning = true; //Yep, we're going to spawn

                StartCoroutine(spawnEnemy());
            }
        }


    }
    IEnumerator spawnEnemy()
    {
        yield return new WaitForSeconds(waitTime);
        int index = UnityEngine.Random.Range(0, 3);
        int position = UnityEngine.Random.Range(0, 3);
        Instantiate(enemy[index], new Vector3(positions[position], 0f, 16.3f), Quaternion.Euler(0f, 180, 0f));
        isSpawning = false;
    }
    IEnumerator instantiateBoss()
    {
        int position = UnityEngine.Random.Range(0, 3);
        yield return new WaitForSeconds(3);
        Instantiate(boss, new Vector3(positions[position], 1.05f, 16.3f), Quaternion.Euler(0f, 90f, 0f));

       
    }
}