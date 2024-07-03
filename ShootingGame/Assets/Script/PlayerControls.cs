using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.InputSystem;


public class PlayerControls : MonoBehaviour
{
    Rigidbody rb;
    Vector3 position;
    public GameObject bullet;
    int bulletCount = 0;

    private Vector2 startTouchPosition;
    private Vector2 endTouchPosition;

    // Start is called before the first frame update
    void Start()
    {
        rb = this.gameObject.GetComponent<Rigidbody>();
        position = new Vector3(0f, 0.779999971f, -17.63f);
        rb.MovePosition(position);
    }

    // Update is called once per frame
    //void Update()
    //{
    //    position = rb.position;
    //    GameObject[] bullets = GameObject.FindGameObjectsWithTag("Bullet");
    //    bulletCount = bullets.Length;

    //    if (Input.GetKeyDown(KeyCode.D) && position.x < 3.5)
    //    {
    //        position.x += 3.5f;


    //    }
    //    if (Input.GetKeyDown(KeyCode.A) && position.x > -3.5)
    //    {
    //        position.x += 3.5f;


    //    }
    //    if(Input.GetKeyDown(KeyCode.Space) && bulletCount<5)
    //    {
    //        Instantiate(bullet, new Vector3(position.x, 1.56363797f, -17.63f),Quaternion.identity);
    //    }
    //    rb.MovePosition(position);
    //}

    private void Update()
    {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == UnityEngine.TouchPhase.Began)
        {
            startTouchPosition = Input.GetTouch(0).position;
        }

        if (Input.touchCount > 0 && Input.GetTouch(0).phase == UnityEngine.TouchPhase.Ended)
        {
            endTouchPosition = Input.GetTouch(0).position;

            Vector2 inputVector = endTouchPosition - startTouchPosition;
            if (Mathf.Abs(inputVector.x) > Mathf.Abs(inputVector.y))
            {
                if (inputVector.x > 0 )
                {
                    position.x += 3.5f;
                }
                else
                {
                    position.x -= 3.5f;
                }
            }

        }



    }
    private void LateUpdate()
    {
        if (position.x >= -4 && position.x <= 4)
        {
            Debug.Log(position.x);
            rb.MovePosition(position);

        }
    }
    public void shootClick()
    {
        Instantiate(bullet, new Vector3(position.x, 1.56363797f, -17.63f), Quaternion.identity);
    }


}