using UnityEngine;
using UnityEngine.UI;

public class UIButtonManager : MonoBehaviour
{
    private TransitionsManager _pause;
    private SpawnerEnemies _spawner;
    private Button _button;
    
    void Start()
    {
        _pause = FindObjectOfType<TransitionsManager>();
        _spawner = FindObjectOfType<SpawnerEnemies>();
        _button = GetComponent<Button>();
    }

    void Update()
    {
        bool[] bools = {_pause.pause, _spawner.lose, _spawner.win};
        Active(bools);
    }

    private void Active(bool[] isActive)
    {
        foreach (var active in isActive)
        {
            _button.interactable = !active;
        }
    } 
}
