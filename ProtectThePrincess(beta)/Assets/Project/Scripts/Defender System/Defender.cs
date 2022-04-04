using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Defender : MonoBehaviour
{
    //Какой тип защитника
    [Header("Defender")]
    public DefenderItem item;
    [SerializeField] private List<DefenderItem> _items;
    public List<GameObject> _animators;
    public int _index;
    // Поиск врагов
    [Header("Zone")]
    public List<GameObject> _enemies;
    public Collider2D[] zone;
    [SerializeField] private Vector3 _zonePosition;
    [Range(0, 100), SerializeField] private float _zoneRadius, accuracy;
    [SerializeField] private LayerMask _zoneMask;
    //Атака 
    [Header("Attack")]
    public GameObject _bullet;
    public Transform _attackPosition, _groundPosition;
    [SerializeField] private float offset;
    [HideInInspector] public float _timeAttack;
    [SerializeField] private float _rPlus;
    public float _startTimeAttack;
    private AudioSource _audio;
    private string _name;
    [HideInInspector] public Vector2 diff;
    public bool IsRightDefender;
    void Start()
    {
        _timeAttack = _startTimeAttack; // Время атаки равняется старту время атаки
        _index = PlayerPrefs.GetInt("SelectedDefender");
        _animators[_index].SetActive(true);
        item = _items[_index];
        _audio = GetComponent<AudioSource>();
        _audio.clip = item.attackAudio;
        _zonePosition.z = 0;
        if (gameObject.name == "RightDefender")
        {
            _zonePosition = item.zonePosition;
            transform.position = item.defenderPosition;
            _name = "RightDefender";
        }
        else if (gameObject.name == "LeftDefender")
        {
            _zonePosition.x = -_zonePosition.x;
            transform.position = new Vector2(-item.defenderPosition.x, item.defenderPosition.y);
            _name = "LeftDefender";
        }
        _zoneRadius = item.zoneRadius;
        accuracy = item.accuracy;
        _bullet = item.bullet;
        _attackPosition.localPosition = item.attackPosition;
        _startTimeAttack = item.startTimeAttack;
        var groundPositionPosition = _groundPosition.position;
        groundPositionPosition.x = _attackPosition.position.x;
        _groundPosition.position = groundPositionPosition;
    }

    void Update()
    {
        ChangeEnemy(); // Ищем врагов
        BulletRotation(); // Прицеливание
        AttackAnimation();
        GetClosetEnemy();
        WhereToLook(); // Поворот защитника
    }

    private void WhereToLook()
    {
        int state = Camera.main.GetComponent<SwipeCamera>().state; // Получаем инфу и месте камеры
        _zonePosition.z = 0;
        if (_name == "RightDefender") // Если это правый защитник
        {
            if (state == 0) // Если камера на месте, то защитник смотрит в свою сторону
            {
                transform.rotation = Quaternion.Euler(0, 0, 0);
                _zonePosition.x = item.zonePosition.x;
            }
            else if (state == -1) // Если камера смотрит налево, то защитник смотрит влево
            {
                transform.rotation = Quaternion.Euler(0, 180, 0);
                _zonePosition.x = -item.zonePosition.x; 
            }
        }
        if (_name == "LeftDefender") // Если это левый защитник
        {
            if (state == 0) // Если камера на месте, то защитник смотрит в свою сторону
            {
                transform.rotation = Quaternion.Euler(0, 180, 0);
                _zonePosition.x = -item.zonePosition.x;
            }
            else if (state == 1) // Если камера смотрит направо, то защитник смотрит вправо
            {
                transform.rotation = Quaternion.Euler(0, 0, 0);
                _zonePosition.x = item.zonePosition.x;
            }
        }

    }

    public Transform GetClosetEnemy() 
    {
        float closetDistance = Mathf.Infinity; // Дистанция до врага
        Transform closetEnemy = null; // Позиция врага
        float currentDistance; // Дистанция до врага
        if (_enemies != null) // Если есть в зоне враги
        {
            foreach (var enemy in _enemies.ToList()) // Проверяем каждого врага в списке врагов
            { 
                if (enemy != null) 
                {
                    currentDistance = Vector3.Distance(transform.position, enemy.transform.position); // Если есть враг, то получаем расстояние до 
                }
                else // Иначе удаляем врага и продолжаем
                {
                    _enemies.Remove(enemy);
                    continue;
                }
                if (currentDistance < closetDistance) // Если расстояние до врага меньше чем бесконечность
                { 
                    closetDistance = currentDistance; // Присваем к бесконечности расстоние
                    closetEnemy = enemy.transform; // Получаем позицию ближайщего врага
                }
            }
        }
        
        return closetEnemy; // Возращаем позицию
    }
    
    private void ChangeEnemy()
    {
        zone = Physics2D.OverlapCircleAll(_zonePosition, _zoneRadius, _zoneMask); // Ищем всех в радиусе по слою врага
        for (int i = 0; i < zone.Length; i++) // Проходимся по врагам
        {
            if (_enemies != null)
            {
                if (!_enemies.Contains(zone[i].gameObject))
                    _enemies.Add(zone[i].gameObject); // Если в списке врагов его нет, то добавляем
                else if (!zone.Contains(_enemies[i].GetComponent<Collider2D>()))
                {
                    _enemies.Remove(_enemies[i].gameObject);
                }
            }
        }
    }

    void BulletRotation()
    {
        //Transform enemy = GetClosetEnemy(); // Ищем ближайщего врага
        if (GetClosetEnemy() != null) // Если есть ближайщий враг
        {
            /*#region Вычесление упреждения
            Vector2 direction = enemy.transform.position - _attackPosition.position;
            float bulletTime = direction.magnitude / _bullet.GetComponent<Bullet>().speed;
            float pathEnemy = enemy.GetComponent<Enemy>()._speed * bulletTime;
            Vector3 nextEnemyPosition = new Vector3(pathEnemy + enemy.transform.position.x, enemy.transform.position.y + enemy.transform.localScale.y / 2);
            if (IsRightDefender)
            {
                if (nextEnemyPosition.x < _attackPosition.position.x)
                {
                    if (gameObject.name == _name)
                    {
                        nextEnemyPosition.x = _attackPosition.position.x;
                        Debug.Log(nextEnemyPosition.x);
                    }
                    else
                    {
                        nextEnemyPosition.x = 2.5f + _attackPosition.position.x;
                    }
                }
            }
            else
            {
                if (nextEnemyPosition.x > _attackPosition.position.x)
                {
                    if (gameObject.name == _name)
                    {
                        nextEnemyPosition.x = _attackPosition.position.x;
                        Debug.Log(nextEnemyPosition.x);
                    }
                    else
                    {
                        nextEnemyPosition.x = 2.5f + _attackPosition.position.x;
                    }
                }
            }
            Vector3 finishPosition = nextEnemyPosition - _attackPosition.position;
            float rotateZ = Mathf.Atan2(finishPosition.y, finishPosition.x) * Mathf.Rad2Deg;
            _attackPosition.rotation = Quaternion.Euler(0f, 0f, rotateZ); // Разворачиваем позицию для атаки
            #endregion*/
            int state = Camera.main.GetComponent<SwipeCamera>().state; // Получаем инфу и месте камеры
            var distance= Vector3.Distance(GetClosetEnemy().position, _attackPosition.position);
            float time = distance / _bullet.GetComponent<Bullet>().speed;
            var enemy = GetClosetEnemy().GetComponent<Enemy>();
            var enemyDistance= (time * enemy._speed);
            Vector3 difference = Vector3.zero;
            float rotateZ = 0;
            if (enemyDistance == 0) _rPlus = 0;
            if (_name == "RightDefender") // Если это правый защитник
            {
                if (state == 0 || state == 1) // Если камера на месте, то защитник смотрит в свою сторону
                {
                    if (enemyDistance < _attackPosition.position.x) enemyDistance = 0;
                    difference = new Vector3(enemy.GetComponent<Transform>().position.x - enemyDistance + _rPlus, enemy.GetComponent<Transform>().position.y) - _attackPosition.position;
                    rotateZ = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg;
                    //rotateZ = Mathf.Clamp(rotateZ, 0, -90);
                }
                else if (state == -1) // Если камера смотрит налево, то защитник смотрит влево
                {
                    if (enemyDistance > _attackPosition.position.x) enemyDistance = 0;
                    difference = new Vector3(enemy.GetComponent<Transform>().position.x + enemyDistance - _rPlus, enemy.GetComponent<Transform>().position.y) - _attackPosition.position;
                    rotateZ = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg;
                    //rotateZ = Mathf.Clamp(rotateZ, -90, -180);
                }
            }
            if (_name == "LeftDefender") // Если это левый защитник
            {
                if (state == 0 || state == -1) // Если камера на месте, то защитник смотрит в свою сторону
                {
                    if (enemyDistance > _attackPosition.position.x) enemyDistance = 0;
                    difference = new Vector3(enemy.GetComponent<Transform>().position.x + enemyDistance - _rPlus, enemy.GetComponent<Transform>().position.y) - _attackPosition.position;
                    rotateZ = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg;
                    //rotateZ = Mathf.Clamp(rotateZ, -90, -180);
                }
                else if (state == 1) // Если камера смотрит налево, то защитник смотрит влево
                {
                    if (enemyDistance < _attackPosition.position.x) enemyDistance = 0;
                    difference = new Vector3(enemy.GetComponent<Transform>().position.x - enemyDistance + _rPlus, enemy.GetComponent<Transform>().position.y) - _attackPosition.position;
                    rotateZ = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg;
                    //rotateZ = Mathf.Clamp(rotateZ, 0, -90);
                }
            }
            _attackPosition.rotation = Quaternion.Euler(0f, 0f, rotateZ); // Разворачиваем позицию для атаки
        }
    }

    /*private void Method()
    {
        var distance= Vector3.Distance(GetClosetEnemy().position, _attackPosition.position);
        float time = distance / _bullet.GetComponent<Bullet>().speed;
        var enemy = GetClosetEnemy().GetComponent<Enemy>();
        var enemyDistance= time * enemy._speed;
        if (_name == "RightDefender") // Если это правый защитник
        {
            diff = new Vector2(enemyDistance - enemy.target.position.x, enemy.target.position.y);
        }
        if (_name == "LeftDefender") // Если это левый защитник
        {
            diff = new Vector2(enemyDistance, enemy.target.position.y);
        }
    }*/
    
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.green; // Цвет зелёный
        Gizmos.DrawWireSphere(_zonePosition, _zoneRadius); // Рисуем круг
    }

    private void AttackAnimation()
    {
        if (GetClosetEnemy() != null) // Если есть ближайщий враг
        {
            if (_timeAttack <= 0f) // Если время закончено
            {
                _audio.Play();
                _animators[_index].GetComponent<Animator>().SetTrigger("Attack");
                _timeAttack = _startTimeAttack; // Время возращаем
            }
            _timeAttack -= Time.deltaTime; // Уменьшаем время
        }
    }
}
