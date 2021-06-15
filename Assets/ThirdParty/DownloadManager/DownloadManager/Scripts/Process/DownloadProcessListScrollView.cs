using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Download
{
	public class DownloadProcessListScrollView : MonoBehaviour
	{
		public GameObject itemPrefab;
		public GameObject content;

		#region MonoBehaviour
		/// <summary>
		/// 
		/// </summary>
		private void Awake()
		{
			itemPrefab.SetActive(false);
		}

		/// <summary>
		/// 
		/// </summary>
		void Start()
		{
			DownloadManager.Instance.NewDownloadProcess += Instance_NewDownloadProcess;
		}

		// Update is called once per frame
		void Update()
		{
			UpdateStatus();
		}
		#endregion

		#region Properties
		#endregion

		#region Methods
		/*
		public void LoadList(DownloadFileList dataFileList)
		{
			foreach (DataFile dataFile in dataFileList.dataFileList)
			{
				GameObject instantiatedObject = Instantiate(itemPrefab);
				instantiatedObject.transform.SetParent(content.transform, false);

				DownloadFileListScrollViewItem item = instantiatedObject.GetComponent<DownloadFileListScrollViewItem>();
				item.textFileName.text = dataFile.fileName;

				instantiatedObject.SetActive(true);
			}
		}
		*/


		public void UpdateStatus()
		{
			foreach (Transform transform in content.transform)
			{
				DownloadProcessListScrollViewItem item = transform.GetComponent<DownloadProcessListScrollViewItem>();
				if (item != null)
				{
					item.UpdateStatus();
				}
			}
		}
		#endregion

		#region Events
		#endregion

		#region DownloadManager Event Handlers
		public void Instance_NewDownloadProcess(object sender, EventArgs e)
		{
			DownloadManagerNewDownloadProcessEventArgs eventArgs = (DownloadManagerNewDownloadProcessEventArgs)e;

			GameObject instantiatedObject = Instantiate(itemPrefab);
			instantiatedObject.transform.SetParent(content.transform, false);

			DownloadProcessListScrollViewItem item = instantiatedObject.GetComponent<DownloadProcessListScrollViewItem>();
			item.textFileType.text = eventArgs.downloadProcess.dataFile.enumFileType.ToString().Substring(0, 2);
			item.textFileName.text = eventArgs.downloadProcess.dataFile.fileName;
			item.downloadProcess = eventArgs.downloadProcess;

			instantiatedObject.SetActive(true);
		}
		#endregion
	}
}