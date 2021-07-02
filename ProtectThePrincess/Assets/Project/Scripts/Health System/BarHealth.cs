using UnityEngine;
using UnityEngine.UI;

public class BarHealth : MonoBehaviour
{
    [SerializeField] private Image _bar;
    private Health _health;

    void Start()
    {
        _health = GetComponentInParent<Health>();
    }

    private void Update()
    {
        //_bar.fillAmount = _health.health / _health.maxHealth;
        _bar.fillAmount = Mathf.Lerp(_bar.fillAmount, _health.health / _health.maxHealth, 5f * Time.deltaTime);
    }
}
