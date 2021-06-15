Shader "Unlit/PulseShader" {
    Properties {
        _MainTex ("Base (RGB)", 2D) = "white" {}
        _OverlayTex ("Overlay Tx (RGB)", 2D) = "white" {}

        _Alpha ("Alpha", Float ) =  1.0
        _GlowColor ("Glow Color", Color ) = ( 1.0, 1.0, 1.0, 1.0 )
        _Frequency( "Glow Frequency", Float ) = 1.0
        _MinPulseVal( "Minimum Glow Multiplier", Range( 0, 1 ) ) = 0.5
    }
    SubShader {
        Tags { "RenderType"="Transparent" "Queue" = "Transparent" }
        LOD 200
        Blend One OneMinusSrcAlpha
        
        CGPROGRAM
        #pragma surface surf Unlit alpha:fade

        sampler2D   _MainTex;
        sampler2D   _OverlayTex;
        fixed4      _GlowColor;
        half        _Frequency;
        half        _MinPulseVal;
        float _Alpha;

        struct Input {
            float2 uv_MainTex;
        };

          float4 LightingUnlit (SurfaceOutput s, half3 lightDir, half atten) {
           float4 c;
           c.rgb = s.Albedo;
           c.a = s.Alpha;
           return c;
         }
 

        void surf (Input IN, inout SurfaceOutput o) 
        {

            float a = tex2D (_MainTex, IN.uv_MainTex);
            float4 b = tex2D (_OverlayTex, IN.uv_MainTex);

            half posSin = 0.5 * sin( _Frequency * _Time.x ) + 0.5;
            float pulseMultiplier = posSin * ( 1 - _MinPulseVal ) + _MinPulseVal;

           // o.Albedo = (a + b * pulseMultiplier) * .8;
          //  o.Alpha = a * _Alpha + b.b * pulseMultiplier;

            o.Albedo = a + b;
            o.Alpha = a * _Alpha * pulseMultiplier + b.r;
  
        }
        ENDCG
    } 
    FallBack "Diffuse"
}