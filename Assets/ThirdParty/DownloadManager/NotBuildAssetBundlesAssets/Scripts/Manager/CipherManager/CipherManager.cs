using UnityEngine;
using System;
using System.IO;
using System.Text;
using System.Collections;
using System.Security.Cryptography;

//This class is used for encrypting or decrypting the array of byte
public class CipherManager
{
    /// <summary>
    /// Convert data to the specified length bits
    /// </summary>
    private static byte[] ConvertBytesLength(byte[] data, int length)
    {
        if (length <= 0 || length > 1024)
        {
            return null;
        }
        byte[] key = new byte[length];
        for (int i = 0; i < length; ++i)
        {
            key[i] = 0;
        }
        if (data != null)
        {
            for (int i = 0; i < data.Length; ++i)
            {
                int index = i % length;
                int total = key[index] + data[i];
                key[index] = (byte)(total > 256 ? (total - 256) : total);
            }
        }
        return key;
    }

    #region Symmetric encryption algorithm

    /// <summary>
    /// According to the the key and initalize vector,to encrypt the array of byte
    /// </summary>
    public static byte[] Encrypt(byte[] bytes, string key, string lv, EnryptType enryptType)
    {
        if (bytes == null || bytes.Length == 0)
        {
            return null;
        }

        byte[] byteFormatKey = UTF8Encoding.UTF8.GetBytes(key);

        byte[] byteFormatLv = UTF8Encoding.UTF8.GetBytes(lv);

        switch (enryptType)
        {
            case EnryptType.AES:
                return AES_Encrypt(bytes, byteFormatKey, byteFormatLv);
            case EnryptType.AES_MD5:
                return AES_MD5_Encrypt(bytes, byteFormatKey, byteFormatLv);
            case EnryptType.DES:
                return DES_Encrypt(bytes, byteFormatKey, byteFormatLv);
            case EnryptType.TripleDES:
                return TripleDES_Encrypt(bytes, byteFormatKey, byteFormatLv);
            default:
                return null;
        }

    }

    /// <summary>
    ///  According to the the key and initalize vector,to decrypt the array of byte
    /// </summary>
    public static byte[] Decrypt(byte[] bytes, string key, string lv, EnryptType enryptType)
    {
        if (bytes == null || bytes.Length == 0)
        {
            return null;
        }

        byte[] byteFormatKey = UTF8Encoding.UTF8.GetBytes(key);

        byte[] byteFormatLv = UTF8Encoding.UTF8.GetBytes(lv);

        switch (enryptType)
        {
            case EnryptType.AES:
                return AES_Decrypt(bytes, byteFormatKey, byteFormatLv);
            case EnryptType.AES_MD5:
                return AES_MD5_Decrypt(bytes, byteFormatKey, byteFormatLv);
            case EnryptType.DES:
                return DES_Decrypt(bytes, byteFormatKey, byteFormatLv);
            case EnryptType.TripleDES:
                return TripleDES_Decrypt(bytes, byteFormatKey, byteFormatLv);
            default:
                return null;
        }
    }

    #endregion

    #region AES symmetric encryption algorithm

    /// <summary>
    /// use the AES encryption algorithm to encrypt the bitarray based on the key and the initial vector
    /// </summary>
    /// <param name="originalBytes">The raw data.</param>
    /// <param name="key">The key.</param>
    /// <param name="lv">The initial vector.</param>
    private static byte[] AES_Encrypt(byte[] originalBytes, byte[] key, byte[] lv)
    {
        // Checking for Exceptions.
        if (originalBytes == null || originalBytes.Length <= 0)//check the bitArray
            throw new ArgumentNullException("The raw bitstream input is an empty or a length error");
        if (key == null || key.Length <= 0)//check the key
            throw new ArgumentNullException("A given key is an empty or a length error");
        if (lv == null || lv.Length <= 0)//check the inital vector
            throw new ArgumentNullException("A given initial vector is an empty or a length error");
        byte[] encrypted;
        //create a AES instance
        using (Aes _AES = Aes.Create())
        {
            _AES.Mode = CipherMode.CBC;//Cipher Block Chaining  
            _AES.Key = ConvertBytesLength(key, _AES.KeySize / 8);//the key
            _AES.IV = ConvertBytesLength(lv, _AES.BlockSize / 8);//the inital vector


            
            ICryptoTransform encryptor = _AES.CreateEncryptor(_AES.Key, _AES.IV);

            
            using (MemoryStream ms = new MemoryStream())
            {
                using (CryptoStream cs = new CryptoStream(ms, encryptor, CryptoStreamMode.Write))
                {
                    cs.Write(originalBytes, 0, originalBytes.Length);
                    cs.FlushFinalBlock();
                }
                encrypted = ms.ToArray();
            }
        }
     
        return encrypted;

    }

