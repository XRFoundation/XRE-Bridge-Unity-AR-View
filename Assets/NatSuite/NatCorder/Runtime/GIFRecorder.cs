/* 
*   NatCorder
*   Copyright (c) 2021 Yusuf Olokoba.
*/

namespace NatSuite.Recorders {

    using System;
    using Internal;

    /// <summary>
    /// Animated GIF image recorder.
    /// </summary>
    public sealed class GIFRecorder : NativeRecorder {

        #region --Client API--
        /// <summary>
        /// Create a GIF recorder.
        /// </summary>
        /// <param name="width">Image width.</param>
        /// <param name="height">Image height.</param>
        /// <param name="frameDuration">Frame duration in seconds.</param>
        public GIFRecorder (int width, int height, float frameDuration) : base(Create(width, height, frameDuration)) { }

        /// <summary>
        /// Commit a video pixel buffer for encoding.
        /// The pixel buffer MUST have an RGBA8888 pixel layout.
        /// </summary>
        /// <param name="pixelBuffer">Pixel buffer containing video frame to commit.</param>
        /// <param name="timestamp">Not used.</param>
        public override void CommitFrame<T> (T[] pixelBuffer, long timestamp = default) => base.CommitFrame(pixelBuffer, timestamp);

        /// <summary>
        /// Commit a video pixel buffer for encoding.
        /// The pixel buffer MUST have an RGBA8888 pixel layout.
        /// </summary>
        /// <param name="nativeBuffer">Pixel buffer in native memory to commit.</param>
        /// <param name="timestamp">Not used.</param>
        public override unsafe void CommitFrame (void* nativeBuffer, long timestamp = default) => base.CommitFrame(nativeBuffer, timestamp);

        /// <summary>
        /// This recorder does not support committing sample buffers.
        /// </summary>
        public override void CommitSamples (float[] sampleBuffer, long timestamp) => base.CommitSamples(sampleBuffer, timestamp);

        /// <summary>
        /// This recorder does not support committing sample buffers.
        /// </summary>
        public override unsafe void CommitSamples (float* nativeBuffer, int sampleCount, long timestamp) => base.CommitSamples(nativeBuffer, sampleCount, timestamp);
        #endregion


        #region --Operations--

        private static IntPtr Create (int width, int height, float frameDuration) {
            var path = Utility.GetPath(@".gif");
            Bridge.CreateGIFRecorder(path, width, height, frameDuration, out var recorder);
            return recorder;
        }
        #endregion
    }
}