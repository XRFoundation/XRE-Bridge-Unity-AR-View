using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Globalization;

namespace Amar
{
	#region Login_response
	[Serializable]
	public class Data
	{
		public string user_id;
		public string firstname;
		public string lastname;
		public string email_id;
		public string qr_code;
		public string qr_image;
		public string status;
	}

	[Serializable]
	public class LoginResponse
	{
		public string status_code;
		public string message;
		public Data data;
	}
	#endregion

	#region BusinessClient_response
	[Serializable]
	public class UserData
	{
		public string id;
		public string firstname;
		public string lastname;
		public string email_id;
		public string qr_code;
		public string qr_image;
	}

	[Serializable]
	public class UserModel
	{
		public string id;
		public string title;
		public string image;
		public string file_android;
		public string file_ios;
		public string qr_code;
		public string qr_image;
		public string description;
		public string date;
		public UserData user_data;
	}

	[Serializable]
	public class ClientResponse
	{
		public string status_code;
		public string message;
		public List<UserModel> user_model;
	}
	#endregion

}

