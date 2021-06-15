  Shader "Example/Vertex Extrusion" 
  {
    Properties 
	{
      _MainTex ("Texture", 2D) = "white" {}
      _Amount ("Extrusion Amount", Range(-1,1)) = 0.5
    }
    SubShader 
	{
      Tags { "RenderType" = "Opaque" }
      CGPROGRAM
      #pragma surface surf Lambert vertex:vert
      struct Input 
	  {
          float2 uv_MainTex;
      };
      float _Amount;
      
      //It is possible to use a “vertex modifier” function that will modify incoming vertex data in the vertex shader. 
      //This can be used for procedural animation, extrusion along normals and so on. 
      //Surface shader compilation directive vertex:functionName is used for that, with a function that takes inout appdata_full parameter.
      void vert (inout appdata_full v) 
      {
          v.vertex.xyz += v.normal * _Amount*v.vertex.y;
      }
      sampler2D _MainTex;
      void surf (Input IN, inout SurfaceOutput o) {
          o.Albedo = tex2D (_MainTex, IN.uv_MainTex).rgb;
      }
      ENDCG
    } 
    Fallback "Diffuse"
  }