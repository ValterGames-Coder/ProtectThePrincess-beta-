using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Defender : MonoBehaviour
{
    //Какой тип защитника
    [Header("Defender")]
    [SerializeField] private DefenderItem _item;
    [SerializeField] private List<DefenderItem> _items = new List<DefenderItem>();
    [SerializeField] private int _index;
    // Поиск врагов
    [Header("Zone")]
    private List<GameObject> _enemies = new List<GameObject>();
    private Collider2D[] zone;
    [SerializeField] private Vector3 _zonePosition;
    [Range(0, 100), SerializeField] private float _zoneRadius, min, max;
    [SerializeField] private LayerMask _zoneMask;
    //Атака 
    [Header("Attack")]
    [SerializeField] private GameObject _bullet;
    [SerializeField] private Transform _attackPosition;
    [SerializeField] private float _offset;
    private float _timeAttack;
    [SerializeField] private float _startTimeAttack;
    [SerializeField] private bool _isAttack;
    private Animator _animator;

    void Start()
    {
        _animator = GetComponentInChildren<Animator>();     
        _timeAttack = _startTimeAttack; // Время атаки равняется старту время атаки
        // Выбераем и сохраняем выбраного защитника
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
        _startTimeAttack = _item.startTimeAttack;
        
        ChangeEnemy(); // Ищем врагов
        GetClosetEnemy(); // Ищем ближайщего врага
    }

    void Update()
    {
        ChangeEnemy(); // Ищем врагов
        GetClosetEnemy(); // Ищем ближайщего врага
        BulletRotation(); // Прицеливание
        Attack(); // Атака врагов
        WhereToLook(); // Поворот защитника
        GetClosetEnemy();
        _animator.SetBool("IsAttack", _isAttack);
    }

    private void WhereToLook()
    {
        int state = Camera.main.GetComponent<SwipeCamera>().state; // Получаем инфу и месте камеры
        if (gameObject.name == "RightDefender") // Если это правый защитник
        {
            if (state == 0) // Если камера на месте, то защитник смотрит в свою сторону
            {
                transform.rotation = Quaternion.Euler(0, 0, 0);
                _zonePosition.x = _item.zonePosition.x;
            }
            else if (state == -1) // Если камера смотрит налево, то защитник смотрит влево
            {
                transform.rotation = Quaternion.Euler(0, 180, 0);
                _zonePosition.x = -_item.zonePosition.x;
            }
        }
        if (gameObject.name == "LeftDefender") // Если это левый защитник
        {
            if (state == 0) // Если камера на месте, то защитник смотрит в свою сторону
            {
                transform.rotation = Quaternion.Euler(0, 180, 0);
                _zonePosition.x = -_item.zonePosition.x;
            }
            else if (state == 1) // Если камера смотрит направо, то защитник смотрит вправо
            {
                transform.rotation = Quaternion.Euler(0, 0, 0);
                _zonePosition.x = _item.zonePosition.x;
            }
        }

    }

    private Transform GetClosetEnemy() 
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
                    _isAttack = true;
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
            if (!_enemies.Contains(zone[i].gameObject)) _enemies.Add(zone[i].gameObject); // Если в списке врагов его нет, то добавляем
        }
        
        if(_enemies.Count > zone.Length) _enemies.Remove(_enemies[zone.Length]); //Если в списке врагов больше чем в зоне, то удаляем последнего из списка
    }

    void BulletRotation()
    {
        if (GetClosetEnemy() != null) // Если есть ближайщий враг
        {
            Vector3 difference = GetClosetEnemy().position - _attackPosition.position; // Вычитаем позицию ближайего врага из позиции атаки
            float rotateZ = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg; // Узнаем поворот для пули 
            _attackPosition.rotation = Quaternion.Euler(0f, 0f,
                rotateZ - 4f + _offset + Random.Range(min, max)); // Разворачиваем позицию для атаки
        }
    }

    private void Attack()
    {
        if (GetClosetEnemy() != null) // Если есть ближайщий враг
        {
            var position = _attackPosition.position; // Позиция будет равна к позиции атаки 
            if (_timeAttack <= 0f) // Если время закончено
            {
                _animator.SetTrigger("Attack");
                Instantiate(_bullet, new Vector2(position.x, position.y), _attackPosition.rotation); // Создаём пулю
                _timeAttack = _startTimeAttack; // Время возращаем
            }
            _timeAttack -= Time.deltaTime; // Уменьшаем время
        }
        else
        {
            _isAttack = false;
        }
    }
    
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.green; // Цвет зелёный
        Gizmos.DrawWireSphere(_zonePosition, _zoneRadius); // Рисуем круг
    }
}
