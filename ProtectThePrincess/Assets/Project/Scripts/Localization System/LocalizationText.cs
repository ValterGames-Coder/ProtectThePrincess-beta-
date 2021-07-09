using UnityEngine;
using TMPro;

public class LocalizationText : MonoBehaviour
{
    public string[] texts;
    private string _langunge;
    [HideInInspector] public int index;
    private LocalizationManager _lm;

    void Start()
    {
        _lm = FindObjectOfType<LocalizationManager>();
        _langunge = PlayerPrefs.GetString("Langunge");
        for (int i = 0; i < _lm.langunges.Length; i++)
        {
            if(_langunge == _lm.langunges[i])
            {
                GetComponent<TMP_Text>().text = texts[i];
                index = i;
            }
        }
    }
}
