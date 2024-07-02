using UnityEngine;

public class PlayerControls : MonoBehaviour
{
    Rigidbody rb;
    Vector3 position;
    public GameObject bullet;
    int bulletCount = 0;

    // Start is called before the first frame update
    void Start()
    {
        rb = this.gameObject.GetComponent<Rigidbody>();
        position = new Vector3(0f, 0.779999971f, -17.63f);
        rb.MovePosition(position);
    }

    // Update is called once per frame
    void Update()
    {
        position = rb.position;
        GameObject[] bullets = GameObject.FindGameObjectsWithTag("Bullet");
        bulletCount = bullets.Length;

        if (Input.GetKeyDown(KeyCode.D) && position.x < 3.5)
        {
            position.x += 3.5f;


        }
        if (Input.GetKeyDown(KeyCode.A) && position.x > -3.5)
        {
            position.x -= 3.5f;


        }
        if(Input.GetKeyDown(KeyCode.Space) && bulletCount<5)
        {
            Instantiate(bullet, new Vector3(position.x, 1.56363797f, -17.63f),Quaternion.identity);
        }
        rb.MovePosition(position);
    }


}