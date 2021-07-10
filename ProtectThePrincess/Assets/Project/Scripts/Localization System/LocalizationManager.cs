using UnityEngine;
using System.Collections.Generic;
using System.Xml;

public class LocalizationManager : MonoBehaviour
{
    public static int selectedLangunge { get; private set; }

    public static event LangungeChangeHandler OnLangungeChange;
    public delegate void LangungeChangeHandler();

    private static Dictionary<string, List<string>> _localizations;

    [SerializeField]
    private TextAsset _textFile;

    private void Awake()
    {
        if (_localizations == null) LoadLocalization();
        selectedLangunge = PlayerPrefs.GetInt("Selected Langunge");
    }

    public void SetLangunge(int id)
    {
        selectedLangunge = id;
        PlayerPrefs.SetInt("Selected Langunge", selectedLangunge);
        OnLangungeChange?.Invoke();
    }

    private void LoadLocalization()
    {
        _localizations = new Dictionary<string, List<string>>();

        XmlDocument xmlDocument = new XmlDocument();
        xmlDocument.LoadXml(_textFile.text);

        foreach (XmlNode key in xmlDocument["Keys"].ChildNodes)
        {
            string keyStr = key.Attributes["Name"].Value;

            var values = new List<string>();
            foreach (XmlNode translate in key["Translates"].ChildNodes)
            {
                values.Add(translate.InnerText);
            }

            _localizations[keyStr] = values;
        }

    }

    public static string GetTranslate(string key, int languageId = -1)
    {
        if (languageId == -1) languageId = selectedLangunge;
        if (_localizations.ContainsKey(key)) return _localizations[key][languageId];

        return key;
    }
}
