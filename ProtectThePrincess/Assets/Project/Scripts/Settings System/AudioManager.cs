using UnityEngine;
using TMPro;

public class AudioManager : MonoBehaviour
{
    [SerializeField] private TMP_Text _soundText;
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
        if (!_muted) _soundText.text = "On";
        else _soundText.text = "Off";
        AudioListener.pause = _muted;
    }
    public void Click()
    {
        _muted = !_muted;
        AudioListener.pause = _muted;
        PlayerPrefs.SetInt("Muted", _muted ? 1 : 0);
    }
}
