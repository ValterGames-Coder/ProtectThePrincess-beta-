using UnityEngine;

public class QuitManager : MonoBehaviour
{
    public static QuitManager instance { get; private set; }
    [SerializeField] private GameObject _quitPanel;
    
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            _quitPanel.SetActive(true);
            Time.timeScale = 0;
        }
    }
    
    public void YesQuit() => Application.Quit();
    public void NoQuit() => Time.timeScale = 1;
}
