using UnityEngine;

public class FirstEnteredManager : MonoBehaviour
{
    [SerializeField] private GameObject _panel;
    void Start()
    {
        if (!PlayerPrefs.HasKey("FirstEntered") || PlayerPrefs.GetString("FirstEntered") != "true")
        {
            Invoke("OpenPanel", 3.5f);
        }
    }

    private void OpenPanel()
    {
        Time.timeScale = 0f;
        _panel.SetActive(true);
    }

    public void ClosePanel()
    {
        _panel.SetActive(false);
        Time.timeScale = 1f;
        PlayerPrefs.SetString("FirstEntered", "true");
    }
}
