using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using TMPro;

[RequireComponent(typeof(TMP_Dropdown))]
public class LocalizationDropdown : MonoBehaviour
{
    private TMP_Dropdown _dropdown;
    private List<string> keys;

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
        _dropdown = GetComponent<TMP_Dropdown>();
        keys = new List<string>();

        foreach (var option in _dropdown.options)
        {
            keys.Add(option.text);
        }
    }

    public void Localize(List<string> newKeys = null)
    {
        if (_dropdown == null) Init();
        if (newKeys != null) keys = newKeys;

        var options = new List<TMP_Dropdown.OptionData>();

        foreach (var key in keys)
        {
            options.Add(new TMP_Dropdown.OptionData(LocalizationManager.GetTranslate(key)));
        }

        _dropdown.options = options;
        _dropdown.RefreshShownValue();
    }
}
