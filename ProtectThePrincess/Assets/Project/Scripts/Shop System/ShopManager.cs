using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class ShopManager : MonoBehaviour
{
    [Header("Money")]
    public int money; // Монеты
    [Header("Text")]
    public TMP_Text moneyText; // Текст для монет

    void Start()
    {
        money = PlayerPrefs.GetInt("Money"); //Получаем информацию о деньгах
        if (PlayerPrefs.GetInt("BuyDefender" + 0) == 0) // Если это первый защитник 
        {
            PlayerPrefs.SetInt("BuyDefender" + 0, 1); // Сохраняем защитника как купленного
            PlayerPrefs.SetInt("SelectedDefender", 0); // Сохраняем как выбранный
            PlayerPrefs.Save();  // Сохраняем
        }
        if (PlayerPrefs.GetInt("BuyBuilding" + 0) == 0)
        {
            PlayerPrefs.SetInt("BuyBuilding" + 0, 1); // Сохраняем постройку как купленную
            PlayerPrefs.SetInt("SelectedBuildings" + 0, 1);
            PlayerPrefs.SetInt("SelectedBuildingsLenght", PlayerPrefs.GetInt("SelectedBuildingsLenght") + 1);
            PlayerPrefs.Save(); // Сохраняем
        }
    }

    void Update()
    {
        if(SceneManager.sceneCount != 1) money = PlayerPrefs.GetInt("Money");
        if (money < 0) money = 0; // Если монет меньше 0 то они будут равняться 0
        moneyText.text = money.ToString();
        if (Input.GetKey(KeyCode.Space)) //Если клавиша Space нажата
        {
            money += 1; // +1 к монетам
            PlayerPrefs.SetInt("Money", money); //Сохраняем значание 
        }
        if (SceneManager.GetActiveScene().buildIndex == 2) // Если победа
        {
            if(FindObjectOfType<SpawnerEnemies>().win || FindObjectOfType<SpawnerEnemies>().lose) PlayerPrefs.SetInt("Money", money); // Сохраняем
        }
    }

    public void Remove() //Метод удаления данных
    {
        PlayerPrefs.DeleteAll(); // Удаляем все сохранения
    }
}
