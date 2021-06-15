/* 
*   NatCorder
*   Copyright (c) 2021 Yusuf Olokoba.
*/

namespace NatSuite.Recorders.Inputs {

    using System;
    using UnityEngine;

    /// <summary>
    /// Recorder input for recording video frames from textures.
    /// </summary>
    public interface ITextureInput : IDisposable {

        /// <summary>
        /// Commit a video frame from a texture.
        /// </summary>
        /// <param name="texture">Source texture.</param>
        /// <param name="timestamp">Frame timestamp in nanoseconds.</param>
        void CommitFrame (Texture texture, long timestamp);
    }
}