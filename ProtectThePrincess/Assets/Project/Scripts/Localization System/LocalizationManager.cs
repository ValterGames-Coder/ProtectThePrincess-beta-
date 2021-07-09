using UnityEngine;

public class LocalizationManager : MonoBehaviour
{
    public string[] langunges;

    private void Start()
    {
        if (!PlayerPrefs.HasKey("Langunge")) PlayerPrefs.SetString("Langunge", "eng");
    }

    public void Language(string langunge)
    {
        PlayerPrefs.SetString("Langunge", langunge);
    }
}
