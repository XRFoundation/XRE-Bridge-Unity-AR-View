using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Download
{
	[System.Serializable]
	public class DataDownloadFile : DataBase
	{
		public enum EnumFileType
		{
			Buffer,
			File,
			Texture,
			Assetbundle,
			AudioClip,
			MovieTexture
		}

		public EnumFileType enumFileType = EnumFileType.File;
		public string fileName;
		public long sizeInBytes;
		public string CRC;
	}
}