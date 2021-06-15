using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Security.Cryptography;
using UnityEngine.SceneManagement;

namespace Download
{
	public class DownloadManager : MonoBehaviour
	{
		private static DownloadManager m_instance;

		public event EventHandler NewDownloadProcess;

		public DownloadSettings downloadSettings;
		public bool forceDownload = false;
		public DownloadFileListScrollView scrollViewDownloadFileList;
		public DownloadProcessListScrollView scrollViewProcessList;
		public CacheFileListScrollView scrollViewCacheFileList;

		public DownloadFileList downloadFileList = null;
		public bool processDownloadFileList = false;
		public List<DownloadProcess> queueDownloadProcessRequest = new List<DownloadProcess>();
		public List<DownloadProcess> queueDownloadProcessActive = new List<DownloadProcess>();
		public List<DownloadProcess> queueDownloadProcessFailed = new List<DownloadProcess>();
		public List<DownloadProcess> queueDownloadProcessComplete = new List<DownloadProcess>();

		#region MonoBehaviour
		private void Awake()
		{
			if(m_instance == null)	
			{
				m_instance = this;
			}
			else
			{
				Debug.LogError("DownloadManager already exist");
			}
		}

		/// <summary>
		/// 
		/// </summary>
		void Start()
		{
			// TODO: new to retrieve for server or somewhere
			downloadFileList = downloadSettings.downloadFileList;
			processDownloadFileList = true;

			LoadCacheList();
			LoadFileList();
		}

		/// <summary>
		/// 
		/// </summary>
		void Update()
		{
            bool goToNext = false;

			// Disabled auto downloading list
			/*
			// If new file list then process
			if(processDownloadFileList == true)
			{

                int counter = 0;
                int numberOfFiles = downloadFileList.dataFileList.Count;

				foreach (DataDownloadFile dataDownloadFile in downloadFileList.dataFileList)
				{
                    string pathFolder = Path.Combine(Application.persistentDataPath, DownloadManager.CacheFolder);

                    string pathFile = Path.Combine(pathFolder, dataDownloadFile.fileName);


                    if (File.Exists(pathFile))
                    {

                        long fileLength = new System.IO.FileInfo(pathFile).Length;

                        if (fileLength == dataDownloadFile.sizeInBytes){
                            counter++;
                            Debug.Log(counter);
                        }


                        }


					DownloadFile(dataDownloadFile);
				}

                if(counter >= numberOfFiles){
                    SceneManager.LoadScene(1);
                }

				processDownloadFileList = false;
			}
			*/

			// Handle completed downloads
			foreach(DownloadProcess downloadProcess in queueDownloadProcessActive.ToArray())
			{
				if(downloadProcess.enumDownloadProcessStatus == DownloadProcess.EnumDownloadProcessStatus.Complete)
				{
					queueDownloadProcessComplete.Add(downloadProcess);
					queueDownloadProcessActive.Remove(downloadProcess);

					downloadProcess.CompleteProcess();
				}
				else if (downloadProcess.enumDownloadProcessStatus == DownloadProcess.EnumDownloadProcessStatus.Failed)
				{
					queueDownloadProcessFailed.Add(downloadProcess);
					queueDownloadProcessActive.Remove(downloadProcess);

					downloadProcess.FailedProcess();
				}
			}

			// Handle error downloads
			foreach (DownloadProcess downloadProcess in queueDownloadProcessFailed)
			{

			}

			// Submit new downloads
			if(queueDownloadProcessActive.Count < downloadSettings.intDownloadQueueSize)
			{
				if(queueDownloadProcessRequest.Count > 0)
				{
					// get first in queue
					DownloadProcess downloadProcess = queueDownloadProcessRequest[0];

					queueDownloadProcessActive.Add(downloadProcess);
					queueDownloadProcessRequest.RemoveAt(0);
					StartCoroutine(downloadProcess.Execute());
				}
			}

			foreach (DownloadProcess downloadProcess in queueDownloadProcessRequest)
			{
					
			}
		}
		#endregion

		#region Properties
		public static DownloadManager Instance
		{
			get { return m_instance; }
		}

		/// <summary>
		/// 
		/// </summary>
		public static string ServerPath
		{
			get
			{
				return m_instance.downloadSettings.serverPath;
			}
		}

		/// <summary>
		/// 
		/// </summary>
		public static string CacheFolder
		{
			get
			{
				return m_instance.downloadSettings.cacheFolder;
			}
		}

		#endregion

		#region Methods
		/// <summary>
		/// 
		/// </summary>
		public void LoadCacheList()
		{
			string pathFolder = Path.Combine(Application.persistentDataPath, DownloadManager.CacheFolder);

			string[] files = Directory.GetFiles(pathFolder);

			DataCacheFileList cacheFileList = new DataCacheFileList();
			foreach(string file in files)
			{
				DataCacheFile dataCacheFile = new DataCacheFile();
				cacheFileList.dataFileList.Add(dataCacheFile);
				dataCacheFile.fileName = Path.GetFileName(file);
				dataCacheFile.dateTime = File.GetLastWriteTimeUtc(file);
			}

			scrollViewCacheFileList.LoadList(cacheFileList);
		}

		/// <summary>
		/// 
		/// </summary>
		public void LoadFileList()
		{
			scrollViewDownloadFileList.LoadList(downloadSettings.downloadFileList);
		}

