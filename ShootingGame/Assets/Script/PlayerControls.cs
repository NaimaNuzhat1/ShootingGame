using UnityEngine;

using UnityEngine.UI;


public class PlayerControls : MonoBehaviour
{
    public Rigidbody rb;
    Vector3 position;

    public Slider slider;

    public GameObject healthbar;
    GameObject PlayerScore;
    public Canvas canvas;

    private Vector2 startTouchPosition;
    private Vector2 endTouchPosition;
    

    // Start is called before the first frame update
    void Start()
    {
        rb = gameObject.GetComponent<Rigidbody>();
        healthbar = gameObject.transform.Find("Healthbar").gameObject;
        canvas = healthbar.GetComponent<Canvas>();
        slider = canvas.GetComponentInChildren<Slider>();

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
        //controls
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
        if (position.x >= -3.5 && position.x <= 3.5)
        {
            //Debug.Log(position.x);
            rb.MovePosition(position);

        }
        else
        {
            if (position.x >= 3.5)
            {
                position.x = 3.5f;
            }
            else if (position.x <= -3.5)
            {
                position.x = -3.5f;
            }
        }
    }
    private void OnCollisionEnter(Collision collision)
    {

        if (collision.gameObject.name=="EnemyBullet(Clone)" )
        {
            slider.value -= 1;

        }

        if (slider.value <= 0)
        {
            PlayerPrefs.SetString("GameOver", "true");
        }

    }

}