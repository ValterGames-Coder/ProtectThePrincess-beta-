using UnityEngine;
using UnityEngine.SceneManagement;

public class TransitionsManager : MonoBehaviour
{
    [HideInInspector] public bool pause;
    private void Start()
    {
        Time.timeScale = 1; // Время идёт
    }

    public void Pause() // Пауза
    {
        Time.timeScale = 0; // Время стоит
        pause = true;
    }
    
    public void Play() // Не пауза
    {
        Time.timeScale = 1; // Время идёт
        pause = false;
    }

    public void Quit() // Выход
    {
        
    }
}
