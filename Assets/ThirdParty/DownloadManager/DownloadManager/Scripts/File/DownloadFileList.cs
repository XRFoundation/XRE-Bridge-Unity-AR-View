using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Download
{
	[CreateAssetMenu(fileName = "DownloadFileList", menuName = "Download/DownloadFileList")]
	public class DownloadFileList : ScriptableObject
	{
		public List<DataDownloadFile> dataFileList = new List<DataDownloadFile>();
	}
}