    /// <summary>
    /// use the AES encryption algorithm to decrypt the bitarray based on the key and the initial vector
    /// </summary>
    /// <param name="encryptBytes">encrypted data.</param>
    /// <param name="key">The key.</param>
    /// <param name="lv">The initial vector.</param>
    private static byte[] AES_Decrypt(byte[] encryptBytes, byte[] key, byte[] lv)
    {
        // Checking for Exceptions
        if (encryptBytes == null || encryptBytes.Length <= 0)//check the bitArray
            throw new ArgumentNullException("The encrypted bitstream is entered as an empty or a length error");
        if (key == null || key.Length <= 0)//check the key
            throw new ArgumentNullException("A given key is an empty or a length error");
        if (lv == null || lv.Length <= 0)//check the initial vector
            throw new ArgumentNullException("A given initial vector is an empty or a length error");

        byte[] decrypted;

        //create a AES instance
        using (Aes _AES = Aes.Create())
        {
            _AES.Mode = CipherMode.CBC;//Cipher Block Chaining  
            _AES.Key = ConvertBytesLength(key, _AES.KeySize / 8);//the key
            _AES.IV = ConvertBytesLength(lv, _AES.BlockSize / 8);//the inital vector


        
            ICryptoTransform decryptor = _AES.CreateDecryptor(_AES.Key, _AES.IV);

            
            using (MemoryStream ms = new MemoryStream())
            {
                using (CryptoStream cs = new CryptoStream(ms, decryptor, CryptoStreamMode.Write))
                {
                    cs.Write(encryptBytes, 0, encryptBytes.Length);
                    cs.FlushFinalBlock();
                }
                decrypted = ms.ToArray();
            }

        }
        return decrypted;
    }

    #endregion

    #region The AES_MD5 symmetric encryption algorithm

    /// <summary>
    /// use the AES_MD5 encryption algorithm to encrypt the bitarray based on the key and the initial vector
    /// </summary>
    /// <param name="originalBytes">the raw data.</param>
    /// <param name="key">the key.</param>
    /// <param name="lv">the inital data.</param>
    private static byte[] AES_MD5_Encrypt(byte[] originalBytes, byte[] key, byte[] lv)
    {
        // Checking for Exceptions.
        if (originalBytes == null || originalBytes.Length <= 0)
            throw new ArgumentNullException("The raw bitstream input is an empty or a length error");
        if (key == null || key.Length <= 0)
            throw new ArgumentNullException("A given key is an empty or a length error");
        if (lv == null || lv.Length <= 0)
            throw new ArgumentNullException("A given initial vector is an empty or a length error");
        byte[] encrypted;
        //create a AES instance
        using (Aes _AES = new AesManaged())
        {
            using (MD5CryptoServiceProvider _MD5 = new MD5CryptoServiceProvider())
            {
                _AES.KeySize = _MD5.HashSize;//Compatible with 128 - bit
                _AES.BlockSize = _MD5.HashSize; //Compatible with 128 - bit
                _AES.Key = _MD5.ComputeHash(key);//the key 
                _AES.IV = _MD5.ComputeHash(lv);//the inital vector

            }
    
            using (MemoryStream ms = new MemoryStream())
            {
                using (CryptoStream cs = new CryptoStream(ms, _AES.CreateEncryptor(), CryptoStreamMode.Write))
                {
                    cs.Write(originalBytes, 0, originalBytes.Length);
                    cs.FlushFinalBlock();
                }
                encrypted = ms.ToArray();
            }
        }
      
        return encrypted;

    }

