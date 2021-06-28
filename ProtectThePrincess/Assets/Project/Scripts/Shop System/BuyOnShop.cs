using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuyOnShop : MonoBehaviour
{
    [Header("Int переменные")]
    [SerializeField] private int index, price;
    [Header("Текст")]
    [SerializeField] private Text textMeaning;
    [Header("Картинка")]
    [SerializeField] private Image selectImage;
    [Header("Тип товара")]
    [SerializeField] private string _productType;
    
    void Update()
    {
        if (_productType == "Defender")
        {
            if (PlayerPrefs.GetInt("SelectedDefender") != index) // если оружие выбранное != этому
            {
                textMeaning.text = "Select"; // текст "выбрать"
                selectImage.color = Color.yellow; // картинка становится жёлтой
            }

            else if (PlayerPrefs.GetInt("SelectedDefender") == index) // если оружие выбранное == этому
            {
                textMeaning.text = "Selected"; // текст "выбранный"
                selectImage.color = Color.green; // картинка становится жёлтой
            }

            if (PlayerPrefs.GetInt("BuyDefender" + index) == 0) // если оружие не купленное
            {
                textMeaning.text = "Buy"; // текст "купить"
                selectImage.color = Color.grey; // картинка становится серой
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
                    PlayerPrefs.SetInt("BuyDefender" + index, 1); // сохраняем что оружие купленно
                }

                PlayerPrefs.Save(); // сохраняем
            }

            else if (PlayerPrefs.GetInt("BuyDefender" + index) == 1) // если оружие купленно
            {
                PlayerPrefs.SetInt("SelectedDefender", index); // выбераем его выбранным 
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
                    PlayerPrefs.SetInt("BuyBuilding" + index, 1); // сохраняем что оружие купленно
                }
                PlayerPrefs.Save(); // сохраняем
            }
        }

    }
}
