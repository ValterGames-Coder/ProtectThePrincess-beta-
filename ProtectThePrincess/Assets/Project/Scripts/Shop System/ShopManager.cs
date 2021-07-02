using UnityEngine;
using UnityEngine.UI;
public class ShopManager : MonoBehaviour
{
    [Header("Деньги")]
    public int money;
    public Text moneyText;
    void Start()
    {
        money = PlayerPrefs.GetInt("Money"); //Получаем информацию о деньгах
    }
    //Метод для добавления денег(В вашем проекте не обязательно, можете заменить на другую систему)
    void Update()
    {
        if (money < 0) money = 0;
        money = PlayerPrefs.GetInt("Money");
        moneyText.text = money.ToString();
        if (Input.GetKey(KeyCode.Space)) //Если клавиша Space нажата
        {
            money += 1; // +1 к монетам
            PlayerPrefs.SetInt("Money", money); //Сохраняем значание 
        }
    }
    public void Remove() //Метод удаления данных
    {
        PlayerPrefs.DeleteAll();
    }
}
