using UnityEngine;
using TMPro;

public class LocalizationText : MonoBehaviour
{
    [SerializeField] private string[] texts;
    private string _langunge;
    private LocalizationManager _lm;

    void Start()
    {
        _lm = FindObjectOfType<LocalizationManager>();
        _langunge = PlayerPrefs.GetString("Laungunge");
        for (int i = 0; i < _lm.langunges.Length; i++)
        {
            if(_langunge == _lm.langunges[i])
            {
                GetComponentInChildren<TMP_Text>().text = texts[i];
            }
        }
    }
}
