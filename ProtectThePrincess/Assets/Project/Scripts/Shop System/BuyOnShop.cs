using UnityEngine;
using UnityEngine.UI;

public class BuyOnShop : MonoBehaviour
{
    [Header("Int переменные")]
    [SerializeField] private int index, price;
    [Header("Текст")]
    [SerializeField] private Text textMeaning;
    [Header("Тип товара")]
    [SerializeField] private string _productType;

    void Start()
    {
        textMeaning = textMeaning.GetComponent<Text>();
        if (_productType == "Defender") 
        {
            if (index == 0)
            {
                PlayerPrefs.SetInt("BuyDefender" + index, 1);
                if (PlayerPrefs.GetInt("SelectedDefender") == 0)
                {
                    PlayerPrefs.SetInt("SelectedDefender", index);
                }
            }
        }
        if (_productType == "Building")
        {
            if (index == 0)
            {
                PlayerPrefs.SetInt("BuyBuilding" + index, 1);
                GetComponent<Button>().interactable = false;
            }
        }
    }

    void Update()
    {
        if (_productType == "Defender")
        {
            if (PlayerPrefs.GetInt("SelectedDefender") != index) // если оружие выбранное != этому
            {
                textMeaning.text = "Select"; // текст "выбрать"
                textMeaning.color = Color.yellow; // картинка становится жёлтой
            }

            else if (PlayerPrefs.GetInt("SelectedDefender") == index) // если оружие выбранное == этому
            {
                textMeaning.text = "Selected"; // текст "выбранный"
                textMeaning.color = Color.green; // картинка становится жёлтой
            }

            if (PlayerPrefs.GetInt("BuyDefender" + index) == 0) // если оружие не купленное
            {
                textMeaning.text = "Buy"; // текст "купить"
                textMeaning.color = Color.red; // картинка становится серой
            }
        }
        if (_productType == "Building")
        {
            if (PlayerPrefs.GetInt("BuyBuilding" + index) == 0) // если оружие не купленное
            {
                textMeaning.text = "Buy"; // текст "купить"
                textMeaning.color = Color.red; // картинка становится серой
            }
            else if (PlayerPrefs.GetInt("BuyBuilding" + index) != 0) // если оружие не купленное
            {
                textMeaning.text = "Bought";
                GetComponent<Button>().interactable = false; // текст "купить"
                textMeaning.color = Color.green; // картинка становится серой
            }
        }

    }

    public void Click() // метод нажатия
    {
        if (_productType == "Defender")
        {
            if (PlayerPrefs.GetInt("BuyDefender" + index) == 0) // если оружие не купленно 
            {
                if (GameObject.Find("Shop").GetComponent<ShopManager>().money >= price) // если монет >= цены оружия
                {
                    GameObject.Find("Shop").GetComponent<ShopManager>().money -=
                        price; // вычитаем цену из общего количества монет
                    PlayerPrefs.SetInt("Money",
                        GameObject.Find("Shop").GetComponent<ShopManager>().money); // сохраняем монеты
                    PlayerPrefs.SetInt("BuyDefender" + index, 1);
                    textMeaning.text = "Select"; // сохраняем что оружие купленно
                }

                PlayerPrefs.Save(); // сохраняем
            }

            else if (PlayerPrefs.GetInt("BuyDefender" + index) == 1) // если оружие купленно
            {
                PlayerPrefs.SetInt("SelectedDefender", index);
                textMeaning.text = "Selected"; // выбераем его выбранным 
                PlayerPrefs.Save(); // сохраняем
            }
        }
        if (_productType == "Building")
        {
            if (PlayerPrefs.GetInt("BuyBuilding" + index) == 0) // если оружие не купленно 
            {
                if (GameObject.Find("Shop").GetComponent<ShopManager>().money >= price) // если монет >= цены оружия
                {
                    GameObject.Find("Shop").GetComponent<ShopManager>().money -=
                        price; // вычитаем цену из общего количества монет
                    PlayerPrefs.SetInt("Money",
                        GameObject.Find("Shop").GetComponent<ShopManager>().money); // сохраняем монеты
                    PlayerPrefs.SetInt("BuyBuilding", PlayerPrefs.GetInt("BuyBuilding") + 1); // сохраняем что оружие купленно
                    GetComponent<Button>().interactable = false;
                }
                PlayerPrefs.Save(); // сохраняем
            }
        }

    }
}
