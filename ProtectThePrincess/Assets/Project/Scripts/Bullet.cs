using UnityEngine;
public class Bullet : MonoBehaviour
{
    public float speed;
    public float min, max;
    public float startTimeAttack;
    [SerializeField] private float damage;
    [HideInInspector] public float timeAttack;

    private void Start()
    {
        timeAttack = startTimeAttack;
        Destroy(gameObject, 5);
    }
    void FixedUpdate()
    {
        transform.Translate(Vector2.right * speed * Time.deltaTime);
    }
    private void OnCollisionEnter2D(Collision2D other)
    {
        Destroy(gameObject);
        if (other.collider.CompareTag("Enemy"))
        {
            other.gameObject.GetComponent<Health>().TakeDamage(damage);
        }
    }
}
