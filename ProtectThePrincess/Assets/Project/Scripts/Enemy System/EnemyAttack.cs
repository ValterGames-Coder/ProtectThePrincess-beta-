using UnityEngine;

public class EnemyAttack : MonoBehaviour
{
    [SerializeField] private float _timeAttack, _startTimeAttack;
    [SerializeField] private float _damage;
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
        if (other.gameObject.CompareTag("Building"))
        {
            if (_timeAttack <= 0)
            {
                other.gameObject.GetComponent<Health>().TakeDamage(_damage);
                _timeAttack = _startTimeAttack;
            }
        }
    }
}
