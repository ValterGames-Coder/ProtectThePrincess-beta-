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
    [Range(0, 100), SerializeField] private float _zoneRadius, min, max;
    [SerializeField] private LayerMask _zoneMask;
    //Атака 
    [Header("Attack")]
    public GameObject _bullet;
    public Transform _attackPosition;
    [SerializeField] private float _offset;
    [HideInInspector] public float _timeAttack;
    public float _startTimeAttack;
    private AudioSource _audio;

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
        }
        else if (gameObject.name == "LeftDefender")
        {
            _zonePosition.x = -_zonePosition.x;
            transform.position = new Vector2(-item.defenderPosition.x, item.defenderPosition.y);
        }
        _zoneRadius = item.zoneRadius;
        min = item.min;
        max = item.max;
        _bullet = item.bullet;
        _attackPosition.localPosition = item.attackPosition;
        _offset = item.offset;
        _startTimeAttack = item.startTimeAttack;
    }

    void Update()
    {
        GetClosetEnemy(); // Ищем ближайщего врага
        ChangeEnemy(); // Ищем врагов
        BulletRotation(); // Прицеливание
        AttackAnimation();
        WhereToLook(); // Поворот защитника
        _zonePosition.z = 0;
    }

    private void WhereToLook()
    {
        int state = Camera.main.GetComponent<SwipeCamera>().state; // Получаем инфу и месте камеры
        _zonePosition.z = -10;
        if (gameObject.name == "RightDefender") // Если это правый защитник
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
        if (gameObject.name == "LeftDefender") // Если это левый защитник
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
            if (_enemies != null) if (!_enemies.Contains(zone[i].gameObject)) _enemies.Add(zone[i].gameObject); // Если в списке врагов его нет, то добавляем
        }
        if (_enemies != null && zone != null) if(_enemies.Count > zone.Length) _enemies.Remove(_enemies[zone.Length]); //Если в списке врагов больше чем в зоне, то удаляем последнего из списка
    }

    void BulletRotation()
    {
        if (GetClosetEnemy() != null) // Если есть ближайщий враг
        {
            Vector3 difference = GetClosetEnemy().position - _attackPosition.position; // Вычитаем позицию ближайего врага из позиции атаки
            float rotateZ = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg; // Узнаем поворот для пули 
            _attackPosition.rotation = Quaternion.Euler(0f, 0f,
                rotateZ + _offset - Random.Range(min, max)); // Разворачиваем позицию для атаки
        }
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.green; // Цвет зелёный
        Gizmos.DrawWireSphere(_zonePosition, _zoneRadius); // Рисуем круг
    }
    
    private void AttackAnimation()
    {
        if (GetClosetEnemy() != null) // Если есть ближайщий враг
        {
            Debug.Log("Not null");    
            if (_timeAttack <= 0f) // Если время закончено
            {
                Debug.Log("Attack");
                _audio.Play();
                _animators[_index].GetComponent<Animator>().SetTrigger("Attack");
                _timeAttack = _startTimeAttack; // Время возращаем
            }
            _timeAttack -= Time.deltaTime; // Уменьшаем время
        }
    }
}
