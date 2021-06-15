/* 
*   NatCorder
*   Copyright (c) 2021 Yusuf Olokoba.
*/

namespace NatSuite.Recorders.Internal {

    using System;
    using System.Runtime.InteropServices;

    public static class Bridge {

        private const string Assembly =
        #if UNITY_IOS && !UNITY_EDITOR
        @"__Internal";
        #else
        @"NatCorder";
        #endif

        public unsafe delegate void RecordingHandler (void* context, char* path);

        [DllImport(Assembly, EntryPoint = @"NCCreateMP4Recorder")]
        public static extern void CreateMP4Recorder (
            [MarshalAs(UnmanagedType.LPStr)]
            string path,
            int width,
            int height,
            float frameRate,
            int sampleRate,
            int channelCount,
            int videoBitrate,
            int keyframeInterval,
            int audioBitRate,
            out IntPtr recorder
        );
        
        [DllImport(Assembly, EntryPoint = @"NCCreateHEVCRecorder")]
        public static extern void CreateHEVCRecorder (
            [MarshalAs(UnmanagedType.LPStr)]
            string path,
            int width,
            int height,
            float frameRate,
            int sampleRate,
            int channelCount,
            int videoBitRate,
            int keyframeInterval,
            int audioBitRate,
            out IntPtr recorder
        );
        
        [DllImport(Assembly, EntryPoint = @"NCCreateGIFRecorder")]
        public static extern void CreateGIFRecorder (
            [MarshalAs(UnmanagedType.LPStr)]
            string path,
            int width,
            int height,
            float frameDuration,
            out IntPtr recorder
        );
        
        [DllImport(Assembly, EntryPoint = @"NCRecorderFrameSize")]
        public static extern void FrameSize (
            this IntPtr recorder,
            out int width,
            out int height
        );
        
        [DllImport(Assembly, EntryPoint = @"NCRecorderCommitFrame")]
        public static extern unsafe void CommitFrame (
            this IntPtr recorder,
            void* pixelBuffer,
            long timestamp
        );
        
        [DllImport(Assembly, EntryPoint = @"NCRecorderCommitSamples")]
        public static extern unsafe void CommitSamples (
            this IntPtr recorder,
            float* sampleBuffer,
            int sampleCount,
            long timestamp
        );
        
        [DllImport(Assembly, EntryPoint = @"NCRecorderFinishWriting")]
        public static extern unsafe void FinishWriting (
            this IntPtr recorder,
            RecordingHandler callback,
            void* context
        );
    }
}