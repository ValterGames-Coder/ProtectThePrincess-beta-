using System;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TransitionsManager : MonoBehaviour
{
    private void Start()
    {
        Time.timeScale = 1;
    }

    public void LoadScene(int index)
    {
        SceneManager.LoadScene(index);
    }

    public void Pause()
    {
        Time.timeScale = 0;
    }
    
    public void Play()
    {
        Time.timeScale = 1;
    }

    public void Quit()
    {
        
    }
}
