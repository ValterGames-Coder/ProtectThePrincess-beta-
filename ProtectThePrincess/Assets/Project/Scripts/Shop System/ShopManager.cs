using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ShopManager : MonoBehaviour
{
    [Header("Money")]
    public int money; // Монеты
    [Header("Text")]
    public Text moneyText; // Текст для монет

    void Start()
    {
        money = PlayerPrefs.GetInt("Money"); //Получаем информацию о деньгах
    }

    void Update()
    {
        if (money < 0) money = 0; // Если монет меньше 0 то они будут равняться 0
        moneyText.text = money.ToString();
        if (Input.GetKey(KeyCode.Space)) //Если клавиша Space нажата
        {
            money += 1; // +1 к монетам
            PlayerPrefs.SetInt("Money", money); //Сохраняем значание 
        }
        if (SceneManager.GetActiveScene().buildIndex == 1) // Если победа
        {
            if(FindObjectOfType<SpawnerEnemies>().win) PlayerPrefs.SetInt("Money", money); // Сохраняем
        }
    }

    public void Remove() //Метод удаления данных
    {
        PlayerPrefs.DeleteAll(); // Удаляем все сохранения
    }
}
