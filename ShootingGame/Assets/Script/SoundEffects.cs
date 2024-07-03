using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundEffects : MonoBehaviour
{
    public AudioSource src;
    public AudioClip gameStart, shoot, gameOver;
    // Start is called before the first frame update
    public void onPlay()
    {
        src.clip = gameStart;
        src.Play();
    }
    public void onGameOver()
    {
        src.clip = gameOver;
        src.Play();
    }
    public void onShoot()
    {
        src.clip = shoot;
        src.Play();
    }
}
