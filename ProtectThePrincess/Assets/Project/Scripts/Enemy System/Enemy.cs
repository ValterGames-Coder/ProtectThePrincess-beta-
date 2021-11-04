using UnityEngine;
public class Enemy : MonoBehaviour
{
    private Transform _tower; // Позиция башни
    [Header("Speed")]
    public float _speed; // Скорость врага
    private EnemyNotification _enemyNotification; // Где находится враг
    public int startWave;

    void Start()
    {
        _enemyNotification = FindObjectOfType<EnemyNotification>(); // Получаем компонет
        _tower = GameObject.Find("Tower").GetComponent<Transform>(); // Получаем компонет
        if (transform.position.x > 0)
        {
            var transformLocalScale = transform.localScale;
            transformLocalScale.x *= -1;
            transform.localScale = transformLocalScale;
        }
    }
    void FixedUpdate()
    {
        Vector2 move = Vector2.MoveTowards(transform.position, _tower.position, _speed * Time.deltaTime); // Идём в сторону башни
        transform.position = new Vector2(move.x, transform.position.y); // Только по x

        if (Camera.main.GetComponent<SwipeCamera>().state == -1 && transform.position.x > 0) // Если враг за камерой
        {
            _enemyNotification.SetActive(true, "rightNotification"); // Включаем 
        }
        else if (Camera.main.GetComponent<SwipeCamera>().state == 1 && transform.position.x < 0) // Если враг за камерой
        {
            _enemyNotification.SetActive(true, "leftNotification"); // Включаем 
        }
        else if(gameObject == null)
        {
            _enemyNotification.SetActive(false, "leftNotification"); // Иначе выключаем 
            _enemyNotification.SetActive(false, "rightNotification"); // Иначе выключаем 
        }
        else
        {
            _enemyNotification.SetActive(false, "leftNotification"); // Иначе выключаем 
            _enemyNotification.SetActive(false, "rightNotification"); // Иначе выключаем 
        }
        if(FindObjectOfType<SpawnerEnemies>().lose)
    	{
    	    Destroy(gameObject);
    	}
    }
}
