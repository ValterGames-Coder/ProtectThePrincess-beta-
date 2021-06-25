using UnityEngine;

public class BarHealth : MonoBehaviour
{
    [SerializeField] private Transform _bar;
    
    public void SetSize(float size)
    {
        var barLocalScale = _bar.localScale;
        barLocalScale.x = Mathf.Lerp(barLocalScale.x, size, 0.1f);
        if (barLocalScale.x > 0) _bar.localScale = new Vector3(barLocalScale.x, 1f);
    }
}
