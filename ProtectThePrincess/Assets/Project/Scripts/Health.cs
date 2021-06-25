using System.Collections;
using UnityEngine;

public class Health : MonoBehaviour
{
    public float health;
    [HideInInspector] public float maxHealth;
    private ScoreManager _scoreManager;
    [SerializeField] private Color _colorDied;
    public int time;

    private void Start()
    {
        maxHealth = health;
        _scoreManager = FindObjectOfType<ScoreManager>();
    }

    private void Update()
    {
        if (health <= 0)
        {
            StartCoroutine(Died());
        }
    }

    public void TakeDamage(float damage)
    {
        health -= damage;
    }

    private IEnumerator Died()
    {
        GetComponent<SpriteRenderer>().color = Color.Lerp(GetComponent<SpriteRenderer>().color, _colorDied, 0.05f);
        if (gameObject.CompareTag("Enemy"))
        {
            GetComponent<Collider2D>().enabled = false;
            GetComponent<Enemy>()._speed = 0;
            GetComponent<Enemy>()._healthBar.gameObject.SetActive(false);
        }
        yield return new WaitForSeconds(0.2f);
        health = 0;
        _scoreManager.Kill();
        Destroy(gameObject);
    }
}
