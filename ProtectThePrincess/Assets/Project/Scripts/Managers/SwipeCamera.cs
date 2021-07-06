using UnityEngine;
using UnityEngine.EventSystems;

public class SwipeCamera : MonoBehaviour
{
    private enum ControlType{Pc, Android}
    [Header("Positions")]
    [SerializeField] private Transform _targetRight, _targetLeft, _targetNull; // Позиция справа, слева, и по середине
    [Header("Speed")]
    [SerializeField] private float _speed; // Скорость камеры
    private Transform _cameraPosition; // Позиция камеры
    private Vector3 velocity = Vector3.zero; // Сила
    [HideInInspector] public int state;
    [SerializeField] private ControlType _platformType;// Состояние камеры

    void Start()
    {
        if (Application.platform == RuntimePlatform.LinuxEditor)
        {
            _platformType = ControlType.Pc;
        }

        if (Application.platform == RuntimePlatform.Android)
        {
            _platformType = ControlType.Android;
        }
    }

    private void Update()
    {
        if (_platformType == ControlType.Android)
        {
            SwipeCameraOnPhone();
        }
        else if (_platformType == ControlType.Pc)
        {
            SwipeCameraOnPC();
        }
        Switch(); // Свайп камеры
        transform.position = Vector3.SmoothDamp(transform.position, _cameraPosition.position, ref velocity, _speed * Time.deltaTime); // Перемещаем камеру
        
    }

    private void SwipeCameraOnPC()
    {
        if (Input.GetMouseButtonDown(0) && !EventSystem.current.IsPointerOverGameObject()) // Если  нажали на экран и это не UI элементы
        {
            if (Input.mousePosition.x > 1000 && state == 0) state = 1; // Если нажали на права и состояние равно 0, то состояние равно 1
            else if (Input.mousePosition.x > 1000 && state == -1) state = 0; // Если нажали на права и состояние равно -1, то состояние равно 0
            else if (Input.mousePosition.x < 1000 && state == 0) state = -1; // Если нажали на права и состояние равно 0, то состояние равно -1
            else if (Input.mousePosition.x < 1000 && state == 1) state = 0; // Если нажали на права и состояние равно 1, то состояние равно 0
        }
    }

    private void SwipeCameraOnPhone()
    {
        if (Input.GetMouseButtonDown(0) && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            if (!EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
            {
                if (Input.mousePosition.x > 1000 && state == 0)
                    state = 1; // Если нажали на права и состояние равно 0, то состояние равно 1
                else if (Input.mousePosition.x > 1000 && state == -1)
                    state = 0; // Если нажали на права и состояние равно -1, то состояние равно 0
                else if (Input.mousePosition.x < 1000 && state == 0)
                    state = -1; // Если нажали на права и состояние равно 0, то состояние равно -1
                else if (Input.mousePosition.x < 1000 && state == 1)
                    state = 0; // Если нажали на права и состояние равно 1, то состояние равно 0
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
