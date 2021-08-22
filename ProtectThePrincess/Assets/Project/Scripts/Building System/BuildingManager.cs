using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuildingManager : MonoBehaviour
{
    [SerializeField] private List<Button> _rightButtons = new List<Button>(); // Правые кнопки
    [SerializeField] private List<Button> _leftButtons = new List<Button>(); // Леве кнопки 
    [SerializeField] private List<Sprite> _imageBuildings = new List<Sprite>();
    [SerializeField] private Sprite _nonBuilding;
    [SerializeField] private List<bool> _haveBuilding = new List<bool>();

    void Start()
    {
        for (int i = 0; i < 3; i++) // Пока не закончились постройки
        {
            for (int j = 0; j < _imageBuildings.Count; j++)
            {
                if (PlayerPrefs.GetInt("SelectedBuildings" + j) == 1 && _haveBuilding[j] == false) // Если постройка куплена
                {
                    _haveBuilding[j] = true;
                    _rightButtons[i].interactable = true; // Активируем правую кнопку
                    _leftButtons[i].interactable = true; // Активируем левую кнопку
                    _rightButtons[i].transform.GetChild(0).GetComponent<Image>().sprite = _imageBuildings[j];
                    _leftButtons[i].transform.GetChild(0).GetComponent<Image>().sprite = _imageBuildings[j];
                    _leftButtons[i].transform.GetChild(0).GetComponent<Image>().preserveAspect = true;
                    _rightButtons[i].transform.GetChild(0).GetComponent<Image>().preserveAspect = true;
                    _leftButtons[i].onClick.AddListener(() =>
                    {
                        GameObject.Find("LeftDefender").GetComponent<BuildingFortification>().Build(j);
                    });
                    _rightButtons[i].onClick.AddListener(() =>
                    {
                        GameObject.Find("RightDefender").GetComponent<BuildingFortification>().Build(j);
                    });
                    break;
                }
                else if (PlayerPrefs.GetInt("SelectedBuildings" + j) == 0) // Если постройка куплена
                {
                    _rightButtons[i].transform.GetChild(0).GetComponent<Image>().sprite = _nonBuilding;
                    _leftButtons[i].transform.GetChild(0).GetComponent<Image>().sprite = _nonBuilding;
                }
                print($"{i};{j}");
            }
        }
    }
}
