Shader "Custom/DiffuseWithAlpha"{
	Properties{
		_MainTex		("Diffuse Texture (RGBA)", 2D)		= "white"{}
        _Hue("Hue", Range(0, 1.0)) = 0
        _Saturation("Saturation", Range(0, 1.0)) = 0.5
        _Brightness("Brightness", Range(0, 1.0)) = 0.5
        _Contrast("Contrast", Range(0, 1.0)) = 0.5
        _Balance("Balance", Range(0,1.0)) = 0.5


                _DissolveMap ("Dissolve Map", 2D) = "white" {}
        _Alpha ("Alpha", Range(0,1)) = 0
        _DissolveColor ("DissolveColor", Color) = (1,1,1,1)
        _DissolveEmission ("DissolveEmission", Range(0,1)) = 1
        _DissolveWidth ("DissolveWidth", Range(0,0.1)) = 0.05


	}


	
	SubShader{



		Tags{
			"Queue" 			= "AlphaTest"
			"RenderType" 		= "Geometry"
			"IgnoreProjector"	= "True"
		}
		
		Pass{
			Cull Back
			ZWrite On
            ColorMask 0
             Blend SrcAlpha OneMinusSrcAlpha






    	}
    	
		CGPROGRAM
		#pragma surface surf Lambert alpha:fade


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
 
		
		struct Input{
			half2 uv_MainTex;
            float2 uv_DissolveMap;
			half3 viewDir;
            fixed4 color : COLOR;
                fixed4 hsbc : COLOR;
		};
		
		sampler2D	_MainTex;
                sampler2D _DissolveMap;


        fixed _Hue, _Saturation, _Brightness, _Contrast, _Balance;
        half _Alpha;
                half _DissolveEmission;
        half _DissolveWidth;
        fixed4 _Color;
        fixed4 _DissolveColor;

		
		void surf(Input IN, inout SurfaceOutput o){

               fixed4 hsbc = fixed4(_Hue, _Saturation, _Brightness, _Contrast);

                float4 startColor = tex2D(_MainTex, IN.uv_MainTex);
                float4 hsbColor = applyHSBEffect(startColor, hsbc);

                  fixed4 mask = tex2D (_DissolveMap, IN.uv_DissolveMap);

            if(mask.r < _Alpha)
                discard;

            o.Albedo = hsbColor.rgb * (1.0 - _Balance);
                        o.Emission = hsbColor.rgb * _Balance;

            if(mask.r < _Alpha + _DissolveWidth) {
                o.Albedo = _DissolveColor;
                o.Emission = _DissolveColor * _DissolveEmission;
            }

            		}
		
		ENDCG
	}
	FallBack "Diffuse"
}