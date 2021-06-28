using System.Collections;
using UnityEngine;

public class Health : MonoBehaviour
{
    public float health;
    [HideInInspector] public float maxHealth;
    private ScoreManager _scoreManager;
    [SerializeField] private Color _colorDied;
    private void Start()
    {
        maxHealth = health;
        _scoreManager = FindObjectOfType<ScoreManager>();
    }

    private void Update()
    {
        if (GetComponentInChildren<BarHealth>())
        {
            float size = health / maxHealth;
            GetComponentInChildren<BarHealth>().SetSize(size);
        }

        if (health <= 0)
        {
            if (gameObject.CompareTag("Building"))
            {
                if (gameObject.transform.position.x > 0)
                {
                    GameObject.Find("RightDefender").GetComponent<BuildingFortification>().inPlace = false;
                }
                if (gameObject.transform.position.x < 0)
                {
                    GameObject.Find("LeftDefender").GetComponent<BuildingFortification>().inPlace = false;
                }
            }
            
            StartCoroutine(Died());
        }
    }

    public void TakeDamage(float damage)
    {
        health -= damage;
    }

    private IEnumerator Died()
    {
        if (gameObject.CompareTag("Enemy"))
        {
            health = 0.1f;
            GetComponent<Collider2D>().enabled = false;
            GetComponent<SpriteRenderer>().color = Color.Lerp(GetComponent<SpriteRenderer>().color, _colorDied, 0.05f);
            GetComponent<Enemy>()._speed = 0;
            GetComponent<Enemy>()._healthBar.gameObject.SetActive(false);
            yield return new WaitForSeconds(0.2f);
            health = 0;
            if (FindObjectOfType<SpawnerEnemies>()._howManyEnemies > _scoreManager.killedEnemies)
            {
                _scoreManager.killedEnemies++;
            }
        }
        Destroy(gameObject);
    }
}
