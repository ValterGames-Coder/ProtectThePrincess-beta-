using UnityEngine;
public class Bullet : MonoBehaviour
{
    [Header("Speed")]
    public float speed;
    [Header("Time")]
    public float startTimeAttack;
    [Header("Damage")]
    [SerializeField] private float damage;
    [HideInInspector] public float timeAttack;

    private void Start()
    {
        timeAttack = startTimeAttack; // Время атаки равняется старту время атаки
        Destroy(gameObject, 5); // Уничтажает через пять секунд после создания
    }
    void FixedUpdate()
    {
        transform.Translate(Vector2.right * speed * Time.deltaTime); // Летим по направлению
    }
    private void OnCollisionEnter2D(Collision2D other)
    {
        Destroy(gameObject); // Уничтажается обьект
        if (other.collider.CompareTag("Enemy")) // Если докаснулась до врага
        {
            other.gameObject.GetComponent<Health>().TakeDamage(damage); // Отнимаем жизни
        }
    }
}
