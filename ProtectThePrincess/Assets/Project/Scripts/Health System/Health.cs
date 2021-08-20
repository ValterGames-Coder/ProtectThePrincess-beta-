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
    [SerializeField, Range(0, 15)] private float _howManyMoney; // Количество монет для спавна
    private bool Die = false;

    private void Start()
    {
        if (gameObject.name == "Tower")
        {
            health = FindObjectOfType<Defender>().item.healthTower;
        }
        maxHealth = health; // Максимальное здоровье равняется 
        _scoreManager = FindObjectOfType<ScoreManager>(); // Подключаем компонент
        _howManyMoney = Random.Range(1, 10); //Выбираем количество монет
    }

    private void Update()
    {
        if (health <= 0) // Если здововье меньше или равняется нулю
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
                Destroy(gameObject);
            }
            Died(); // Старт корутины смерти
        }
    }

    public void TakeDamage(float damage) // Получение дамага
    {
        health -= damage; // Вычитаем дамаг из здоровья 
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
            GetComponent<SpriteRenderer>().color = Color.Lerp(GetComponent<SpriteRenderer>().color, _colorDied, 0.05f); // Анимация смерти
            GetComponent<Enemy>()._speed = 0;
            Destroy(gameObject, 0.2f); // Уничтожаем обьект
        }
        if (gameObject.name == "Tower") // Если это башня
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



