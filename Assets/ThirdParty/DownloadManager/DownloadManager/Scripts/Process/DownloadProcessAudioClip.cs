using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.IO;

namespace Download
{
	public class DownloadProcessAudioClip : DownloadProcess
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
		public new static DownloadProcessAudioClip CreateProcess(DataDownloadFile dataFile)
		{
			Debug.Log("[DownloadProcessAudioClip] CreateProcess " + dataFile.fileName);

			// Create Process
			DownloadProcessAudioClip process = DownloadManager.Instance.gameObject.AddComponent<DownloadProcessAudioClip>();

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

			uwr = UnityWebRequestMultimedia.GetAudioClip(DownloadManager.ServerPath + dataFile.fileName, AudioType.OGGVORBIS);

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
					Debug.Log("File successfully downloaded and saved to " + DownloadManager.ServerPath + dataFile.fileName);

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

			// Get audio clip
			AudioClip clip = DownloadHandlerAudioClip.GetContent(uwr);

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