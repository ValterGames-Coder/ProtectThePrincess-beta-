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
    [SerializeField] private float _offset;
    [HideInInspector] public float _timeAttack;
    public float _startTimeAttack;
    private AudioSource _audio;
    private string _name;
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
        GetClosetEnemy(); // Ищем ближайщего врага
        if (GetClosetEnemy() != null) // Если есть ближайщий враг
        {
            var distance= Vector3.Distance(GetClosetEnemy().position, _attackPosition.position);
            float time = distance / _bullet.GetComponent<Bullet>().speed;
            var enemy = GetClosetEnemy().GetComponent<Enemy>();
            var enemyDistance= time * enemy._speed;
            print($"Enemy Distance: {enemyDistance}");
            enemy.target.localPosition = new Vector2(enemyDistance, enemy.target.localPosition.y);
            var diff = Vector3.zero;
            float rotateZ;
            if (name == "LeftDefender")
            {
                diff = enemy.target.position - _attackPosition.position;
                rotateZ = Mathf.Atan2(diff.y, diff.x) * Mathf.Rad2Deg + _offset;
                _attackPosition.rotation = Quaternion.Euler(0,  0f, rotateZ);
            }
            else
            {
                diff = enemy.target.localPosition - _attackPosition.position;
                rotateZ = Mathf.Atan2(diff.y, diff.x) * Mathf.Rad2Deg + _offset;
                _attackPosition.rotation = Quaternion.Euler(0f, 0f, rotateZ);
            }
            print($"Rotate: {rotateZ}"); // Разворачиваем позицию для атаки
        }
    }

    public float Angle()
    {
        var h_tower = Vector2.Distance(_attackPosition.position, _groundPosition.position);
        var v_bullet = _bullet.GetComponent<Bullet>().speed;
        var v_enemy = GetClosetEnemy().GetComponent<Enemy>()._speed;
        var dist_toEnemy = Vector2.Distance(_attackPosition.position, GetClosetEnemy().position);
        var smechenie_enemy = v_enemy * (dist_toEnemy / v_bullet);
        
        var dist_toTower = Mathf.Sqrt(Mathf.Pow(dist_toEnemy, 2) - Mathf.Pow(h_tower, 2));
        var k_angle = Mathf.Atan(h_tower / dist_toEnemy) * (180 / Mathf.PI); // Начальный угол

        var uprezhdenie_bok = smechenie_enemy * Mathf.Sin(k_angle);
        var uprezhdenie_dal = smechenie_enemy * Mathf.Cos(k_angle);

        var proverka = Mathf.Sqrt(Mathf.Pow(uprezhdenie_bok, 2) + Mathf.Pow(uprezhdenie_dal, 2));
        print($"Проверка гипотенузы: {proverka} vs {smechenie_enemy}");
        var dist_do_enemy = Mathf.Sqrt(Mathf.Pow(dist_toEnemy - uprezhdenie_dal, 2) + Mathf.Pow(uprezhdenie_bok, 2));
        var angle_na_tsel = Mathf.Atan(uprezhdenie_bok / (dist_toEnemy - uprezhdenie_dal)) * (180 / Mathf.PI);

        var angle = angle_na_tsel - k_angle;
        Debug.DrawLine(_attackPosition.position, _groundPosition.position);
        Debug.DrawLine(_attackPosition.position, new Vector3(dist_do_enemy, _groundPosition.position.y));
        Debug.DrawLine(new Vector3(dist_toEnemy, _groundPosition.position.y), _groundPosition.position);
        print($"Угол: {angle}");

        return angle;
    }

    //public float FindCorner()
   // {
        // //1
        // float distanceBullet = Vector3.Distance(transform.position, GetClosetEnemy().position);
        // print($"distanceBullet: {distanceBullet}");
        // float timeBullet = distanceBullet / bullet.GetComponent<Bullet>().speed;
        // print($"timeBullet: {timeBullet}");
        // //2
        // //RaycastHit2D hit = Physics2D.Raycast(transform.position, positionEnemy.position);
        // Debug.DrawLine(transform.position, GetClosetEnemy().position);
        // float speedEnemy = GetClosetEnemy().GetComponent<Enemy>()._speed;
        // print($"speedEnemy: {speedEnemy}");
        // float distanceEnemy = speedEnemy * timeBullet;
        // print($"distanceEnemy: {distanceBullet}");
        // //3
        // Vector3 difference = (GetClosetEnemy().position) - _attackPosition.position;
        // print($"difference: {difference}");
        // float rotateZ = Mathf.Atan2(difference.y, difference.x) * Mathf.Rad2Deg;
        // print($"rotateZ: {rotateZ}");
        // //4
        // float distance = distanceEnemy * Mathf.Cos(rotateZ);
        // print($"4: {distance}");
        // //5
        // float katet = Mathf.Sqrt(Mathf.Pow(distanceEnemy, 2) - Mathf.Pow(distance, 2));
        // print($"5: {katet}");
        // //6
        // float bigKatet = distanceBullet - katet;
        // print($"6: {bigKatet}");
        // //7
        // float alpha = 0;
        // print($"7: {alpha}");
        // //8
        // float a = bigKatet / distance;
        // float atan = Mathf.Atan(a);
        // print($"atan: {atan}");
        // alpha = atan * Mathf.Rad2Deg ; 
        // print($"8: {alpha}");
        // float beta = 90 - alpha;
        // int state = Camera.main.GetComponent<SwipeCamera>().state;
  //  }

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
