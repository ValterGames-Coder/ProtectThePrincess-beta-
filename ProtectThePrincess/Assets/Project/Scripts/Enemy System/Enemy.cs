using UnityEngine;
public class Enemy : MonoBehaviour
{
    private Transform _tower;
    public float _speed;
    private EnemyNotification _enemyNotification;
    public BarHealth _healthBar;
    void Start()
    {
        _enemyNotification = FindObjectOfType<EnemyNotification>();
        _tower = GameObject.Find("Tower").GetComponent<Transform>();
    }
    void FixedUpdate()
    {
        Vector2 move = Vector2.MoveTowards(transform.position, _tower.position, _speed * Time.deltaTime);
        transform.position = new Vector2(move.x, transform.position.y);

        if (transform.position.x > Camera.main.GetComponent<Transform>().position.x && transform.position.x > 0 && Camera.main.GetComponent<SwipeCamera>().state == -1)
        {
            _enemyNotification.SetActive(true, "rightNotification");
        }
        else if (transform.position.x < Camera.main.GetComponent<Transform>().position.x && transform.position.x < 0 && Camera.main.GetComponent<SwipeCamera>().state == 1)
        {
            _enemyNotification.SetActive(true, "leftNotification");
        }
        else
        {
            _enemyNotification.SetActive(false, "leftNotification");
            _enemyNotification.SetActive(false, "rightNotification");
        }
    }
}
