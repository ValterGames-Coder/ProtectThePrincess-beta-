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
    private float _oldSpeed;
    private bool _attack;

    private void Start()
    {
        _animator = GetComponent<Animator>();
        _enemy = GetComponent<Enemy>();
        _oldSpeed = _enemy._speed;
    }

    void Update()
    {
        if (_timeAttack <= 0)
        {
            _timeAttack = 0;
        }
        attack = Physics2D.Linecast(transform.position, _endPos.position, 1 << 8);
        
        if (attack.collider != null)
        {
            if (_timeAttack <= 0 && _attack == false)
            {
                _animator.SetTrigger("Attack");
                _timeAttack = _startTimeAttack;
            }
        }

        if (!_attack)
        {
            _timeAttack -= Time.deltaTime;
        }
        Debug.DrawLine(transform.position, _endPos.position, Color.red);
    }

    public void Attack()
    {
        _enemy._speed = 0;
        _attack = true;
        if(attack.collider.CompareTag("Tower")) ShakeCameraController.instance.StartShake(.5f, .3f);
        attack.collider.gameObject.GetComponent<Health>().TakeDamage(_damage);
    }
    
    public void Walk()
    {
        _enemy._speed = _oldSpeed;
        _attack = false;
    }
}
