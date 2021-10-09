using System.Collections;
using UnityEngine;

public class Money : MonoBehaviour
{
    [Header("Position")]
    [SerializeField] private Vector3 _uiPosition; // Позиция UI монеты
    private bool _fly; // Полёт ли 
    private Rigidbody2D _rigidbody; // Физика 

    void Start()
    {
        _rigidbody = GetComponent<Rigidbody2D>(); // Получаем компонент
        _uiPosition = Camera.main.ScreenToWorldPoint(GameObject.Find("MoneyImage").GetComponent<Transform>().position); // Получаем компонент
        StartCoroutine(Fly()); // Запускаем корутина полёта
    }

    private void Update()
    {
        _uiPosition = Camera.main.ScreenToWorldPoint(GameObject.Find("MoneyImage").GetComponent<Transform>().position); // Получаем позицию UI
        if(_fly) {
            transform.position =
                Vector2.MoveTowards(transform.position, _uiPosition, Random.Range(25f, 40f) * Time.deltaTime); // Если можем лететь, летим
            GetComponent<Collider2D>().enabled = false;
        }
        if (_uiPosition.x - transform.position.x <= 0.5f && _uiPosition.y - transform.position.y <= 0.5f) // Если позиция меньше или равняеться 0.5
        {
            Destroy(gameObject); // Уничтожаем монету
            GameObject.Find("MoneyImage").GetComponent<Animator>().SetTrigger("AddMoney");
            FindObjectOfType<ShopManager>().money++; // Прибавляем монету
            FindObjectOfType<BattleStatistics>().howMoney++;
        }
    }

    IEnumerator Fly() // Корутина полёта
    {
        yield return new WaitForSeconds(Random.Range(0.5f, 1f)); // Ждём
        _rigidbody.bodyType = RigidbodyType2D.Kinematic; //Отключаем физику
        _fly = true; // Можем лететь
    }
}
