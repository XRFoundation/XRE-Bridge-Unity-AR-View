#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Single[]>
struct Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833;
// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>
struct Action_1_t542D0A6987D7110F66453B06D83AFE1D24208526;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Comparison`1<UnityEngine.Camera>
struct Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15;
// System.Comparison`1<System.Object>
struct Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t82E05038F75AC719F3B4316F5EAA7D69D4B4058D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// NatSuite.Recorders.Inputs.AsyncTextureInput
struct AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// NatSuite.Recorders.Inputs.AudioInput
struct AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1;
// UnityEngine.AudioListener
struct AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// NatSuite.Recorders.Inputs.CameraInput
struct CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t68499F9E6BB87044673DE398BBF6AEF711B3E5C9;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// NatSuite.Recorders.Clocks.FixedIntervalClock
struct FixedIntervalClock_t4835E448C6ED13FB0A8026A5D40A47F2EEC5AD04;
// NatSuite.Recorders.GIFRecorder
struct GIFRecorder_t910CCC3CC9CF3DD44AF14E6CFFF871B165265E81;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// NatSuite.Recorders.HEVCRecorder
struct HEVCRecorder_tB035CD31D12524922E6D381C82CD99B91FB933FB;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// NatSuite.Recorders.Clocks.IClock
struct IClock_t1E8B3BDAEDA8E294B95726EEC4578ACB80823AFA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// NatSuite.Recorders.IMediaRecorder
struct IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47;
// NatSuite.Recorders.Inputs.ITextureInput
struct ITextureInput_t42E3AD79C482FFE67671BADD9B29C35A180B452E;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t4AE2B1D0B72A823A08C82C417C0E16A33EB03B61;
// NatSuite.Recorders.JPGRecorder
struct JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259;
// NatSuite.Recorders.MP4Recorder
struct MP4Recorder_t5E2F726405B2E8047FC549901FFA03374FF3BEC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NatSuite.Recorders.Internal.NativeRecorder
struct NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// NatSuite.Recorders.Clocks.RealtimeClock
struct RealtimeClock_t979065F3CA6558447B46091C3F416CCF7E3F385E;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// NatSuite.Recorders.Inputs.TextureInput
struct TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// NatSuite.Recorders.WAVRecorder
struct WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9;
// NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76;
// NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment
struct AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49;
// NatSuite.Recorders.Internal.Bridge/RecordingHandler
struct RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// NatSuite.Recorders.Inputs.CameraInput/<>c
struct U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176;
// NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment
struct CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B;
// NatSuite.Recorders.JPGRecorder/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t542D0A6987D7110F66453B06D83AFE1D24208526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClock_t1E8B3BDAEDA8E294B95726EEC4578ACB80823AFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextureInput_t42E3AD79C482FFE67671BADD9B29C35A180B452E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t73B353ED8E1F07DF77AC89CA6F76FB808018F59D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D;
IL2CPP_EXTERN_C String_t* _stringLiteral1A393EADBE457522A253BEE7EB8728BC667E188E;
IL2CPP_EXTERN_C String_t* _stringLiteral3075439B58FA1A3D533126E22DDA6E472F44E475;
IL2CPP_EXTERN_C String_t* _stringLiteral397D9AACB9455AB34FC59D3578E8E5FDCBA6AB9D;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208;
IL2CPP_EXTERN_C String_t* _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758;
IL2CPP_EXTERN_C String_t* _stringLiteral589E32EA81914C1451BD9F2B02A23487D39F49E7;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E;
IL2CPP_EXTERN_C String_t* _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F;
IL2CPP_EXTERN_C String_t* _stringLiteralC5AFEDBA9A699B056BA293F7275384300FA0D71F;
IL2CPP_EXTERN_C String_t* _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198;
IL2CPP_EXTERN_C String_t* _stringLiteralF13FE9A5DB842114D70C053E3A1F4D1D3DBA8913;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4E17902B3999F1C79CE5047E1B05625D27BC63D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mEF1FAEC68584EF35C2298A142A0400462DBAE945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m6307405A40E1C9D7DBDD41D680326E919C12201E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncGPUReadbackRequest_GetData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA5D2215016D842E07C2BFC1C268B22D24E9FDDBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_mA91A4FBCB908623BA91DB4B90B0050B75FEDB29E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m89E946627D100E2FB4035599C40DA130BAB3F97F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_m0BE5F817692DC9E7EF8BED26CF99890D215B6668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mCB63CB31B1603243888A985C348A8E14CECF91D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioInput_OnSampleBuffer_mB09983850B2D7A085223A722486FD2DBD2DBC00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraInput_CommitFrame_m5404616B8BB6625391E71DCD144BAEBF5E89C30F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_mF0B282D79D77EA57E8ACBDFB72AAF8BB80FD78D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49_m9CC94E57D4EF2CE7A0EE945D708025E870D6F50E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B_mECB58EFD603B64F5904A5A187E68DA45132370CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m662C20E7D3DE731AA9B8B8A0F53061B8E2F803D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeRecorder_OnRecording_m894BFA1BF582396474B99CD6B6DD7DCE9821D88F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisString_t_mB2118B0DB57948278B3D179FBE4FE5E1E321B906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__5_0_m8AB1A36FB5EECEA59D93E3F78A611EF28F85A8FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m0D0213F3AA01DB46AA9039EBFB8FB9C922B8715C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CCommitFrameU3Eb__0_m570218D4030DD850B9E5B5DA206620C4947A5D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t07DCC266A33FBAFFB5C02AAA172CEF73838532FA 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____items_1)); }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* get__items_1() const { return ____items_1; }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_StaticFields, ____emptyArray_5)); }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// NatSuite.Recorders.Inputs.AsyncTextureInput
struct AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F  : public RuntimeObject
{
public:
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.AsyncTextureInput::recorder
	RuntimeObject* ___recorder_0;

public:
	inline static int32_t get_offset_of_recorder_0() { return static_cast<int32_t>(offsetof(AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F, ___recorder_0)); }
	inline RuntimeObject* get_recorder_0() const { return ___recorder_0; }
	inline RuntimeObject** get_address_of_recorder_0() { return &___recorder_0; }
	inline void set_recorder_0(RuntimeObject* value)
	{
		___recorder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorder_0), (void*)value);
	}
};


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// NatSuite.Recorders.Inputs.AudioInput
struct AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1  : public RuntimeObject
{
public:
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.AudioInput::recorder
	RuntimeObject* ___recorder_0;
	// NatSuite.Recorders.Clocks.IClock NatSuite.Recorders.Inputs.AudioInput::clock
	RuntimeObject* ___clock_1;
	// NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment NatSuite.Recorders.Inputs.AudioInput::attachment
	AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49 * ___attachment_2;
	// System.Boolean NatSuite.Recorders.Inputs.AudioInput::mute
	bool ___mute_3;

public:
	inline static int32_t get_offset_of_recorder_0() { return static_cast<int32_t>(offsetof(AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1, ___recorder_0)); }
	inline RuntimeObject* get_recorder_0() const { return ___recorder_0; }
	inline RuntimeObject** get_address_of_recorder_0() { return &___recorder_0; }
	inline void set_recorder_0(RuntimeObject* value)
	{
		___recorder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorder_0), (void*)value);
	}

	inline static int32_t get_offset_of_clock_1() { return static_cast<int32_t>(offsetof(AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1, ___clock_1)); }
	inline RuntimeObject* get_clock_1() const { return ___clock_1; }
	inline RuntimeObject** get_address_of_clock_1() { return &___clock_1; }
	inline void set_clock_1(RuntimeObject* value)
	{
		___clock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clock_1), (void*)value);
	}

	inline static int32_t get_offset_of_attachment_2() { return static_cast<int32_t>(offsetof(AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1, ___attachment_2)); }
	inline AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49 * get_attachment_2() const { return ___attachment_2; }
	inline AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49 ** get_address_of_attachment_2() { return &___attachment_2; }
	inline void set_attachment_2(AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49 * value)
	{
		___attachment_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachment_2), (void*)value);
	}

	inline static int32_t get_offset_of_mute_3() { return static_cast<int32_t>(offsetof(AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1, ___mute_3)); }
	inline bool get_mute_3() const { return ___mute_3; }
	inline bool* get_address_of_mute_3() { return &___mute_3; }
	inline void set_mute_3(bool value)
	{
		___mute_3 = value;
	}
};


// NatSuite.Recorders.Internal.Bridge
struct Bridge_t054364DA040A5C93A2C9E95F54195753353BE85A  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// NatSuite.Recorders.Clocks.FixedIntervalClock
struct FixedIntervalClock_t4835E448C6ED13FB0A8026A5D40A47F2EEC5AD04  : public RuntimeObject
{
public:
	// System.Double NatSuite.Recorders.Clocks.FixedIntervalClock::interval
	double ___interval_0;
	// System.Boolean NatSuite.Recorders.Clocks.FixedIntervalClock::autoTick
	bool ___autoTick_1;
	// System.Int64 NatSuite.Recorders.Clocks.FixedIntervalClock::ticks
	int64_t ___ticks_2;

public:
	inline static int32_t get_offset_of_interval_0() { return static_cast<int32_t>(offsetof(FixedIntervalClock_t4835E448C6ED13FB0A8026A5D40A47F2EEC5AD04, ___interval_0)); }
	inline double get_interval_0() const { return ___interval_0; }
	inline double* get_address_of_interval_0() { return &___interval_0; }
	inline void set_interval_0(double value)
	{
		___interval_0 = value;
	}

	inline static int32_t get_offset_of_autoTick_1() { return static_cast<int32_t>(offsetof(FixedIntervalClock_t4835E448C6ED13FB0A8026A5D40A47F2EEC5AD04, ___autoTick_1)); }
	inline bool get_autoTick_1() const { return ___autoTick_1; }
	inline bool* get_address_of_autoTick_1() { return &___autoTick_1; }
	inline void set_autoTick_1(bool value)
	{
		___autoTick_1 = value;
	}

	inline static int32_t get_offset_of_ticks_2() { return static_cast<int32_t>(offsetof(FixedIntervalClock_t4835E448C6ED13FB0A8026A5D40A47F2EEC5AD04, ___ticks_2)); }
	inline int64_t get_ticks_2() const { return ___ticks_2; }
	inline int64_t* get_address_of_ticks_2() { return &___ticks_2; }
	inline void set_ticks_2(int64_t value)
	{
		___ticks_2 = value;
	}
};


// NatSuite.Recorders.JPGRecorder
struct JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D NatSuite.Recorders.JPGRecorder::frameBuffer
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___frameBuffer_0;
	// System.String NatSuite.Recorders.JPGRecorder::recordingPath
	String_t* ___recordingPath_1;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> NatSuite.Recorders.JPGRecorder::writeTasks
	List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * ___writeTasks_2;
	// System.Int32 NatSuite.Recorders.JPGRecorder::frameCount
	int32_t ___frameCount_3;

public:
	inline static int32_t get_offset_of_frameBuffer_0() { return static_cast<int32_t>(offsetof(JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259, ___frameBuffer_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_frameBuffer_0() const { return ___frameBuffer_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_frameBuffer_0() { return &___frameBuffer_0; }
	inline void set_frameBuffer_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___frameBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_recordingPath_1() { return static_cast<int32_t>(offsetof(JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259, ___recordingPath_1)); }
	inline String_t* get_recordingPath_1() const { return ___recordingPath_1; }
	inline String_t** get_address_of_recordingPath_1() { return &___recordingPath_1; }
	inline void set_recordingPath_1(String_t* value)
	{
		___recordingPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recordingPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_writeTasks_2() { return static_cast<int32_t>(offsetof(JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259, ___writeTasks_2)); }
	inline List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * get_writeTasks_2() const { return ___writeTasks_2; }
	inline List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB ** get_address_of_writeTasks_2() { return &___writeTasks_2; }
	inline void set_writeTasks_2(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * value)
	{
		___writeTasks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeTasks_2), (void*)value);
	}

	inline static int32_t get_offset_of_frameCount_3() { return static_cast<int32_t>(offsetof(JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259, ___frameCount_3)); }
	inline int32_t get_frameCount_3() const { return ___frameCount_3; }
	inline int32_t* get_address_of_frameCount_3() { return &___frameCount_3; }
	inline void set_frameCount_3(int32_t value)
	{
		___frameCount_3 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NatSuite.Recorders.Clocks.RealtimeClock
struct RealtimeClock_t979065F3CA6558447B46091C3F416CCF7E3F385E  : public RuntimeObject
{
public:
	// System.Diagnostics.Stopwatch NatSuite.Recorders.Clocks.RealtimeClock::stopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___stopwatch_0;

public:
	inline static int32_t get_offset_of_stopwatch_0() { return static_cast<int32_t>(offsetof(RealtimeClock_t979065F3CA6558447B46091C3F416CCF7E3F385E, ___stopwatch_0)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_stopwatch_0() const { return ___stopwatch_0; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_stopwatch_0() { return &___stopwatch_0; }
	inline void set_stopwatch_0(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___stopwatch_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopwatch_0), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// NatSuite.Recorders.Inputs.TextureInput
struct TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0  : public RuntimeObject
{
public:
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.TextureInput::recorder
	RuntimeObject* ___recorder_0;
	// UnityEngine.Texture2D NatSuite.Recorders.Inputs.TextureInput::readbackBuffer
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___readbackBuffer_1;

public:
	inline static int32_t get_offset_of_recorder_0() { return static_cast<int32_t>(offsetof(TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0, ___recorder_0)); }
	inline RuntimeObject* get_recorder_0() const { return ___recorder_0; }
	inline RuntimeObject** get_address_of_recorder_0() { return &___recorder_0; }
	inline void set_recorder_0(RuntimeObject* value)
	{
		___recorder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorder_0), (void*)value);
	}

	inline static int32_t get_offset_of_readbackBuffer_1() { return static_cast<int32_t>(offsetof(TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0, ___readbackBuffer_1)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_readbackBuffer_1() const { return ___readbackBuffer_1; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_readbackBuffer_1() { return &___readbackBuffer_1; }
	inline void set_readbackBuffer_1(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___readbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readbackBuffer_1), (void*)value);
	}
};


// NatSuite.Recorders.Internal.Utility
struct Utility_t73B353ED8E1F07DF77AC89CA6F76FB808018F59D  : public RuntimeObject
{
public:

public:
};

struct Utility_t73B353ED8E1F07DF77AC89CA6F76FB808018F59D_StaticFields
{
public:
	// System.String NatSuite.Recorders.Internal.Utility::directory
	String_t* ___directory_0;

public:
	inline static int32_t get_offset_of_directory_0() { return static_cast<int32_t>(offsetof(Utility_t73B353ED8E1F07DF77AC89CA6F76FB808018F59D_StaticFields, ___directory_0)); }
	inline String_t* get_directory_0() const { return ___directory_0; }
	inline String_t** get_address_of_directory_0() { return &___directory_0; }
	inline void set_directory_0(String_t* value)
	{
		___directory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___directory_0), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// NatSuite.Recorders.WAVRecorder
struct WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9  : public RuntimeObject
{
public:
	// System.Int32 NatSuite.Recorders.WAVRecorder::sampleRate
	int32_t ___sampleRate_0;
	// System.Int32 NatSuite.Recorders.WAVRecorder::channelCount
	int32_t ___channelCount_1;
	// System.IO.FileStream NatSuite.Recorders.WAVRecorder::stream
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * ___stream_2;
	// System.Int32 NatSuite.Recorders.WAVRecorder::sampleCount
	int32_t ___sampleCount_3;

public:
	inline static int32_t get_offset_of_sampleRate_0() { return static_cast<int32_t>(offsetof(WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9, ___sampleRate_0)); }
	inline int32_t get_sampleRate_0() const { return ___sampleRate_0; }
	inline int32_t* get_address_of_sampleRate_0() { return &___sampleRate_0; }
	inline void set_sampleRate_0(int32_t value)
	{
		___sampleRate_0 = value;
	}

	inline static int32_t get_offset_of_channelCount_1() { return static_cast<int32_t>(offsetof(WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9, ___channelCount_1)); }
	inline int32_t get_channelCount_1() const { return ___channelCount_1; }
	inline int32_t* get_address_of_channelCount_1() { return &___channelCount_1; }
	inline void set_channelCount_1(int32_t value)
	{
		___channelCount_1 = value;
	}

	inline static int32_t get_offset_of_stream_2() { return static_cast<int32_t>(offsetof(WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9, ___stream_2)); }
	inline FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * get_stream_2() const { return ___stream_2; }
	inline FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 ** get_address_of_stream_2() { return &___stream_2; }
	inline void set_stream_2(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * value)
	{
		___stream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_2), (void*)value);
	}

	inline static int32_t get_offset_of_sampleCount_3() { return static_cast<int32_t>(offsetof(WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9, ___sampleCount_3)); }
	inline int32_t get_sampleCount_3() const { return ___sampleCount_3; }
	inline int32_t* get_address_of_sampleCount_3() { return &___sampleCount_3; }
	inline void set_sampleCount_3(int32_t value)
	{
		___sampleCount_3 = value;
	}
};


// NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76  : public RuntimeObject
{
public:
	// NatSuite.Recorders.Inputs.AsyncTextureInput NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0::<>4__this
	AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F * ___U3CU3E4__this_0;
	// System.Int64 NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0::timestamp
	int64_t ___timestamp_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76, ___U3CU3E4__this_0)); }
	inline AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76, ___timestamp_1)); }
	inline int64_t get_timestamp_1() const { return ___timestamp_1; }
	inline int64_t* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(int64_t value)
	{
		___timestamp_1 = value;
	}
};


