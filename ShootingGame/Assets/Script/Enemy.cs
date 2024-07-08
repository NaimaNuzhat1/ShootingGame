using JetBrains.Annotations;
using System;
using System.Collections;
using System.Reflection;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


public class Enemy : MonoBehaviour
{
    // Start is called before the first frame update
    Rigidbody rb;
    public Slider slider;
    public GameObject hitPrefab;

    public GameObject healthbar;
    GameObject PlayerScore;
    public Canvas canvas;
    Vector3 position;
    float moveSpeed = 3f;
    public TMP_Text score;
    int count = 0;
    bool isActive = false;
    Animator animator;
    public GameObject brokenTank;
    bool isHit = false;
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



    }
    private void FixedUpdate()
    {
        count = Int32.Parse(score.text);
        string p1Active = PlayerPrefs.GetString("P1", "InActive");
        if (count % 20 == 0 && isActive == false)
        {
            isActive = true;
            moveSpeed += 0.25f;


        }
        else if (count % 20 != 0)
        {
            isActive = false;
        }
        if (p1Active == "InActive")
        {
            rb.velocity = transform.forward * moveSpeed;

        }

        position = rb.position;
    }


    // Update is called once per frame
    private void OnCollisionEnter(Collision collision)
    {
        string boss = PlayerPrefs.GetString("Boss");
        if (collision.gameObject.CompareTag("Bullet"))
        {
            slider.value -= 1;


        }

        if (slider.value <= 0)
        {
           if (isHit == false){
            Instantiate(hitPrefab, position, Quaternion.identity);
            StartCoroutine(animateDeath());

            }
        }
       

        if (collision.gameObject.CompareTag("Finish"))
        {

            Destroy(gameObject);

        }
        
    }
    IEnumerator animateDeath()
    {
        isHit = true;
        count++;

        if (animator)
        {
            
            animator.SetBool("isDead", true);


        }
        else
        {
            count += 2;
            score.text = count.ToString();
            gameObject.SetActive(false);

            Instantiate(brokenTank, position, Quaternion.Euler(0f, 180, 0f));

        }
        score.text = count.ToString();

        yield return new WaitForSeconds(0.5f);
       
        Destroy(gameObject);

        isHit = false;

    }


}