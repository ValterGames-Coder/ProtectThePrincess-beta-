using UnityEngine;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    [SerializeField] private Image icon;
    public Sprite on, off;
    private bool _muted;

    void Start()
    {
        if (!PlayerPrefs.HasKey("Muted"))
        {
            PlayerPrefs.SetInt("Muted", 0);
            _muted = PlayerPrefs.GetInt("Muted") == 1;
        }
        else
        {
            _muted = PlayerPrefs.GetInt("Muted") == 1;
        }
    }

    void Update()
    {
        if (!_muted) icon.sprite = on;
        else icon.sprite = off;
        AudioListener.pause = _muted;
    }
    public void Click()
    {
        _muted = !_muted;
        AudioListener.pause = _muted;
        PlayerPrefs.SetInt("Muted", _muted ? 1 : 0);
    }
}
