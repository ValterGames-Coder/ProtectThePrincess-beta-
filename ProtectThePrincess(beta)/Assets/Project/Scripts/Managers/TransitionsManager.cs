using UnityEngine;
using UnityEngine.SceneManagement;

public class TransitionsManager : MonoBehaviour
{
    [HideInInspector] public bool pause;
    private bool _openSettings;
    public GameObject panel;
    private TransitionsManager _instance;
    private void Start()
    {
        if (_instance == null) _instance = this;
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
    
    public void Settings(){
    	_openSettings = !_openSettings;
    	panel.SetActive(_openSettings);
    }
    
}
