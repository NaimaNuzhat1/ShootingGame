using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InstantiateEnemy : MonoBehaviour
{
    public GameObject[] enemy;
    float[] positions = { -3.5f, 0, 3.5f };
    bool isSpawning = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (!isSpawning)
        {
            isSpawning = true; //Yep, we're going to spawn

            StartCoroutine(spawnEnemy());
        }
    }
    IEnumerator spawnEnemy()
    {
        yield return new WaitForSeconds(3);
        int index = Random.Range(0, 3);
        int position = Random.Range(0, 3);
        Instantiate(enemy[index], new Vector3(positions[position], 0f, 16.3f),Quaternion.Euler(0f, 180, 0f));
        isSpawning = false;
    }
}
