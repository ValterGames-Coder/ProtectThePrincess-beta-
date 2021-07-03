using UnityEngine;
using UnityEngine.UI;

public class BuyButton : MonoBehaviour
{
    private enum ControlType{Defender, Building} // Тип товара
    [Header("Int переменные")]
    [SerializeField] private int index, price; // Номер, стоимость
    [Header("Текст")]
    [SerializeField] private Text textMeaning; // Текст состояние покупки
    [Header("Тип товара")]
    [SerializeField] private ControlType _productType; // Выбор типа товара

    void Start()
    {
        if(PlayerPrefs.HasKey("AllBuilding")) PlayerPrefs.SetInt("AllBuilding", 1); // Если есть билдинги,то сохраняем 1
        textMeaning = textMeaning.GetComponent<Text>(); // Получаем компонент
        if (_productType == ControlType.Defender) // Если это защитник
        {
            if (index == 0) // Если это первый защитник 
            {
                PlayerPrefs.SetInt("BuyDefender" + index, 1); // Сохраняем защитника как купленного
                PlayerPrefs.SetInt("SelectedDefender", index); // Сохраняем как выбранный
                PlayerPrefs.Save();  // Сохраняем

            }
        }
        if (_productType == ControlType.Building) // Если это построка
        {
            if (index == 0) // Если это первая построка 
            {
                PlayerPrefs.SetInt("BuyBuilding" + index, 1); // Сохраняем постройку как купленную
                GetComponent<Button>().interactable = false; // Кнопка выключена
                PlayerPrefs.Save(); // Сохраняем
            }
        }
    }

    void Update()
    {
        if (_productType == ControlType.Defender) // Если это защитник
        {
            if (PlayerPrefs.GetInt("SelectedDefender") != index) // если не выбранное
            {
                textMeaning.text = "Select"; // Текст "выбрать"
                textMeaning.color = Color.yellow; // Текст становится жёлтым
            }

            else if (PlayerPrefs.GetInt("SelectedDefender") == index) // Если выбранное
            {
                textMeaning.text = "Selected"; // Текст "выбранный"
                textMeaning.color = Color.green; // Текст становится зелёным
            }

            if (PlayerPrefs.GetInt("BuyDefender" + index) == 0) // Если не купленное
            {
                textMeaning.text = "Buy"; // Текст "купить"
                textMeaning.color = Color.red; // Текст становится сероым
            }
            
            if(PlayerPrefs.GetInt("BuyDefender" + index) == 1 || GameObject.Find("Shop").GetComponent<ShopManager>().money >= price) // Если купленно или хватает денег
            {
                GetComponent<Button>().interactable = true; // Кнопка включена
            }
            else if(PlayerPrefs.GetInt("BuyDefender" + index) == 0 || GameObject.Find("Shop").GetComponent<ShopManager>().money < price) // Если не купленно или не хватает денег
            {
                GetComponent<Button>().interactable = false; // Кнопка выключена
            }
        }
        if (_productType == ControlType.Building) // Если это постройка
        {
            if (PlayerPrefs.GetInt("BuyBuilding" + index) == 0) // Если не купленное
            {
                textMeaning.text = "Buy"; // Текст "купить"
            }
            else if (PlayerPrefs.GetInt("BuyBuilding" + index) != 0) // Если купленное
            {
                textMeaning.text = "Bought";
                GetComponent<Button>().interactable = false; // Текст "куплено"
            }
            if(PlayerPrefs.GetInt("BuyBuilding" + index) == 1 || GameObject.Find("Shop").GetComponent<ShopManager>().money >= price) // Если купленно или хватает денег
            {
                GetComponent<Button>().interactable = true; // Кнопка включена
            }
            else if(PlayerPrefs.GetInt("BuyBuilding" + index) == 0 || GameObject.Find("Shop").GetComponent<ShopManager>().money < price) // Если не купленно или не хватает денег
            {
                GetComponent<Button>().interactable = false; // Кнопка выключена
            }
        }
    }

    public void Click() // Метод нажатия
    {
        if (_productType == ControlType.Defender) // Если это защитник
        {
            if (PlayerPrefs.GetInt("BuyDefender" + index) == 0) // Если не купленно 
            {
                if (GameObject.Find("Shop").GetComponent<ShopManager>().money >= price) // Если монет хватает
                {
                    GameObject.Find("Shop").GetComponent<ShopManager>().money -=
                        price; // Вычитаем цену из общего количества монет
                    PlayerPrefs.SetInt("Money",
                        GameObject.Find("Shop").GetComponent<ShopManager>().money); // Сохраняем монеты
                    PlayerPrefs.SetInt("BuyDefender" + index, 1); // Сохраняем что купленно
                    textMeaning.text = "Select"; 
                }

                PlayerPrefs.Save(); // Сохраняем
            }

            else if (PlayerPrefs.GetInt("BuyDefender" + index) == 1) // Если купленно
            {
                PlayerPrefs.SetInt("SelectedDefender", index);
                textMeaning.text = "Selected"; // Выбераем его
                PlayerPrefs.Save(); // Сохраняем
            }
        }
        if (_productType == ControlType.Building) // Если это постройка
        {
            if (PlayerPrefs.GetInt("BuyBuilding" + index) == 0) // Если не купленно 
            {
                if (GameObject.Find("Shop").GetComponent<ShopManager>().money >= price) // Если монет хватает
                {
                    GameObject.Find("Shop").GetComponent<ShopManager>().money -=
                        price; // Вычитаем цену из общего количества монет
                    PlayerPrefs.SetInt("Money",
                        GameObject.Find("Shop").GetComponent<ShopManager>().money); // Сохраняем монеты
                    PlayerPrefs.SetInt("BuyBuilding" + index, 1);
                    PlayerPrefs.SetInt("AllBuilding",PlayerPrefs.GetInt("AllBuilding") + 1); // Сохраняем что купленно
                    GetComponent<Button>().interactable = false; // Кнопка выключена
                }
                PlayerPrefs.Save(); // Сохраняем
            }
        }

    }
}
