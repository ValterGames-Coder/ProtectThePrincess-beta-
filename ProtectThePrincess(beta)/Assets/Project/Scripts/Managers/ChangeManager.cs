using UnityEngine;
using UnityEngine.SceneManagement;
public class ChangeManager : MonoBehaviour
{
    private Animator _animator;
    [SerializeField] private int _levelToLoad;
    
    void Start()
    {
        _animator = GetComponent<Animator>();
    }

    public void LoadLevel(int level)
    {
        Time.timeScale = 1f;  
        _levelToLoad = level;  
        _animator.SetTrigger("Fade");
        PlayerPrefs.Save();
    }

    public void Complete()
    {
        SceneManager.LoadScene(_levelToLoad);
    }
}
