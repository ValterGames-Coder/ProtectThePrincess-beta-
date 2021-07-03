using UnityEngine;

public class EnemyAttack : MonoBehaviour
{
    [Header("Time")]
    [SerializeField] private float _timeAttack, _startTimeAttack; // Время атака, начало время атаки 
    [Header("Damage")]
    [SerializeField] private float _damage; // Дамаг 

    void Update()
    {
        if (_timeAttack <= 0)
        {
            _timeAttack = 0;
        }
        _timeAttack -= Time.deltaTime;
    }

    private void OnTriggerStay2D(Collider2D other)
    {
        if (other.gameObject.GetComponent<Health>())
        {
            if (_timeAttack <= 0)
            {
                other.gameObject.GetComponent<Health>().TakeDamage(_damage);
                _timeAttack = _startTimeAttack;
            }
        }
    }
}
