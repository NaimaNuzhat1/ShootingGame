using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fire : MonoBehaviour
{
    // Start is called before the first frame update
    public float lifeTime = 2.0f;

    void Awake()
    {
        Destroy(this.gameObject, lifeTime);
    }
}
