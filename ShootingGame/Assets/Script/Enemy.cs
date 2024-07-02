using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Enemy : MonoBehaviour
{
    // Start is called before the first frame update
    Rigidbody rb;
    public Slider slider;
    GameObject sliderObj;
    GameObject healthbar;
    GameObject PlayerScore;
    Canvas canvas;
    float moveSpeed = 3f;
    public TMP_Text score;
    int count = 0;
    private void OnEnable()
    {
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
        rb.velocity = transform.forward*moveSpeed;
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
            Destroy(gameObject);
            count++;
            score.text = count.ToString();
        }
        if(collision.gameObject.CompareTag("Finish"))
        {
            Destroy(gameObject);
        }


    }
}
