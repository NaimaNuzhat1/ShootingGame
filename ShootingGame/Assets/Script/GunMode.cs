
using System.Collections;

using UnityEngine;




public class GunMode : MonoBehaviour
{
    public GameObject bullet;
    public GameObject muzzlePrefab;
    public GameObject tank;

    Rigidbody tankRB;
    GameObject gunMode;

    Vector3 position;
    string Mode;
    bool wait;
    bool auto;
    int bulletCount = 0;

    // Start is called before the first frame update
    void Start()
    {
        tankRB = tank.GetComponent<Rigidbody>();
        //PlayerPrefs.SetString("Mode", "Auto");
        wait = false;
    }

    // Update is called once per frame
    void Update()
    {
        Mode = PlayerPrefs.GetString("Mode", "Manual");
        if (Mode == "Auto")
        {
            auto = true;
        }
        if (Mode == "Manual")
        {
            auto = false;
        }
        position = tankRB.position;



    }

    public  void shootClick()
    {

        StartCoroutine(shoot());

    }
    IEnumerator shoot()
    {
        float speed = PlayerPrefs.GetFloat("P2");
        Debug.Log(speed);
        wait = true;
        yield return new WaitForSeconds(speed);

        
        if (bulletCount <= 5)
        {
            Instantiate(bullet, new Vector3(position.x, 1.56363797f, -17.63f), Quaternion.identity);
            Instantiate(muzzlePrefab, new Vector3(position.x, 1.56363797f, -17f), Quaternion.identity);

        }
        wait = false;
    }
    public void manualClicked()
    {
        PlayerPrefs.SetString("Mode", "Manual");
        auto = false;
    }
    public void autoClicked()
    {
        PlayerPrefs.SetString("Mode", "Auto");
        auto = true;
    }

    private void OnTriggerStay(Collider other)
    {

        if (auto == true && other.gameObject.CompareTag("Enemy"))
        {

            if (wait == false)
            {
                shootClick();
            }
        }
    }
}
