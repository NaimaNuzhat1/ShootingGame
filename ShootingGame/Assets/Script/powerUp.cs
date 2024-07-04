using System.Collections;
using System.Collections.Generic;

using UnityEngine;

public class powerUp : MonoBehaviour
{
    public GameObject prefab;
    public GameObject player;
    float[] positions = { -3.5f, 0, 3.5f };
    bool isSpawning = false;
    string[] tags = { "P1", "P2"};
    // Start is called before the first frame update
    void Start()
    {
        PlayerPrefs.SetString("P1", "InActive");
        PlayerPrefs.SetFloat("P2", 0.8f);
    }

    // Update is called once per frame
    void Update()
    {
        if (!isSpawning)
        {
            isSpawning = true; //Yep, we're going to spawn

            StartCoroutine(spawnPowerUp());
        }
    }
    IEnumerator spawnPowerUp()
    {
        yield return new WaitForSeconds(40);

        int index = Random.Range(0, 2);
        int position = Random.Range(0, 3);
        if (player.transform.position.x == positions[position])
        {
            position = (position + 1) % 3;
        }
        
        Instantiate(prefab, new Vector3(positions[position], 0f, -17.63f), Quaternion.Euler(0f, 180, 0f));
        prefab.tag = tags[index];
        isSpawning = false;
    }

    private void OnCollisionEnter(Collision collision)
    {
        Vector3 zero = new Vector3(0f, 0f, 0f);
        Debug.Log(gameObject.tag);
        if (collision.gameObject.CompareTag("Player")) {
            if (gameObject.CompareTag("P1"))
            {

                StartCoroutine(p1());





            }
            if (gameObject.CompareTag("P2"))
            {
                StartCoroutine(p2());


            }
            MeshRenderer mesh = gameObject.GetComponent<MeshRenderer>();
            mesh.enabled = false;

            gameObject.transform.localScale = Vector3.zero;

        }


    }

    IEnumerator p1()
    {
        
        PlayerPrefs.SetString("P1", "Active");
        GameObject[] enemy = GameObject.FindGameObjectsWithTag("Enemy");
        foreach (var  e in enemy)
        {
            Rigidbody rb = e.GetComponent<Rigidbody>();
            rb.velocity = Vector3.zero;
        }

        yield return new WaitForSeconds(5);
        PlayerPrefs.SetString("P1", "InActive");
        Debug.Log("Time Ended:"+PlayerPrefs.GetString("P1"));
        Destroy(gameObject);

    }
    IEnumerator p2()
    {

        PlayerPrefs.SetFloat("P2", 0.3f);

        yield return new WaitForSeconds(5);
        PlayerPrefs.SetFloat("P2", 0.8f);
        Debug.Log(PlayerPrefs.GetString("P2"));
        Destroy(gameObject);

    }
}
