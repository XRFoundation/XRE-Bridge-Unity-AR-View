using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Download
{
	public class CacheFileListScrollViewItem : MonoBehaviour
	{
		public Text textFileName;
		public Text textDateTime;
		public Button buttonDelete;

		#region MonoBehaviour
		// Use this for initialization
		void Start()
		{
			buttonDelete.onClick.AddListener(ButtonDelete_OnClick);
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

		#region UI Event Handler
		private void ButtonDelete_OnClick()
		{
			string pathFolder = Path.Combine(Application.persistentDataPath, DownloadManager.CacheFolder);
			string pathFile = Path.Combine(pathFolder, textFileName.text);

			File.Delete(pathFile);

			Destroy(gameObject);
		}
		#endregion
	}
}