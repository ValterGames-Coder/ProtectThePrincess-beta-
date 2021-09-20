using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class BuildingFortification : MonoBehaviour
{
    [Header("Buildings")]
    [SerializeField] private GameObject[] _buildings; // Постройки
    [Header("Time build")]
    [SerializeField] private float[] _timeBuild; // Время постройки
    [Header("Build position")]
    [SerializeField] private Transform _transformBuilding; // Позиция для постройки постройки
    [Header("Rotate building")]
    [SerializeField] private bool _rotate; // Поворот постройки// Цвет 
    private int _indexBuilding; // Номер постройки
    [Header("In Place?")]
    public bool inPlace; // Если ли постройка на месте
    [SerializeField] private GameObject _buildingsButtons, _buildAnimation;

    private void Update()
    {
        if (inPlace)
        {
            _buildingsButtons.GetComponent<Animator>().SetBool("InPlace", true);
            _buildingsButtons.GetComponent<Button>().interactable = false;
            _buildingsButtons.GetComponent<BuildsButtonsManager>()._isOn = false;
        }
        else
        {
            _buildingsButtons.GetComponent<Animator>().SetBool("InPlace", false);
            _buildingsButtons.GetComponent<Button>().interactable = true;
        }
    }

    public void Build(int indexBuilding) // Метод постройки
    {
        _indexBuilding = indexBuilding; // Получаем номер постройки
        StartCoroutine(Build()); // Запускаем корутину
    }
    private IEnumerator Build() // Корутина постройки
    {
        if (!inPlace) // Если на месте нет постройки
        {
            inPlace = true; // На месте есть постройка 
            _buildAnimation.SetActive(true);
            yield return new WaitForSeconds(_timeBuild[_indexBuilding]); // Ждём время постройки
            GameObject building = Instantiate(_buildings[_indexBuilding], _transformBuilding.position, Quaternion.identity); // Создаём постройку
            if (_rotate) building.GetComponent<SpriteRenderer>().flipX = true; // Если надо повернуть, поворачиваем
            _buildAnimation.SetActive(false);
        }
    }
}
