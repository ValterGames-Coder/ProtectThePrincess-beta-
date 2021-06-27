using System.Collections;
using UnityEngine;
public class BuildingFortification : MonoBehaviour
{
    [SerializeField] private GameObject[] _buildings;
    [SerializeField] private float[] _timeBuild;
    [SerializeField] private Transform _transformBuilding;
    [SerializeField] private Quaternion _rotate;
    [SerializeField] private Color alphaColor;
    private int _indexBuilding;
    public bool inPlace;

    public void Build(int indexBuilding)
    {
        _indexBuilding = indexBuilding;
        StartCoroutine(Build());
    }
    private IEnumerator Build()
    {
        if (!inPlace)
        {
            inPlace = true;
            GameObject building = Instantiate(_buildings[_indexBuilding], _transformBuilding.position, _rotate);
            Color oldColor = building.GetComponent<SpriteRenderer>().color;
            building.GetComponent<SpriteRenderer>().color = alphaColor;
            building.GetComponent<Collider2D>().enabled = false;
            yield return new WaitForSeconds(_timeBuild[_indexBuilding]);
            building.GetComponent<Collider2D>().enabled = true;
            building.GetComponent<SpriteRenderer>().color = oldColor;
        }
    }
}