    /// <summary>
    /// use the AES_MD5 encryption algorithm to decrypt the bitarray based on the key and the initial vector
    /// </summary>
    /// <param name="encryptBytes">the encrypted data.</param>
    /// <param name="key">the key.</param>
    /// <param name="lv">the inital vector</param>
    private static byte[] AES_MD5_Decrypt(byte[] encryptBytes, byte[] key, byte[] lv)
    {
        // Checking for Exceptions.
        if (encryptBytes == null || encryptBytes.Length <= 0)
            throw new ArgumentNullException("The encrypted bitstream is entered as an empty or a length error");
        if (key == null || key.Length <= 0)
            throw new ArgumentNullException("A given key is an empty or a length error");
        if (lv == null || lv.Length <= 0)
            throw new ArgumentNullException("A given initial vector is an empty or a length error");

        byte[] decrypted;

        using (Aes AES = new AesManaged())
        {
            using (MD5CryptoServiceProvider MD5 = new MD5CryptoServiceProvider())
            {
                AES.KeySize = MD5.HashSize; //Compatible with 128 - bit
                AES.BlockSize = MD5.HashSize; //Compatible with 128 - bit
                AES.IV = MD5.ComputeHash(lv);//the inital vector
                AES.Key = MD5.ComputeHash(key);//the key
            }

            using (MemoryStream reader = new MemoryStream(encryptBytes))
            {
                using (MemoryStream writer = new MemoryStream())
                {
                    using (CryptoStream cs = new CryptoStream(reader, AES.CreateDecryptor(), CryptoStreamMode.Read))
                    {
                        const int bufferSize = 4096;
                        byte[] buffer = new byte[bufferSize];
                        int bytesRead;
                        do
                        {
                            bytesRead = cs.Read(buffer, 0, bufferSize);
                            if (bytesRead != 0)
                            {
                                writer.Write(buffer, 0, bytesRead);
                            }
                        } while (bytesRead != 0);
                    }

                    decrypted = writer.ToArray();
                }
            }
        }
        return decrypted;
    }

    #endregion

    #region DES symmetric encryption algorithm

    /// <summary>
    /// use the DES encryption algorithm to encrypt the bitarray based on the key and the initial vector
    /// </summary>
    /// <param name="originalBytes">the raw data.</param>
    /// <param name="key">the key.</param>
    /// <param name="lv">the inital vector.</param>
    private static byte[] DES_Encrypt(byte[] originalBytes, byte[] key, byte[] lv)
    {
        // Check for exception 
        if (originalBytes == null || originalBytes.Length <= 0)
            throw new ArgumentNullException("The raw bitstream input is an empty or a length error");
        if (key == null || key.Length <= 0)
            throw new ArgumentNullException("A given key is an empty or a length error");
        if (lv == null || lv.Length <= 0)
            throw new ArgumentNullException("A given initial vector is an empty or a length error");

        byte[] encrypted;
        //create a DESCryptoServiceProvider instance
        using (DESCryptoServiceProvider dsp = new DESCryptoServiceProvider())
        {
            dsp.Mode = CipherMode.CBC;//Cipher Block Chaining 
            dsp.Key = ConvertBytesLength(key, dsp.KeySize / 8);//the key
            dsp.IV = ConvertBytesLength(lv, dsp.BlockSize / 8);//the inital vector

           
            ICryptoTransform encryptor = dsp.CreateEncryptor(dsp.Key, dsp.IV);

           
            using (MemoryStream ms = new MemoryStream())
            {
                using (CryptoStream cs = new CryptoStream(ms, encryptor, CryptoStreamMode.Write))
                {
                    cs.Write(originalBytes, 0, originalBytes.Length);
                    cs.FlushFinalBlock();
                }
                encrypted = ms.ToArray();
            }
        }
      
        return encrypted;
    }

