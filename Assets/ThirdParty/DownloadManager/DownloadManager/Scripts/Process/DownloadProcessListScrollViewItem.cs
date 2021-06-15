using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Download
{
	public class DownloadProcessListScrollViewItem : MonoBehaviour
	{
		public Color colorStart;
		public Color colorExecute;
		public Color colorComplete;
		public Color colorFailed;

		public DownloadProcess downloadProcess;
		public Image image;
		public Text textFileType; 
		public Text textFileName;
		public Text textPercentComplete;
		public Text textMessage;
		public Button buttonCancel;
		public Button buttonRetry;
		public Button buttonDelete;

		#region MonoBehaviour
		/// <summary>
		/// 
		/// </summary>
		private void Awake()
		{
			if(image == null)
			{
				image = gameObject.GetComponent<Image>();
			}

			buttonCancel.onClick.AddListener(ButtonCancel_OnClick);
			buttonRetry.onClick.AddListener(ButtonRetry_OnClick);
			buttonDelete.onClick.AddListener(ButtonDelete_OnClick);

			textMessage.text = string.Empty;
		}
		/// <summary>
		/// 
		/// </summary>
		void Start()
		{

		}

		// Update is called once per frame
		void Update()
		{

		}
		#endregion

		#region Properties
		#endregion

		#region Methods
		/// <summary>
		/// 
		/// </summary>
		public void UpdateStatus()
		{
			if(downloadProcess.enumDownloadProcessStatus == DownloadProcess.EnumDownloadProcessStatus.Start)
			{
				image.color = colorStart;

				buttonCancel.interactable = false;
				buttonRetry.interactable = false;
				buttonDelete.interactable = true;

				textMessage.text = string.Empty;
			}

			if (downloadProcess.enumDownloadProcessStatus == DownloadProcess.EnumDownloadProcessStatus.Execute)
			{
				image.color = colorExecute;

				buttonCancel.interactable = true;
				buttonRetry.interactable = false;
				buttonDelete.interactable = false;

				textPercentComplete.text = string.Format("{0:0%}", downloadProcess.percentComplete);
			}

			if (downloadProcess.enumDownloadProcessStatus == DownloadProcess.EnumDownloadProcessStatus.Complete)
			{
				image.color = colorComplete;

				buttonCancel.interactable = false;
				buttonRetry.interactable = false;
				buttonDelete.interactable = true;

				textPercentComplete.text = string.Format("{0:0%}", downloadProcess.percentComplete);
			}

			if (downloadProcess.enumDownloadProcessStatus == DownloadProcess.EnumDownloadProcessStatus.Failed)
			{
				image.color = colorFailed;

				buttonCancel.interactable = false;
				buttonRetry.interactable = true;
				buttonDelete.interactable = true;

				textMessage.text = downloadProcess.errorMessage;
			}
		}
		#endregion

		#region Events
		#endregion

		#region UI Events
		/// <summary>
		/// 
		/// </summary>
		private void ButtonCancel_OnClick()
		{
			downloadProcess.CancelProcess();
		}
		
		/// <summary>
		/// 
		/// </summary>
		private void ButtonRetry_OnClick()
		{
			downloadProcess.RetryProcess();
			DownloadManager.Instance.RetryProcess(downloadProcess);
		}

		/// <summary>
		/// 
		/// </summary>
		private void ButtonDelete_OnClick()
		{
			GameObject.Destroy(downloadProcess);
			Destroy(gameObject);
		}
		#endregion
	}
}