using UnityEngine;
using UnityEngine.UI;

public class BarHealth : MonoBehaviour
{
    [Header("Bar")]
    [SerializeField] private Image _bar; // Полоска бара
    private Health _health; // Здоровье

    void Start()
    {
        _health = GetComponentInParent<Health>(); // Получаем компонент
    }

    private void Update()
    {
        _bar.fillAmount = Mathf.Lerp(_bar.fillAmount, _health.health / _health.maxHealth, 5f * Time.deltaTime); // Отображаем на баре здоровье
    }
}
