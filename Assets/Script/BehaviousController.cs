using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.EventSystems;

namespace Amar
{
	public class BehaviousController : MonoBehaviour
	{
		public static BehaviousController Instance;
		public Text ObjectName;
		public Text _one;
		public Text _two;
		public int number = 0;
		//public State _state;
		//public TMP_Dropdown _dropdown;

		[Space]
		[Header("Behaviour")]
		public GameObject Indicator;
		public GameObject ArTap;
		public bool ShowBottom;

		[Space]
		[Header("PLacment Position")]
		public Vector3 PlacementPos;

		[Space]
		[Header("All Combine")]
		private Vector3 startpos;
		private Vector3 EndPos;
		private Vector3 startRot;
		private Vector3 EndRot;
		private Vector3 RotDifferent;
		private Touch _touch;
		private Vector3 ObjectPosStart;
		private Vector3 ObjectPosEnd;
		private Vector2 prevDist = new Vector2(0, 0);
		private Vector2 curDist = new Vector2(0, 0);
		private Vector2 midPoint = new Vector2(0, 0);
		private Vector2 ScreenSize;
		private Vector3 originalPos;
		private GameObject parentObject;
		private float scale_factor = 0.07f;
		private float MAXSCALE = 6.0f, MIN_SCALE = 0.6f; // zoom-in and zoom-out limits
		private bool isMousePressed;

		public PinchRotationSample _pinch;


		public GameObject PlacedObject;
		private float _time;
		private float _runtime;
		public GameObject _deleteObject;
		public int _speedInt;
		public int _rotationInt;
		private float Difference;

		public bool OnUI, Recording;
		private bool _three,_four;


		private void Awake()
		{
			if (Instance == null)
			{
				Instance = this;
			}
		}

		private void OnEnable()
		{
			OnObjectPlace();
		}

		private void Start()
		{

		}

		// Update is called once per frame
		void Update()
		{
			GetTouch();
			MoveByFinger();
			//Debug.Log("On object" + !EventSystem.current.IsPointerOverGameObject(-1));
		}

		public void ChangeUICondition(bool value)
		{
			OnUI = value;
		}

		public void OnObjectSelect(bool select)
		{
			if (select)
			{
				Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
				RaycastHit hit;

				if (Physics.Raycast(ray, out hit, Mathf.Infinity))
				{
					Debug.DrawLine(ray.origin, hit.point);
				}
			}
		}


		public void OnObjectPlace()
		{
			ArTap.SetActive(true);
			Indicator.SetActive(true);
			Debug.Log("Object Place");
		}



		public void GetTouch()
		{
			if (Input.touchCount > 0)
			{
				_touch = Input.GetTouch(0);
			}

			if (_touch.phase == TouchPhase.Began)
			{

				if (!OnUI && !Recording)
				{
					startpos = _touch.position;
					Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
					RaycastHit hit;
					if (Physics.Raycast(ray, out hit, Mathf.Infinity))
					{
						if (hit.collider.tag == "Model")
						{
							_time = Time.time;
							Debug.Log("time " + _time);

							startpos = _touch.position;
							RemoveMark();
							PlacedObject = hit.collider.gameObject;

							ObjectPosStart = PlacedObject.transform.position;
							Debug.DrawRay(this.transform.position, hit.transform.position, Color.green);
							_pinch.target = hit.collider.gameObject.transform;
							PlaceMark();
						}
					}
				}

			}
		}

		public void SetScreenOrientation()
		{
			Screen.orientation = ScreenOrientation.AutoRotation;
		}


		public void RemoveMark()
		{
			if (PlacedObject != null)
			{
				foreach (Transform child in PlacedObject.transform)
				{
					if (child.name == "Mark")
					{
						child.gameObject.SetActive(false);
					}
				}
			}
			ShowBottom = true;
			//UIManager.Instance.ToggleBottom(ShowBottom);
			PlacedObject = null;
			
		}

		public void PlaceMark()
		{
			ToggleBottom();
			if (PlacedObject != null)
			{
				foreach (Transform child in PlacedObject.transform)
				{
					if (child.name == "Mark")
					{
						child.gameObject.SetActive(true);
					}
				}
			}
		}

