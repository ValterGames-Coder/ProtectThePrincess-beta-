using UnityEngine;
using UnityEngine.UI;

public class ShopManager : MonoBehaviour
{
    [Header("Деньги")]
    public int money;
    public Text moneyText;
    
    //Деньги

    void Start()
    {
        money = PlayerPrefs.GetInt("Money"); //Получаем информацию о деньгах
    }

    //Метод для добавления денег(В вашем проекте не обязательно, можете заменить на другую систему)
    void Update()
    {
        moneyText.text = money.ToString();
        if (Input.GetKey(KeyCode.Space)) //Если клавиша Space нажата
        {
            money += 10; // +10 к монетам
            PlayerPrefs.SetInt("Money", money); //Сохраняем значание 
        }
        money = PlayerPrefs.GetInt("Money"); //Также получаем значение 
    }

    public void Remove() //Метод удаления данных
    {
        PlayerPrefs.DeleteAll();
    }
}
