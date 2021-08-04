using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Amar
{
	public class UIController : MonoBehaviour
	{
		public static UIController Instance = null;
		public GameObject _animatior;
		public GameObject _readyplace;
		public Button ButtonPlaceobject;
		public GameObject ShowRecord;
		public bool once;

		private Coroutine _readyco;


		private void OnEnable()
		{

		}

		private void Awake()
		{
			if (Instance == null)
			{
				Instance = this;
			}
		}


		// Start is called before the first frame update
		void Start()
		{

		}

		// Update is called once per frame
		void Update()
		{

		}

		public void OnSurfaceDetected()
		{
			_animatior.SetActive(false);
			_readyplace.SetActive(true);
			ButtonPlaceobject.gameObject.SetActive(true);

		}

		public void Onfinding()
		{
			_animatior.SetActive(true);
			//ButtonPlaceobject.gameObject.SetActive(false);
			_readyplace.SetActive(false);
		}

		public void OnNextFinding()
		{
			//nimatior.SetActive(true);
			//ButtonPlaceobject.gameObject.SetActive(false);
			_readyplace.SetActive(false);
		}

		IEnumerator enumshowready()
		{
			_readyplace.SetActive(true);
			yield return new WaitForSeconds(3.0f);
			_readyplace.SetActive(false);
		}

		public void OnPlaceClick()
		{
			StartCoroutine(Ienumshowrecord());
		}

		IEnumerator Ienumshowrecord()
		{
			yield return new WaitForSeconds(4.0f);
			ShowRecord.SetActive(true);
		}

		public void OnRecordingStart()
		{
			
		}
	}
}

