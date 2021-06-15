 Shader "Unlit/PlacementPlaneShader"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		_Alpha ("Alpha", float) = 1.0
        _PositionX("Position X", float) = 0.0
        _PositionZ("Position Z", float) = 0.0
        _MaxDistance("Max distance", float ) = 1.0
        _Visibility("Visibility", int) = 1

	}
	SubShader
	{
		Tags { "Queue"="Transparent" "RenderType"="Transparent" }
		LOD 100

 		ZWrite Off
        Blend SrcAlpha OneMinusSrcAlpha

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			// make fog work
			#pragma multi_compile_fog
			
			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				UNITY_FOG_COORDS(1)
				float4 vertex : SV_POSITION;
                float4 world : TEXCOORD1;
			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			float _Alpha;
            float _MaxDistance;
            float _PositionX;
            float _PositionZ;
            bool _Visibility;
			
			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
                o.world = mul(unity_ObjectToWorld, v.vertex);
                     //            o.world = v.vertex;
    
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				UNITY_TRANSFER_FOG(o,o.vertex);
				return o;
			}
			
			fixed4 frag (v2f i) : SV_Target
			{
				// sample the texture
				fixed4 col = tex2D(_MainTex, i.uv);
                float distX, distZ;
                (i.world.x >= _PositionX) ? distX = abs(i.world.x - _PositionX) : abs(_PositionX - i.world.x);
                (i.world.z >= _PositionZ) ? distZ = abs(i.world.z - _PositionZ) : abs(_PositionZ - i.world.z);


                if(_Visibility == 1){
                col.a = clamp(col.a - (((distX + distZ) / 2.0) / max(_MaxDistance, 0)), 0, 1);
                } else {
                col.a = 0;
                }
				col.a *= _Alpha;
				// apply fog
				UNITY_APPLY_FOG(i.fogCoord, col);
				return col;
			}
			ENDCG
		}
	}
}
