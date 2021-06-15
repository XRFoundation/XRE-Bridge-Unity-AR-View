using System.IO;

namespace Threeyes.AssetManager.Extension
{

    /// <summary>
    /// Mainly for path or url 
    /// </summary>
    public static class StringExtension
    {

        public static bool IsNullOrEnpty(this string str)
        {
            return string.IsNullOrEmpty(str);
        }

        public static string FileName(this string url)
        {
            return Path.GetFileName(url);
        }


        public static string FileNameWithoutExtension(this string url)
        {
            return Path.GetFileNameWithoutExtension(url);
        }


        public static int? ToInt(this string strInt)
        {
            int result = 0;
            if (int.TryParse(strInt, out result))
            {
                return result;
            }
            else
                return null;
        }


        /// <summary>
        /// Combine two paths
        /// </summary>
        /// <param name="directoryPath"></param>
        /// <param name="relativeFilePath">the file path relative to the directoryPath</param>
        /// <returns></returns>
        public static string Combine(this string directoryPath, string relativeFilePath)
        {
            //Add '/' if not end with it (Don't use Path.Combine beacuse the result may contain error slash)
            if (!directoryPath.EndsWith("/"))
                directoryPath += "/";
            return directoryPath + relativeFilePath;
        }

    }
}