/* 
*   NatCorder
*   Copyright (c) 2021 Yusuf Olokoba.
*/

namespace NatSuite.Recorders.Inputs {

    using System;
    using UnityEngine;
    using Clocks;

    /// <summary>
    /// Recorder input for recording video frames from one or more game cameras.
    /// </summary>
    public class CameraInput : IDisposable {

        #region --Client API--
        /// <summary>
        /// Control number of successive camera frames to skip while recording.
        /// This is very useful for GIF recording, which typically has a lower framerate appearance.
        /// </summary>
        public int frameSkip;

        /// <summary>
        /// Texture input used to commit rendered frames from the camera(s) to the recorder.
        /// This can be reassigned to add custom behaviours when committing frames.
        /// </summary>
        public ITextureInput textureInput {
            get => input;
            set {
                input?.Dispose(); // Save user the trouble
                input = value;
            }
        }
        
        /// <summary>
        /// Create a video recording input from one or more game cameras.
        /// </summary>
        /// <param name="recorder">Media recorder to receive video frames.</param>
        /// <param name="cameras">Game cameras to record.</param>
        public CameraInput (IMediaRecorder recorder, params Camera[] cameras) : this(recorder, default, cameras) { }

        /// <summary>
        /// Create a video recording input from one or more game cameras.
        /// </summary>
        /// <param name="recorder">Media recorder to receive video frames.</param>
        /// <param name="clock">Clock for generating timestamps.</param>
        /// <param name="cameras">Game cameras to record.</param>
        public CameraInput (IMediaRecorder recorder, IClock clock, params Camera[] cameras) {
            // Sort cameras by depth
            Array.Sort(cameras, (a, b) => (int)(100 * (a.depth - b.depth)));
            var (width, height) = recorder.frameSize;
            // Save state
            this.recorder = recorder;
            this.clock = clock;
            this.cameras = cameras;
            this.frameDescriptor = new RenderTextureDescriptor(width, height, RenderTextureFormat.ARGB32, 24);
            this.input = SystemInfo.supportsAsyncGPUReadback ? (ITextureInput)new AsyncTextureInput(recorder) : new TextureInput(recorder);
            // Start recording
            frameDescriptor.sRGB = true;
            frameDescriptor.msaaSamples = Mathf.Max(QualitySettings.antiAliasing, 1);
            attachment = new GameObject("NatCorder CameraInputAttachment").AddComponent<CameraInputAttachment>();
            attachment.handler = CommitFrame;
        }

        /// <summary>
        /// Stop recorder input and release resources.
        /// </summary>
        public void Dispose () {
            GameObject.Destroy(attachment.gameObject);
            textureInput = null; // Auto-dispose
        }
        #endregion


        #region --Operations--

        private readonly IMediaRecorder recorder;
        private readonly IClock clock;
        private readonly Camera[] cameras;
        private readonly RenderTextureDescriptor frameDescriptor;
        private readonly CameraInputAttachment attachment;
        private ITextureInput input;
        private int frameCount;

        private void CommitFrame () {
            // Check frame index
            if (frameCount++ % (frameSkip + 1) != 0)
                return;
            // Render cameras
            var frameBuffer = RenderTexture.GetTemporary(frameDescriptor);
            for (var i = 0; i < cameras.Length; i++)
                CommitFrame(cameras[i], frameBuffer);
            // Commit
            input?.CommitFrame(frameBuffer, clock?.timestamp ?? 0L);
            RenderTexture.ReleaseTemporary(frameBuffer);
        }

        protected virtual void CommitFrame (Camera source, RenderTexture destination) {
            var prevTarget = source.targetTexture;
            source.targetTexture = destination;
            source.Render();
            source.targetTexture = prevTarget;
        }

        private sealed class CameraInputAttachment : MonoBehaviour {
            public Action handler;
            void Update () => handler?.Invoke();
        }
        #endregion
    }
}