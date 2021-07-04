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

    private void Start()
    {
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
            }
            
            StartCoroutine(Died()); // Старт корутины смерти
        }
    }

    public void TakeDamage(float damage) // Получение дамага
    {
        health -= damage; // Вычитаем дамаг из здоровья 
    }

    private IEnumerator Died()
    {
        if (gameObject.name != "Tower") // Если это не башня
        {
            if (gameObject.CompareTag("Enemy")) // Если это враг 
            {
                FindObjectOfType<BattleStatistics>().allKill++;
                for (int i = 0; i < _howManyMoney; i++) // Запускаем цикл 
                {
                    Instantiate(_money, transform.position, Quaternion.identity); // Спавним монеты
                }
                GetComponent<Collider2D>().enabled = false; // Отключаем коллайдеры
                GetComponent<SpriteRenderer>().color = 
                    Color.Lerp(GetComponent<SpriteRenderer>().color, _colorDied, 0.05f); // Анимация смерти
                GetComponent<Enemy>()._speed = 0;
                yield return new WaitForSeconds(0.2f); // Ждём
                if (FindObjectOfType<SpawnerEnemies>()._howManyEnemies > _scoreManager.killedEnemies) // Если убитых меньше чем нужно
                {
                    _scoreManager.killedEnemies++; //Прибавляем
                }
            }

            Destroy(gameObject); // Уничтожаем обьект
        }
        if (gameObject.name == "Tower") // Если это башня
        {
            yield return new WaitForSeconds(1f); // Ждём 
            FindObjectOfType<SpawnerEnemies>().lose = true; // Проигрываем
        }
    }
}
