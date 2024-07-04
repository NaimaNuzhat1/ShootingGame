using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


public class Enemy : MonoBehaviour
{
    // Start is called before the first frame update
    Rigidbody rb;
    public Slider slider;
    public GameObject hitPrefab;
    GameObject sliderObj;
    GameObject healthbar;
    GameObject PlayerScore;
    Canvas canvas;
    Vector3 position;
    float moveSpeed = 3f;
    public TMP_Text score;
    int count = 0;
    Animator animator;
    private void OnEnable()
    {
        animator = GetComponent<Animator>();
        rb = gameObject.GetComponent<Rigidbody>();
        healthbar = gameObject.transform.Find("Healthbar").gameObject;
        canvas = healthbar.GetComponent<Canvas>();
        slider = canvas.GetComponentInChildren<Slider>();
        canvas.worldCamera = Camera.main;
        PlayerScore= GameObject.Find("Score");
        score = PlayerScore.GetComponent<TMP_Text>();

    }
    private void FixedUpdate()
    {
        count = Int32.Parse(score.text);
        string p1Active = PlayerPrefs.GetString("P1", "InActive");
        if(p1Active=="InActive")
        {
            rb.velocity = transform.forward * moveSpeed;
            
        }
        position = rb.position;
    }


    // Update is called once per frame
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Bullet"))
        {
            slider.value -= 1;

        }
        if (slider.value <= 0)
        {
            Instantiate(hitPrefab, position, Quaternion.identity);
            StartCoroutine(animate());
            count++;
            score.text = count.ToString();
        }
        if (collision.gameObject.CompareTag("Finish"))
        {

            Destroy(gameObject);

        }
    }
        IEnumerator animate()
        {
            if (animator)
            {
                animator.SetBool("isDead", true);


            }
            yield return new WaitForSeconds(1);
            Destroy(gameObject);

    }
    
}