		public void ToggleBottom()
		{
			if (ShowBottom)
			{
				//UIManager.Instance.ToggleBottom(ShowBottom);
				ShowBottom = false;
			}
		}

		public void Yes()
		{
			if (PlacedObject != null)
			{
				Debug.Log("delete.....");
				Destroy(PlacedObject);
				PlacedObject = null;
			}
		}

		public void No()
		{
			_deleteObject.SetActive(false);
			RemoveMark();
		}

		public void MoveByFinger()
		{

			if (_touch.phase == TouchPhase.Began && !OnUI)
			{
				startpos = _touch.position;
				//StartText.text = startpos.ToString();
			}

			if (Input.touchCount == 1 && PlacedObject != null && _touch.phase == TouchPhase.Moved)
			{

				_runtime = Time.time;
				if (!OnUI && (_runtime - _time) > 0.5f && !Recording)
				{
					if (!_three)
					{
						//UIManager.Instance.SwitchTotorial(3);
						_three = true;
					}

					_runtime = Time.time;
					startpos = _touch.position;
					//EndText.text = startpos.x.ToString() + "StartPos1";
					//ObjectName.text = "MOve By Finger";
					ObjectPosition(PlacedObject);
				}

			}

			if (Input.touchCount == 2)
			{
				parentObject = PlacedObject;
				/*
				if (_touch.phase == TouchPhase.Moved && !OnUI)
				{
					if (!_four)
					{
						UIManager.Instance.SwitchTotorial(4);
						_four = true;
					}
			
					EndPos = _touch.position;
					//EndText.text = EndPos.ToString();
					Difference = startpos.x - EndPos.x;
					// _one.text = _touch.position.ToString();

					if (Difference > 0)
					{
						//Dif.text = Difference.ToString() + "Positive";
						PlacedObject.transform.localEulerAngles += new Vector3(0f, _rotationInt * Time.deltaTime, 0);
					}

					if (Difference < 0)
					{
						//Dif.text = Difference.ToString() + "Negative";
						PlacedObject.transform.localEulerAngles -= new Vector3(0f, _rotationInt * Time.deltaTime, 0);
					}
				}*/

				// These lines of code will take the distance between two touches and zoom in - zoom out at middle point between them

				/*
				if (Input.touchCount == 2 && Input.GetTouch(0).phase == TouchPhase.Moved && Input.GetTouch(1).phase == TouchPhase.Moved)
				{
					midPoint = new Vector2(((Input.GetTouch(0).position.x + Input.GetTouch(1).position.x) / 2), ((Input.GetTouch(0).position.y + Input.GetTouch(1).position.y) / 2));
					midPoint = Camera.main.ScreenToWorldPoint(midPoint);

					curDist = Input.GetTouch(0).position - Input.GetTouch(1).position; //current distance between finger touches
					prevDist = ((Input.GetTouch(0).position - Input.GetTouch(0).deltaPosition) - (Input.GetTouch(1).position - Input.GetTouch(1).deltaPosition)); //difference in previous locations using delta positions
					float touchDelta = curDist.magnitude - prevDist.magnitude;
					// Zoom out
					if (touchDelta > 0)
					{
						if (parentObject.transform.localScale.x < MAXSCALE && parentObject.transform.localScale.y < MAXSCALE)
						{
							Vector3 scale = new Vector3(parentObject.transform.localScale.x + scale_factor, parentObject.transform.localScale.y + scale_factor, 1);
							scale.x = (scale.x > MAXSCALE) ? MAXSCALE : scale.x;
							scale.y = (scale.y > MAXSCALE) ? MAXSCALE : scale.y;
							scaleFromPosition(scale, midPoint);
						}
					}
					//Zoom in
					else if (touchDelta < 0)
					{
						if (parentObject.transform.localScale.x > MIN_SCALE && parentObject.transform.localScale.y > MIN_SCALE)
						{
							Vector3 scale = new Vector3(parentObject.transform.localScale.x + scale_factor * -1, parentObject.transform.localScale.y + scale_factor * -1, 1);
							scale.x = (scale.x < MIN_SCALE) ? MIN_SCALE : scale.x;
							scale.y = (scale.y < MIN_SCALE) ? MIN_SCALE : scale.y;
							scaleFromPosition(scale, midPoint);
						}
					}
				}
				// On touch end just check whether image is within screen or not
				else if (Input.touchCount == 2 && (Input.GetTouch(0).phase == TouchPhase.Ended || Input.GetTouch(0).phase == TouchPhase.Canceled || Input.GetTouch(1).phase == TouchPhase.Ended || Input.GetTouch(1).phase == TouchPhase.Canceled))
				{
					if (parentObject.transform.localScale.x < 1 || parentObject.transform.localScale.y < 1)
					{
						parentObject.transform.localScale = Vector3.one;
						parentObject.transform.position = new Vector3(originalPos.x * -1, originalPos.y * -1, originalPos.z);
						transform.position = originalPos;
					}
					else
					{
						Vector3 pos = transform.position;
						if (pos.x > ScreenSize.x * (parentObject.transform.localScale.x - 1))
							pos.x = ScreenSize.x * (parentObject.transform.localScale.x - 1);
						if (pos.x < ScreenSize.x * (parentObject.transform.localScale.x - 1) * -1)
							pos.x = ScreenSize.x * (parentObject.transform.localScale.x - 1) * -1;
						if (pos.y > ScreenSize.y * (parentObject.transform.localScale.y - 1))
							pos.y = ScreenSize.y * (parentObject.transform.localScale.y - 1);
						if (pos.y < ScreenSize.y * (parentObject.transform.localScale.y - 1) * -1)
							pos.y = ScreenSize.y * (parentObject.transform.localScale.y - 1) * -1;
						transform.position = pos;
					}
				}*/
			}
			//Following method scales the gameobject from particular position


		}
		static Vector3 prevPos = Vector3.zero;
		private void scaleFromPosition(Vector3 scale, Vector3 fromPos)
		{
			if (!fromPos.Equals(prevPos))
			{
				Vector3 prevParentPos = parentObject.transform.position;
				parentObject.transform.position = fromPos;
				Vector3 diff = parentObject.transform.position - prevParentPos;
				Vector3 pos = new Vector3(diff.x / parentObject.transform.localScale.x * -1, diff.y / parentObject.transform.localScale.y * -1, transform.position.z);
				transform.localPosition = new Vector3(transform.localPosition.x + pos.x, transform.localPosition.y + pos.y, pos.z);
			}
			parentObject.transform.localScale = scale;
			prevPos = fromPos;
		}

