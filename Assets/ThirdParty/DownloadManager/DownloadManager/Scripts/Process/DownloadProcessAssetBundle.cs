using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.IO;

namespace Download
{
	public class DownloadProcessAssetBundle : DownloadProcess
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
		public new static DownloadProcessAssetBundle CreateProcess(DataDownloadFile dataFile)
		{
			Debug.Log("[DownloadProcessAssetBundle] CreateProcess" + dataFile.fileName);

			// Create Process
			DownloadProcessAssetBundle process = DownloadManager.Instance.gameObject.AddComponent<DownloadProcessAssetBundle>();

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

			var uwr = new UnityWebRequest(DownloadManager.ServerPath + dataFile.fileName);
            Debug.Log("Requesting: " + DownloadManager.ServerPath + dataFile.fileName);

			uint CRC = uint.Parse(dataFile.CRC);
			uwr.downloadHandler = new DownloadHandlerAssetBundle(uwr.url, CRC);

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
					Debug.Log("File successfully downloaded and saved to " + uwr.url);

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

			asyncOperation = null;
		}

		/// <summary>
		/// 
		/// </summary>
		public override void FailedProcess()
		{
			base.FailedProcess();

			asyncOperation = null;
		}
		#endregion

		#region Events
		#endregion
	}
}