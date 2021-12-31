
using UnityEngine;
public class Bullet : MonoBehaviour
{
    [Header("Speed")]
    public float speed;
    [Header("Damage")]
    public float damage;

    void Start()
    {
        if(PlayerPrefs.HasKey("AttackForce") == true) damage = PlayerPrefs.GetFloat("AttackForce");
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
