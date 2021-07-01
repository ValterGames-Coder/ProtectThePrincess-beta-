using System.Collections.Generic;
using System.Linq;
using UnityEngine;
public class Defender : MonoBehaviour
{
    // Поиск врагов
    private List<GameObject> _enemies = new List<GameObject>();
    private Collider2D[] zone;
    [SerializeField] private DefenderItem _item;
    [SerializeField] private List<DefenderItem> _items = new List<DefenderItem>();
    [SerializeField] private int _index;
    [Header("Zone")]
    [SerializeField] private Vector3 _zonePosition;
    [Range(0, 100), SerializeField] private float _zoneRadius, min, max;
    [SerializeField] private LayerMask _zoneMask;
    //Атака 
    [Header("Attack")]
    [SerializeField] private GameObject _bullet;
    [SerializeField] private Transform _attackPosition;
    [SerializeField] private float _offset;

    void Start()
    {
        _index = PlayerPrefs.GetInt("SelectedDefender");
        _item = _items[_index];
        _zonePosition = _item.zonePosition;
        if (gameObject.name == "LeftDefender") _zonePosition.x = -_zonePosition.x;
        _zoneRadius = _item.zoneRadius;
        min = _item.min;
        max = _item.max;
        _bullet = _item.bullet;
        _attackPosition.localPosition = _item.attackPosition;
        _offset = _item.offset;
    }

    void Update()
    {
        ChangeEnemy();
        Attack();
        BulletRotation();
        WhereToLook();
    }

    private void WhereToLook()
    {
        int state = Camera.main.GetComponent<SwipeCamera>().state;
        if (gameObject.name == "RightDefender")
        {
            if (state == 0)
            {
                transform.rotation = Quaternion.Euler(0, 0, 0);
                _zonePosition.x = _item.zonePosition.x;
            }
            else if (state == -1)
            {
                transform.rotation = Quaternion.Euler(0, 180, 0);
                _zonePosition.x = -_item.zonePosition.x;
            }
        }
        if (gameObject.name == "LeftDefender")
        {
            if (state == 0)
            {
                transform.rotation = Quaternion.Euler(0, 180, 0);
                _zonePosition.x = -_item.zonePosition.x;
            }
            else if (state == 1)
            {
                transform.rotation = Quaternion.Euler(0, 0, 0);
                _zonePosition.x = _item.zonePosition.x;
            }
        }

    }

    private Transform GetClosetEnemy()
    {
        float closetDistance = Mathf.Infinity;
        Transform closetEnemy = null;
        float currentDistance;
        if (_enemies != null)
        {
            foreach (var enemy in _enemies.ToList())
            { 
                if (enemy != null) currentDistance = Vector3.Distance(transform.position, enemy.transform.position);
                else 
                { 
                    _enemies.Remove(enemy); 
                    continue;
                }
                if (currentDistance < closetDistance)
                { 
                    closetDistance = currentDistance; 
                    closetEnemy = enemy.transform;
                }
            }
        }
        return closetEnemy;
    }
    
    private void ChangeEnemy()
    {
        zone = Physics2D.OverlapCircleAll(_zonePosition, _zoneRadius, _zoneMask);
        for (int i = 0; i < zone.Length; i++)
        {
            if (!_enemies.Contains(zone[i].gameObject)) _enemies.Add(zone[i].gameObject);
        }
        
        if(_enemies.Count > zone.Length) _enemies.Remove(_enemies[zone.Length]);
    }

    void BulletRotation()
    {
        if (GetClosetEnemy() != null)
        {
            Vector3 difference = GetClosetEnemy().position - _attackPosition.position;
            float rotateZ = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg;
            _attackPosition.rotation = Quaternion.Euler(0f, 0f,
                rotateZ + _offset + Random.Range(min, max));
        }
    }

    private void Attack()
    {
        if (GetClosetEnemy() != null)
        {
            var position = _attackPosition.position;
            if (_bullet.GetComponent<Bullet>().timeAttack <= 0f)
            {
                Instantiate(_bullet, new Vector2(position.x, position.y), _attackPosition.rotation);
                _bullet.GetComponent<Bullet>().timeAttack = _bullet.GetComponent<Bullet>().startTimeAttack;
            }

            _bullet.GetComponent<Bullet>().timeAttack -= Time.deltaTime;
        }
    }
    
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.green;
        Gizmos.DrawWireSphere(_zonePosition, _zoneRadius);
    }
}
