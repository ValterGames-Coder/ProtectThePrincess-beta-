using UnityEngine;
using TMPro;

[RequireComponent(typeof(TMP_Text))]
public class LocalizationText : MonoBehaviour
{
    private TMP_Text _text;
    private string key;

    private void Start()
    {
        Localize();
        LocalizationManager.OnLangungeChange += OnLangungeChange;
    }

    private void OnDestroy()
    {
        LocalizationManager.OnLangungeChange -= OnLangungeChange;
    }

    private void OnLangungeChange()
    {
        Localize();
    }

    private void Init()
    {
        _text = GetComponent<TMP_Text>();
        key = _text.text;
    }

    public void Localize(string newKey = null)
    {
        if (_text == null) Init();
        if (newKey != null) key = newKey;

        _text.text = LocalizationManager.GetTranslate(key);
    }
}
