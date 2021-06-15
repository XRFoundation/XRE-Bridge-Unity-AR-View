using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Download
{
	public class CacheFileListScrollView : MonoBehaviour
	{
		public GameObject itemPrefab;
		public GameObject content;
		public Button buttonRefresh;

		#region MonoBehaviour
		// Use this for initialization
		private void Awake()
		{
			itemPrefab.SetActive(false);
		}

		void Start()
		{
			buttonRefresh.onClick.AddListener(ButtonRefresh_OnClick);
		}

		// Update is called once per frame
		void Update()
		{

		}
		#endregion

		#region Properties
		#endregion

		#region Methods
		public void LoadList(DataCacheFileList dataFileList)
		{ 
			foreach(Transform transform in content.transform)
			{
				Destroy(transform.gameObject);
			}

			foreach(DataCacheFile dataFile in dataFileList.dataFileList)
			{
				GameObject instantiatedObject = Instantiate(itemPrefab);
				instantiatedObject.transform.SetParent(content.transform, false);

				CacheFileListScrollViewItem item = instantiatedObject.GetComponent<CacheFileListScrollViewItem>();
				item.textFileName.text = dataFile.fileName;
				item.textDateTime.text = dataFile.dateTime.ToString();

				instantiatedObject.SetActive(true);
			}
		}
		#endregion

		#region Events
		#endregion

		#region UI Event Handlers
		private void ButtonRefresh_OnClick()
		{
			DownloadManager.Instance.LoadCacheList();
		}
		#endregion
	}
}