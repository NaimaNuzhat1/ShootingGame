using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;
using UnityEngine.UI;

public class Boss : MonoBehaviour
{
    // Start is called before the first frame update
    Rigidbody rb;
    public Slider slider;
    public GameObject hitPrefab;
    GameObject sliderObj;
    GameObject healthbar;
    Canvas canvas;
    Vector3 position;
    float moveSpeed = 3f;
    public GameObject bullet;
    GameObject PlayerScore;
    public TMP_Text score;
    int count;
    Animator animator;
    public GameObject deadBoss;
    bool wait = false;
    public GameObject GameWinObj;
    private void OnEnable()
    {
        animator = GetComponent<Animator>();
        rb = gameObject.GetComponent<Rigidbody>();
        healthbar = gameObject.transform.Find("Healthbar").gameObject;
        canvas = healthbar.GetComponent<Canvas>();
        slider = canvas.GetComponentInChildren<Slider>();
        canvas.worldCamera = Camera.main;
        PlayerScore = GameObject.Find("Score");
        score = PlayerScore.GetComponent<TMP_Text>();
        count=Int32.Parse(score.text);




    }
    private void FixedUpdate()
    {
        string p1Active = PlayerPrefs.GetString("P1", "InActive");

        if (p1Active == "InActive")
        {
            rb.velocity = transform.right * moveSpeed;

        }
        shootClick();
        position = rb.position;
    }


    // Update is called once per frame
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Bullet") && collision.gameObject.name!="EnemyBullet(Clone)")
        {
            slider.value -= 1;
            count++;
            score.text = count.ToString();
        }
        if (slider.value <= 0)
        {
            //gameObject.SetActive(false);
            Instantiate(deadBoss, position, Quaternion.Euler(0f, 90f, 0f));

            PlayerPrefs.SetString("Won", "true");

            GameObject[] objs = GameObject.FindGameObjectsWithTag("Finish");

            foreach (var obj in objs)
            {
                obj.SetActive(false);
            }

            Destroy(gameObject);
        }


        if (collision.gameObject.CompareTag("Finish"))
        {

            Destroy(gameObject);

        }

    }

    public void shootClick()
    {
        GameObject[] bullets = GameObject.FindGameObjectsWithTag("Bullet");
        int bulletCount = bullets.Length;

        if (bulletCount <= 5 && wait == false)
        {

            StartCoroutine(shoot());
        }
    }
    IEnumerator shoot()
    {
        wait = true;
        yield return new WaitForSeconds(1.25f);

        Instantiate(bullet, new Vector3(position.x, 1.56363797f, position.z),Quaternion.Euler(0f,180f,0f));

        wait = false;
    }

}
