using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Download
{
	public class DownloadFileListScrollViewItem : MonoBehaviour
	{
		public DataDownloadFile dataDownloadFile;
		public Text textFileName;
		public Text textFileDate;
		public Text textFileType;
		public Button buttonDownload;

		#region MonoBehavior
		// Use this for initialization
		void Start()
		{
			buttonDownload.onClick.AddListener(ButtonDownload_OnClick);
		}

		// Update is called once per frame
		void Update()
		{

		}
		#endregion

		#region Properties
		#endregion

		#region Methods
		#endregion

		#region Events
		#endregion

		#region UI Events
		private void ButtonDownload_OnClick()
		{
			DownloadManager.Instance.DownloadFile(dataDownloadFile, true);
	}
		#endregion
	}
}