using UnityEngine;

public class FirstEnteredManager : MonoBehaviour
{
    [SerializeField] private GameObject _panel, _text1, _text2;
    void Start()
    {
        if (!PlayerPrefs.HasKey("FirstEntered") || PlayerPrefs.GetString("FirstEntered") != "true")
        {
            _text1.SetActive(false);
            _text2.SetActive(false);
            Invoke("OpenPanel", 0.5f);
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
        _text1.SetActive(true);
        _text2.SetActive(true);
        Time.timeScale = 1f;
        PlayerPrefs.SetString("FirstEntered", "true");
    }
}