// NatSuite.Recorders.Inputs.CameraInput/<>c
struct U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_StaticFields
{
public:
	// NatSuite.Recorders.Inputs.CameraInput/<>c NatSuite.Recorders.Inputs.CameraInput/<>c::<>9
	U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176 * ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.Camera> NatSuite.Recorders.Inputs.CameraInput/<>c::<>9__5_0
	Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}
};


// NatSuite.Recorders.JPGRecorder/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB  : public RuntimeObject
{
public:
	// NatSuite.Recorders.JPGRecorder NatSuite.Recorders.JPGRecorder/<>c__DisplayClass4_0::<>4__this
	JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * ___U3CU3E4__this_0;
	// System.Int32 NatSuite.Recorders.JPGRecorder/<>c__DisplayClass4_0::frameIndex
	int32_t ___frameIndex_1;
	// System.Byte[] NatSuite.Recorders.JPGRecorder/<>c__DisplayClass4_0::frameData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___frameData_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB, ___U3CU3E4__this_0)); }
	inline JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_frameIndex_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB, ___frameIndex_1)); }
	inline int32_t get_frameIndex_1() const { return ___frameIndex_1; }
	inline int32_t* get_address_of_frameIndex_1() { return &___frameIndex_1; }
	inline void set_frameIndex_1(int32_t value)
	{
		___frameIndex_1 = value;
	}

	inline static int32_t get_offset_of_frameData_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB, ___frameData_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_frameData_2() const { return ___frameData_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_frameData_2() { return &___frameData_2; }
	inline void set_frameData_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___frameData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameData_2), (void*)value);
	}
};


// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t68499F9E6BB87044673DE398BBF6AEF711B3E5C9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t4AE2B1D0B72A823A08C82C417C0E16A33EB03B61  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_task_2)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.AsyncGPUReadbackRequest
struct AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA 
{
public:
	// System.IntPtr UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Int32 UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NatSuite.Recorders.Internal.NativeRecorder
struct NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6  : public RuntimeObject
{
public:
	// System.IntPtr NatSuite.Recorders.Internal.NativeRecorder::recorder
	intptr_t ___recorder_0;

public:
	inline static int32_t get_offset_of_recorder_0() { return static_cast<int32_t>(offsetof(NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6, ___recorder_0)); }
	inline intptr_t get_recorder_0() const { return ___recorder_0; }
	inline intptr_t* get_address_of_recorder_0() { return &___recorder_0; }
	inline void set_recorder_0(intptr_t value)
	{
		___recorder_0 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RenderTextureCreationFlags
struct RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureMemoryless
struct RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.SeekOrigin
struct SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowSamplingMode
struct ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.VRTextureUsage
struct VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_8;
	// System.String System.IO.FileStream::name
	String_t* ___name_9;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_10;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_11;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_12;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_13;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_14;
	// System.Boolean System.IO.FileStream::async
	bool ___async_15;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_16;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_17;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_18;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_19;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_20;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_21;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_22;

public:
	inline static int32_t get_offset_of_buf_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_8() const { return ___buf_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_8() { return &___buf_8; }
	inline void set_buf_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_8), (void*)value);
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_10)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_10() const { return ___safeHandle_10; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_10() { return &___safeHandle_10; }
	inline void set_safeHandle_10(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_10), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_11)); }
	inline bool get_isExposed_11() const { return ___isExposed_11; }
	inline bool* get_address_of_isExposed_11() { return &___isExposed_11; }
	inline void set_isExposed_11(bool value)
	{
		___isExposed_11 = value;
	}

	inline static int32_t get_offset_of_append_startpos_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_12)); }
	inline int64_t get_append_startpos_12() const { return ___append_startpos_12; }
	inline int64_t* get_address_of_append_startpos_12() { return &___append_startpos_12; }
	inline void set_append_startpos_12(int64_t value)
	{
		___append_startpos_12 = value;
	}

	inline static int32_t get_offset_of_access_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_13)); }
	inline int32_t get_access_13() const { return ___access_13; }
	inline int32_t* get_address_of_access_13() { return &___access_13; }
	inline void set_access_13(int32_t value)
	{
		___access_13 = value;
	}

	inline static int32_t get_offset_of_owner_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_14)); }
	inline bool get_owner_14() const { return ___owner_14; }
	inline bool* get_address_of_owner_14() { return &___owner_14; }
	inline void set_owner_14(bool value)
	{
		___owner_14 = value;
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_15)); }
	inline bool get_async_15() const { return ___async_15; }
	inline bool* get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(bool value)
	{
		___async_15 = value;
	}

	inline static int32_t get_offset_of_canseek_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_16)); }
	inline bool get_canseek_16() const { return ___canseek_16; }
	inline bool* get_address_of_canseek_16() { return &___canseek_16; }
	inline void set_canseek_16(bool value)
	{
		___canseek_16 = value;
	}

	inline static int32_t get_offset_of_anonymous_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_17)); }
	inline bool get_anonymous_17() const { return ___anonymous_17; }
	inline bool* get_address_of_anonymous_17() { return &___anonymous_17; }
	inline void set_anonymous_17(bool value)
	{
		___anonymous_17 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_18)); }
	inline bool get_buf_dirty_18() const { return ___buf_dirty_18; }
	inline bool* get_address_of_buf_dirty_18() { return &___buf_dirty_18; }
	inline void set_buf_dirty_18(bool value)
	{
		___buf_dirty_18 = value;
	}

	inline static int32_t get_offset_of_buf_size_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_19)); }
	inline int32_t get_buf_size_19() const { return ___buf_size_19; }
	inline int32_t* get_address_of_buf_size_19() { return &___buf_size_19; }
	inline void set_buf_size_19(int32_t value)
	{
		___buf_size_19 = value;
	}

	inline static int32_t get_offset_of_buf_length_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_20)); }
	inline int32_t get_buf_length_20() const { return ___buf_length_20; }
	inline int32_t* get_address_of_buf_length_20() { return &___buf_length_20; }
	inline void set_buf_length_20(int32_t value)
	{
		___buf_length_20 = value;
	}

	inline static int32_t get_offset_of_buf_offset_21() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_21)); }
	inline int32_t get_buf_offset_21() const { return ___buf_offset_21; }
	inline int32_t* get_address_of_buf_offset_21() { return &___buf_offset_21; }
	inline void set_buf_offset_21(int32_t value)
	{
		___buf_offset_21 = value;
	}

	inline static int32_t get_offset_of_buf_start_22() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_22)); }
	inline int64_t get_buf_start_22() const { return ___buf_start_22; }
	inline int64_t* get_address_of_buf_start_22() { return &___buf_start_22; }
	inline void set_buf_start_22(int64_t value)
	{
		___buf_start_22 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_6;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_7;

public:
	inline static int32_t get_offset_of_buf_recycle_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_6() const { return ___buf_recycle_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_6() { return &___buf_recycle_6; }
	inline void set_buf_recycle_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_6), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_7)); }
	inline RuntimeObject * get_buf_recycle_lock_7() const { return ___buf_recycle_lock_7; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_7() { return &___buf_recycle_lock_7; }
	inline void set_buf_recycle_lock_7(RuntimeObject * value)
	{
		___buf_recycle_lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_7), (void*)value);
	}
};


// NatSuite.Recorders.GIFRecorder
struct GIFRecorder_t910CCC3CC9CF3DD44AF14E6CFFF871B165265E81  : public NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// NatSuite.Recorders.HEVCRecorder
struct HEVCRecorder_tB035CD31D12524922E6D381C82CD99B91FB933FB  : public NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6
{
public:

public:
};


// NatSuite.Recorders.MP4Recorder
struct MP4Recorder_t5E2F726405B2E8047FC549901FFA03374FF3BEC2  : public NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6
{
public:

public:
};


// System.IO.MonoIOStat
struct MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_9;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_10;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_11;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_12;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmipCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmipCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CmipCountU3Ek__BackingField_4() const { return ___U3CmipCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmipCountU3Ek__BackingField_4() { return &___U3CmipCountU3Ek__BackingField_4; }
	inline void set_U3CmipCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CmipCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__graphicsFormat_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____graphicsFormat_5)); }
	inline int32_t get__graphicsFormat_5() const { return ____graphicsFormat_5; }
	inline int32_t* get_address_of__graphicsFormat_5() { return &____graphicsFormat_5; }
	inline void set__graphicsFormat_5(int32_t value)
	{
		____graphicsFormat_5 = value;
	}

	inline static int32_t get_offset_of_U3CstencilFormatU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CstencilFormatU3Ek__BackingField_6)); }
	inline int32_t get_U3CstencilFormatU3Ek__BackingField_6() const { return ___U3CstencilFormatU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CstencilFormatU3Ek__BackingField_6() { return &___U3CstencilFormatU3Ek__BackingField_6; }
	inline void set_U3CstencilFormatU3Ek__BackingField_6(int32_t value)
	{
		___U3CstencilFormatU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____depthBufferBits_7)); }
	inline int32_t get__depthBufferBits_7() const { return ____depthBufferBits_7; }
	inline int32_t* get_address_of__depthBufferBits_7() { return &____depthBufferBits_7; }
	inline void set__depthBufferBits_7(int32_t value)
	{
		____depthBufferBits_7 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CdimensionU3Ek__BackingField_9)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_9() const { return ___U3CdimensionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_9() { return &___U3CdimensionU3Ek__BackingField_9; }
	inline void set_U3CdimensionU3Ek__BackingField_9(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CshadowSamplingModeU3Ek__BackingField_10)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_10() const { return ___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return &___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_10(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvrUsageU3Ek__BackingField_11)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_11() const { return ___U3CvrUsageU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_11() { return &___U3CvrUsageU3Ek__BackingField_11; }
	inline void set_U3CvrUsageU3Ek__BackingField_11(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__flags_12() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____flags_12)); }
	inline int32_t get__flags_12() const { return ____flags_12; }
	inline int32_t* get_address_of__flags_12() { return &____flags_12; }
	inline void set__flags_12(int32_t value)
	{
		____flags_12 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmemorylessU3Ek__BackingField_13)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_13() const { return ___U3CmemorylessU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_13() { return &___U3CmemorylessU3Ek__BackingField_13; }
	inline void set_U3CmemorylessU3Ek__BackingField_13(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_13 = value;
	}
};

struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___depthFormatBits_8;

public:
	inline static int32_t get_offset_of_depthFormatBits_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields, ___depthFormatBits_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_depthFormatBits_8() const { return ___depthFormatBits_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_depthFormatBits_8() { return &___depthFormatBits_8; }
	inline void set_depthFormatBits_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___depthFormatBits_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthFormatBits_8), (void*)value);
	}
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * ____buffer_5;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_9;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_10;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_11;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____buffer_5)); }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * get__buffer_5() const { return ____buffer_5; }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 ** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__mem_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____mem_6)); }
	inline uint8_t* get__mem_6() const { return ____mem_6; }
	inline uint8_t** get_address_of__mem_6() { return &____mem_6; }
	inline void set__mem_6(uint8_t* value)
	{
		____mem_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____length_7)); }
	inline int64_t get__length_7() const { return ____length_7; }
	inline int64_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int64_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____capacity_8)); }
	inline int64_t get__capacity_8() const { return ____capacity_8; }
	inline int64_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int64_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__position_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____position_9)); }
	inline int64_t get__position_9() const { return ____position_9; }
	inline int64_t* get_address_of__position_9() { return &____position_9; }
	inline void set__position_9(int64_t value)
	{
		____position_9 = value;
	}

	inline static int32_t get_offset_of__offset_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____offset_10)); }
	inline int64_t get__offset_10() const { return ____offset_10; }
	inline int64_t* get_address_of__offset_10() { return &____offset_10; }
	inline void set__offset_10(int64_t value)
	{
		____offset_10 = value;
	}

	inline static int32_t get_offset_of__access_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____access_11)); }
	inline int32_t get__access_11() const { return ____access_11; }
	inline int32_t* get_address_of__access_11() { return &____access_11; }
	inline void set__access_11(int32_t value)
	{
		____access_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7
struct U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 
{
public:
	// System.Int32 NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  ___U3CU3Et__builder_1;
	// NatSuite.Recorders.JPGRecorder NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::<>4__this
	JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60, ___U3CU3E4__this_2)); }
	inline JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<System.Single[]>
struct Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>
struct Action_1_t542D0A6987D7110F66453B06D83AFE1D24208526  : public MulticastDelegate_t
{
public:

public:
};


// System.Comparison`1<UnityEngine.Camera>
struct Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// NatSuite.Recorders.Inputs.CameraInput
struct CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21  : public RuntimeObject
{
public:
	// System.Int32 NatSuite.Recorders.Inputs.CameraInput::frameSkip
	int32_t ___frameSkip_0;
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.CameraInput::recorder
	RuntimeObject* ___recorder_1;
	// NatSuite.Recorders.Clocks.IClock NatSuite.Recorders.Inputs.CameraInput::clock
	RuntimeObject* ___clock_2;
	// UnityEngine.Camera[] NatSuite.Recorders.Inputs.CameraInput::cameras
	CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* ___cameras_3;
	// UnityEngine.RenderTextureDescriptor NatSuite.Recorders.Inputs.CameraInput::frameDescriptor
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___frameDescriptor_4;
	// NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment NatSuite.Recorders.Inputs.CameraInput::attachment
	CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B * ___attachment_5;
	// NatSuite.Recorders.Inputs.ITextureInput NatSuite.Recorders.Inputs.CameraInput::input
	RuntimeObject* ___input_6;
	// System.Int32 NatSuite.Recorders.Inputs.CameraInput::frameCount
	int32_t ___frameCount_7;

public:
	inline static int32_t get_offset_of_frameSkip_0() { return static_cast<int32_t>(offsetof(CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21, ___frameSkip_0)); }
	inline int32_t get_frameSkip_0() const { return ___frameSkip_0; }
	inline int32_t* get_address_of_frameSkip_0() { return &___frameSkip_0; }
	inline void set_frameSkip_0(int32_t value)
	{
		___frameSkip_0 = value;
	}