    /// <summary>
    /// use the DES encryption algorithm to decrypt the bitarray based on the key and the initial vector
    /// </summary>
    /// <param name="encryptBytes">encrypted data.</param>
    /// <param name="key">the key.</param>
    /// <param name="lv">the initial data.</param>
    private static byte[] DES_Decrypt(byte[] encryptBytes, byte[] key, byte[] lv)
    {
        // Checking for Exceptions.
        if (encryptBytes == null || encryptBytes.Length <= 0)
            throw new ArgumentNullException("The encrypted bitstream is entered as an empty or a length error");
        if (key == null || key.Length <= 0)
            throw new ArgumentNullException("A given key is an empty or a length error");
        if (lv == null || lv.Length <= 0)
            throw new ArgumentNullException("A given initial vector is an empty or a length error");

        byte[] decrypted;
        //create a DESCryptoServiceProvider instance
        using (DESCryptoServiceProvider dsp = new DESCryptoServiceProvider())
        {
            dsp.Mode = CipherMode.CBC;//Cipher Block Chaining   
            dsp.Key = ConvertBytesLength(key, dsp.KeySize / 8);//the key
            dsp.IV = ConvertBytesLength(lv, dsp.BlockSize / 8);//the inital vector

           
            ICryptoTransform decryptor = dsp.CreateDecryptor(dsp.Key, dsp.IV);

            
            using (MemoryStream ms = new MemoryStream())
            {
                using (CryptoStream cs = new CryptoStream(ms, decryptor, CryptoStreamMode.Write))
                {
                    cs.Write(encryptBytes, 0, encryptBytes.Length);
                    cs.FlushFinalBlock();
                }
                decrypted = ms.ToArray();
            }
        }
   
        return decrypted;
    }

    #endregion

    #region TripleDES symmetric encryption algorithm

    /// <summary>
    /// use the TripleDES encryption algorithm to encrypt the bitarray based on the key and the initial vector
    /// </summary>
    /// <param name="originalBytes">the raw data.</param>
    /// <param name="key">the key.</param>
    /// <param name="lv">the inital vector.</param>
    private static byte[] TripleDES_Encrypt(byte[] originalBytes, byte[] key, byte[] lv)
    {
        // Checking for Exceptions.
        if (originalBytes == null || originalBytes.Length <= 0)
            throw new ArgumentNullException("The raw bitstream input is an empty or a length error");
        if (key == null || key.Length <= 0)
            throw new ArgumentNullException("A given key is an empty or a length error");
        if (lv == null || lv.Length <= 0)
            throw new ArgumentNullException("A given initial vector is an empty or a length error");

        byte[] encrypted;
        //create a TripleDESCryptoServiceProvider instance
        using (TripleDESCryptoServiceProvider tdsp = new TripleDESCryptoServiceProvider())
        {
            tdsp.Mode = CipherMode.CBC;//Cipher Block Chaining   
            tdsp.Key = ConvertBytesLength(key, tdsp.KeySize / 8);//the key
            tdsp.IV = ConvertBytesLength(lv, tdsp.BlockSize / 8);//the inital vector

            
            ICryptoTransform encryptor = tdsp.CreateEncryptor(tdsp.Key, tdsp.IV);

            
            using (MemoryStream ms = new MemoryStream())
            {
                using (CryptoStream cs = new CryptoStream(ms, encryptor, CryptoStreamMode.Write))
                {
                    cs.Write(originalBytes, 0, originalBytes.Length);
                    cs.FlushFinalBlock();
                }
                encrypted = ms.ToArray();
            }
        }
        
        return encrypted;
    }

