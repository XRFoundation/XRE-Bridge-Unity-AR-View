Shader "Custom/FresnelTransparency"{
	Properties{
		_MainTex		("Diffuse Texture (RGBA)", 2D)		= "white"{}
		_Factor			("Fresnel Factor", float)			= 0.5
		_FPow			("Fresnel Power", float)			= 2.0
        _Alpha           ("Transparency", float)            = 1.0

	}
	
	SubShader{
		Tags{
			"Queue" 			= "Transparent"
			"RenderType" 		= "Transparent"
			"IgnoreProjector"	= "True"
		}
		
		Pass{
			Cull Off
			//ZWrite On
            ColorMask 0
             Blend SrcAlpha OneMinusSrcAlpha
    	}
    	
		CGPROGRAM
		#pragma surface surf Lambert alpha:fade
		
		struct Input{
			half2 uv_MainTex;
			half3 viewDir;
		};
		
		sampler2D	_MainTex;
		float		_Factor, _FPow;
        float _Alpha;
		
		void surf(Input IN, inout SurfaceOutput o){
			half fresnel = _Factor * pow(dot(normalize(IN.viewDir), o.Normal), _FPow) ;
            
			o.Albedo = tex2D(_MainTex, IN.uv_MainTex).rgb;

			o.Alpha = fresnel * _Alpha;
		}
		
		ENDCG
	}
	FallBack "Diffuse"
}