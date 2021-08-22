using UnityEngine;

public class BuildsButtonsManager : MonoBehaviour
{
    [SerializeField] private Transform _target;
    private Transform _buttonsPosition;
    public bool _isOn;
    [SerializeField] private GameObject[] _buttons;

    void Update()
    {
        transform.position = Camera.main.WorldToScreenPoint(new Vector2(_target.position.x, _target.position.y + 1f));
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