		public void ObjectPosition(GameObject SelectedObj)
		{
			Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
			RaycastHit hit;
			LayerMask Base = LayerMask.GetMask("Base");

			if (Physics.Raycast(ray, out hit, Mathf.Infinity, Base))
			{
				//_text.text = "Inside Hit";
				//EndText.text = hit.point.ToString();
				if (hit.collider.tag == "base")
				{
					//_one.text = hit.collider.gameObject.transform.position.ToString();
					//_testText2.text = "Inside base";
					SelectedObj.transform.position = Vector3.Lerp(SelectedObj.transform.position, hit.point, _speedInt * Time.deltaTime);
					//_two.text = SelectedObj.transform.position.ToString();
				}
			}
		}

		public void IncreasmodelScale(int value)
		{
			PlacedObject.transform.localScale = new Vector3(1, 1, 1) * value;
		}

		public void DecreaseScale(int value)
		{
			PlacedObject.transform.localScale = new Vector3(1, 1, 1) / value;
		}

		private bool IsPointerOverUIObject()
		{
			PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
			eventDataCurrentPosition.position = new Vector2(Input.GetTouch(0).position.x, Input.GetTouch(0).position.y);
			List<RaycastResult> results = new List<RaycastResult>();
			EventSystem.current.RaycastAll(eventDataCurrentPosition, results);
			return results.Count > 0;
		}

	}
}



