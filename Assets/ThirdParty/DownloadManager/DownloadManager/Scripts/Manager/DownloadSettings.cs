using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Download;

namespace Download
{
	[CreateAssetMenu(fileName = "DownloadSettings", menuName = "Download/DownloadSettings")]
	public class DownloadSettings : ScriptableObject
	{
		public DownloadFileList downloadFileList;
		public string cacheFolder;
		public string serverPath;

		public int intDownloadQueueSize;
	}
}