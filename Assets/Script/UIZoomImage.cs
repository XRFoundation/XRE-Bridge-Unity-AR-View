using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIZoomImage : MonoBehaviour//, IPointerDownHandler, IPointerUpHandler 
{
	// private Vector3 initialscale;
	//
	// [SerializeField]
	// private float zoomSpeed = 0.1f;
	//
	// [SerializeField]
	// private float maxZoom = 10f;
	//
	//
	// void Awake()
	// {
	// 	initialscale = transform.localScale;
	// }
	//
	// // Start is called before the first frame update
	// void Start()
	// {
	//
	// }
	//
	// // Update is called once per frame
	// void Update()
	// {
	//
	// }
	//
	// public void OnScroll(PointerEventData eventData)
	// {
	// 	var delta = Vector3.one * (eventData.scrollDelta.y * zoomSpeed);
	// 	var desiredScale = transform.localScale + delta;
	//
	// 	desiredScale = Clamdesirescale(desiredScale);
	//
	// 	transform.localScale = desiredScale;
	// }
	//
	// private Vector3 Clamdesirescale(Vector3 desiredscale)
	// {
	// 	desiredscale = Vector3.Max(initialscale, desiredscale);
	// 	desiredscale = Vector3.Min(initialscale * maxZoom, desiredscale);
	// 	return desiredscale;
	// }
	//
	
	
	
	
	//
	// private bool _isDragging;
 //    private float _currentScale;
 //    public float minScale, maxScale;
 //    private float _temp = 0;
 //    private float _scalingRate = 2;
 //
 //    public ScrollRect scrollRect;
 //    
 //    private void Start()
 //    {
	//     //Application.targetFrameRate = 60;
 //        _currentScale = transform.localScale.x;
 //    }
 //
 //    public void OnPointerDown(PointerEventData eventData) 
 //    {
 //        if (Input.touchCount == 1) 
 //        {
 //            _isDragging = true;
 //        }
 //    }
 //
 //
 //    public void OnPointerUp(PointerEventData eventData) 
 //    {
 //        _isDragging = false;
 //    }
 //
 //
 //    private void Update() 
 //    {
	//     if (_isDragging)
	//     {
	// 	    if (Input.touchCount == 1)
	// 	    {
	// 		    scrollRect.enabled = true;
	// 	    }
 //
	// 	    if (Input.touchCount == 2)
	// 	    {
	// 		    scrollRect.enabled = false;
	// 		    transform.localScale = new Vector2(_currentScale, _currentScale);
	// 		    float distance = Vector3.Distance(Input.GetTouch(0).position, Input.GetTouch(1).position);
	// 		    if (_temp > distance)
	// 		    {
	// 			    if (_currentScale < minScale)
	// 				    return;
	// 			    _currentScale -= (Time.deltaTime) * _scalingRate;
	// 		    }
 //
	// 		    else if (_temp < distance)
	// 		    {
	// 			    if (_currentScale > maxScale)
	// 				    return;
	// 			    _currentScale += (Time.deltaTime) * _scalingRate;
	// 		    }
 //
	// 		    _temp = distance;
	// 	    }
	//     }
 //    }
 
 Vector3 touchStart;
 public float zoomOutMin = 1;
 public float zoomOutMax = 8;
   
 // Update is called once per frame
 void Update () {
	 if(Input.GetMouseButtonDown(0)){
		 touchStart = Camera.main.ScreenToWorldPoint(Input.mousePosition);
	 }
	 if(Input.touchCount == 2){
		 Touch touchZero = Input.GetTouch(0);
		 Touch touchOne = Input.GetTouch(1);
 
		 Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
		 Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;
 
		 float prevMagnitude = (touchZeroPrevPos - touchOnePrevPos).magnitude;
		 float currentMagnitude = (touchZero.position - touchOne.position).magnitude;
 
		 float difference = currentMagnitude - prevMagnitude;
 
		 zoom(difference * 0.01f);
	 }else if(Input.GetMouseButton(0)){
		 Vector3 direction = touchStart - Camera.main.ScreenToWorldPoint(Input.mousePosition);
		 gameObject.transform.position -= direction;
	 }
	 zoom(Input.GetAxis("Mouse ScrollWheel"));
 }
 
 void zoom(float increment){
	 float factor = Mathf.Clamp(gameObject.transform.localScale.x + increment, zoomOutMin, zoomOutMax);
	 gameObject.transform.localScale = new Vector3(factor, factor, 0);
 }
}