		/// <summary>
		/// 
		/// </summary>
		/// <param name="dataFile"></param>
		public bool CheckFileAndReturnTrueIfShouldDownload(DataDownloadFile dataFile)
		{
			//string pathFolder = Path.Combine(Application.streamingAssetsPath, DownloadManager.CacheFolder);
			string pathFolder = Path.Combine(Application.persistentDataPath, DownloadManager.CacheFolder);
		
            if(!Directory.Exists(pathFolder)){
                Directory.CreateDirectory(pathFolder);
            }

			string pathFile = Path.Combine(pathFolder, dataFile.fileName);


			if (File.Exists(pathFile))
			{
              
                long fileLength = new System.IO.FileInfo(pathFile).Length;

                if (fileLength != dataFile.sizeInBytes)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return true;
			}
		}

		/// <summary>
		/// 
		/// </summary>
		/// <param name="path"></param>
		/// <returns></returns>
		public bool CheckCacheFileExist(string path)
		{
			foreach(DataDownloadFile dataDownloadFile in downloadSettings.downloadFileList.dataFileList)
			{ 
				if(dataDownloadFile.fileName == path)
				{
					bool status = !CheckFileAndReturnTrueIfShouldDownload(dataDownloadFile);
				//	Debug.LogFormat("CheckCacheFileExist {0} {1}", path, status);
					return status;
				}
			}
			return false;
		}

		/// <summary>
		/// 
		/// </summary>
		public void RetryProcess(DownloadProcess downloadProcess)
		{
			queueDownloadProcessFailed.Remove(downloadProcess);
			queueDownloadProcessRequest.Add(downloadProcess);
		}

		/// <summary>
		/// 
		/// </summary>
		/// <param name="dataDownloadFile"></param>
		public DownloadProcess DownloadFile(DataDownloadFile dataDownloadFile, bool force = false)
		{
			switch (dataDownloadFile.enumFileType)
			{
				case DataDownloadFile.EnumFileType.Buffer:
					DownloadProcessBuffer downloadProcessBuffer = DownloadProcessBuffer.CreateProcess(dataDownloadFile);
					queueDownloadProcessRequest.Add(downloadProcessBuffer);
					OnNewDownloadProcess(downloadProcessBuffer);
					return downloadProcessBuffer;

				case DataDownloadFile.EnumFileType.File:
                    if (force == true || forceDownload == true || CheckFileAndReturnTrueIfShouldDownload(dataDownloadFile) == true)
					{
						DownloadProcessFile downloadProcessFile = DownloadProcessFile.CreateProcess(dataDownloadFile);
						queueDownloadProcessRequest.Add(downloadProcessFile);
						OnNewDownloadProcess(downloadProcessFile);

						return downloadProcessFile;
					}
					return null;

				case DataDownloadFile.EnumFileType.Texture:
					DownloadProcessTexture downloadProcessTexture = DownloadProcessTexture.CreateProcess(dataDownloadFile);
					queueDownloadProcessRequest.Add(downloadProcessTexture);
					OnNewDownloadProcess(downloadProcessTexture);
					return downloadProcessTexture;

				case DataDownloadFile.EnumFileType.Assetbundle:
					DownloadProcessAssetBundle downloadProcessAssetbundle = DownloadProcessAssetBundle.CreateProcess(dataDownloadFile);
					queueDownloadProcessRequest.Add(downloadProcessAssetbundle);
					OnNewDownloadProcess(downloadProcessAssetbundle);
					return downloadProcessAssetbundle;

				case DataDownloadFile.EnumFileType.AudioClip:
					DownloadProcessAudioClip downloadProcessAudioClip = DownloadProcessAudioClip.CreateProcess(dataDownloadFile);
					queueDownloadProcessRequest.Add(downloadProcessAudioClip);
					OnNewDownloadProcess(downloadProcessAudioClip);
					return downloadProcessAudioClip;

				case DataDownloadFile.EnumFileType.MovieTexture:
					DownloadProcessMovieTexture downloadProcessMovieTexture = DownloadProcessMovieTexture.CreateProcess(dataDownloadFile);
					queueDownloadProcessRequest.Add(downloadProcessMovieTexture);
					OnNewDownloadProcess(downloadProcessMovieTexture);
					return downloadProcessMovieTexture;
			}
			return null;
		}

		/// <summary>
		/// 
		/// </summary>
		/// <param name="path"></param>
		/// <returns></returns>
		public DownloadProcess DownloadFile(string path)
		{
			Debug.LogFormat("DownloadFile {0}", path);

			foreach (DataDownloadFile dataDownloadFile in downloadSettings.downloadFileList.dataFileList)
			{
				if (dataDownloadFile.fileName == path)
				{
					return DownloadFile(dataDownloadFile, true);
				}
			}

			return null;
		}
		#endregion

		#region Events
		public void OnNewDownloadProcess(DownloadProcess downloadProcessBuffer)
		{
			if(NewDownloadProcess != null)
			{
				NewDownloadProcess(this, new DownloadManagerNewDownloadProcessEventArgs(downloadProcessBuffer));
			}
		}
		#endregion
	}

	public class DownloadManagerNewDownloadProcessEventArgs : EventArgs
	{
		public DownloadProcess downloadProcess;

		public DownloadManagerNewDownloadProcessEventArgs(DownloadProcess downloadProcess)
		{
			this.downloadProcess = downloadProcess;
		}
	}
}