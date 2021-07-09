using UnityEngine;
using UnityEngine.SceneManagement;

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
        //SceneManager.LoadScene(2);
    }
}
