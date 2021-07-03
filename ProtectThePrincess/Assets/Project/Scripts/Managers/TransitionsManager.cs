using UnityEngine;
using UnityEngine.SceneManagement;

public class TransitionsManager : MonoBehaviour
{
    private void Start()
    {
        Time.timeScale = 1; // Время идёт
    }

    public void LoadScene(int index) // Загрузка сцены 
    {
        SceneManager.LoadScene(index); 
    }

    public void Pause() // Пауза
    {
        Time.timeScale = 0; // Время стоит
    }
    
    public void Play() // Не пауза
    {
        Time.timeScale = 1; // Время идёт
    }

    public void Quit() // Выход
    {
        
    }
}
