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
        _levelToLoad = level;
        Time.timeScale = 1f;
        _animator.SetTrigger("Fade");
    }

    public void Complete()
    {
        SceneManager.LoadScene(_levelToLoad);
    }
}
