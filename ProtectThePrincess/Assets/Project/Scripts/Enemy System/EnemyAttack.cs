using System;
using UnityEngine;

public class EnemyAttack : MonoBehaviour
{
    [Header("Time")]
    [SerializeField] private float _timeAttack, _startTimeAttack; // Время атака, начало время атаки 
    [Header("Damage")]
    [SerializeField] private float _damage; // Дамаг 

    [SerializeField] private Transform _endPos;
    private RaycastHit2D attack;
    private Animator _animator;
    private Enemy _enemy;

    private void Start()
    {
        _animator = GetComponent<Animator>();
        _enemy = GetComponent<Enemy>();
    }

    void Update()
    {
        if (_timeAttack <= 0)
        {
            _timeAttack = 0;
        }
        _timeAttack -= Time.deltaTime;
        attack = Physics2D.Linecast(transform.position, _endPos.position, 1 << 8);
        Debug.DrawLine(transform.position, _endPos.position, Color.red);
    }

    public void Attack()
    {
        if (attack.collider != null)
        {
            _animator.SetTrigger("Attack");
            float _oldSpeed = _enemy._speed;
            _enemy._speed = 0;
            if (_timeAttack <= 0)
            {
                if(attack.collider.CompareTag("Tower")) ShakeCameraController.instance.StartShake(.5f, .3f);
                attack.collider.gameObject.GetComponent<Health>().TakeDamage(_damage);
                _enemy._speed = _oldSpeed;
                _timeAttack = _startTimeAttack;
            }
        }
    }
}
