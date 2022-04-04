using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiedZone : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.CompareTag("Enemy")) other.GetComponent<Health>().TakeDamage(100000);
    }
}
