using UnityEngine;
using System.IO;
using System.Collections;
using System.Security.Cryptography;
using System.Text;
using System;

/// <summary>
/// 
/// </summary>
public class FileIOManager
{
    /// <summary>
    /// Read to array of bytes from file 
    /// </summary>
    /// <param name="filePath"></param>
    /// <returns></returns>
    public static byte[] FileConvertToBytes(string filePath)
    {
        FileStream fileStream = new FileStream(filePath, FileMode.Open, FileAccess.Read);

        byte[] bytes = new byte[fileStream.Length];

        fileStream.Read(bytes, 0, bytes.Length);

        fileStream.Close();

        return bytes;
    }

    /// <summary>
    /// write to file from array of bytes
    /// </summary>
    /// <param name="bytes"></param>
    /// <param name="filePath"></param>
    public static void BytesConvertToFile(byte[] bytes, string filePath)
    {
        FileStream fileStream = new FileStream(filePath, FileMode.Create, FileAccess.Write);

        fileStream.Write(bytes, 0, bytes.Length);

        fileStream.Flush();

        fileStream.Close();
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="bytes"></param>
    /// <param name="filePath"></param>
    public static void BytesConvertToFileIfFileCurrentDirectoryNotExistThenCreateDirectoryFirst(byte[] bytes, string filePath)
    {
        int endIndex = filePath.LastIndexOf("/");

        string folderPath = filePath.Substring(0, endIndex);

        if (Directory.Exists(folderPath) == false)
        {
            Directory.CreateDirectory(folderPath);
        }

        BytesConvertToFile(bytes, filePath);
    }

    /// <summary>
    /// if file was exist,return true
    /// </summary>
    /// <param name="filePath"></param>
    /// <returns></returns>
    public static bool CheckFileIsExist(string filePath)
    {
        return File.Exists(filePath);
    }

    /// <summary>
    /// delete specific file
    /// </summary>
    /// <param name="filePath"></param>
    public static void DeleteFile(string filePath)
    {
        if (File.Exists(filePath))
        {
            File.Delete(filePath);
        }
        else
        {
            Debug.LogError(string.Format("The {0} you want to delete is not exist", filePath));
        }
    }

    /// <summary>
    /// delete specific folder
    /// </summary>
    /// <param name="folderPath"></param>
    /// <param name="isRecursive"></param>
    public static void DeleteDirectory(string folderPath, bool isRecursive)
    {
        if (Directory.Exists(folderPath))
        {
            Directory.Delete(folderPath, isRecursive);
        }
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="filePath"></param>
    public static void IfDeletedFileCurrentDirectoryIsEmptyDeleteRecursively(string filePath)
    {
        int endIndex = filePath.LastIndexOf("/");

        if (endIndex < 0)
        {
            return;
        }

        string folderPath = filePath.Substring(0, endIndex);

        DirectoryInfo directoryInfo = new DirectoryInfo(folderPath);

        FileSystemInfo[] fileSystemInfo = directoryInfo.GetFileSystemInfos();

        if (fileSystemInfo.Length == 0)
        {
            Directory.Delete(folderPath);

            IfDeletedFileCurrentDirectoryIsEmptyDeleteRecursively(folderPath);
        }
    }

    /// <summary>
    /// compute md5 for the array of bytes 
    /// </summary>
    /// <param name="bytes"></param>
    /// <returns></returns>
    public static string CalculateMd5(byte[] bytes)
    {
        MD5CryptoServiceProvider md5CryptoServiceProvider = new MD5CryptoServiceProvider();

        byte[] md5Bytes = md5CryptoServiceProvider.ComputeHash(bytes, 0, bytes.Length);

        md5CryptoServiceProvider.Clear();

        StringBuilder resultStringBuilder = new StringBuilder();

        for (int i = 0; i < md5Bytes.Length; i++)
        {
            string tempString = Convert.ToString(md5Bytes[i], 16).PadLeft(2, '0');

            resultStringBuilder.Append(tempString);
        }

        string resultString = resultStringBuilder.ToString();

        resultString = resultString.PadLeft(32, '0');

        return resultString;
    }
 
}