	inline static int32_t get_offset_of_recorder_1() { return static_cast<int32_t>(offsetof(CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21, ___recorder_1)); }
	inline RuntimeObject* get_recorder_1() const { return ___recorder_1; }
	inline RuntimeObject** get_address_of_recorder_1() { return &___recorder_1; }
	inline void set_recorder_1(RuntimeObject* value)
	{
		___recorder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorder_1), (void*)value);
	}

	inline static int32_t get_offset_of_clock_2() { return static_cast<int32_t>(offsetof(CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21, ___clock_2)); }
	inline RuntimeObject* get_clock_2() const { return ___clock_2; }
	inline RuntimeObject** get_address_of_clock_2() { return &___clock_2; }
	inline void set_clock_2(RuntimeObject* value)
	{
		___clock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clock_2), (void*)value);
	}

	inline static int32_t get_offset_of_cameras_3() { return static_cast<int32_t>(offsetof(CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21, ___cameras_3)); }
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* get_cameras_3() const { return ___cameras_3; }
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001** get_address_of_cameras_3() { return &___cameras_3; }
	inline void set_cameras_3(CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* value)
	{
		___cameras_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameras_3), (void*)value);
	}

	inline static int32_t get_offset_of_frameDescriptor_4() { return static_cast<int32_t>(offsetof(CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21, ___frameDescriptor_4)); }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  get_frameDescriptor_4() const { return ___frameDescriptor_4; }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * get_address_of_frameDescriptor_4() { return &___frameDescriptor_4; }
	inline void set_frameDescriptor_4(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  value)
	{
		___frameDescriptor_4 = value;
	}

	inline static int32_t get_offset_of_attachment_5() { return static_cast<int32_t>(offsetof(CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21, ___attachment_5)); }
	inline CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B * get_attachment_5() const { return ___attachment_5; }
	inline CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B ** get_address_of_attachment_5() { return &___attachment_5; }
	inline void set_attachment_5(CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B * value)
	{
		___attachment_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachment_5), (void*)value);
	}

	inline static int32_t get_offset_of_input_6() { return static_cast<int32_t>(offsetof(CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21, ___input_6)); }
	inline RuntimeObject* get_input_6() const { return ___input_6; }
	inline RuntimeObject** get_address_of_input_6() { return &___input_6; }
	inline void set_input_6(RuntimeObject* value)
	{
		___input_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameCount_7() { return static_cast<int32_t>(offsetof(CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21, ___frameCount_7)); }
	inline int32_t get_frameCount_7() const { return ___frameCount_7; }
	inline int32_t* get_address_of_frameCount_7() { return &___frameCount_7; }
	inline void set_frameCount_7(int32_t value)
	{
		___frameCount_7 = value;
	}
};


// System.IO.FileSystemInfo
struct FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// NatSuite.Recorders.Internal.Bridge/RecordingHandler
struct RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioListener
struct AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment
struct AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<System.Single[]> NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment::sampleBufferDelegate
	Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * ___sampleBufferDelegate_4;

public:
	inline static int32_t get_offset_of_sampleBufferDelegate_4() { return static_cast<int32_t>(offsetof(AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49, ___sampleBufferDelegate_4)); }
	inline Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * get_sampleBufferDelegate_4() const { return ___sampleBufferDelegate_4; }
	inline Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 ** get_address_of_sampleBufferDelegate_4() { return &___sampleBufferDelegate_4; }
	inline void set_sampleBufferDelegate_4(Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * value)
	{
		___sampleBufferDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sampleBufferDelegate_4), (void*)value);
	}
};


// NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment
struct CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment::handler
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handler_4;

