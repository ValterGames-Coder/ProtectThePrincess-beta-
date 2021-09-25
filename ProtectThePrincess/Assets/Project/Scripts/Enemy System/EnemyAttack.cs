using System;
using UnityEngine;

public class EnemyAttack : MonoBehaviour
{
    [Header("Time")]
    [SerializeField] private float _timeAttack, _startTimeAttack; // Время атака, начало время атаки 
    [Header("Damage")]
    [SerializeField] private float _damage, _radius; // Дамаг 

    [SerializeField] private Transform _attackPos;
    private Collider2D attack;
    private Animator _animator;
    private Enemy _enemy;
    private float _oldSpeed;
    private bool _attack;
    private AudioSource _audioAttack;

    private void Start()
    {
        _animator = GetComponent<Animator>();
        _enemy = GetComponent<Enemy>();
        _audioAttack = GetComponent<AudioSource>();
        _oldSpeed = _enemy._speed;
        _timeAttack = _startTimeAttack;
    }

    void Update()
    {
        attack = Physics2D.OverlapCircle(_attackPos.position, _radius, 1 << 8);

        if (attack != null)
        {
            _animator.SetBool("IsWalk", false);
            _enemy._speed = 0;
        }
        else
        {
            _animator.SetBool("IsWalk", true);
            _enemy._speed = _oldSpeed;
        }
        
        if (_timeAttack <= 0)
        {
            if (attack != null)
            {
                _animator.SetTrigger("Attack");
                _timeAttack = _startTimeAttack;
            }
        }
        _timeAttack -= Time.deltaTime;
        
        if (_timeAttack < 0)
        {
            _timeAttack = 0;
        }
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red; // Цвет зелёный
        Gizmos.DrawWireSphere(_attackPos.position, _radius); // Рисуем круг
    }

    public void Attack()
    {
        try
        {
            attack.gameObject.GetComponent<Health>().TakeDamage(_damage);
            if (attack.CompareTag("Tower"))
            {
                ShakeCameraController.instance.StartShake(.5f, .3f);
                _audioAttack.Play();
            }
        }
        catch (Exception e) { Console.WriteLine(e); }
    }
}