    /// <summary>
    /// use the TripleDES encryption algorithm to decrypt the bitarray based on the key and the initial vector
    /// </summary>
    /// <param name="encryptBytes">the encrypted data.</param>
    /// <param name="key">the key.</param>
    /// <param name="lv">the inital vector.</param>
    private static byte[] TripleDES_Decrypt(byte[] encryptBytes, byte[] key, byte[] lv)
    {
        // Checking for Exceptions.
        if (encryptBytes == null || encryptBytes.Length <= 0)
            throw new ArgumentNullException("The encrypted bitstream is entered as an empty or a length error");
        if (key == null || key.Length <= 0)
            throw new ArgumentNullException("A given key is an empty or a length error");
        if (lv == null || lv.Length <= 0)
            throw new ArgumentNullException("A given initial vector is an empty or a length error");

        byte[] decrypted;
        //create a TripleDESCryptoServiceProvider instance
        using (TripleDESCryptoServiceProvider tdsp = new TripleDESCryptoServiceProvider())
        {
            tdsp.Mode = CipherMode.CBC;//Cipher Block Chaining  
            tdsp.Key = ConvertBytesLength(key, tdsp.KeySize / 8);//the key
            tdsp.IV = ConvertBytesLength(lv, tdsp.BlockSize / 8);//the inital vector
            
            ICryptoTransform decryptor = tdsp.CreateDecryptor(tdsp.Key, tdsp.IV);

            
            using (MemoryStream ms = new MemoryStream())
            {
                using (CryptoStream cs = new CryptoStream(ms, decryptor, CryptoStreamMode.Write))
                {
                    cs.Write(encryptBytes, 0, encryptBytes.Length);
                    cs.FlushFinalBlock();
                }
                decrypted = ms.ToArray();
            }
        }
        
        return decrypted;

    }

    #endregion

    #region RSA asymmetric encryption algorithm

    /// RSA encryption is performed according to key information (public key) and DoOAEP_Padding mark
    /// </summary>
    /// <returns>The encrypt.</returns>
    /// <param name="DataToEncrypt">the raw data.</param>
    /// <param name="RSAKeyInfo">the information of key.</param>
    /// <param name="DoOAEP_Padding">DoOAEP_Padding falg.</param>
    public static byte[] RSAEncrypt(byte[] dataToEncrypt, RSAParameters rasKeyInfo, bool doOAEP_Padding)
    {
        try
        {
            byte[] encryptedData;
            //create a RSACryptoServiceProvider instance.
            using (RSACryptoServiceProvider RSA = new RSACryptoServiceProvider())
            {
                //Import the RSA key information. This only requires the public key information
                RSA.ImportParameters(rasKeyInfo);
                //Encrypting a given bitstream and using OAPE padding to be specific, OAEP padding can be available on Microsoft Windows XP or higher
                encryptedData = RSA.Encrypt(dataToEncrypt, doOAEP_Padding);
            }
            return encryptedData;
        }
        //Capture and display the decryption exception
        catch (CryptographicException e)
        {
            Debug.Log(e.Message);
            return null;
        }
    }

    /// <summary>
    /// RSA decryption is performed according to key information (private key) and DoOAEP_Padding mark
    /// </summary>
    /// <returns>The decrypt.</returns>
    /// <param name="dataToDecrypt">the encrypted data.</param>
    /// <param name="rsaKeyInfo">the information of the key.</param>
    /// <param name="doOAEP_Padding">DoOAEP_Padding flag.</param>
    public static byte[] RSADecrypt(byte[] dataToDecrypt, RSAParameters rsaKeyInfo, bool doOAEP_Padding)
    {
        try
        {
            byte[] decryptedData;
            //create a RSACryptoServiceProvider instance.
            using (RSACryptoServiceProvider RSA = new RSACryptoServiceProvider())
            {   //Import RSA key information. This only needs to contain private key information
                RSA.ImportParameters(rsaKeyInfo);
                //Encrypting a given bitstream and using OAPE padding to be specific, OAEP padding can be available on Microsoft Windows XP or higher
                decryptedData = RSA.Decrypt(dataToDecrypt, doOAEP_Padding);
            }
            return decryptedData;
        }
        //Capture and display the decryption exception
        catch (CryptographicException e)
        {
            Debug.Log(e.ToString());
            return null;
        }

    }

    #endregion

}
