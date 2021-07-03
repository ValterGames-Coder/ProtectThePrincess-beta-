using UnityEngine;
public class Enemy : MonoBehaviour
{
    private Transform _tower; // Позиция башни
    public float _speed; // Скорость врага
    private EnemyNotification _enemyNotification; // Где находится враг

    void Start()
    {
        _enemyNotification = FindObjectOfType<EnemyNotification>(); // Получаем компонет
        _tower = GameObject.Find("Tower").GetComponent<Transform>(); // Получаем компонет
    }
    void FixedUpdate()
    {
        Vector2 move = Vector2.MoveTowards(transform.position, _tower.position, _speed * Time.deltaTime); // Идём в сторону башни
        transform.position = new Vector2(move.x, transform.position.y); // Только по x

        if (transform.position.x > Camera.main.GetComponent<Transform>().position.x && Camera.main.GetComponent<SwipeCamera>().state == -1) // Если враг за камерой
        {
            _enemyNotification.SetActive(true, "rightNotification"); // Включаем 
        }
        else if (transform.position.x < Camera.main.GetComponent<Transform>().position.x && Camera.main.GetComponent<SwipeCamera>().state == 1) // Если враг за камерой
        {
            _enemyNotification.SetActive(true, "leftNotification"); // Включаем 
        }
        else
        {
            _enemyNotification.SetActive(false, "leftNotification"); // Иначе выключаем 
            _enemyNotification.SetActive(false, "rightNotification"); // Иначе выключаем 
        }
    }
}
