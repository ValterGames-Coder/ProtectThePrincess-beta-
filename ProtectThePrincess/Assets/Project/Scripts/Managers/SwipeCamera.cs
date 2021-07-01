using UnityEngine;
using UnityEngine.EventSystems;

public class SwipeCamera : MonoBehaviour
{
    [SerializeField] private Transform _targetRight, _targetLeft, _targetNull;
    [SerializeField] private float _speed;
    private Transform _cameraPosition;
    private Vector3 velocity = Vector3.zero;
    [HideInInspector] public int state;
    private void Update()
    {
        if (Input.GetMouseButtonDown(0) && !EventSystem.current.IsPointerOverGameObject())
        {
            if (Input.mousePosition.x > 1000 && state == 0) state = 1;
            else if (Input.mousePosition.x > 1000 && state == -1) state = 0;
            else if (Input.mousePosition.x < 1000 && state == 0) state = -1;
            else if (Input.mousePosition.x < 1000 && state == 1) state = 0;
        }
        Switch();
        transform.position = Vector3.SmoothDamp(transform.position, _cameraPosition.position, ref velocity, _speed * Time.deltaTime);
        
    }
    
    void Switch()
    {
        if (state == 0)
        {
            _cameraPosition = _targetNull; 
            Camera.main.orthographicSize = Mathf.Lerp(Camera.main.orthographicSize, 6f, 7 * Time.deltaTime);
        }
        else if (state == 1)
        {
            _cameraPosition = _targetRight; 
            Camera.main.orthographicSize = Mathf.Lerp(Camera.main.orthographicSize, 4.5f, 7 * Time.deltaTime);
        }
        else if (state == -1)
        {
            _cameraPosition = _targetLeft; 
            Camera.main.orthographicSize = Mathf.Lerp(Camera.main.orthographicSize, 4.5f, 7 * Time.deltaTime);
        }
    }
}
