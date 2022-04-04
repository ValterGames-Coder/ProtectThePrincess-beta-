using System.Collections;
using UnityEngine;

public class SwipeCamera : MonoBehaviour
{
    [Header("Positions")]
    [SerializeField] private Transform _targetRight, _targetLeft, _targetNull; // Позиция справа, слева, и по середине

    [SerializeField] private Defender _rightDefender, _leftDefender;
    [Header("Speed")]
    [SerializeField] private float _speed; // Скорость камеры
    private Transform _cameraPosition; // Позиция камеры
    private Vector3 velocity = Vector3.zero; // Сила
    [HideInInspector] public int state;
    private bool _isSwipe;

    void Start()
    {
        StartCoroutine(StartSwipe());
    }

    private IEnumerator StartSwipe()
    {
        yield return new WaitForSeconds(3f);
        _isSwipe = true;
    }

    private void Update()
    {
        Switch(); // Свайп камеры
        transform.position = Vector3.SmoothDamp(transform.position, _cameraPosition.position, ref velocity, _speed * Time.deltaTime); // Перемещаем камеру
    }

    private void ClickRight()
    {
        if (_isSwipe)
        {
            if (state == 0)
            {
                state = 1;
                _leftDefender.IsRightDefender = true;
            }
            else if (state == -1)
            {
                state = 0;
                _rightDefender.IsRightDefender = true;
            }
        }
    }

    private void ClickLeft()
    {
        if (_isSwipe)
        {
            if (state == 0)
            {
                state = -1;
                _rightDefender.IsRightDefender = false;
            }
            else if (state == 1)
            {
                state = 0;
                _leftDefender.IsRightDefender = false;
            }
        }
    }

    void Switch()
    {
        if (state == 0) // Если состояние равно 0
        {
            _cameraPosition = _targetNull; // Позиция камеры равна середине
            Camera.main.orthographicSize = Mathf.Lerp(Camera.main.orthographicSize, 6f, 7 * Time.deltaTime); // Красиво отдоляем камеру
        }
        else if (state == 1) // Если состояние равно 1
        {
            _cameraPosition = _targetRight; // Позиция камеры равна правой позиции
            Camera.main.orthographicSize = Mathf.Lerp(Camera.main.orthographicSize, 4.5f, 7 * Time.deltaTime); // Красиво приближаем камеру
        }
        else if (state == -1) // Если состояние равно -1
        {
            _cameraPosition = _targetLeft; // Позиция камеры равна левой позиции
            Camera.main.orthographicSize = Mathf.Lerp(Camera.main.orthographicSize, 4.5f, 7 * Time.deltaTime); // Красиво приближаем камеру
        }
    }
}
