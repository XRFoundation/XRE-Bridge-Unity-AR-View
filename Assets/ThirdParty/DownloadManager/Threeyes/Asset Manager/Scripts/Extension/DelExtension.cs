using System;

namespace Threeyes.AssetManager.Extension
{

    public static class DelExtension
    {
        /// <summary>
        /// 
        /// </summary>
        /// <param name="function"></param>
        /// <returns>If the function not null</returns>
        public static bool Excute(this Action function)
        {
            if (function != null)
            {
                function();
                return true;
            }
            else
                return false;
        }

        public static bool Excute<T>(this Action<T> function, T data)
        {
            if (function != null)
            {
                function(data);
                return true;
            }
            else
                return false;
        }

        public static bool Excute<T1, T2>(this Action<T1, T2> function, T1 data1, T2 data2)
        {
            if (function != null)
            {
                function(data1, data2);
                return true;
            }
            else
                return false;
        }

    }
}
