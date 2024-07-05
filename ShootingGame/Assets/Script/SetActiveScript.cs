
using System.Collections;

using UnityEngine;
using UnityEngine.UI;

public class SetActiveScript : MonoBehaviour
{
    bool isActive = false;
    public GameObject waveWin;
    // Start is called before the first frame update
    private void OnEnable()
    {
        if(!isActive)

        {
            StartCoroutine(winSet(gameObject));
        }
        isActive = true;
    }


    IEnumerator winSet(GameObject window)
    {
        window.SetActive(true);
        yield return new WaitForSeconds(1);
        window.SetActive(false);
        waveWin.SetActive(true);


    }
}
