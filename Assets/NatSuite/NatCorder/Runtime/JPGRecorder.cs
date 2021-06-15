/* 
*   NatCorder
*   Copyright (c) 2021 Yusuf Olokoba.
*/

namespace NatSuite.Recorders {

    using System;
    using System.Collections.Generic;
    using System.IO;
    using System.Threading.Tasks;
    using UnityEngine;
    using Internal;

    /// <summary>
    /// JPG image sequence recorder.
    /// This recorder is currently only supported on macOS and Windows.
    /// This recorder is NOT thread-safe, and as such it is not fully compliant with the `IMediaRecorder` interface.
    /// </summary>
    public sealed class JPGRecorder : IMediaRecorder {

        #region --Client API--
        /// <summary>
        /// Image size.
        /// </summary>
        public (int width, int height) frameSize => (frameBuffer.width, frameBuffer.height);

        /// <summary>
        /// Create a JPG recorder.
        /// </summary>
        /// <param name="width">Image width.</param>
        /// <param name="height">Image height.</param>
        public JPGRecorder (int width, int height) {
            // Save state
            this.frameBuffer = new Texture2D(width, height, TextureFormat.RGBA32, false, false);
            this.writeTasks = new List<Task>();
            // Create directory
            this.recordingPath = Utility.GetPath(string.Empty);
            Directory.CreateDirectory(recordingPath);
        }

        /// <summary>
        /// Commit a video pixel buffer for encoding.
        /// The pixel buffer MUST have an RGBA8888 pixel layout.
        /// </summary>
        /// <param name="pixelBuffer">Pixel buffer containing video frame to commit.</param>
        /// <param name="timestamp">Not used.</param>
        public unsafe void CommitFrame<T> (T[] pixelBuffer, long timestamp = default) where T : unmanaged {
            fixed (T* baseAddress = pixelBuffer)
                CommitFrame(baseAddress, timestamp);
        }

        /// <summary>
        /// Commit a video pixel buffer for encoding.
        /// The pixel buffer MUST have an RGBA8888 pixel layout.
        /// </summary>
        /// <param name="nativeBuffer">Pixel buffer in native memory to commit.</param>
        /// <param name="timestamp">Not used.</param>
        public unsafe void CommitFrame (void* nativeBuffer, long timestamp = default) {
            // Encode immediately
            frameBuffer.LoadRawTextureData((IntPtr)nativeBuffer, frameBuffer.width * frameBuffer.height * 4);
            var frameData = ImageConversion.EncodeToJPG(frameBuffer);
            // Write out on a worker thread
            var frameIndex = ++frameCount;
            var task = Task.Run(() => File.WriteAllBytes(Path.Combine(recordingPath, $"{frameIndex}.jpg"), frameData));
            writeTasks.Add(task);
        }

        /// <summary>
        /// This recorder does not support committing audio samples.
        /// </summary>
        void IMediaRecorder.CommitSamples (float[] sampleBuffer, long timestamp) => Debug.LogError("NatCorder Error: JPGRecorder does not support committing audio samples");

        /// <summary>
        /// This recorder does not support committing audio samples.
        /// </summary>
        unsafe void IMediaRecorder.CommitSamples (float* sampleBuffer, int sampleCount, long timestamp) => Debug.LogError("NatCorder Error: JPGRecorder does not support committing audio samples");

        /// <summary>
        /// Finish writing.
        /// </summary>
        /// <returns>Path to directory containing image sequence.</returns>
        public async Task<string> FinishWriting () {
            Texture2D.Destroy(frameBuffer);
            await Task.WhenAll(writeTasks);
            return recordingPath;
        }
        #endregion


        #region --Operations--
        private readonly Texture2D frameBuffer;
        private readonly string recordingPath;
        private readonly List<Task> writeTasks;
        private int frameCount;
        #endregion
    }
}