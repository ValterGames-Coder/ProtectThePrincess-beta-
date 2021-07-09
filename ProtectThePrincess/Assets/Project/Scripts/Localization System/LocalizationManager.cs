using UnityEngine;
using UnityEngine.SceneManagement;

public class LocalizationManager : MonoBehaviour
{
    public string[] langunges;
    public void Language(string langunge)
    {
        PlayerPrefs.SetString("Laungunge", langunge);
        SceneManager.LoadScene(2);
    }
}
