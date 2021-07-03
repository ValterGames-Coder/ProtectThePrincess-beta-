using System.Collections;
using UnityEngine;

public class BuildingFortification : MonoBehaviour
{
    [Header("Buildings")]
    [SerializeField] private GameObject[] _buildings; // Постройки
    [Header("Time build")]
    [SerializeField] private float[] _timeBuild; // Время постройки
    [Header("Build position")]
    [SerializeField] private Transform _transformBuilding; // Позиция для постройки постройки
    [Header("Rotate building")]
    [SerializeField] private bool _rotate; // Поворот постройки
    [Header("Color")]
    [SerializeField] private Color alphaColor; // Цвет 
    private int _indexBuilding; // Номер постройки
    [Header("In Place?")]
    public bool inPlace; // Если ли постройка на месте

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
            GameObject building = Instantiate(_buildings[_indexBuilding], _transformBuilding.position, Quaternion.identity); // Создаём постройку
            if (_rotate) building.GetComponent<SpriteRenderer>().flipX = true; // Если надо повернуть, поворачиваем
            Color oldColor = building.GetComponent<SpriteRenderer>().color; // получаем старый цвет
            building.GetComponent<SpriteRenderer>().color = alphaColor; // Изменяем цвет на время строительсва 
            building.GetComponent<Collider2D>().enabled = false; // Отключаем коллайдер
            yield return new WaitForSeconds(_timeBuild[_indexBuilding]); // Ждём время постройки
            building.GetComponent<Collider2D>().enabled = true; // Включаем коллайдер
            building.GetComponent<SpriteRenderer>().color = oldColor; // Возращаем норм цвет
        }
    }
}
