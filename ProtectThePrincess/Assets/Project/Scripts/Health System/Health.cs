using System.Collections;
using UnityEngine;

public class Health : MonoBehaviour
{
    public float health;
    [HideInInspector] public float maxHealth;
    private ScoreManager _scoreManager;
    [SerializeField] private Color _colorDied;
    [SerializeField] private GameObject _money;
    [SerializeField, Range(0, 15)] private float _howManyMoney;
    private void Start()
    {
        maxHealth = health;
        _scoreManager = FindObjectOfType<ScoreManager>();
        _howManyMoney = Random.Range(1, 15);
    }

    private void Update()
    {
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
        if (gameObject.name != "Tower")
        {
            if (gameObject.CompareTag("Enemy"))
            {
                for (int i = 0; i < _howManyMoney; i++)
                {
                    Instantiate(_money, transform.position, Quaternion.identity);
                }

                health = 0.1f;
                GetComponent<Collider2D>().enabled = false;
                GetComponent<SpriteRenderer>().color =
                    Color.Lerp(GetComponent<SpriteRenderer>().color, _colorDied, 0.05f);
                GetComponent<Enemy>()._speed = 0;
                yield return new WaitForSeconds(0.2f);
                health = 0;
                if (FindObjectOfType<SpawnerEnemies>()._howManyEnemies > _scoreManager.killedEnemies)
                {
                    _scoreManager.killedEnemies++;
                }
            }

            Destroy(gameObject);
        }
        if (gameObject.name == "Tower")
        {
            yield return new WaitForSeconds(1f);
            FindObjectOfType<SpawnerEnemies>()._lose = true;
        }
    }
}
