using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.IO;

namespace Download
{
	public class DownloadProcess : MonoBehaviour
	{
		public enum EnumDownloadProcessStatus
		{
			Start,
			Execute,
			Complete,
			Failed
		}

		public EnumDownloadProcessStatus enumDownloadProcessStatus = EnumDownloadProcessStatus.Start;
		public DataDownloadFile dataFile;
		public float percentComplete;
		public string errorMessage;
		public bool processCancel = false;
		public float timeStart;
		public UnityWebRequest uwr;
		public UnityWebRequestAsyncOperation asyncOperation;

		#region MonoBehavior
		// Use this for initialization
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
		/// <param name="folderId"></param>
		/// <returns></returns>
		public static DownloadProcess CreateProcess(DataDownloadFile dataFile)
		{
			Debug.Log("[DownloadProcess] CreateProcess" + dataFile.fileName);

			// Create Process
			DownloadProcess process = DownloadManager.Instance.gameObject.AddComponent<DownloadProcess>();

			// Initialize Process
			//process.url = serviceURL;
			process.InitializeProcess(dataFile);

			return process;
		}

		/// <summary>
		/// 
		/// </summary>
		/// <param name="dataFile"></param>
		public virtual void InitializeProcess(DataDownloadFile dataFile)
		{
			this.dataFile = dataFile;
		}

		/// <summary>
		/// 
		/// </summary>
		/// <returns></returns>
		public virtual IEnumerator Execute()
		{
			enumDownloadProcessStatus = EnumDownloadProcessStatus.Execute;
			timeStart = Time.fixedTime;

			// 5 second delay to use for testing processes
			while(enumDownloadProcessStatus == EnumDownloadProcessStatus.Execute && processCancel == false)
			{
				if (Time.time - timeStart > 5.0)
				{
					enumDownloadProcessStatus = EnumDownloadProcessStatus.Complete;
				}

				yield return null;
			}

			if(processCancel == true)
			{
				enumDownloadProcessStatus = EnumDownloadProcessStatus.Failed;
				errorMessage = "Cancelled";
			}

			yield break;
		}

		/// <summary>
		/// 
		/// </summary>
		public virtual void CompleteProcess()
		{
		}

		/// <summary>
		/// 
		/// </summary>
		public virtual void FailedProcess()
		{
		}

		/// <summary>
		/// 
		/// </summary>
		public virtual void CancelProcess()
		{
			processCancel = true;
		}

		/// <summary>
		/// 
		/// </summary>
		public virtual void RetryProcess()
		{
			enumDownloadProcessStatus = EnumDownloadProcessStatus.Start;
			processCancel = false;
			errorMessage = string.Empty;
		}
		#endregion

		#region Events
		#endregion
	}
}