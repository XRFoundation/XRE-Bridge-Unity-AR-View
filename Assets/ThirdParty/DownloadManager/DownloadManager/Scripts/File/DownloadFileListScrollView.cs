using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Download
{
	public class DownloadFileListScrollView : MonoBehaviour
	{
		public GameObject itemPrefab;
		public GameObject content;
		public Toggle toggleForceRefresh;
		public Button buttonRefresh;

		#region MonoBehaviour
		void Awake()
		{
			itemPrefab.SetActive(false);
		}

		// Use this for initialization
		void Start()
		{
			toggleForceRefresh.isOn = DownloadManager.Instance.forceDownload;

			buttonRefresh.onClick.AddListener(ButtonRefresh_OnClick);
			toggleForceRefresh.onValueChanged.AddListener(ToggleForceRefresh_OnValueChaged);
		}

		// Update is called once per frame
		void Update()
		{

		}
		#endregion

		#region Properties
		#endregion

		#region Methods
		public void LoadList(DownloadFileList dataFileList)
		{ 
			foreach(Transform transform in content.transform)
			{
				Destroy(transform.gameObject);
			}

			foreach(DataDownloadFile dataDownloadFile in dataFileList.dataFileList)
			{
				GameObject instantiatedObject = Instantiate(itemPrefab);
				instantiatedObject.transform.SetParent(content.transform, false);

				DownloadFileListScrollViewItem item = instantiatedObject.GetComponent<DownloadFileListScrollViewItem>();
				item.dataDownloadFile = dataDownloadFile;
				item.textFileName.text = dataDownloadFile.fileName;
                item.textFileDate.text = dataDownloadFile.sizeInBytes.ToString();
				item.textFileType.text = dataDownloadFile.enumFileType.ToString();

				instantiatedObject.SetActive(true);
			}
		}
		#endregion

		#region Events
		#endregion

		#region UI Event Handlers
		private void ButtonRefresh_OnClick()
		{
			DownloadManager.Instance.LoadFileList();
		}

		private void ToggleForceRefresh_OnValueChaged(bool value)
		{
			DownloadManager.Instance.forceDownload = value;
		}
		#endregion
	}
}