using System.Collections;
using UnityEngine;

public class Health : MonoBehaviour
{
    [Header("Health")]
    public float health; // Здоровье 
    [HideInInspector] public float maxHealth; // Максимальное здоровье 
    private ScoreManager _scoreManager; // Очки
    [Header("Color")]
    [SerializeField] private Color _colorDied; // Цвет после смерти
    [Header("Money prefab")]
    [SerializeField] private GameObject _money; // Монета
    [Header("How many money spawn")]
    [SerializeField, Range(0, 15)] private float _howManyMoneyMax;
    private float _howManyMoney; // Количество монет для спавна
    private bool Die;
    private Rigidbody2D _rigibody;

    void Start()
    {
        _rigibody = GetComponent<Rigidbody2D>();
        if (gameObject.name == "Tower")
        {   
            if (PlayerPrefs.HasKey("HealthTower" + 0) == false)
            {
                PlayerPrefs.SetInt("HealthTower" + 0, 100);        
                print(PlayerPrefs.GetInt("HealthTower" + 0));
            }
            health = PlayerPrefs.GetInt("HealthTower" + 0); // Настройки башни
        }
        maxHealth = health; // Максимальное здоровье равняется 
        _scoreManager = FindObjectOfType<ScoreManager>(); // Подключаем компонент
        _howManyMoney = Random.Range(1, _howManyMoneyMax); //Выбираем количество монет
    }

    void Update()
    {
        if (health <= 0 && FindObjectOfType<SpawnerEnemies>().lose == false) // Если здововье меньше или равняется нулю
        {
            if (gameObject.CompareTag("Building")) // Если это постройка 
            {
                if (gameObject.transform.position.x > 0) // Если она справа
                {
                    GameObject.Find("RightDefender").GetComponent<BuildingFortification>().inPlace = false; // Теперь там пусто
                }
                if (gameObject.transform.position.x < 0) // Если она слево
                {
                    GameObject.Find("LeftDefender").GetComponent<BuildingFortification>().inPlace = false; // Теперь там пусто
                }
                if(gameObject != null) Destroy(gameObject);
            }
            Died(); // Старт корутины смерти
        }
    }

    public void TakeDamage(float damage) // Получение дамага
    {
        health -= damage; // Вычитаем дамаг из здоровья 
        if (gameObject.CompareTag("Enemy")) _rigibody.AddForce(Vector2.up * 1.5f, ForceMode2D.Impulse);
    }

    private void Died()
    {
        if (gameObject.CompareTag("Enemy") && !Die) // Если это враг 
        {
            Die = true;
            FindObjectOfType<BattleStatistics>().allKill++;
            _scoreManager.killedEnemies++;
            GetComponent<Collider2D>().enabled = false; // Отключаем коллайдеры
            for (int i = 0; i < _howManyMoney; i++) // Запускаем цикл 
            {
                Instantiate(_money, transform.position, Quaternion.identity); // Спавним монеты
            }
            GetComponent<Enemy>()._speed = 0;
            Destroy(gameObject, 0.2f); // Уничтожаем обьект
        }
        if (gameObject.name == "Tower" && Die == false) // Если это башня
        {
            StartCoroutine(AnimationTower());
        }
    }

    private IEnumerator AnimationTower()
    {
        yield return new WaitForSeconds(1f); // Ждём 
        FindObjectOfType<SpawnerEnemies>().lose = true; // Проигрываем
    }
}



