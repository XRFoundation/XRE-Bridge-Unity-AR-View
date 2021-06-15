using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.IO;

namespace Download
{
	public class DownloadProcessBuffer : DownloadProcess
	{

		#region MonoBehavior
		#endregion

		#region Properties
		#endregion

		#region Methods
		/// <summary>
		/// 
		/// </summary>
		/// <param name="folderId"></param>
		/// <returns></returns>
		public new static DownloadProcessBuffer CreateProcess(DataDownloadFile dataFile)
		{
			Debug.Log("[DownloadProcessBuffer] CreateProcess " + dataFile.fileName);

			// Create Process
			DownloadProcessBuffer process = DownloadManager.Instance.gameObject.AddComponent<DownloadProcessBuffer>();

			// Initialize Process
			//process.url = serviceURL;
			process.InitializeProcess(dataFile);

			return process;
		}

		/// <summary>
		/// 
		/// </summary>
		/// <param name="dataFile"></param>
		/*
		public void InitializeProcess(DataFile dataFile)
		{
			base.InitializeProcess(dataFile);
		}
		*/

		/// <summary>
		/// 
		/// </summary>
		/// <returns></returns>
		public override IEnumerator Execute()
		{
			enumDownloadProcessStatus = EnumDownloadProcessStatus.Execute;
			timeStart = Time.fixedTime;

			//var uwr = new UnityWebRequest("https://unity3d.com/", UnityWebRequest.kHttpVerbGET);
			UnityWebRequest uwr = new UnityWebRequest(DownloadManager.ServerPath + dataFile.fileName, UnityWebRequest.kHttpVerbGET);

			//string path = Path.Combine(Application.persistentDataPath, "unity3d.html");
			string pathFolder = Path.Combine(Application.streamingAssetsPath, DownloadManager.CacheFolder);
			string pathFile = Path.Combine(pathFolder, dataFile.fileName);

			uwr.downloadHandler = new DownloadHandlerBuffer();

			//yield return uwr.SendWebRequest();
			asyncOperation = uwr.SendWebRequest();
			while(asyncOperation.isDone == false && processCancel == false)
			{
				percentComplete = asyncOperation.progress;
				yield return new WaitForSeconds(1);
			}

			if (processCancel == true)
			{
				enumDownloadProcessStatus = EnumDownloadProcessStatus.Failed;
				errorMessage = "Cancelled";
				uwr.Abort();
			}
			else
			{
				if (uwr.isNetworkError || uwr.isHttpError)
				{
					Debug.LogError(uwr.error);

					errorMessage = uwr.error;
					enumDownloadProcessStatus = EnumDownloadProcessStatus.Failed;
				}
				else
				{
					Debug.Log("File successfully downloaded and saved to " + pathFile);

					percentComplete = 1;
					enumDownloadProcessStatus = EnumDownloadProcessStatus.Complete;
				}
			}

			yield break;
		}

		/// <summary>
		/// 
		/// </summary>
		public override void CompleteProcess()
		{
			base.CompleteProcess();

			// Convert data to text or byte array
			// Show results as text
			//Debug.Log(uwr.downloadHandler.text);

			// Or retrieve results as binary data
			//byte[] results = uwr.downloadHandler.data;

			uwr = null;
			asyncOperation = null;
		}

		/// <summary>
		/// 
		/// </summary>
		public override void FailedProcess()
		{
			base.FailedProcess();

			uwr = null;
			asyncOperation = null;
		}
		#endregion

		#region Events
		#endregion
	}
}