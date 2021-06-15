// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Unlit/TextureHSBC" {
    Properties
    {
        _MainTex("Base (RGB), Alpha (A)", 2D) = "black" {}
        _Hue("Hue", Range(0, 1.0)) = 0
        _Saturation("Saturation", Range(0, 1.0)) = 0.5
        _Brightness("Brightness", Range(0, 1.0)) = 0.5
        _Contrast("Contrast", Range(0, 1.0)) = 0.5
    }
 
    SubShader
    {
        LOD 100
        Tags
        {
            "Queue" = "Transparent"
            "IgnoreProjector" = "True"
            "RenderType" = "Transparent"
        }
 
        Cull Off
        Lighting Off
        ZWrite On
        Fog{ Mode Off }
        Offset -1, -1
        Blend SrcAlpha OneMinusSrcAlpha
 
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
 
            #include "UnityCG.cginc"
 
            // Function
            inline float3 applyHue(float3 aColor, float aHue)
            {
                float angle = radians(aHue);
                float3 k = float3(0.57735, 0.57735, 0.57735);
                float cosAngle = cos(angle);
                //Rodrigues' rotation formula
                return aColor * cosAngle + cross(k, aColor) * sin(angle) + k * dot(k, aColor) * (1 - cosAngle);
            }
 
 
            inline float4 applyHSBEffect(float4 startColor, fixed4 hsbc)
            {
                float hue = 360 * hsbc.r;
                float saturation = hsbc.g * 2;
                float brightness = hsbc.b * 2 - 1;
                float contrast = hsbc.a * 2;
 
                float4 outputColor = startColor;
                outputColor.rgb = applyHue(outputColor.rgb, hue);
                outputColor.rgb = (outputColor.rgb - 0.5f) * contrast + 0.5f + brightness;
                outputColor.rgb = lerp(Luminance(outputColor.rgb), outputColor.rgb, saturation);
                 
                return outputColor;
            }
 
 
            struct appdata_t
            {
                float4 vertex : POSITION;
                float2 texcoord : TEXCOORD0;
                fixed4 color : COLOR;
            };
 
            struct v2f
            {
                float4 vertex : SV_POSITION;
                half2 texcoord : TEXCOORD0;
                fixed4 hsbc : COLOR;
            };
 
            sampler2D _MainTex;
            fixed _Hue, _Saturation, _Brightness, _Contrast;
 
            v2f vert(appdata_t v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.texcoord = v.texcoord;
                o.hsbc = fixed4(_Hue, _Saturation, _Brightness, _Contrast);
                return o;
            }
 
            fixed4 frag(v2f i) : COLOR
            {
                float4 startColor = tex2D(_MainTex, i.texcoord);
                float4 hsbColor = applyHSBEffect(startColor, i.hsbc);
                return hsbColor;
            }
            ENDCG
        } // Pass
    } // SubShader
 
    SubShader
    {
        LOD 100
        Tags
        {
            "Queue" = "Transparent"
            "IgnoreProjector" = "True"
            "RenderType" = "Transparent"
        }
 
        Pass
        {
            Cull Off
            Lighting Off
            ZWrite Off
            Fog{ Mode Off }
            Offset -1, -1
            ColorMask RGB
            //AlphaTest Greater .01
            Blend SrcAlpha OneMinusSrcAlpha
            ColorMaterial AmbientAndDiffuse
 
            SetTexture[_MainTex] { Combine Texture * Primary }
        } // Pass
    } // SubShader
}