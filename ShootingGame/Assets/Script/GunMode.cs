
using System.Collections;

using UnityEngine;
using UnityEngine.UI;




public class GunMode : MonoBehaviour
{
    public GameObject bullet;
    public GameObject muzzlePrefab;
    public GameObject tank;
    public Button shootButton;

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
        GameObject[] bullets = GameObject.FindGameObjectsWithTag("Bullet");
        if (bullets!=null)
        {
            bulletCount = bullets.Length;
        }
        else
        {
            bulletCount = 0;
        }

        if (bulletCount <= 5 && wait == false)
            {
                
                StartCoroutine(shoot());
            }
    }
    IEnumerator shoot()
    {

        float speed = PlayerPrefs.GetFloat("P2");

        wait = true;
        if(bulletCount==0 || Mode=="Manual")
        {
            yield return new WaitForSeconds(0.1f);
        }
        else
        {
            yield return new WaitForSeconds(speed);
        }


        Instantiate(bullet, new Vector3(position.x, 1.56363797f, -17.63f), Quaternion.identity);
        Instantiate(muzzlePrefab, new Vector3(position.x, 1.56363797f, -17f), Quaternion.identity);
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