public:
	inline static int32_t get_offset_of_handler_4() { return static_cast<int32_t>(offsetof(CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B, ___handler_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_handler_4() const { return ___handler_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_handler_4() { return &___handler_4; }
	inline void set_handler_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___handler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * m_Items[1];

public:
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mEF1FAEC68584EF35C2298A142A0400462DBAE945_gshared (Action_1_t542D0A6987D7110F66453B06D83AFE1D24208526 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared (Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Array::Sort<System.Object>(!!0[],System.Comparison`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_m99E5494DA87856CAF381458895C4B49B45E998B3_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * ___comparison1, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_gshared (ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_m6D75F7FC4FE0EC28D8E0AED036758EFACFDE2AA4_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_gshared (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeBufferPointerWithoutChecks<System.Byte>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m662C20E7D3DE731AA9B8B8A0F53061B8E2F803D4_gshared (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___nativeArray0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_FromResult_TisRuntimeObject_m5FD118CD21188E7E9BC317D50B8AC800C0C0C591_gshared (RuntimeObject * ___result0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.Byte>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  AsyncGPUReadbackRequest_GetData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA5D2215016D842E07C2BFC1C268B22D24E9FDDBD_gshared (AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA * __this, int32_t ___layer0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_m755734E29471785A88C89FD7976C8CDCB8FB6596_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m396233DC6D9721B4B41AF3636AC435C07F4C1249 (U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mEF1FAEC68584EF35C2298A142A0400462DBAE945 (Action_1_t542D0A6987D7110F66453B06D83AFE1D24208526 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t542D0A6987D7110F66453B06D83AFE1D24208526 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mEF1FAEC68584EF35C2298A142A0400462DBAE945_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Rendering.AsyncGPUReadbackRequest UnityEngine.Rendering.AsyncGPUReadback::Request(UnityEngine.Texture,System.Int32,System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA  AsyncGPUReadback_Request_mBCCFF2D979AFB96CD73D38C7C3C8F662037ACF42 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___src0, int32_t ___mipIndex1, Action_1_t542D0A6987D7110F66453B06D83AFE1D24208526 * ___callback2, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m0D4C7611A7F5883F46C972B14FCA99E8033E9645 (AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * ___audioListener2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_mDE38486DC0BD531F77960167435C6F87C23AA99A (AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject2, bool ___mute3, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioSource,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_mA15D2F8C084409A393FAD724691E4898A912739A (AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource2, bool ___mute3, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment>()
inline AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49 * GameObject_AddComponent_TisAudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49_m9CC94E57D4EF2CE7A0EE945D708025E870D6F50E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void System.Action`1<System.Single[]>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4E17902B3999F1C79CE5047E1B05625D27BC63D4 (Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 UnityEngine.AndroidJNI::AttachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_AttachCurrentThread_mB19891A8E6DFF2548BEC09881D3DD282F4A4F83E (const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_m8600909C80F01FCF8E159C1581C36AFF45EB47D0 (CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* ___cameras2, const RuntimeMethod* method);
// System.Void System.Comparison`1<UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mF0B282D79D77EA57E8ACBDFB72AAF8BB80FD78D7 (Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Array::Sort<UnityEngine.Camera>(!!0[],System.Comparison`1<!!0>)
inline void Array_Sort_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m6307405A40E1C9D7DBDD41D680326E919C12201E (CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* ___array0, Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * ___comparison1, const RuntimeMethod* method)
{
	((  void (*) (CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001*, Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 *, const RuntimeMethod*))Array_Sort_TisRuntimeObject_m99E5494DA87856CAF381458895C4B49B45E998B3_gshared)(___array0, ___comparison1, method);
}
// System.Void UnityEngine.RenderTextureDescriptor::.ctor(System.Int32,System.Int32,UnityEngine.RenderTextureFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor__ctor_mB0D252CE93C0E10D01FD10C5C454B0645A16BEE3 (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___width0, int32_t ___height1, int32_t ___colorFormat2, int32_t ___depthBufferBits3, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsAsyncGPUReadback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsAsyncGPUReadback_mC4DFC36451A1739A0DDA4614E434657CE6B196DF (const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.TextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput__ctor_m4AF130169710FCB9F4D15650183A9E5A0FA9E0B2 (TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0 * __this, RuntimeObject* ___recorder0, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput__ctor_mD92AA2EBA597667937C00836DC801A660D444583 (AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F * __this, RuntimeObject* ___recorder0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_sRGB(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_sRGB_m92925430C9C202528AA56DC9E01FCD382FCEB1D2 (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.QualitySettings::get_antiAliasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_antiAliasing_m47FE4122D4F9CD25E8B605525E2E35C37FA34918 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTextureDescriptor::set_msaaSamples(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m84320452D8BF3A8DD5662F6229FE666C299B5AEF_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment>()
inline CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B * GameObject_AddComponent_TisCameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B_mECB58EFD603B64F5904A5A187E68DA45132370CD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.CameraInput::set_textureInput(NatSuite.Recorders.Inputs.ITextureInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_set_textureInput_m74039882D6DFBB3423100634DF6E13B36ACB8DDF (CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_m7997BAA9A1DFE4D9D1B9F5047ECEE8464835B8DF (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___desc0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.IntPtr NatSuite.Recorders.GIFRecorder::Create(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GIFRecorder_Create_m03826B9C31EDE4659CB7D37E9DB0B247ECF9E4BE (int32_t ___width0, int32_t ___height1, float ___frameDuration2, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.NativeRecorder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder__ctor_m7B446D1985312C8F3CCA04A0073E624D69601B74 (NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6 * __this, intptr_t ___recorder0, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitFrame_m109F48739E95FAEFE7193C68616567885F59270E (NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6 * __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_m53A1B695E729F6D31C27E47909B4C827A7E8871B (NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_mC9BC36F949552FB9AB96392CAF9666F4AE8EF89C (NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6 * __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method);
// System.String NatSuite.Recorders.Internal.Utility::GetPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utility_GetPath_m8133CD602BFCD516B14D7098C8E9A554415511C2 (String_t* ___extension0, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::CreateGIFRecorder(System.String,System.Int32,System.Int32,System.Single,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateGIFRecorder_mB8903960902D0B72CEC62E1FEE1FAA236322205B (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameDuration3, intptr_t* ___recorder4, const RuntimeMethod* method);
// System.IntPtr NatSuite.Recorders.HEVCRecorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HEVCRecorder_Create_m562C066F8ADC412FCB57434A6348B5118AFE30E4 (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::CreateHEVCRecorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateHEVCRecorder_m054181EEAC718F656106A6B02BBCD895E8986CFB (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitRate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18 (ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E *, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_gshared)(__this, ___item10, ___item21, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
inline void List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85 (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.JPGRecorder/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m16F3F13E5885831AF6C516B310326258B5E42353 (U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB * __this, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_mC98EE7575456ACE2E7C3B4CDC1CE0A34FA22B24E (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, intptr_t ___data0, int32_t ___size1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToJPG_m75581ECC85FF41720A0CCB7602EF6E1D037C909F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(!0)
inline void List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514 (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Create()
inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  AsyncTaskMethodBuilder_1_Create_m89E946627D100E2FB4035599C40DA130BAB3F97F (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_m0BE5F817692DC9E7EF8BED26CF99890D215B6668 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_m6D75F7FC4FE0EC28D8E0AED036758EFACFDE2AA4_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::get_Task()
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * AsyncTaskMethodBuilder_1_get_Task_mCB63CB31B1603243888A985C348A8E14CECF91D1 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.IntPtr NatSuite.Recorders.MP4Recorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MP4Recorder_Create_mB04516F59E5A8588FBE64163801DC2682409C978 (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::CreateMP4Recorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateMP4Recorder_m1109BF12617F26A549CEB9EDF6ADEBBA3C5377D9 (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitrate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.NativeRecorder::OnRecording(System.Void*,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_OnRecording_m894BFA1BF582396474B99CD6B6DD7DCE9821D88F (void* ___context0, Il2CppChar* ___path1, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::FrameSize(System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_FrameSize_m27C0900E76A59B9F10A757EDD476149D090487CE (intptr_t ___recorder0, int32_t* ___width1, int32_t* ___height2, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::CommitFrame(System.IntPtr,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CommitFrame_m8E0A243112DF1688C358651D77A84C3C21755581 (intptr_t ___recorder0, void* ___pixelBuffer1, int64_t ___timestamp2, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::CommitSamples(System.IntPtr,System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CommitSamples_m6C27EBEA723B67A553B5ABCD182B8B70015EA410 (intptr_t ___recorder0, float* ___sampleBuffer1, int32_t ___sampleCount2, int64_t ___timestamp3, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056 (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge/RecordingHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler__ctor_m87C8FCE4B83E8E166597B966BEE654F2520696A0 (RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m0A74179B3DD6D87F0863EF55176F924D641E42BF (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___value0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Internal.Bridge::FinishWriting(System.IntPtr,NatSuite.Recorders.Internal.Bridge/RecordingHandler,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_FinishWriting_mE6594933D72BD19B6BD43E3696D594C65F9A496F (intptr_t ___recorder0, RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037 * ___callback1, void* ___context2, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_inline (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6 (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201 (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, String_t*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared)(__this, ___exception0, method);
}
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.Boolean System.Diagnostics.Stopwatch::get_IsRunning()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Stopwatch_get_IsRunning_m953BE51FFEF66BFB8734F5AB1AC99E7DD28CCBBC_inline (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7 (const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  (*) (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_gshared)(__this, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeBufferPointerWithoutChecks<System.Byte>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m662C20E7D3DE731AA9B8B8A0F53061B8E2F803D4 (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m662C20E7D3DE731AA9B8B8A0F53061B8E2F803D4_gshared)(___nativeArray0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Directory::GetCurrentDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Directory_GetCurrentDirectory_m5A9D7F3AC59EB9E06BBAC35A0C2DDD757359D8DD (const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.WAVRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_CommitSamples_mDDF186AD064751D28BDDD6714F552B80A230365D (WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9 * __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method);
// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedMemoryStream__ctor_mD2D76EDA084157B12C9DAE25EA3FCCB63E1EC613 (UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62 * __this, uint8_t* ___pointer0, int64_t ___length1, const RuntimeMethod* method);
// System.Void System.IO.Stream::CopyTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_m18CA50971ACBE7880A8F4D0CA5CFA07B55760421 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___destination0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m4BCB9C5EF4286885A640995E44AB52E5F629E3C7 (int64_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39 (int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296 (uint16_t ___value0, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.String System.IO.FileStream::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FileStream_get_Name_mB4501D583A1C35B7DD539CFFD8BA90495D32F769_inline (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.String>(!!0)
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * Task_FromResult_TisString_t_mB2118B0DB57948278B3D179FBE4FE5E1E321B906 (String_t* ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (String_t*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_m5FD118CD21188E7E9BC317D50B8AC800C0C0C591_gshared)(___result0, method);
}
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.Byte>(System.Int32)
inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  AsyncGPUReadbackRequest_GetData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA5D2215016D842E07C2BFC1C268B22D24E9FDDBD (AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  (*) (AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA *, int32_t, const RuntimeMethod*))AsyncGPUReadbackRequest_GetData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA5D2215016D842E07C2BFC1C268B22D24E9FDDBD_gshared)(__this, ___layer0, method);
}
// System.Void System.Action`1<System.Single[]>::Invoke(!0)
inline void Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2 (Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 *, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void NatSuite.Recorders.Inputs.CameraInput/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB60C1DD6666CA3B8A323B6BEFD6A3D4C57E486C4 (U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_depth_m063B48665DB9226949AC3A615362EA20193B823D (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_WhenAll_mA7F77F1CCEF7F07CFDC5F4586FE529E1B4684CBF (RuntimeObject* ___tasks0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_mA91A4FBCB908623BA91DB4B90B0050B75FEDB29E (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_m755734E29471785A88C89FD7976C8CDCB8FB6596_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_MoveNext_mE9EA04BB91FF0212574AB7C200524AF5CDCC1BA0 (U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_SetStateMachine_mFDE7FEE2C75B61C689324EEA90F223C1D89521C4 (U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL NCCreateMP4Recorder(char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL NCCreateHEVCRecorder(char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL NCCreateGIFRecorder(char*, int32_t, int32_t, float, intptr_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL NCRecorderFrameSize(intptr_t, int32_t*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL NCRecorderCommitFrame(intptr_t, void*, int64_t);
IL2CPP_EXTERN_C void DEFAULT_CALL NCRecorderCommitSamples(intptr_t, float*, int32_t, int64_t);
IL2CPP_EXTERN_C void DEFAULT_CALL NCRecorderFinishWriting(intptr_t, Il2CppMethodPointer, void*);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput__ctor_mD92AA2EBA597667937C00836DC801A660D444583 (AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F * __this, RuntimeObject* ___recorder0, const RuntimeMethod* method)
{
	{
		// public AsyncTextureInput (IMediaRecorder recorder) => this.recorder = recorder;
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public AsyncTextureInput (IMediaRecorder recorder) => this.recorder = recorder;
		RuntimeObject* L_0 = ___recorder0;
		__this->set_recorder_0(L_0);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::CommitFrame(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput_CommitFrame_m29E9B2D37ADCEF8049EE8EA88CB24A8D2F7A1B68 (AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mEF1FAEC68584EF35C2298A142A0400462DBAE945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t542D0A6987D7110F66453B06D83AFE1D24208526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m0D0213F3AA01DB46AA9039EBFB8FB9C922B8715C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_3 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76 * L_0 = (U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m396233DC6D9721B4B41AF3636AC435C07F4C1249(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76 * L_2 = V_0;
		int64_t L_3 = ___timestamp1;
		NullCheck(L_2);
		L_2->set_timestamp_1(L_3);
		// var (width, height) = recorder.frameSize;
		RuntimeObject* L_4 = __this->get_recorder_0();
		NullCheck(L_4);
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_5;
		L_5 = InterfaceFuncInvoker0< ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var, L_4);
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_6 = L_5;
		int32_t L_7 = L_6.get_Item1_0();
		V_1 = L_7;
		int32_t L_8 = L_6.get_Item2_1();
		V_2 = L_8;
		// var renderTexture = RenderTexture.GetTemporary(width, height, 24, RenderTextureFormat.ARGB32);
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11;
		L_11 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_9, L_10, ((int32_t)24), 0, /*hidden argument*/NULL);
		V_3 = L_11;
		// Graphics.Blit(texture, renderTexture);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_12 = ___texture0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_12, L_13, /*hidden argument*/NULL);
		// AsyncGPUReadback.Request(renderTexture, 0, request => recorder?.CommitFrame(
		//     NativeArrayUnsafeUtility.GetUnsafeBufferPointerWithoutChecks(request.GetData<byte>()),
		//     timestamp
		// ));
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14 = V_3;
		U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76 * L_15 = V_0;
		Action_1_t542D0A6987D7110F66453B06D83AFE1D24208526 * L_16 = (Action_1_t542D0A6987D7110F66453B06D83AFE1D24208526 *)il2cpp_codegen_object_new(Action_1_t542D0A6987D7110F66453B06D83AFE1D24208526_il2cpp_TypeInfo_var);
		Action_1__ctor_mEF1FAEC68584EF35C2298A142A0400462DBAE945(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m0D0213F3AA01DB46AA9039EBFB8FB9C922B8715C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mEF1FAEC68584EF35C2298A142A0400462DBAE945_RuntimeMethod_var);
		AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA  L_17;
		L_17 = AsyncGPUReadback_Request_mBCCFF2D979AFB96CD73D38C7C3C8F662037ACF42(L_14, 0, L_16, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary(renderTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = V_3;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput_Dispose_m8762F40361067537084CB581421D56EE59DE9983 (AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F * __this, const RuntimeMethod* method)
{
	{
		// public void Dispose () => recorder = null;
		__this->set_recorder_0((RuntimeObject*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,UnityEngine.AudioListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_mB7A0213DCB14C7DDA90BC8FF79CD04119B4730FD (AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1 * __this, RuntimeObject* ___recorder0, AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * ___audioListener1, const RuntimeMethod* method)
{
	{
		// public AudioInput (IMediaRecorder recorder, AudioListener audioListener) : this(recorder, default, audioListener) {}
		RuntimeObject* L_0 = ___recorder0;
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_1 = ___audioListener1;
		AudioInput__ctor_m0D4C7611A7F5883F46C972B14FCA99E8033E9645(__this, L_0, (RuntimeObject*)NULL, L_1, /*hidden argument*/NULL);
		// public AudioInput (IMediaRecorder recorder, AudioListener audioListener) : this(recorder, default, audioListener) {}
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m0D4C7611A7F5883F46C972B14FCA99E8033E9645 (AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * ___audioListener2, const RuntimeMethod* method)
{
	{
		// public AudioInput (IMediaRecorder recorder, IClock clock, AudioListener audioListener) : this(recorder, clock, audioListener.gameObject) {}
		RuntimeObject* L_0 = ___recorder0;
		RuntimeObject* L_1 = ___clock1;
		AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3 * L_2 = ___audioListener2;
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		AudioInput__ctor_mDE38486DC0BD531F77960167435C6F87C23AA99A(__this, L_0, L_1, L_3, (bool)0, /*hidden argument*/NULL);
		// public AudioInput (IMediaRecorder recorder, IClock clock, AudioListener audioListener) : this(recorder, clock, audioListener.gameObject) {}
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,UnityEngine.AudioSource,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m16492C5B3F2BC4C82D6A26EFC04DD7A58CF1951C (AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1 * __this, RuntimeObject* ___recorder0, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource1, bool ___mute2, const RuntimeMethod* method)
{
	{
		// public AudioInput (IMediaRecorder recorder, AudioSource audioSource, bool mute = false) : this(recorder, default, audioSource, mute) {}
		RuntimeObject* L_0 = ___recorder0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = ___audioSource1;
		bool L_2 = ___mute2;
		AudioInput__ctor_mA15D2F8C084409A393FAD724691E4898A912739A(__this, L_0, (RuntimeObject*)NULL, L_1, L_2, /*hidden argument*/NULL);
		// public AudioInput (IMediaRecorder recorder, AudioSource audioSource, bool mute = false) : this(recorder, default, audioSource, mute) {}
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioSource,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_mA15D2F8C084409A393FAD724691E4898A912739A (AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource2, bool ___mute3, const RuntimeMethod* method)
{
	{
		// public AudioInput (IMediaRecorder recorder, IClock clock, AudioSource audioSource, bool mute = false) : this(recorder, clock, audioSource.gameObject, mute) {}
		RuntimeObject* L_0 = ___recorder0;
		RuntimeObject* L_1 = ___clock1;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = ___audioSource2;
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		bool L_4 = ___mute3;
		AudioInput__ctor_mDE38486DC0BD531F77960167435C6F87C23AA99A(__this, L_0, L_1, L_3, L_4, /*hidden argument*/NULL);
		// public AudioInput (IMediaRecorder recorder, IClock clock, AudioSource audioSource, bool mute = false) : this(recorder, clock, audioSource.gameObject, mute) {}
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput_Dispose_mE3A05C53267AB585F5C6D5735EDD7A5A3257BF74 (AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Dispose () => AudioInputAttachment.Destroy(attachment);
		AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49 * L_0 = __this->get_attachment_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_mDE38486DC0BD531F77960167435C6F87C23AA99A (AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject2, bool ___mute3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4E17902B3999F1C79CE5047E1B05625D27BC63D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInput_OnSampleBuffer_mB09983850B2D7A085223A722486FD2DBD2DBC00B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49_m9CC94E57D4EF2CE7A0EE945D708025E870D6F50E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AudioInput (IMediaRecorder recorder, IClock clock, GameObject gameObject, bool mute = false) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.recorder = recorder;
		RuntimeObject* L_0 = ___recorder0;
		__this->set_recorder_0(L_0);
		// this.clock = clock;
		RuntimeObject* L_1 = ___clock1;
		__this->set_clock_1(L_1);
		// this.attachment = gameObject.AddComponent<AudioInputAttachment>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___gameObject2;
		NullCheck(L_2);
		AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49 * L_3;
		L_3 = GameObject_AddComponent_TisAudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49_m9CC94E57D4EF2CE7A0EE945D708025E870D6F50E(L_2, /*hidden argument*/GameObject_AddComponent_TisAudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49_m9CC94E57D4EF2CE7A0EE945D708025E870D6F50E_RuntimeMethod_var);
		__this->set_attachment_2(L_3);
		// this.attachment.sampleBufferDelegate = OnSampleBuffer;
		AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49 * L_4 = __this->get_attachment_2();
		Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * L_5 = (Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 *)il2cpp_codegen_object_new(Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833_il2cpp_TypeInfo_var);
		Action_1__ctor_m4E17902B3999F1C79CE5047E1B05625D27BC63D4(L_5, __this, (intptr_t)((intptr_t)AudioInput_OnSampleBuffer_mB09983850B2D7A085223A722486FD2DBD2DBC00B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4E17902B3999F1C79CE5047E1B05625D27BC63D4_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_sampleBufferDelegate_4(L_5);
		// this.mute = mute;
		bool L_6 = ___mute3;
		__this->set_mute_3(L_6);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::OnSampleBuffer(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput_OnSampleBuffer_mB09983850B2D7A085223A722486FD2DBD2DBC00B (AudioInput_t02DB346C12C79E43F7D4B66F292AAEADCC5362D1 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClock_t1E8B3BDAEDA8E294B95726EEC4578ACB80823AFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	int64_t G_B3_0 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	{
		// AndroidJNI.AttachCurrentThread();
		int32_t L_0;
		L_0 = AndroidJNI_AttachCurrentThread_mB19891A8E6DFF2548BEC09881D3DD282F4A4F83E(/*hidden argument*/NULL);
		// recorder.CommitSamples(data, clock?.timestamp ?? 0L);
		RuntimeObject* L_1 = __this->get_recorder_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___data0;
		RuntimeObject* L_3 = __this->get_clock_1();
		RuntimeObject* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((int64_t)((int64_t)0));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0020;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		int64_t L_5;
		L_5 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 NatSuite.Recorders.Clocks.IClock::get_timestamp() */, IClock_t1E8B3BDAEDA8E294B95726EEC4578ACB80823AFA_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0020:
	{
		NullCheck(G_B3_2);
		InterfaceActionInvoker2< SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, int64_t >::Invoke(3 /* System.Void NatSuite.Recorders.IMediaRecorder::CommitSamples(System.Single[],System.Int64) */, IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var, G_B3_2, G_B3_1, G_B3_0);
		// if (mute)
		bool L_6 = __this->get_mute_3();
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// Array.Clear(data, 0, data.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ___data0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = ___data0;
		NullCheck(L_8);
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_7, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.Internal.Bridge::CreateMP4Recorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateMP4Recorder_m1109BF12617F26A549CEB9EDF6ADEBBA3C5377D9 (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitrate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCCreateMP4Recorder)(____path0_marshaled, ___width1, ___height2, ___frameRate3, ___sampleRate4, ___channelCount5, ___videoBitrate6, ___keyframeInterval7, ___audioBitRate8, ___recorder9);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NatSuite.Recorders.Internal.Bridge::CreateHEVCRecorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateHEVCRecorder_m054181EEAC718F656106A6B02BBCD895E8986CFB (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitRate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCCreateHEVCRecorder)(____path0_marshaled, ___width1, ___height2, ___frameRate3, ___sampleRate4, ___channelCount5, ___videoBitRate6, ___keyframeInterval7, ___audioBitRate8, ___recorder9);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NatSuite.Recorders.Internal.Bridge::CreateGIFRecorder(System.String,System.Int32,System.Int32,System.Single,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CreateGIFRecorder_mB8903960902D0B72CEC62E1FEE1FAA236322205B (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameDuration3, intptr_t* ___recorder4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, intptr_t*);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCCreateGIFRecorder)(____path0_marshaled, ___width1, ___height2, ___frameDuration3, ___recorder4);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NatSuite.Recorders.Internal.Bridge::FrameSize(System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_FrameSize_m27C0900E76A59B9F10A757EDD476149D090487CE (intptr_t ___recorder0, int32_t* ___width1, int32_t* ___height2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*, int32_t*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCRecorderFrameSize)(___recorder0, ___width1, ___height2);

}
// System.Void NatSuite.Recorders.Internal.Bridge::CommitFrame(System.IntPtr,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CommitFrame_m8E0A243112DF1688C358651D77A84C3C21755581 (intptr_t ___recorder0, void* ___pixelBuffer1, int64_t ___timestamp2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, void*, int64_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCRecorderCommitFrame)(___recorder0, ___pixelBuffer1, ___timestamp2);

}
// System.Void NatSuite.Recorders.Internal.Bridge::CommitSamples(System.IntPtr,System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_CommitSamples_m6C27EBEA723B67A553B5ABCD182B8B70015EA410 (intptr_t ___recorder0, float* ___sampleBuffer1, int32_t ___sampleCount2, int64_t ___timestamp3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int64_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCRecorderCommitSamples)(___recorder0, ___sampleBuffer1, ___sampleCount2, ___timestamp3);

}
// System.Void NatSuite.Recorders.Internal.Bridge::FinishWriting(System.IntPtr,NatSuite.Recorders.Internal.Bridge/RecordingHandler,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bridge_FinishWriting_mE6594933D72BD19B6BD43E3696D594C65F9A496F (intptr_t ___recorder0, RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037 * ___callback1, void* ___context2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, void*);

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NCRecorderFinishWriting)(___recorder0, ____callback1_marshaled, ___context2);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NatSuite.Recorders.Inputs.ITextureInput NatSuite.Recorders.Inputs.CameraInput::get_textureInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraInput_get_textureInput_m228963FA929A963CB40FCCECDDE222EB353D1F95 (CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * __this, const RuntimeMethod* method)
{
	{
		// get => input;
		RuntimeObject* L_0 = __this->get_input_6();
		return L_0;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::set_textureInput(NatSuite.Recorders.Inputs.ITextureInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_set_textureInput_m74039882D6DFBB3423100634DF6E13B36ACB8DDF (CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// input?.Dispose(); // Save user the trouble
		RuntimeObject* L_0 = __this->get_input_6();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0011:
	{
		// input = value;
		RuntimeObject* L_2 = ___value0;
		__this->set_input_6(L_2);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.IMediaRecorder,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_m5222DB24A5154A0C233B50E20BB8E3EB319A275B (CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * __this, RuntimeObject* ___recorder0, CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* ___cameras1, const RuntimeMethod* method)
{
	{
		// public CameraInput (IMediaRecorder recorder, params Camera[] cameras) : this(recorder, default, cameras) { }
		RuntimeObject* L_0 = ___recorder0;
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_1 = ___cameras1;
		CameraInput__ctor_m8600909C80F01FCF8E159C1581C36AFF45EB47D0(__this, L_0, (RuntimeObject*)NULL, L_1, /*hidden argument*/NULL);
		// public CameraInput (IMediaRecorder recorder, params Camera[] cameras) : this(recorder, default, cameras) { }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_m8600909C80F01FCF8E159C1581C36AFF45EB47D0 (CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* ___cameras2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m6307405A40E1C9D7DBDD41D680326E919C12201E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInput_CommitFrame_m5404616B8BB6625391E71DCD144BAEBF5E89C30F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_mF0B282D79D77EA57E8ACBDFB72AAF8BB80FD78D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B_mECB58EFD603B64F5904A5A187E68DA45132370CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__5_0_m8AB1A36FB5EECEA59D93E3F78A611EF28F85A8FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral397D9AACB9455AB34FC59D3578E8E5FDCBA6AB9D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * G_B2_0 = NULL;
	CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* G_B2_1 = NULL;
	Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * G_B1_0 = NULL;
	CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* G_B1_1 = NULL;
	CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * G_B4_0 = NULL;
	CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * G_B3_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * G_B5_1 = NULL;
	{
		// public CameraInput (IMediaRecorder recorder, IClock clock, params Camera[] cameras) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Array.Sort(cameras, (a, b) => (int)(100 * (a.depth - b.depth)));
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_0 = ___cameras2;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_il2cpp_TypeInfo_var);
		Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * L_1 = ((U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_il2cpp_TypeInfo_var))->get_U3CU3E9__5_0_1();
		Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_il2cpp_TypeInfo_var);
		U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176 * L_3 = ((U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * L_4 = (Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 *)il2cpp_codegen_object_new(Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15_il2cpp_TypeInfo_var);
		Comparison_1__ctor_mF0B282D79D77EA57E8ACBDFB72AAF8BB80FD78D7(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__5_0_m8AB1A36FB5EECEA59D93E3F78A611EF28F85A8FF_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_mF0B282D79D77EA57E8ACBDFB72AAF8BB80FD78D7_RuntimeMethod_var);
		Comparison_1_t56DA2BF5E200CD0955B14F85C5669DD0B3F17E15 * L_5 = L_4;
		((U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_il2cpp_TypeInfo_var))->set_U3CU3E9__5_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		Array_Sort_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m6307405A40E1C9D7DBDD41D680326E919C12201E(G_B2_1, G_B2_0, /*hidden argument*/Array_Sort_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m6307405A40E1C9D7DBDD41D680326E919C12201E_RuntimeMethod_var);
		// var (width, height) = recorder.frameSize;
		RuntimeObject* L_6 = ___recorder0;
		NullCheck(L_6);
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_7;
		L_7 = InterfaceFuncInvoker0< ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var, L_6);
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_8 = L_7;
		int32_t L_9 = L_8.get_Item1_0();
		V_0 = L_9;
		int32_t L_10 = L_8.get_Item2_1();
		V_1 = L_10;
		// this.recorder = recorder;
		RuntimeObject* L_11 = ___recorder0;
		__this->set_recorder_1(L_11);
		// this.clock = clock;
		RuntimeObject* L_12 = ___clock1;
		__this->set_clock_2(L_12);
		// this.cameras = cameras;
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_13 = ___cameras2;
		__this->set_cameras_3(L_13);
		// this.frameDescriptor = new RenderTextureDescriptor(width, height, RenderTextureFormat.ARGB32, 24);
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_16;
		memset((&L_16), 0, sizeof(L_16));
		RenderTextureDescriptor__ctor_mB0D252CE93C0E10D01FD10C5C454B0645A16BEE3((&L_16), L_14, L_15, 0, ((int32_t)24), /*hidden argument*/NULL);
		__this->set_frameDescriptor_4(L_16);
		// this.input = SystemInfo.supportsAsyncGPUReadback ? (ITextureInput)new AsyncTextureInput(recorder) : new TextureInput(recorder);
		bool L_17;
		L_17 = SystemInfo_get_supportsAsyncGPUReadback_mC4DFC36451A1739A0DDA4614E434657CE6B196DF(/*hidden argument*/NULL);
		G_B3_0 = __this;
		if (L_17)
		{
			G_B4_0 = __this;
			goto IL_0075;
		}
	}
	{
		RuntimeObject* L_18 = ___recorder0;
		TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0 * L_19 = (TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0 *)il2cpp_codegen_object_new(TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0_il2cpp_TypeInfo_var);
		TextureInput__ctor_m4AF130169710FCB9F4D15650183A9E5A0FA9E0B2(L_19, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		RuntimeObject* L_20 = V_2;
		G_B5_0 = L_20;
		G_B5_1 = G_B3_0;
		goto IL_007d;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___recorder0;
		AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F * L_22 = (AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F *)il2cpp_codegen_object_new(AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F_il2cpp_TypeInfo_var);
		AsyncTextureInput__ctor_mD92AA2EBA597667937C00836DC801A660D444583(L_22, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		RuntimeObject* L_23 = V_2;
		G_B5_0 = L_23;
		G_B5_1 = G_B4_0;
	}

IL_007d:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_input_6(G_B5_0);
		// frameDescriptor.sRGB = true;
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_24 = __this->get_address_of_frameDescriptor_4();
		RenderTextureDescriptor_set_sRGB_m92925430C9C202528AA56DC9E01FCD382FCEB1D2((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_24, (bool)1, /*hidden argument*/NULL);
		// frameDescriptor.msaaSamples = Mathf.Max(QualitySettings.antiAliasing, 1);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * L_25 = __this->get_address_of_frameDescriptor_4();
		int32_t L_26;
		L_26 = QualitySettings_get_antiAliasing_m47FE4122D4F9CD25E8B605525E2E35C37FA34918(/*hidden argument*/NULL);
		int32_t L_27;
		L_27 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_26, 1, /*hidden argument*/NULL);
		RenderTextureDescriptor_set_msaaSamples_m84320452D8BF3A8DD5662F6229FE666C299B5AEF_inline((RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 *)L_25, L_27, /*hidden argument*/NULL);
		// attachment = new GameObject("NatCorder CameraInputAttachment").AddComponent<CameraInputAttachment>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_28, _stringLiteral397D9AACB9455AB34FC59D3578E8E5FDCBA6AB9D, /*hidden argument*/NULL);
		NullCheck(L_28);
		CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B * L_29;
		L_29 = GameObject_AddComponent_TisCameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B_mECB58EFD603B64F5904A5A187E68DA45132370CD(L_28, /*hidden argument*/GameObject_AddComponent_TisCameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B_mECB58EFD603B64F5904A5A187E68DA45132370CD_RuntimeMethod_var);
		__this->set_attachment_5(L_29);
		// attachment.handler = CommitFrame;
		CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B * L_30 = __this->get_attachment_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_31 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_31, __this, (intptr_t)((intptr_t)CameraInput_CommitFrame_m5404616B8BB6625391E71DCD144BAEBF5E89C30F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_30);
		L_30->set_handler_4(L_31);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_Dispose_m9F42E76F1BE79C4963D98DA650EE4C13AEFAF614 (CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Destroy(attachment.gameObject);
		CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B * L_0 = __this->get_attachment_5();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// textureInput = null; // Auto-dispose
		CameraInput_set_textureInput_m74039882D6DFBB3423100634DF6E13B36ACB8DDF(__this, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::CommitFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_CommitFrame_m5404616B8BB6625391E71DCD144BAEBF5E89C30F (CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClock_t1E8B3BDAEDA8E294B95726EEC4578ACB80823AFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureInput_t42E3AD79C482FFE67671BADD9B29C35A180B452E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B9_1 = NULL;
	RuntimeObject* G_B9_2 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B8_1 = NULL;
	RuntimeObject* G_B8_2 = NULL;
	int64_t G_B10_0 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B10_1 = NULL;
	RuntimeObject* G_B10_2 = NULL;
	{
		// if (frameCount++ % (frameSkip + 1) != 0)
		int32_t L_0 = __this->get_frameCount_7();
		V_1 = L_0;
		int32_t L_1 = V_1;
		__this->set_frameCount_7(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->get_frameSkip_0();
		if (!((int32_t)((int32_t)L_2%(int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)))))
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// var frameBuffer = RenderTexture.GetTemporary(frameDescriptor);
		RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_4 = __this->get_frameDescriptor_4();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5;
		L_5 = RenderTexture_GetTemporary_m7997BAA9A1DFE4D9D1B9F5047ECEE8464835B8DF(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// for (var i = 0; i < cameras.Length; i++)
		V_2 = 0;
		goto IL_0040;
	}

IL_002d:
	{
		// CommitFrame(cameras[i], frameBuffer);
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_6 = __this->get_cameras_3();
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = V_0;
		VirtActionInvoker2< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * >::Invoke(5 /* System.Void NatSuite.Recorders.Inputs.CameraInput::CommitFrame(UnityEngine.Camera,UnityEngine.RenderTexture) */, __this, L_9, L_10);
		// for (var i = 0; i < cameras.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0040:
	{
		// for (var i = 0; i < cameras.Length; i++)
		int32_t L_12 = V_2;
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_13 = __this->get_cameras_3();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_002d;
		}
	}
	{
		// input?.CommitFrame(frameBuffer, clock?.timestamp ?? 0L);
		RuntimeObject* L_14 = __this->get_input_6();
		RuntimeObject* L_15 = L_14;
		G_B6_0 = L_15;
		if (L_15)
		{
			G_B7_0 = L_15;
			goto IL_0057;
		}
	}
	{
		goto IL_0070;
	}

IL_0057:
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = V_0;
		RuntimeObject* L_17 = __this->get_clock_2();
		RuntimeObject* L_18 = L_17;
		G_B8_0 = L_18;
		G_B8_1 = L_16;
		G_B8_2 = G_B7_0;
		if (L_18)
		{
			G_B9_0 = L_18;
			G_B9_1 = L_16;
			G_B9_2 = G_B7_0;
			goto IL_0066;
		}
	}
	{
		G_B10_0 = ((int64_t)((int64_t)0));
		G_B10_1 = G_B8_1;
		G_B10_2 = G_B8_2;
		goto IL_006b;
	}

IL_0066:
	{
		NullCheck(G_B9_0);
		int64_t L_19;
		L_19 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 NatSuite.Recorders.Clocks.IClock::get_timestamp() */, IClock_t1E8B3BDAEDA8E294B95726EEC4578ACB80823AFA_il2cpp_TypeInfo_var, G_B9_0);
		G_B10_0 = L_19;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_006b:
	{
		NullCheck(G_B10_2);
		InterfaceActionInvoker2< Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *, int64_t >::Invoke(0 /* System.Void NatSuite.Recorders.Inputs.ITextureInput::CommitFrame(UnityEngine.Texture,System.Int64) */, ITextureInput_t42E3AD79C482FFE67671BADD9B29C35A180B452E_il2cpp_TypeInfo_var, G_B10_2, G_B10_1, G_B10_0);
	}

IL_0070:
	{
		// RenderTexture.ReleaseTemporary(frameBuffer);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_20 = V_0;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::CommitFrame(UnityEngine.Camera,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_CommitFrame_m8B6E62EC0CA8D4529EB9184508DB85D5E96CB418 (CameraInput_tE7FB198AFAD69DB7386C9FFA2C291866B64C1B21 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	{
		// var prevTarget = source.targetTexture;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___source0;
		NullCheck(L_0);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1;
		L_1 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// source.targetTexture = destination;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___destination1;
		NullCheck(L_2);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_2, L_3, /*hidden argument*/NULL);
		// source.Render();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = ___source0;
		NullCheck(L_4);
		Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61(L_4, /*hidden argument*/NULL);
		// source.targetTexture = prevTarget;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6 = V_0;
		NullCheck(L_5);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mFB12D2A20254F052E510CD126CE2BFEBE033FFE5 (EmbeddedAttribute_t68499F9E6BB87044673DE398BBF6AEF711B3E5C9 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 NatSuite.Recorders.Clocks.FixedIntervalClock::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FixedIntervalClock_get_timestamp_m30D76C14434DADACB9C83B6F6DC871CCED3D678E (FixedIntervalClock_t4835E448C6ED13FB0A8026A5D40A47F2EEC5AD04 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t G_B3_0 = 0;
	{
		// get => (long)((autoTick ? ticks++ : ticks) * interval * 1e+9);
		bool L_0 = __this->get_autoTick_1();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int64_t L_1 = __this->get_ticks_2();
		G_B3_0 = L_1;
		goto IL_0022;
	}

IL_0010:
	{
		int64_t L_2 = __this->get_ticks_2();
		V_0 = L_2;
		int64_t L_3 = V_0;
		__this->set_ticks_2(((int64_t)il2cpp_codegen_add((int64_t)L_3, (int64_t)((int64_t)((int64_t)1)))));
		int64_t L_4 = V_0;
		G_B3_0 = L_4;
	}

IL_0022:
	{
		double L_5 = __this->get_interval_0();
		return ((int64_t)((int64_t)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)((double)G_B3_0)), (double)L_5)), (double)(1000000000.0)))));
	}
}
// System.Void NatSuite.Recorders.Clocks.FixedIntervalClock::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedIntervalClock__ctor_m5D3A9F29216071AAB3FE98133B823F3F78B3D949 (FixedIntervalClock_t4835E448C6ED13FB0A8026A5D40A47F2EEC5AD04 * __this, float ___framerate0, bool ___autoTick1, const RuntimeMethod* method)
{
	{
		// public FixedIntervalClock (float framerate, bool autoTick = true) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.interval = 1.0 / framerate;
		float L_0 = ___framerate0;
		__this->set_interval_0(((double)((double)(1.0)/(double)((double)((double)L_0)))));
		// this.ticks = 0L;
		__this->set_ticks_2(((int64_t)((int64_t)0)));
		// this.autoTick = autoTick;
		bool L_1 = ___autoTick1;
		__this->set_autoTick_1(L_1);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Clocks.FixedIntervalClock::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedIntervalClock_Tick_mD44879CEAB99938BF156A25D4C4EA435D8A1CC98 (FixedIntervalClock_t4835E448C6ED13FB0A8026A5D40A47F2EEC5AD04 * __this, const RuntimeMethod* method)
{
	{
		// public void Tick () => ticks++;
		int64_t L_0 = __this->get_ticks_2();
		__this->set_ticks_2(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)((int64_t)1)))));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.GIFRecorder::.ctor(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder__ctor_mF8ECFA812D96CE8F4E7F2807588D4F7414A182C6 (GIFRecorder_t910CCC3CC9CF3DD44AF14E6CFFF871B165265E81 * __this, int32_t ___width0, int32_t ___height1, float ___frameDuration2, const RuntimeMethod* method)
{
	{
		// public GIFRecorder (int width, int height, float frameDuration) : base(Create(width, height, frameDuration)) { }
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		float L_2 = ___frameDuration2;
		intptr_t L_3;
		L_3 = GIFRecorder_Create_m03826B9C31EDE4659CB7D37E9DB0B247ECF9E4BE(L_0, L_1, L_2, /*hidden argument*/NULL);
		NativeRecorder__ctor_m7B446D1985312C8F3CCA04A0073E624D69601B74(__this, (intptr_t)L_3, /*hidden argument*/NULL);
		// public GIFRecorder (int width, int height, float frameDuration) : base(Create(width, height, frameDuration)) { }
		return;
	}
}
// System.Void NatSuite.Recorders.GIFRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder_CommitFrame_mC0CEDCFBE3B55BA29CFE5A54D5B27E219C9BF25B (GIFRecorder_t910CCC3CC9CF3DD44AF14E6CFFF871B165265E81 * __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	{
		// public override unsafe void CommitFrame (void* nativeBuffer, long timestamp = default) => base.CommitFrame(nativeBuffer, timestamp);
		void* L_0 = ___nativeBuffer0;
		int64_t L_1 = ___timestamp1;
		NativeRecorder_CommitFrame_m109F48739E95FAEFE7193C68616567885F59270E(__this, (void*)(void*)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.GIFRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder_CommitSamples_mBD758AFE7681A7194D87C12DE966C4F2E108DB72 (GIFRecorder_t910CCC3CC9CF3DD44AF14E6CFFF871B165265E81 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	{
		// public override void CommitSamples (float[] sampleBuffer, long timestamp) => base.CommitSamples(sampleBuffer, timestamp);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___sampleBuffer0;
		int64_t L_1 = ___timestamp1;
		NativeRecorder_CommitSamples_m53A1B695E729F6D31C27E47909B4C827A7E8871B(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.GIFRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder_CommitSamples_mDD53F3457BAA70DF65EE9CC6F2CE1E495B622116 (GIFRecorder_t910CCC3CC9CF3DD44AF14E6CFFF871B165265E81 * __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method)
{
	{
		// public override unsafe void CommitSamples (float* nativeBuffer, int sampleCount, long timestamp) => base.CommitSamples(nativeBuffer, sampleCount, timestamp);
		float* L_0 = ___nativeBuffer0;
		int32_t L_1 = ___sampleCount1;
		int64_t L_2 = ___timestamp2;
		NativeRecorder_CommitSamples_mC9BC36F949552FB9AB96392CAF9666F4AE8EF89C(__this, (float*)(float*)L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr NatSuite.Recorders.GIFRecorder::Create(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GIFRecorder_Create_m03826B9C31EDE4659CB7D37E9DB0B247ECF9E4BE (int32_t ___width0, int32_t ___height1, float ___frameDuration2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var path = Utility.GetPath(@".gif");
		String_t* L_0;
		L_0 = Utility_GetPath_m8133CD602BFCD516B14D7098C8E9A554415511C2(_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D, /*hidden argument*/NULL);
		// Bridge.CreateGIFRecorder(path, width, height, frameDuration, out var recorder);
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		float L_3 = ___frameDuration2;
		Bridge_CreateGIFRecorder_mB8903960902D0B72CEC62E1FEE1FAA236322205B(L_0, L_1, L_2, L_3, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		// return recorder;
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.HEVCRecorder::.ctor(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HEVCRecorder__ctor_m13FD9311173A8616E9A8C00E9D6A858BF54CEF5D (HEVCRecorder_tB035CD31D12524922E6D381C82CD99B91FB933FB * __this, int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method)
{
	{
		// ) : base(Create(width, height, frameRate, sampleRate, channelCount, videoBitRate, keyframeInterval, audioBitRate)) { }
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		float L_2 = ___frameRate2;
		int32_t L_3 = ___sampleRate3;
		int32_t L_4 = ___channelCount4;
		int32_t L_5 = ___videoBitRate5;
		int32_t L_6 = ___keyframeInterval6;
		int32_t L_7 = ___audioBitRate7;
		intptr_t L_8;
		L_8 = HEVCRecorder_Create_m562C066F8ADC412FCB57434A6348B5118AFE30E4(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		NativeRecorder__ctor_m7B446D1985312C8F3CCA04A0073E624D69601B74(__this, (intptr_t)L_8, /*hidden argument*/NULL);
		// ) : base(Create(width, height, frameRate, sampleRate, channelCount, videoBitRate, keyframeInterval, audioBitRate)) { }
		return;
	}
}
// System.IntPtr NatSuite.Recorders.HEVCRecorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HEVCRecorder_Create_m562C066F8ADC412FCB57434A6348B5118AFE30E4 (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var path = Utility.GetPath(@".mp4");
		String_t* L_0;
		L_0 = Utility_GetPath_m8133CD602BFCD516B14D7098C8E9A554415511C2(_stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208, /*hidden argument*/NULL);
		// Bridge.CreateHEVCRecorder(path, width, height, frameRate, sampleRate, channelCount, videoBitRate, keyframeInterval, audioBitRate, out var recorder);
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		float L_3 = ___frameRate2;
		int32_t L_4 = ___sampleRate3;
		int32_t L_5 = ___channelCount4;
		int32_t L_6 = ___videoBitRate5;
		int32_t L_7 = ___keyframeInterval6;
		int32_t L_8 = ___audioBitRate7;
		Bridge_CreateHEVCRecorder_m054181EEAC718F656106A6B02BBCD895E8986CFB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		// return recorder;
		intptr_t L_9 = V_0;
		return (intptr_t)L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m9713B3EBFD6F262735385F7AFE564F40163EEDA2 (IsUnmanagedAttribute_t4AE2B1D0B72A823A08C82C417C0E16A33EB03B61 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.JPGRecorder::get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  JPGRecorder_get_frameSize_m2FCDB6324A2BD6B54037B2CB078152B72CDEE52C (JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public (int width, int height) frameSize => (frameBuffer.width, frameBuffer.height);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_frameBuffer_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = __this->get_frameBuffer_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18((&L_4), L_1, L_3, /*hidden argument*/ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder__ctor_m84CC03F8F21E891EAE5F99301F86619755DD0060 (JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JPGRecorder (int width, int height) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.frameBuffer = new Texture2D(width, height, TextureFormat.RGBA32, false, false);
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3(L_2, L_0, L_1, 4, (bool)0, (bool)0, /*hidden argument*/NULL);
		__this->set_frameBuffer_0(L_2);
		// this.writeTasks = new List<Task>();
		List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * L_3 = (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB *)il2cpp_codegen_object_new(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_il2cpp_TypeInfo_var);
		List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85(L_3, /*hidden argument*/List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85_RuntimeMethod_var);
		__this->set_writeTasks_2(L_3);
		// this.recordingPath = Utility.GetPath(string.Empty);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		String_t* L_5;
		L_5 = Utility_GetPath_m8133CD602BFCD516B14D7098C8E9A554415511C2(L_4, /*hidden argument*/NULL);
		__this->set_recordingPath_1(L_5);
		// Directory.CreateDirectory(recordingPath);
		String_t* L_6 = __this->get_recordingPath_1();
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_7;
		L_7 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder_CommitFrame_m8CA9DD5C192BB22E2B9292964FE7406EE1FC6B73 (JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CCommitFrameU3Eb__0_m570218D4030DD850B9E5B5DA206620C4947A5D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB * L_0 = (U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m16F3F13E5885831AF6C516B310326258B5E42353(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		// frameBuffer.LoadRawTextureData((IntPtr)nativeBuffer, frameBuffer.width * frameBuffer.height * 4);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = __this->get_frameBuffer_0();
		void* L_3 = ___nativeBuffer0;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_3, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = __this->get_frameBuffer_0();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = __this->get_frameBuffer_0();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		NullCheck(L_2);
		Texture2D_LoadRawTextureData_mC98EE7575456ACE2E7C3B4CDC1CE0A34FA22B24E(L_2, (intptr_t)L_4, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_8)), (int32_t)4)), /*hidden argument*/NULL);
		// var frameData = ImageConversion.EncodeToJPG(frameBuffer);
		U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB * L_9 = L_1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = __this->get_frameBuffer_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = ImageConversion_EncodeToJPG_m75581ECC85FF41720A0CCB7602EF6E1D037C909F(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_frameData_2(L_11);
		// var frameIndex = ++frameCount;
		U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB * L_12 = L_9;
		int32_t L_13 = __this->get_frameCount_3();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_1;
		__this->set_frameCount_3(L_14);
		int32_t L_15 = V_1;
		NullCheck(L_12);
		L_12->set_frameIndex_1(L_15);
		// var task = Task.Run(() => File.WriteAllBytes(Path.Combine(recordingPath, $"{frameIndex}.jpg"), frameData));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_16, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CCommitFrameU3Eb__0_m570218D4030DD850B9E5B5DA206620C4947A5D06_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_17;
		L_17 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// writeTasks.Add(task);
		List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * L_18 = __this->get_writeTasks_2();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_19 = V_0;
		NullCheck(L_18);
		List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514(L_18, L_19, /*hidden argument*/List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::NatSuite.Recorders.IMediaRecorder.CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder_NatSuite_Recorders_IMediaRecorder_CommitSamples_mE07C748DFD1B29D61BC76335C4C20E5E39BADB99 (JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5AFEDBA9A699B056BA293F7275384300FA0D71F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void IMediaRecorder.CommitSamples (float[] sampleBuffer, long timestamp) => Debug.LogError("NatCorder Error: JPGRecorder does not support committing audio samples");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralC5AFEDBA9A699B056BA293F7275384300FA0D71F, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::NatSuite.Recorders.IMediaRecorder.CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder_NatSuite_Recorders_IMediaRecorder_CommitSamples_mE85706088407F2A905C4521CDC9A5A326B21F162 (JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * __this, float* ___sampleBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5AFEDBA9A699B056BA293F7275384300FA0D71F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unsafe void IMediaRecorder.CommitSamples (float* sampleBuffer, int sampleCount, long timestamp) => Debug.LogError("NatCorder Error: JPGRecorder does not support committing audio samples");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralC5AFEDBA9A699B056BA293F7275384300FA0D71F, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> NatSuite.Recorders.JPGRecorder::FinishWriting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * JPGRecorder_FinishWriting_mF9C0CA0EAEF3BA608BD5A66A81F35BC321F3AF6F (JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m89E946627D100E2FB4035599C40DA130BAB3F97F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_m0BE5F817692DC9E7EF8BED26CF99890D215B6668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mCB63CB31B1603243888A985C348A8E14CECF91D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m89E946627D100E2FB4035599C40DA130BAB3F97F(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m89E946627D100E2FB4035599C40DA130BAB3F97F_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60  L_1 = V_0;
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_m0BE5F817692DC9E7EF8BED26CF99890D215B6668((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)(&V_1), (U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_m0BE5F817692DC9E7EF8BED26CF99890D215B6668_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mCB63CB31B1603243888A985C348A8E14CECF91D1((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_mCB63CB31B1603243888A985C348A8E14CECF91D1_RuntimeMethod_var);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.MP4Recorder::.ctor(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MP4Recorder__ctor_m61018D196B49F5B457F22EA775DC048BBC97A816 (MP4Recorder_t5E2F726405B2E8047FC549901FFA03374FF3BEC2 * __this, int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method)
{
	{
		// ) : base(Create(width, height, frameRate, sampleRate, channelCount, videoBitRate, keyframeInterval, audioBitRate)) { }
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		float L_2 = ___frameRate2;
		int32_t L_3 = ___sampleRate3;
		int32_t L_4 = ___channelCount4;
		int32_t L_5 = ___videoBitRate5;
		int32_t L_6 = ___keyframeInterval6;
		int32_t L_7 = ___audioBitRate7;
		intptr_t L_8;
		L_8 = MP4Recorder_Create_mB04516F59E5A8588FBE64163801DC2682409C978(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		NativeRecorder__ctor_m7B446D1985312C8F3CCA04A0073E624D69601B74(__this, (intptr_t)L_8, /*hidden argument*/NULL);
		// ) : base(Create(width, height, frameRate, sampleRate, channelCount, videoBitRate, keyframeInterval, audioBitRate)) { }
		return;
	}
}
// System.IntPtr NatSuite.Recorders.MP4Recorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MP4Recorder_Create_mB04516F59E5A8588FBE64163801DC2682409C978 (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var path = Utility.GetPath(@".mp4");
		String_t* L_0;
		L_0 = Utility_GetPath_m8133CD602BFCD516B14D7098C8E9A554415511C2(_stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208, /*hidden argument*/NULL);
		// Bridge.CreateMP4Recorder(path, width, height, frameRate, sampleRate, channelCount, videoBitRate, keyframeInterval, audioBitRate, out var recorder);
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		float L_3 = ___frameRate2;
		int32_t L_4 = ___sampleRate3;
		int32_t L_5 = ___channelCount4;
		int32_t L_6 = ___videoBitRate5;
		int32_t L_7 = ___keyframeInterval6;
		int32_t L_8 = ___audioBitRate7;
		Bridge_CreateMP4Recorder_m1109BF12617F26A549CEB9EDF6ADEBBA3C5377D9(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		// return recorder;
		intptr_t L_9 = V_0;
		return (intptr_t)L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeRecorder_OnRecording_m894BFA1BF582396474B99CD6B6DD7DCE9821D88F(void* ___context0, Il2CppChar* ___path1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	NativeRecorder_OnRecording_m894BFA1BF582396474B99CD6B6DD7DCE9821D88F(___context0, ___path1, NULL);

}
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Internal.NativeRecorder::get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  NativeRecorder_get_frameSize_mD4AF0C143BC87C8DBAE2A8D8BA521F1AA7306517 (NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// recorder.FrameSize(out var width, out var height);
		intptr_t L_0 = __this->get_recorder_0();
		Bridge_FrameSize_m27C0900E76A59B9F10A757EDD476149D090487CE((intptr_t)L_0, (int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		// return (width, height);
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18((&L_3), L_1, L_2, /*hidden argument*/ValueTuple_2__ctor_m01A747E4A6FE57A5A246C4803561DE7644B51B18_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitFrame_m109F48739E95FAEFE7193C68616567885F59270E (NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6 * __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	{
		// public virtual unsafe void CommitFrame (void* nativeBuffer, long timestamp) => recorder.CommitFrame(nativeBuffer, timestamp);
		intptr_t L_0 = __this->get_recorder_0();
		void* L_1 = ___nativeBuffer0;
		int64_t L_2 = ___timestamp1;
		Bridge_CommitFrame_m8E0A243112DF1688C358651D77A84C3C21755581((intptr_t)L_0, (void*)(void*)L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_m53A1B695E729F6D31C27E47909B4C827A7E8871B (NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	float* V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	{
		// fixed (float* baseAddress = sampleBuffer)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___sampleBuffer0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (float*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (float*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// CommitSamples(baseAddress, sampleBuffer.Length, timestamp);
		float* L_4 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = ___sampleBuffer0;
		NullCheck(L_5);
		int64_t L_6 = ___timestamp1;
		VirtActionInvoker3< float*, int32_t, int64_t >::Invoke(14 /* System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single*,System.Int32,System.Int64) */, __this, (float*)(float*)L_4, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), L_6);
		V_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL;
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_mC9BC36F949552FB9AB96392CAF9666F4AE8EF89C (NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6 * __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method)
{
	{
		// public virtual unsafe void CommitSamples (float* nativeBuffer, int sampleCount, long timestamp) => recorder.CommitSamples(nativeBuffer, sampleCount, timestamp);
		intptr_t L_0 = __this->get_recorder_0();
		float* L_1 = ___nativeBuffer0;
		int32_t L_2 = ___sampleCount1;
		int64_t L_3 = ___timestamp2;
		Bridge_CommitSamples_m6C27EBEA723B67A553B5ABCD182B8B70015EA410((intptr_t)L_0, (float*)(float*)L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> NatSuite.Recorders.Internal.NativeRecorder::FinishWriting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * NativeRecorder_FinishWriting_m78E8CC773A1DE393E7B8442C20B9EEA86379AEC5 (NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRecorder_OnRecording_m894BFA1BF582396474B99CD6B6DD7DCE9821D88F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var recordingTask = new TaskCompletionSource<string>();
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_0 = (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056(L_0, /*hidden argument*/TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056_RuntimeMethod_var);
		// var handle = GCHandle.Alloc(recordingTask, GCHandleType.Normal);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_1 = L_0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_2;
		L_2 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC(L_1, 2, /*hidden argument*/NULL);
		V_0 = L_2;
		// recorder.FinishWriting(OnRecording, (void*)(IntPtr)handle);
		intptr_t L_3 = __this->get_recorder_0();
		RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037 * L_4 = (RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037 *)il2cpp_codegen_object_new(RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037_il2cpp_TypeInfo_var);
		RecordingHandler__ctor_m87C8FCE4B83E8E166597B966BEE654F2520696A0(L_4, NULL, (intptr_t)((intptr_t)NativeRecorder_OnRecording_m894BFA1BF582396474B99CD6B6DD7DCE9821D88F_RuntimeMethod_var), /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_5 = V_0;
		intptr_t L_6;
		L_6 = GCHandle_op_Explicit_m0A74179B3DD6D87F0863EF55176F924D641E42BF(L_5, /*hidden argument*/NULL);
		void* L_7;
		L_7 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_6, /*hidden argument*/NULL);
		Bridge_FinishWriting_mE6594933D72BD19B6BD43E3696D594C65F9A496F((intptr_t)L_3, L_4, (void*)(void*)L_7, /*hidden argument*/NULL);
		// return recordingTask.Task;
		NullCheck(L_1);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_8;
		L_8 = TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_inline(L_1, /*hidden argument*/TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder__ctor_m7B446D1985312C8F3CCA04A0073E624D69601B74 (NativeRecorder_t8ECE0FAA450E8E933623CDDE562FE5D329431CB6 * __this, intptr_t ___recorder0, const RuntimeMethod* method)
{
	{
		// protected NativeRecorder (IntPtr recorder) => this.recorder = recorder;
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// protected NativeRecorder (IntPtr recorder) => this.recorder = recorder;
		intptr_t L_0 = ___recorder0;
		__this->set_recorder_0((intptr_t)L_0);
		return;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::OnRecording(System.Void*,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_OnRecording_m894BFA1BF582396474B99CD6B6DD7DCE9821D88F (void* ___context0, Il2CppChar* ___path1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3075439B58FA1A3D533126E22DDA6E472F44E475);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * V_1 = NULL;
	{
		// var handle = (GCHandle)(IntPtr)context;
		void* L_0 = ___context0;
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_0, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_2;
		L_2 = GCHandle_op_Explicit_mD2A800A063FDBDAB31CD7EC97DD63A896A3568A6((intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var recordingTask = handle.Target as TaskCompletionSource<string>;
		RuntimeObject * L_3;
		L_3 = GCHandle_get_Target_m6C296AD6520ECDAFC9498E9387677F522871F883((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *)IsInstClass((RuntimeObject*)L_3, TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1_il2cpp_TypeInfo_var));
		// handle.Free();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		// if (path != null)
		Il2CppChar* L_4 = ___path1;
		if ((((intptr_t)L_4) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0037;
		}
	}
	{
		// recordingTask.SetResult(Marshal.PtrToStringAnsi((IntPtr)path));
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_5 = V_1;
		Il2CppChar* L_6 = ___path1;
		intptr_t L_7;
		L_7 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201(L_5, L_8, /*hidden argument*/TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var);
		return;
	}

IL_0037:
	{
		// recordingTask.SetException(new Exception(@"Recorder failed to finish writing"));
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_9 = V_1;
		Exception_t * L_10 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_10, _stringLiteral3075439B58FA1A3D533126E22DDA6E472F44E475, /*hidden argument*/NULL);
		NullCheck(L_9);
		TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 NatSuite.Recorders.Clocks.RealtimeClock::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RealtimeClock_get_timestamp_m01B7F3CAA3199114724D4D051ABAC383C4FAC93E (RealtimeClock_t979065F3CA6558447B46091C3F416CCF7E3F385E * __this, const RuntimeMethod* method)
{
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t G_B2_0 = 0;
	int64_t G_B1_0 = 0;
	{
		// var time = stopwatch.Elapsed.Ticks * 100L;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = __this->get_stopwatch_0();
		NullCheck(L_0);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1;
		L_1 = Stopwatch_get_Elapsed_m75C9FF87F9007FC8738B722002A8F8C302F5CFA6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int64_t L_2;
		L_2 = TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		// if (!stopwatch.IsRunning)
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = __this->get_stopwatch_0();
		NullCheck(L_3);
		bool L_4;
		L_4 = Stopwatch_get_IsRunning_m953BE51FFEF66BFB8734F5AB1AC99E7DD28CCBBC_inline(L_3, /*hidden argument*/NULL);
		G_B1_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)((int64_t)((int64_t)((int32_t)100)))));
		if (L_4)
		{
			G_B2_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)((int64_t)((int64_t)((int32_t)100)))));
			goto IL_002f;
		}
	}
	{
		// stopwatch.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_5 = __this->get_stopwatch_0();
		NullCheck(L_5);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_5, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_002f:
	{
		// return time;
		return G_B2_0;
	}
}
// System.Boolean NatSuite.Recorders.Clocks.RealtimeClock::get_paused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealtimeClock_get_paused_m072AAE0354E35391078C75CF5E1288D057B9A17F (RealtimeClock_t979065F3CA6558447B46091C3F416CCF7E3F385E * __this, const RuntimeMethod* method)
{
	{
		// [MethodImpl(MethodImplOptions.Synchronized)] get => !stopwatch.IsRunning;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = __this->get_stopwatch_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = Stopwatch_get_IsRunning_m953BE51FFEF66BFB8734F5AB1AC99E7DD28CCBBC_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void NatSuite.Recorders.Clocks.RealtimeClock::set_paused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealtimeClock_set_paused_mC2D5E0AFDCA63009FA8321CFFF7DADEA865CE671 (RealtimeClock_t979065F3CA6558447B46091C3F416CCF7E3F385E * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	{
		// [MethodImpl(MethodImplOptions.Synchronized)] set => (value ? (Action)stopwatch.Stop : stopwatch.Start)();
		bool L_0 = ___value0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_1 = __this->get_stopwatch_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_2, L_1, (intptr_t)((intptr_t)Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0027;
	}

IL_0016:
	{
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = __this->get_stopwatch_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, L_3, (intptr_t)((intptr_t)Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63_RuntimeMethod_var), /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0027:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Clocks.RealtimeClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealtimeClock__ctor_m12F702F5E21BA4096E37C05F0913029C1E94011A (RealtimeClock_t979065F3CA6558447B46091C3F416CCF7E3F385E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RealtimeClock () => this.stopwatch = new Stopwatch();
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public RealtimeClock () => this.stopwatch = new Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_0, /*hidden argument*/NULL);
		__this->set_stopwatch_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.Inputs.TextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput__ctor_m4AF130169710FCB9F4D15650183A9E5A0FA9E0B2 (TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0 * __this, RuntimeObject* ___recorder0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TextureInput (IMediaRecorder recorder) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.recorder = recorder;
		RuntimeObject* L_0 = ___recorder0;
		__this->set_recorder_0(L_0);
		// this.readbackBuffer = new Texture2D(
		//     recorder.frameSize.width,
		//     recorder.frameSize.height,
		//     TextureFormat.RGBA32,
		//     false,
		//     false
		// );
		RuntimeObject* L_1 = ___recorder0;
		NullCheck(L_1);
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_2;
		L_2 = InterfaceFuncInvoker0< ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = L_2.get_Item1_0();
		RuntimeObject* L_4 = ___recorder0;
		NullCheck(L_4);
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_5;
		L_5 = InterfaceFuncInvoker0< ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var, L_4);
		int32_t L_6 = L_5.get_Item2_1();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3(L_7, L_3, L_6, 4, (bool)0, (bool)0, /*hidden argument*/NULL);
		__this->set_readbackBuffer_1(L_7);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.TextureInput::CommitFrame(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput_CommitFrame_mCD33C928E68A1535466CCF21F4BFBDBB1C5F2F61 (TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m662C20E7D3DE731AA9B8B8A0F53061B8E2F803D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_2 = NULL;
	{
		// var (width, height) = recorder.frameSize;
		RuntimeObject* L_0 = __this->get_recorder_0();
		NullCheck(L_0);
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_1;
		L_1 = InterfaceFuncInvoker0< ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var, L_0);
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_2 = L_1;
		int32_t L_3 = L_2.get_Item1_0();
		V_0 = L_3;
		int32_t L_4 = L_2.get_Item2_1();
		V_1 = L_4;
		// var renderTexture = RenderTexture.GetTemporary(width, height, 24, RenderTextureFormat.ARGB32);
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7;
		L_7 = RenderTexture_GetTemporary_mEA38E780ED9C1E065B97E85BBC63F8DE548C7B8E(L_5, L_6, ((int32_t)24), 0, /*hidden argument*/NULL);
		V_2 = L_7;
		// Graphics.Blit(texture, renderTexture);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_8 = ___texture0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_8, L_9, /*hidden argument*/NULL);
		// var prevActive = RenderTexture.active;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10;
		L_10 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		// RenderTexture.active = renderTexture;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = V_2;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_11, /*hidden argument*/NULL);
		// readbackBuffer.ReadPixels(new Rect(0, 0, width, height), 0, 0, false);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = __this->get_readbackBuffer_1();
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_15), (0.0f), (0.0f), ((float)((float)L_13)), ((float)((float)L_14)), /*hidden argument*/NULL);
		NullCheck(L_12);
		Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E(L_12, L_15, 0, 0, (bool)0, /*hidden argument*/NULL);
		// RenderTexture.active = prevActive;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_10, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary(renderTexture);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = V_2;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_16, /*hidden argument*/NULL);
		// recorder.CommitFrame(
		//     NativeArrayUnsafeUtility.GetUnsafeBufferPointerWithoutChecks(readbackBuffer.GetRawTextureData<byte>()),
		//     timestamp
		// );
		RuntimeObject* L_17 = __this->get_recorder_0();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = __this->get_readbackBuffer_1();
		NullCheck(L_18);
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_19;
		L_19 = Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C(L_18, /*hidden argument*/Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_RuntimeMethod_var);
		void* L_20;
		L_20 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m662C20E7D3DE731AA9B8B8A0F53061B8E2F803D4(L_19, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m662C20E7D3DE731AA9B8B8A0F53061B8E2F803D4_RuntimeMethod_var);
		int64_t L_21 = ___timestamp1;
		NullCheck(L_17);
		InterfaceActionInvoker2< void*, int64_t >::Invoke(2 /* System.Void NatSuite.Recorders.IMediaRecorder::CommitFrame(System.Void*,System.Int64) */, IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var, L_17, (void*)(void*)L_20, L_21);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.TextureInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput_Dispose_m371172736E1F57A017CAA773D0B6FCD8E06B9510 (TextureInput_tAA830EB10D30553F5274C3879CE672C15111D1B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Dispose () => Texture2D.Destroy(readbackBuffer);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_readbackBuffer_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String NatSuite.Recorders.Internal.Utility::GetPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utility_GetPath_m8133CD602BFCD516B14D7098C8E9A554415511C2 (String_t* ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t73B353ED8E1F07DF77AC89CA6F76FB808018F59D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A393EADBE457522A253BEE7EB8728BC667E188E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF13FE9A5DB842114D70C053E3A1F4D1D3DBA8913);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B4_0 = 0;
	String_t* G_B7_0 = NULL;
	{
		// if (directory == null) {
		String_t* L_0 = ((Utility_t73B353ED8E1F07DF77AC89CA6F76FB808018F59D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t73B353ED8E1F07DF77AC89CA6F76FB808018F59D_il2cpp_TypeInfo_var))->get_directory_0();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// var editor = Application.platform == RuntimePlatform.OSXEditor || Application.platform == RuntimePlatform.WindowsEditor;
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)7))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		// directory = editor ? Directory.GetCurrentDirectory() : Application.persistentDataPath;
		if (G_B4_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3;
		L_3 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		G_B7_0 = L_3;
		goto IL_0027;
	}

IL_0022:
	{
		String_t* L_4;
		L_4 = Directory_GetCurrentDirectory_m5A9D7F3AC59EB9E06BBAC35A0C2DDD757359D8DD(/*hidden argument*/NULL);
		G_B7_0 = L_4;
	}

IL_0027:
	{
		((Utility_t73B353ED8E1F07DF77AC89CA6F76FB808018F59D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t73B353ED8E1F07DF77AC89CA6F76FB808018F59D_il2cpp_TypeInfo_var))->set_directory_0(G_B7_0);
	}

IL_002c:
	{
		// var timestamp = DateTime.Now.ToString("yyyy_MM_dd_HH_mm_ss_fff");
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5;
		L_5 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_2 = L_5;
		String_t* L_6;
		L_6 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), _stringLiteral1A393EADBE457522A253BEE7EB8728BC667E188E, /*hidden argument*/NULL);
		V_0 = L_6;
		// var name = $"recording_{timestamp}{extension}";
		String_t* L_7 = V_0;
		String_t* L_8 = ___extension0;
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralF13FE9A5DB842114D70C053E3A1F4D1D3DBA8913, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// var path = Path.Combine(directory, name);
		String_t* L_10 = ((Utility_t73B353ED8E1F07DF77AC89CA6F76FB808018F59D_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t73B353ED8E1F07DF77AC89CA6F76FB808018F59D_il2cpp_TypeInfo_var))->get_directory_0();
		String_t* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_10, L_11, /*hidden argument*/NULL);
		// return path;
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.WAVRecorder::get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  WAVRecorder_get_frameSize_m76F3D516BE71092C46CA5330145E781AAD1BF257 (WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9 * __this, const RuntimeMethod* method)
{
	ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public (int width, int height) frameSize => default;
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E ));
		ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  L_0 = V_0;
		return L_0;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder__ctor_mAAC1A8625D111A207FB3582EBF391702A60550E3 (WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9 * __this, int32_t ___sampleRate0, int32_t ___channelCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// public WAVRecorder (int sampleRate, int channelCount) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.sampleRate = sampleRate;
		int32_t L_0 = ___sampleRate0;
		__this->set_sampleRate_0(L_0);
		// this.channelCount = channelCount;
		int32_t L_1 = ___channelCount1;
		__this->set_channelCount_1(L_1);
		// this.stream = new FileStream(Utility.GetPath(@".wav"), FileMode.Create);
		String_t* L_2;
		L_2 = Utility_GetPath_m8133CD602BFCD516B14D7098C8E9A554415511C2(_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, /*hidden argument*/NULL);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_3 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB(L_3, L_2, 2, /*hidden argument*/NULL);
		__this->set_stream_2(L_3);
		// this.sampleCount = 0;
		__this->set_sampleCount_3(0);
		// var header = new byte[44];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)44));
		V_0 = L_4;
		// stream.Write(header, 0, header.Length);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_5 = __this->get_stream_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))));
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::NatSuite.Recorders.IMediaRecorder.CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_NatSuite_Recorders_IMediaRecorder_CommitFrame_mA30FF43E9C20E4A4A479ECB3982574FF8006702D (WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9 * __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	{
		// unsafe void IMediaRecorder.CommitFrame (void* nativeBuffer, long timestamp) { }
		return;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_CommitSamples_mE44B5C77F229861B02064D4DC332B1BFD6C133C7 (WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method)
{
	float* V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	{
		// fixed (float* baseAddress = sampleBuffer)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___sampleBuffer0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (float*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (float*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// CommitSamples(baseAddress, sampleBuffer.Length, timestamp);
		float* L_4 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = ___sampleBuffer0;
		NullCheck(L_5);
		int64_t L_6 = ___timestamp1;
		WAVRecorder_CommitSamples_mDDF186AD064751D28BDDD6714F552B80A230365D(__this, (float*)(float*)L_4, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), L_6, /*hidden argument*/NULL);
		V_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL;
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_CommitSamples_mDDF186AD064751D28BDDD6714F552B80A230365D (WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9 * __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int16_t* V_0 = NULL;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// fixed (short* shortBuffer = new short[sampleCount]) {
		int32_t L_0 = ___sampleCount1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)L_0);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (int16_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (int16_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		// for (var i = 0; i < sampleCount; ++i)
		V_2 = 0;
		goto IL_003a;
	}

IL_0021:
	{
		// shortBuffer[i] = (short)(nativeBuffer[i] * short.MaxValue);
		int16_t* L_5 = V_0;
		int32_t L_6 = V_2;
		float* L_7 = ___nativeBuffer0;
		int32_t L_8 = V_2;
		float L_9 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)4)))));
		*((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)2))))) = (int16_t)((int16_t)((int16_t)((float)il2cpp_codegen_multiply((float)L_9, (float)(32767.0f)))));
		// for (var i = 0; i < sampleCount; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003a:
	{
		// for (var i = 0; i < sampleCount; ++i)
		int32_t L_11 = V_2;
		int32_t L_12 = ___sampleCount1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0021;
		}
	}
	{
		// new UnmanagedMemoryStream((byte*)shortBuffer, sampleCount * sizeof(short)).CopyTo(stream);
		int16_t* L_13 = V_0;
		int32_t L_14 = ___sampleCount1;
		UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62 * L_15 = (UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62 *)il2cpp_codegen_object_new(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62_il2cpp_TypeInfo_var);
		UnmanagedMemoryStream__ctor_mD2D76EDA084157B12C9DAE25EA3FCCB63E1EC613(L_15, (uint8_t*)(uint8_t*)L_13, ((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2)))), /*hidden argument*/NULL);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_16 = __this->get_stream_2();
		NullCheck(L_15);
		Stream_CopyTo_m18CA50971ACBE7880A8F4D0CA5CFA07B55760421(L_15, L_16, /*hidden argument*/NULL);
		V_1 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)NULL;
		// this.sampleCount += sampleCount;
		int32_t L_17 = __this->get_sampleCount_3();
		int32_t L_18 = ___sampleCount1;
		__this->set_sampleCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)));
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> NatSuite.Recorders.WAVRecorder::FinishWriting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * WAVRecorder_FinishWriting_m521240A0398A8FACD028730227E094EED0BECA2F (WAVRecorder_t01CC0932ED84A105C3FD650374F6E331D328C8B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisString_t_mB2118B0DB57948278B3D179FBE4FE5E1E321B906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stream.Seek(0, SeekOrigin.Begin);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_0 = __this->get_stream_2();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, ((int64_t)((int64_t)0)), 0);
		// stream.Write(Encoding.UTF8.GetBytes("RIFF"), 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_2 = __this->get_stream_2();
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3;
		L_3 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		NullCheck(L_2);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_4, 0, 4);
		// stream.Write(BitConverter.GetBytes(stream.Length - 8), 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_5 = __this->get_stream_2();
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = __this->get_stream_2();
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = BitConverter_GetBytes_m4BCB9C5EF4286885A640995E44AB52E5F629E3C7(((int64_t)il2cpp_codegen_subtract((int64_t)L_7, (int64_t)((int64_t)((int64_t)8)))), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_8, 0, 4);
		// stream.Write(Encoding.UTF8.GetBytes("WAVE"), 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_9 = __this->get_stream_2();
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_10;
		L_10 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_11, 0, 4);
		// stream.Write(Encoding.UTF8.GetBytes("fmt "), 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_12 = __this->get_stream_2();
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_13;
		L_13 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_13, _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		NullCheck(L_12);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_12, L_14, 0, 4);
		// stream.Write(BitConverter.GetBytes(16), 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_15 = __this->get_stream_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, 4);
		// stream.Write(BitConverter.GetBytes((ushort)1), 0, 2);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_17 = __this->get_stream_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
		L_18 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296((uint16_t)1, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, 2);
		// stream.Write(BitConverter.GetBytes(channelCount), 0, 2);                              // Channel count
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_19 = __this->get_stream_2();
		int32_t L_20 = __this->get_channelCount_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
		L_21 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_19, L_21, 0, 2);
		// stream.Write(BitConverter.GetBytes(sampleRate), 0, 4);                                // Sample rate
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_22 = __this->get_stream_2();
		int32_t L_23 = __this->get_sampleRate_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24;
		L_24 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_22, L_24, 0, 4);
		// stream.Write(BitConverter.GetBytes(sampleRate * channelCount * sizeof(short)), 0, 4); // Output rate in bytes
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_25 = __this->get_stream_2();
		int32_t L_26 = __this->get_sampleRate_0();
		int32_t L_27 = __this->get_channelCount_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28;
		L_28 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)L_27)), (int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_25, L_28, 0, 4);
		// stream.Write(BitConverter.GetBytes((ushort)(channelCount * 2)), 0, 2);                // Block alignment
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_29 = __this->get_stream_2();
		int32_t L_30 = __this->get_channelCount_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31;
		L_31 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)2)))), /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_29, L_31, 0, 2);
		// stream.Write(BitConverter.GetBytes((ushort)16), 0, 2);                                // Bits per sample
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_32 = __this->get_stream_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33;
		L_33 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296((uint16_t)((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_32, L_33, 0, 2);
		// stream.Write(Encoding.UTF8.GetBytes("data"), 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_34 = __this->get_stream_2();
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_35;
		L_35 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_35);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36;
		L_36 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_35, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		NullCheck(L_34);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_36, 0, 4);
		// stream.Write(BitConverter.GetBytes(sampleCount * sizeof(ushort)), 0, 4);             // Total sample count
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_37 = __this->get_stream_2();
		int32_t L_38 = __this->get_sampleCount_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39;
		L_39 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_37);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_39, 0, 4);
		// stream.Dispose();
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_40 = __this->get_stream_2();
		NullCheck(L_40);
		Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_40, /*hidden argument*/NULL);
		// return Task.FromResult(stream.Name);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_41 = __this->get_stream_2();
		NullCheck(L_41);
		String_t* L_42;
		L_42 = FileStream_get_Name_mB4501D583A1C35B7DD539CFFD8BA90495D32F769_inline(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_43;
		L_43 = Task_FromResult_TisString_t_mB2118B0DB57948278B3D179FBE4FE5E1E321B906(L_42, /*hidden argument*/Task_FromResult_TisString_t_mB2118B0DB57948278B3D179FBE4FE5E1E321B906_RuntimeMethod_var);
		return L_43;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m396233DC6D9721B4B41AF3636AC435C07F4C1249 (U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0::<CommitFrame>b__0(UnityEngine.Rendering.AsyncGPUReadbackRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m0D0213F3AA01DB46AA9039EBFB8FB9C922B8715C (U3CU3Ec__DisplayClass1_0_t7D9257E22BC0AB626DCF20BFC70C32091F88DD76 * __this, AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA  ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncGPUReadbackRequest_GetData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA5D2215016D842E07C2BFC1C268B22D24E9FDDBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m662C20E7D3DE731AA9B8B8A0F53061B8E2F803D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// AsyncGPUReadback.Request(renderTexture, 0, request => recorder?.CommitFrame(
		//     NativeArrayUnsafeUtility.GetUnsafeBufferPointerWithoutChecks(request.GetData<byte>()),
		//     timestamp
		// ));
		AsyncTextureInput_t301E10663AA2733F8B8C14A66909E8322D313F7F * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_recorder_0();
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_3;
		L_3 = AsyncGPUReadbackRequest_GetData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA5D2215016D842E07C2BFC1C268B22D24E9FDDBD((AsyncGPUReadbackRequest_t30AF24AAE0D52605C959B8A0520867C21BDDE9FA *)(&___request0), 0, /*hidden argument*/AsyncGPUReadbackRequest_GetData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA5D2215016D842E07C2BFC1C268B22D24E9FDDBD_RuntimeMethod_var);
		void* L_4;
		L_4 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m662C20E7D3DE731AA9B8B8A0F53061B8E2F803D4(L_3, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m662C20E7D3DE731AA9B8B8A0F53061B8E2F803D4_RuntimeMethod_var);
		int64_t L_5 = __this->get_timestamp_1();
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< void*, int64_t >::Invoke(2 /* System.Void NatSuite.Recorders.IMediaRecorder::CommitFrame(System.Void*,System.Int64) */, IMediaRecorder_tCEB50BE319F540D39D6E79D1AC44500EBB836C47_il2cpp_TypeInfo_var, G_B2_0, (void*)(void*)L_4, L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInputAttachment_OnAudioFilterRead_m80BCABAEB073EE4BFBC6AC8B8CEA44B33A47A140 (AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * G_B2_0 = NULL;
	Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * G_B1_0 = NULL;
	{
		// private void OnAudioFilterRead (float[] data, int channels) => sampleBufferDelegate?.Invoke(data);
		Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * L_0 = __this->get_sampleBufferDelegate_4();
		Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___data0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m232D84D01D75F314C5FCA868DBF4FE613EF930D2_RuntimeMethod_var);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInputAttachment__ctor_mA7099DCD2B6CC447CCE265322DD256AB5E611351 (AudioInputAttachment_t4808F84E353CAABEB156CCA02241031C88E19A49 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037 (RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037 * __this, void* ___context0, Il2CppChar* ___path1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(void*, Il2CppChar*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___context0, ___path1);

}
// System.Void NatSuite.Recorders.Internal.Bridge/RecordingHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler__ctor_m87C8FCE4B83E8E166597B966BEE654F2520696A0 (RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NatSuite.Recorders.Internal.Bridge/RecordingHandler::Invoke(System.Void*,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler_Invoke_m0DDB9DDF489C94673790F09AD664F5CD0B48D80A (RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037 * __this, void* ___context0, Il2CppChar* ___path1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (void*, Il2CppChar*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___context0, ___path1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, void*, Il2CppChar*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, ___path1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< void*, Il2CppChar* >::Invoke(targetMethod, targetThis, ___context0, ___path1);
					else
						GenericVirtActionInvoker2< void*, Il2CppChar* >::Invoke(targetMethod, targetThis, ___context0, ___path1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< void*, Il2CppChar* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___context0, ___path1);
					else
						VirtActionInvoker2< void*, Il2CppChar* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___context0, ___path1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (void*, Il2CppChar*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___context0, ___path1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, void*, Il2CppChar*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___context0, ___path1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NatSuite.Recorders.Internal.Bridge/RecordingHandler::BeginInvoke(System.Void*,System.Char*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecordingHandler_BeginInvoke_m65103590ABCE26F4B2C50014D4143ACBE7F4ADD4 (RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037 * __this, void* ___context0, Il2CppChar* ___path1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___context0;
	__d_args[1] = ___path1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void NatSuite.Recorders.Internal.Bridge/RecordingHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler_EndInvoke_mDBA612A2571FF1E103E78AE9F6953D974E88F726 (RecordingHandler_tD33F507B0353AB6EFF72AF01832BD191F4D44037 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.Inputs.CameraInput/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6571CDFB8B778E4BD2F6FF057552665B87DEF799 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176 * L_0 = (U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176 *)il2cpp_codegen_object_new(U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB60C1DD6666CA3B8A323B6BEFD6A3D4C57E486C4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB60C1DD6666CA3B8A323B6BEFD6A3D4C57E486C4 (U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 NatSuite.Recorders.Inputs.CameraInput/<>c::<.ctor>b__5_0(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__5_0_m8AB1A36FB5EECEA59D93E3F78A611EF28F85A8FF (U3CU3Ec_t6130741DD618F15F2685E7522DFB7999A6844176 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___a0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___b1, const RuntimeMethod* method)
{
	{
		// Array.Sort(cameras, (a, b) => (int)(100 * (a.depth - b.depth)));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___a0;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_depth_m063B48665DB9226949AC3A615362EA20193B823D(L_0, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = ___b1;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_depth_m063B48665DB9226949AC3A615362EA20193B823D(L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(100.0f), (float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_3))))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputAttachment_Update_m02BCEFCA7B0A1BF00658D2266E9C4D36D0B0C649 (CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// void Update () => handler?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_handler_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputAttachment__ctor_m9E52848CFBEC589B4110AB89908CB8F048F219C0 (CameraInputAttachment_t283C15E5B7A44EB76913424060BEEE986663512B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.JPGRecorder/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m16F3F13E5885831AF6C516B310326258B5E42353 (U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder/<>c__DisplayClass4_0::<CommitFrame>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CCommitFrameU3Eb__0_m570218D4030DD850B9E5B5DA206620C4947A5D06 (U3CU3Ec__DisplayClass4_0_tC27906ACB2D24B8C3F65F74BCEA7697CBF7876CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral589E32EA81914C1451BD9F2B02A23487D39F49E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var task = Task.Run(() => File.WriteAllBytes(Path.Combine(recordingPath, $"{frameIndex}.jpg"), frameData));
		JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		String_t* L_1 = L_0->get_recordingPath_1();
		int32_t L_2 = __this->get_frameIndex_1();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral589E32EA81914C1451BD9F2B02A23487D39F49E7, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, L_5, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_frameData_2();
		File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_MoveNext_mE9EA04BB91FF0212574AB7C200524AF5CDCC1BA0 (U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_mA91A4FBCB908623BA91DB4B90B0050B75FEDB29E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0056;
			}
		}

IL_0011:
		{
			// Texture2D.Destroy(frameBuffer);
			JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * L_3 = V_1;
			NullCheck(L_3);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = L_3->get_frameBuffer_0();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
			// await Task.WhenAll(writeTasks);
			JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * L_5 = V_1;
			NullCheck(L_5);
			List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * L_6 = L_5->get_writeTasks_2();
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
			L_7 = Task_WhenAll_mA7F77F1CCEF7F07CFDC5F4586FE529E1B4684CBF(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8;
			L_8 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_7, /*hidden argument*/NULL);
			V_3 = L_8;
			bool L_9;
			L_9 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0072;
			}
		}

IL_0036:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = V_3;
			__this->set_U3CU3Eu__1_3(L_11);
			AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_mA91A4FBCB908623BA91DB4B90B0050B75FEDB29E((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_12, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60_mA91A4FBCB908623BA91DB4B90B0050B75FEDB29E_RuntimeMethod_var);
			goto IL_00af;
		}

IL_0056:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = __this->get_U3CU3Eu__1_3();
			V_3 = L_13;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_14 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_0072:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			// return recordingPath;
			JPGRecorder_tD3E561C8C9231D7AD428F769D338984B94D83259 * L_16 = V_1;
			NullCheck(L_16);
			String_t* L_17 = L_16->get_recordingPath_1();
			V_2 = L_17;
			goto IL_009b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0082;
		}
		throw e;
	}

CATCH_0082:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_18, L_19, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00af;
	} // end catch (depth: 1)

IL_009b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		String_t* L_21 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
	}

IL_00af:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFinishWritingU3Ed__7_MoveNext_mE9EA04BB91FF0212574AB7C200524AF5CDCC1BA0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 * _thisAdjusted = reinterpret_cast<U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 *>(__this + _offset);
	U3CFinishWritingU3Ed__7_MoveNext_mE9EA04BB91FF0212574AB7C200524AF5CDCC1BA0(_thisAdjusted, method);
}
// System.Void NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_SetStateMachine_mFDE7FEE2C75B61C689324EEA90F223C1D89521C4 (U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFinishWritingU3Ed__7_SetStateMachine_mFDE7FEE2C75B61C689324EEA90F223C1D89521C4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 * _thisAdjusted = reinterpret_cast<U3CFinishWritingU3Ed__7_t1986D350D1660EED1555469F20101B90060BCC60 *>(__this + _offset);
	U3CFinishWritingU3Ed__7_SetStateMachine_mFDE7FEE2C75B61C689324EEA90F223C1D89521C4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m84320452D8BF3A8DD5662F6229FE666C299B5AEF_inline (RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmsaaSamplesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__ticks_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Stopwatch_get_IsRunning_m953BE51FFEF66BFB8734F5AB1AC99E7DD28CCBBC_inline (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_running_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FileStream_get_Name_mB4501D583A1C35B7DD539CFFD8BA90495D32F769_inline (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_0;
	}
}
