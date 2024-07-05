using System;
using System.Collections;

using TMPro;
using UnityEngine;

public class InstantiateEnemy : MonoBehaviour
{
    public GameObject[] enemy;
    float[] positions = { -3.5f, 0, 3.5f };
    bool isSpawning = false;
    float waitTime=3f;
    public TMP_Text score;
    bool isActive = false;

    // Start is called before the first frame update
    void Start()
    {

    }


    // Update is called once per frame
    void Update()
    {
        int count = Int32.Parse(score.text);
        if (count % 20 == 0 && isActive == false)
        {
            isActive = true;
            waitTime -= 0.3f;
            Debug.Log(waitTime);

        }
        else if (count % 20 != 0)
        {
            isActive = false;
        }
        if (!isSpawning)
        {

            string p1 = PlayerPrefs.GetString("P1");

            if (p1 == "InActive") { 
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
        Instantiate(enemy[index], new Vector3(positions[position], 0f, 16.3f),Quaternion.Euler(0f, 180, 0f));
        isSpawning = false;
    }
}
