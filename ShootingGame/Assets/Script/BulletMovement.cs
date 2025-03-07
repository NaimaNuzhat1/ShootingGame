using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletMovement : MonoBehaviour
{
    // Start is called before the first frame update
    Rigidbody rb;
    float force = 1000f;
    private void OnEnable()
    {
        rb = GetComponent<Rigidbody>();
        rb.AddForce(transform.forward * force);
    }

    // Update is called once per frame
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Boundry") || collision.gameObject.CompareTag("Bullet"))
        {
            Destroy(this.gameObject);
        }

        if (collision.gameObject.CompareTag("Enemy") && this.name!="EnemyBullet(Clone)")
        {
            Destroy(this.gameObject);
        }



    }
}