using UnityEngine;

public class BuildsButtonsManager : MonoBehaviour
{
    [SerializeField] private Transform _target;
    public bool _isOn;
    [SerializeField] private GameObject[] _buttons;
    void Update()
    {
        transform.position = Camera.main.WorldToScreenPoint(_target.position);
        if (_isOn)
        {
            for (int i = 0; i < _buttons.Length; i++)
            {
                _buttons[i].SetActive(true);
            }
        }
        else
        {
            for (int i = 0; i < _buttons.Length; i++)
            {
                _buttons[i].SetActive(false);
            }
        }
    }

    public void ActiveButtons()
    {
        _isOn = !_isOn;
    }
}
