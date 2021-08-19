using UnityEngine;

public class EnemyAttack : MonoBehaviour
{
    [Header("Time")]
    [SerializeField] private float _timeAttack, _startTimeAttack; // Время атака, начало время атаки 
    [Header("Damage")]
    [SerializeField] private float _damage; // Дамаг 

    [SerializeField] private Transform _endPos;

    void Update()
    {
        if (_timeAttack <= 0)
        {
            _timeAttack = 0;
        }
        _timeAttack -= Time.deltaTime;
        RaycastHit2D attack = Physics2D.Linecast(transform.position, _endPos.position, 1 << LayerMask.NameToLayer("AttackForEnemy"));
        if (attack.collider != null)
        {
            if (_timeAttack <= 0)
            {
                attack.collider.gameObject.GetComponent<Health>().TakeDamage(_damage);
                _timeAttack = _startTimeAttack;
            }
        }
        Debug.DrawLine(transform.position, _endPos.position, Color.red);
    }
}
