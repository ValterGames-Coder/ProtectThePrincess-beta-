using UnityEngine;

public class BackgroundMusic : MonoBehaviour
{
    private static BackgroundMusic _bgMusic;

    void Awake()
    {
        if(_bgMusic == null)
        {
            _bgMusic = this;
            DontDestroyOnLoad(_bgMusic);
        }
        else
        {
            Destroy(gameObject);
        }
    }
}
