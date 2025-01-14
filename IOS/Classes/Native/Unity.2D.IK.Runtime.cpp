﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.Experimental.U2D.IK.CCDSolver2D
struct CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A;
// UnityEngine.Experimental.U2D.IK.FabrikSolver2D
struct FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Experimental.U2D.IK.IKChain2D
struct IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4;
// UnityEngine.Experimental.U2D.IK.IKManager2D
struct IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393;
// UnityEngine.Experimental.U2D.IK.IKUtility
struct IKUtility_t23FEEBEA9DB6EE7BE8567F25790ED90B6AD18CB7;
// UnityEngine.Experimental.U2D.IK.LimbSolver2D
struct LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Experimental.U2D.IK.Solver2D
struct Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E;
// UnityEngine.Experimental.U2D.IK.Solver2DMenuAttribute
struct Solver2DMenuAttribute_t216390F3EFD27C73A74A3CEE22CA3ACEFEFA711B;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>
struct List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]
struct FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.Experimental.U2D.IK.Solver2D[]
struct Solver2DU5BU5D_t4EBF772011E64C561150C2307ED9289C7E6F6DE6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral31D159E683556C06B3B3963D92483B6867EB3233;
IL2CPP_EXTERN_C String_t* _stringLiteral5073C13C2783CC73331A1CD2F89E8E7491DFAF7A;
IL2CPP_EXTERN_C String_t* _stringLiteral6C99ECD71BC1A07A255289D56C289E257B38FF27;
IL2CPP_EXTERN_C String_t* _stringLiteralB41257E5E0C416B372DE6548D39D39CD5B915390;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393_m3325CB9828B68496A6028EF534918913B95DE1E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSolver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E_m46C29F52C5F20AD5CF90ED5F72E4C5D3111AA776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4F1F490111786DDF83200465C839AFAC4E1FE94B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8E88B1FF45DADFEF961F6849956FA9C3FF520D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7344EE67A09562114B6B179675E6C262A3013368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m519CB03985A9E3DDEAD0D674BBDC4302AC39CF5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5AA81C764170C3D0234228C4A078AAB0299A5CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mDB90A5F758E33AD6D4DDFA2C0D2F38DCD6A46224_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m815B0297DD0A45AF5944C2DC64DB2DF02AF38BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCB1E88E8A08E765FD46E9397B5AF62578926647B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m807E5FD7A629A4ED317C13EEA86F979F90729E68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CCD2D_DoIteration_m1D607CD8378D24A91390081C804084D2E17029B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCD2D_RotatePositionFrom_m28AD74B1B9318C1DADCC807796F1836788A6E90B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCD2D_Solve_mD6766DD1647C06546984D2A00DDDA938FF3E6E28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D_DoPrepare_m415281A8F133D50B1CF88C9012EFD767F6737007_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D_DoUpdateIK_mD6B5B7429A697A4F79B997E206C6C0B4BCCAC3E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D__ctor_mAC21C1D9F724782C343883BB655C4DDA988A4C9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D_set_iterations_m69AF3407D3B467FD34FDAA9E7DC1B20B99E22B83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D_set_tolerance_mAAA20482D485CCA6140851E16C1E05B819FC117E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CCDSolver2D_set_velocity_mE0859AF449290F377AC23F4D6CD17BDBA339DC51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_Backward_m90F2F79345790A8D5CC66B362C8C0685B1CE0A45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_Forward_m1131B823FE49DD61B59DB66FFBC2E203C49CED23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_SolveBackwardsChain_m88CE7C3A4FBCFA40356F656DBC924B1C91FC0D43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_SolveForwardsChain_m7EA3E51D504E3BFC97EC91DF0F740545D5E4AC78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_Solve_m62CB139612039F5D8A835B30F217186FC9580856_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_ValidateChain_m83784526EFB8808C9BBBCA3C7714FD26CE65B2C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIK2D_ValidateJoint_m2AF36DEE3416F1F8E87BE9F9ECC5B5B25CC34A37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FabrikSolver2D_DoPrepare_m45FEC3593D6945472E611505F279558E52ADF3E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FabrikSolver2D_DoUpdateIK_m33A80E5A76E76BEFBE3CF86701399AD35F1CBFE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FabrikSolver2D__ctor_mE27C95FD21D38F9D60C5728108D105CE527B87DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FabrikSolver2D_set_iterations_m1914EAB63AFEBE369C7856489AC8DC5FB003B676_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FabrikSolver2D_set_tolerance_m681CDE85817610CB09F887B1BAB91C474DEEB3F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKChain2D_BlendFkToIk_m879633DF8BEB0F0237154414358F37E4B338B1FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKChain2D_Initialize_m9C97EB59783A05B1416FF84B4D473787A97E7E2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKChain2D_PrepareLengths_m5A8097EBDEE68C9565117999A7CB99F076628332_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKChain2D_Validate_m7B12369B2250ABE74F4DB19B621D3AD0CEEB22E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKChain2D_set_transformCount_mF2A07A7294A3703A502876A260AB07DD3227F571_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_AddSolver_m8EECC9DD42B3362C0E548D2C40B808D3B16CEC0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_FindChildSolvers_m248908F8894EFD349EF10D4E8097DEC3A982D508_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_OnValidate_mDD2B7EE44347ABBB52D7D9377198CF9115330C2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_RemoveSolver_mE28EC08E173AAB345724C71FA6BF79D3F50888EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_UpdateManager_mBF7899421C7354384D5B906DDC5CFF0369F0798E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D__ctor_mD22976BC18FB29467B257719B283945BFA46D0D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKManager2D_set_weight_mF8105ECAF1F32A4E3AA0CCB6242EFEADD84F10C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKUtility_GetAncestorCount_m6B5E942815A7A056CD1DB42A95131598F77623B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKUtility_GetMaxChainCount_m1955D4E86004E5A1BC080F4E13C58A1B4F67B071_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKUtility_IsDescendentOf_mE41AE4CAE6AA247768E912955D61F36C6032E0C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LimbSolver2D_DoInitialize_m718695616A729AC52A91EE036464F1BCEDC88E57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LimbSolver2D_DoUpdateIK_m32D42D0A0D27503DD3FB7E1FC76A2C913B112C2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LimbSolver2D__ctor_mE91CC643152AB59209D861198803C90F048BA724_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Limb_Solve_m2DBC3ADD10CD710B8F3A54B3EBA8D74B3823FEC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512Unity_2D_IK_Runtime_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_BlendFkToIk_mD4A3E141269C74E808E528AA5E6DFC2F0E5852DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_GetWorldPositionFromSolverPlanePoint_m7C4987D5B1B73C601EBE12D682FF9D2226CEBA5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_HasTargets_m18AFC7CEEAC2BC1F36FD256FDB6717DDD26F111F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_OnValidate_m2AE95727CA7C48BC964ED34B26931C9EB80F7F0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_PrepareEffectorPositions_mDCE851C72CC44C7649F5BD15BD03786CA1E538F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_Prepare_mBBFF8346B6C8615595453EB42CE32E44DFF0D815_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_UpdateIK_m6E7BDC2C9424D525B142B726CAD93ADB6058B5BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D__ctor_mCC6DB275466AE16396E6D5287B93C21C6F723E01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver2D_set_weight_mA892B2B9638656D7EC4C48C307D89CBBEBD8114F_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;

struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796;
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFBE0E8DF4D6C3594CE300379B4D8B9122035F720 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>
struct  List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Solver2DU5BU5D_t4EBF772011E64C561150C2307ED9289C7E6F6DE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7, ____items_1)); }
	inline Solver2DU5BU5D_t4EBF772011E64C561150C2307ED9289C7E6F6DE6* get__items_1() const { return ____items_1; }
	inline Solver2DU5BU5D_t4EBF772011E64C561150C2307ED9289C7E6F6DE6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Solver2DU5BU5D_t4EBF772011E64C561150C2307ED9289C7E6F6DE6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Solver2DU5BU5D_t4EBF772011E64C561150C2307ED9289C7E6F6DE6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7_StaticFields, ____emptyArray_5)); }
	inline Solver2DU5BU5D_t4EBF772011E64C561150C2307ED9289C7E6F6DE6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Solver2DU5BU5D_t4EBF772011E64C561150C2307ED9289C7E6F6DE6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Solver2DU5BU5D_t4EBF772011E64C561150C2307ED9289C7E6F6DE6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.Experimental.U2D.IK.CCD2D
struct  CCD2D_t23116B509C157FD555AD3E66ECD0D766FF65C0CC  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Experimental.U2D.IK.FABRIK2D
struct  FABRIK2D_t7944CE87E11E775760E94787648C4D6C27B3A7C9  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Experimental.U2D.IK.IKChain2D
struct  IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::m_EffectorTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_EffectorTransform_0;
	// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::m_TargetTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_TargetTransform_1;
	// System.Int32 UnityEngine.Experimental.U2D.IK.IKChain2D::m_TransformCount
	int32_t ___m_TransformCount_2;
	// UnityEngine.Transform[] UnityEngine.Experimental.U2D.IK.IKChain2D::m_Transforms
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___m_Transforms_3;
	// UnityEngine.Quaternion[] UnityEngine.Experimental.U2D.IK.IKChain2D::m_DefaultLocalRotations
	QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* ___m_DefaultLocalRotations_4;
	// UnityEngine.Quaternion[] UnityEngine.Experimental.U2D.IK.IKChain2D::m_StoredLocalRotations
	QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* ___m_StoredLocalRotations_5;
	// System.Single[] UnityEngine.Experimental.U2D.IK.IKChain2D::m_Lengths
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Lengths_6;

public:
	inline static int32_t get_offset_of_m_EffectorTransform_0() { return static_cast<int32_t>(offsetof(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4, ___m_EffectorTransform_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_EffectorTransform_0() const { return ___m_EffectorTransform_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_EffectorTransform_0() { return &___m_EffectorTransform_0; }
	inline void set_m_EffectorTransform_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_EffectorTransform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EffectorTransform_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetTransform_1() { return static_cast<int32_t>(offsetof(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4, ___m_TargetTransform_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_TargetTransform_1() const { return ___m_TargetTransform_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_TargetTransform_1() { return &___m_TargetTransform_1; }
	inline void set_m_TargetTransform_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_TargetTransform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetTransform_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransformCount_2() { return static_cast<int32_t>(offsetof(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4, ___m_TransformCount_2)); }
	inline int32_t get_m_TransformCount_2() const { return ___m_TransformCount_2; }
	inline int32_t* get_address_of_m_TransformCount_2() { return &___m_TransformCount_2; }
	inline void set_m_TransformCount_2(int32_t value)
	{
		___m_TransformCount_2 = value;
	}

	inline static int32_t get_offset_of_m_Transforms_3() { return static_cast<int32_t>(offsetof(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4, ___m_Transforms_3)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_m_Transforms_3() const { return ___m_Transforms_3; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_m_Transforms_3() { return &___m_Transforms_3; }
	inline void set_m_Transforms_3(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___m_Transforms_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transforms_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultLocalRotations_4() { return static_cast<int32_t>(offsetof(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4, ___m_DefaultLocalRotations_4)); }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* get_m_DefaultLocalRotations_4() const { return ___m_DefaultLocalRotations_4; }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6** get_address_of_m_DefaultLocalRotations_4() { return &___m_DefaultLocalRotations_4; }
	inline void set_m_DefaultLocalRotations_4(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* value)
	{
		___m_DefaultLocalRotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultLocalRotations_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoredLocalRotations_5() { return static_cast<int32_t>(offsetof(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4, ___m_StoredLocalRotations_5)); }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* get_m_StoredLocalRotations_5() const { return ___m_StoredLocalRotations_5; }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6** get_address_of_m_StoredLocalRotations_5() { return &___m_StoredLocalRotations_5; }
	inline void set_m_StoredLocalRotations_5(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* value)
	{
		___m_StoredLocalRotations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StoredLocalRotations_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lengths_6() { return static_cast<int32_t>(offsetof(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4, ___m_Lengths_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Lengths_6() const { return ___m_Lengths_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Lengths_6() { return &___m_Lengths_6; }
	inline void set_m_Lengths_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Lengths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lengths_6), (void*)value);
	}
};


// UnityEngine.Experimental.U2D.IK.IKUtility
struct  IKUtility_t23FEEBEA9DB6EE7BE8567F25790ED90B6AD18CB7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Experimental.U2D.IK.Limb
struct  Limb_tCBDED32189EFF308A2A1AFF705F1DDAA632DD982  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.Experimental.U2D.IK.Solver2D>
struct  Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF, ___list_0)); }
	inline List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * get_list_0() const { return ___list_0; }
	inline List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF, ___current_3)); }
	inline Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * get_current_3() const { return ___current_3; }
	inline Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.IntPtr
struct  IntPtr_t 
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


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.Experimental.U2D.IK.Solver2DMenuAttribute
struct  Solver2DMenuAttribute_t216390F3EFD27C73A74A3CEE22CA3ACEFEFA711B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Experimental.U2D.IK.Solver2DMenuAttribute::m_MenuPath
	String_t* ___m_MenuPath_0;

public:
	inline static int32_t get_offset_of_m_MenuPath_0() { return static_cast<int32_t>(offsetof(Solver2DMenuAttribute_t216390F3EFD27C73A74A3CEE22CA3ACEFEFA711B, ___m_MenuPath_0)); }
	inline String_t* get_m_MenuPath_0() const { return ___m_MenuPath_0; }
	inline String_t** get_address_of_m_MenuPath_0() { return &___m_MenuPath_0; }
	inline void set_m_MenuPath_0(String_t* value)
	{
		___m_MenuPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MenuPath_0), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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

// UnityEngine.Experimental.U2D.IK.FABRIKChain2D
struct  FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A 
{
public:
	// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::origin
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin_0;
	// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::target
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target_1;
	// System.Single UnityEngine.Experimental.U2D.IK.FABRIKChain2D::sqrTolerance
	float ___sqrTolerance_2;
	// UnityEngine.Vector2[] UnityEngine.Experimental.U2D.IK.FABRIKChain2D::positions
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___positions_3;
	// System.Single[] UnityEngine.Experimental.U2D.IK.FABRIKChain2D::lengths
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths_4;
	// System.Int32[] UnityEngine.Experimental.U2D.IK.FABRIKChain2D::subChainIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___subChainIndices_5;
	// UnityEngine.Vector3[] UnityEngine.Experimental.U2D.IK.FABRIKChain2D::worldPositions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___worldPositions_6;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A, ___origin_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_origin_0() const { return ___origin_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A, ___target_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_target_1() const { return ___target_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___target_1 = value;
	}

	inline static int32_t get_offset_of_sqrTolerance_2() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A, ___sqrTolerance_2)); }
	inline float get_sqrTolerance_2() const { return ___sqrTolerance_2; }
	inline float* get_address_of_sqrTolerance_2() { return &___sqrTolerance_2; }
	inline void set_sqrTolerance_2(float value)
	{
		___sqrTolerance_2 = value;
	}

	inline static int32_t get_offset_of_positions_3() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A, ___positions_3)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_positions_3() const { return ___positions_3; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_positions_3() { return &___positions_3; }
	inline void set_positions_3(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___positions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positions_3), (void*)value);
	}

	inline static int32_t get_offset_of_lengths_4() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A, ___lengths_4)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_lengths_4() const { return ___lengths_4; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_lengths_4() { return &___lengths_4; }
	inline void set_lengths_4(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___lengths_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lengths_4), (void*)value);
	}

	inline static int32_t get_offset_of_subChainIndices_5() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A, ___subChainIndices_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_subChainIndices_5() const { return ___subChainIndices_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_subChainIndices_5() { return &___subChainIndices_5; }
	inline void set_subChainIndices_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___subChainIndices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subChainIndices_5), (void*)value);
	}

	inline static int32_t get_offset_of_worldPositions_6() { return static_cast<int32_t>(offsetof(FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A, ___worldPositions_6)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_worldPositions_6() const { return ___worldPositions_6; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_worldPositions_6() { return &___worldPositions_6; }
	inline void set_worldPositions_6(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___worldPositions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldPositions_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.U2D.IK.FABRIKChain2D
struct FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshaled_pinvoke
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target_1;
	float ___sqrTolerance_2;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___positions_3;
	Il2CppSafeArray/*NONE*/* ___lengths_4;
	Il2CppSafeArray/*NONE*/* ___subChainIndices_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___worldPositions_6;
};
// Native definition for COM marshalling of UnityEngine.Experimental.U2D.IK.FABRIKChain2D
struct FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshaled_com
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target_1;
	float ___sqrTolerance_2;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___positions_3;
	Il2CppSafeArray/*NONE*/* ___lengths_4;
	Il2CppSafeArray/*NONE*/* ___subChainIndices_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___worldPositions_6;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.Plane
struct  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Experimental.U2D.IK.IKManager2D
struct  IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D> UnityEngine.Experimental.U2D.IK.IKManager2D::m_Solvers
	List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * ___m_Solvers_4;
	// System.Single UnityEngine.Experimental.U2D.IK.IKManager2D::m_Weight
	float ___m_Weight_5;

public:
	inline static int32_t get_offset_of_m_Solvers_4() { return static_cast<int32_t>(offsetof(IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393, ___m_Solvers_4)); }
	inline List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * get_m_Solvers_4() const { return ___m_Solvers_4; }
	inline List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 ** get_address_of_m_Solvers_4() { return &___m_Solvers_4; }
	inline void set_m_Solvers_4(List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * value)
	{
		___m_Solvers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Solvers_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_5() { return static_cast<int32_t>(offsetof(IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393, ___m_Weight_5)); }
	inline float get_m_Weight_5() const { return ___m_Weight_5; }
	inline float* get_address_of_m_Weight_5() { return &___m_Weight_5; }
	inline void set_m_Weight_5(float value)
	{
		___m_Weight_5 = value;
	}
};


// UnityEngine.Experimental.U2D.IK.Solver2D
struct  Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::m_ConstrainRotation
	bool ___m_ConstrainRotation_4;
	// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::m_SolveFromDefaultPose
	bool ___m_SolveFromDefaultPose_5;
	// System.Single UnityEngine.Experimental.U2D.IK.Solver2D::m_Weight
	float ___m_Weight_6;
	// UnityEngine.Plane UnityEngine.Experimental.U2D.IK.Solver2D::m_Plane
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___m_Plane_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.Experimental.U2D.IK.Solver2D::m_TargetPositions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_TargetPositions_8;

public:
	inline static int32_t get_offset_of_m_ConstrainRotation_4() { return static_cast<int32_t>(offsetof(Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E, ___m_ConstrainRotation_4)); }
	inline bool get_m_ConstrainRotation_4() const { return ___m_ConstrainRotation_4; }
	inline bool* get_address_of_m_ConstrainRotation_4() { return &___m_ConstrainRotation_4; }
	inline void set_m_ConstrainRotation_4(bool value)
	{
		___m_ConstrainRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_SolveFromDefaultPose_5() { return static_cast<int32_t>(offsetof(Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E, ___m_SolveFromDefaultPose_5)); }
	inline bool get_m_SolveFromDefaultPose_5() const { return ___m_SolveFromDefaultPose_5; }
	inline bool* get_address_of_m_SolveFromDefaultPose_5() { return &___m_SolveFromDefaultPose_5; }
	inline void set_m_SolveFromDefaultPose_5(bool value)
	{
		___m_SolveFromDefaultPose_5 = value;
	}

	inline static int32_t get_offset_of_m_Weight_6() { return static_cast<int32_t>(offsetof(Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E, ___m_Weight_6)); }
	inline float get_m_Weight_6() const { return ___m_Weight_6; }
	inline float* get_address_of_m_Weight_6() { return &___m_Weight_6; }
	inline void set_m_Weight_6(float value)
	{
		___m_Weight_6 = value;
	}

	inline static int32_t get_offset_of_m_Plane_7() { return static_cast<int32_t>(offsetof(Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E, ___m_Plane_7)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_m_Plane_7() const { return ___m_Plane_7; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_m_Plane_7() { return &___m_Plane_7; }
	inline void set_m_Plane_7(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___m_Plane_7 = value;
	}

	inline static int32_t get_offset_of_m_TargetPositions_8() { return static_cast<int32_t>(offsetof(Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E, ___m_TargetPositions_8)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_TargetPositions_8() const { return ___m_TargetPositions_8; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_TargetPositions_8() { return &___m_TargetPositions_8; }
	inline void set_m_TargetPositions_8(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_TargetPositions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetPositions_8), (void*)value);
	}
};


// UnityEngine.Experimental.U2D.IK.CCDSolver2D
struct  CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A  : public Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E
{
public:
	// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.CCDSolver2D::m_Chain
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * ___m_Chain_13;
	// System.Int32 UnityEngine.Experimental.U2D.IK.CCDSolver2D::m_Iterations
	int32_t ___m_Iterations_14;
	// System.Single UnityEngine.Experimental.U2D.IK.CCDSolver2D::m_Tolerance
	float ___m_Tolerance_15;
	// System.Single UnityEngine.Experimental.U2D.IK.CCDSolver2D::m_Velocity
	float ___m_Velocity_16;
	// UnityEngine.Vector3[] UnityEngine.Experimental.U2D.IK.CCDSolver2D::m_Positions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Positions_17;

public:
	inline static int32_t get_offset_of_m_Chain_13() { return static_cast<int32_t>(offsetof(CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A, ___m_Chain_13)); }
	inline IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * get_m_Chain_13() const { return ___m_Chain_13; }
	inline IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 ** get_address_of_m_Chain_13() { return &___m_Chain_13; }
	inline void set_m_Chain_13(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * value)
	{
		___m_Chain_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Chain_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Iterations_14() { return static_cast<int32_t>(offsetof(CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A, ___m_Iterations_14)); }
	inline int32_t get_m_Iterations_14() const { return ___m_Iterations_14; }
	inline int32_t* get_address_of_m_Iterations_14() { return &___m_Iterations_14; }
	inline void set_m_Iterations_14(int32_t value)
	{
		___m_Iterations_14 = value;
	}

	inline static int32_t get_offset_of_m_Tolerance_15() { return static_cast<int32_t>(offsetof(CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A, ___m_Tolerance_15)); }
	inline float get_m_Tolerance_15() const { return ___m_Tolerance_15; }
	inline float* get_address_of_m_Tolerance_15() { return &___m_Tolerance_15; }
	inline void set_m_Tolerance_15(float value)
	{
		___m_Tolerance_15 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_16() { return static_cast<int32_t>(offsetof(CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A, ___m_Velocity_16)); }
	inline float get_m_Velocity_16() const { return ___m_Velocity_16; }
	inline float* get_address_of_m_Velocity_16() { return &___m_Velocity_16; }
	inline void set_m_Velocity_16(float value)
	{
		___m_Velocity_16 = value;
	}

	inline static int32_t get_offset_of_m_Positions_17() { return static_cast<int32_t>(offsetof(CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A, ___m_Positions_17)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Positions_17() const { return ___m_Positions_17; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Positions_17() { return &___m_Positions_17; }
	inline void set_m_Positions_17(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Positions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_17), (void*)value);
	}
};


// UnityEngine.Experimental.U2D.IK.FabrikSolver2D
struct  FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D  : public Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E
{
public:
	// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_Chain
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * ___m_Chain_11;
	// System.Int32 UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_Iterations
	int32_t ___m_Iterations_12;
	// System.Single UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_Tolerance
	float ___m_Tolerance_13;
	// System.Single[] UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_Lengths
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Lengths_14;
	// UnityEngine.Vector2[] UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_Positions
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_Positions_15;
	// UnityEngine.Vector3[] UnityEngine.Experimental.U2D.IK.FabrikSolver2D::m_WorldPositions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_WorldPositions_16;

public:
	inline static int32_t get_offset_of_m_Chain_11() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D, ___m_Chain_11)); }
	inline IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * get_m_Chain_11() const { return ___m_Chain_11; }
	inline IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 ** get_address_of_m_Chain_11() { return &___m_Chain_11; }
	inline void set_m_Chain_11(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * value)
	{
		___m_Chain_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Chain_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Iterations_12() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D, ___m_Iterations_12)); }
	inline int32_t get_m_Iterations_12() const { return ___m_Iterations_12; }
	inline int32_t* get_address_of_m_Iterations_12() { return &___m_Iterations_12; }
	inline void set_m_Iterations_12(int32_t value)
	{
		___m_Iterations_12 = value;
	}

	inline static int32_t get_offset_of_m_Tolerance_13() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D, ___m_Tolerance_13)); }
	inline float get_m_Tolerance_13() const { return ___m_Tolerance_13; }
	inline float* get_address_of_m_Tolerance_13() { return &___m_Tolerance_13; }
	inline void set_m_Tolerance_13(float value)
	{
		___m_Tolerance_13 = value;
	}

	inline static int32_t get_offset_of_m_Lengths_14() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D, ___m_Lengths_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Lengths_14() const { return ___m_Lengths_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Lengths_14() { return &___m_Lengths_14; }
	inline void set_m_Lengths_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Lengths_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lengths_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Positions_15() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D, ___m_Positions_15)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_Positions_15() const { return ___m_Positions_15; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_Positions_15() { return &___m_Positions_15; }
	inline void set_m_Positions_15(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_Positions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_WorldPositions_16() { return static_cast<int32_t>(offsetof(FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D, ___m_WorldPositions_16)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_WorldPositions_16() const { return ___m_WorldPositions_16; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_WorldPositions_16() { return &___m_WorldPositions_16; }
	inline void set_m_WorldPositions_16(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_WorldPositions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WorldPositions_16), (void*)value);
	}
};


// UnityEngine.Experimental.U2D.IK.LimbSolver2D
struct  LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED  : public Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E
{
public:
	// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.LimbSolver2D::m_Chain
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * ___m_Chain_9;
	// System.Boolean UnityEngine.Experimental.U2D.IK.LimbSolver2D::m_Flip
	bool ___m_Flip_10;
	// UnityEngine.Vector3[] UnityEngine.Experimental.U2D.IK.LimbSolver2D::m_Positions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Positions_11;
	// System.Single[] UnityEngine.Experimental.U2D.IK.LimbSolver2D::m_Lengths
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Lengths_12;
	// System.Single[] UnityEngine.Experimental.U2D.IK.LimbSolver2D::m_Angles
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Angles_13;

public:
	inline static int32_t get_offset_of_m_Chain_9() { return static_cast<int32_t>(offsetof(LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED, ___m_Chain_9)); }
	inline IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * get_m_Chain_9() const { return ___m_Chain_9; }
	inline IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 ** get_address_of_m_Chain_9() { return &___m_Chain_9; }
	inline void set_m_Chain_9(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * value)
	{
		___m_Chain_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Chain_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flip_10() { return static_cast<int32_t>(offsetof(LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED, ___m_Flip_10)); }
	inline bool get_m_Flip_10() const { return ___m_Flip_10; }
	inline bool* get_address_of_m_Flip_10() { return &___m_Flip_10; }
	inline void set_m_Flip_10(bool value)
	{
		___m_Flip_10 = value;
	}

	inline static int32_t get_offset_of_m_Positions_11() { return static_cast<int32_t>(offsetof(LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED, ___m_Positions_11)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Positions_11() const { return ___m_Positions_11; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Positions_11() { return &___m_Positions_11; }
	inline void set_m_Positions_11(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Positions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lengths_12() { return static_cast<int32_t>(offsetof(LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED, ___m_Lengths_12)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Lengths_12() const { return ___m_Lengths_12; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Lengths_12() { return &___m_Lengths_12; }
	inline void set_m_Lengths_12(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Lengths_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lengths_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Angles_13() { return static_cast<int32_t>(offsetof(LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED, ___m_Angles_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Angles_13() const { return ___m_Angles_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Angles_13() { return &___m_Angles_13; }
	inline void set_m_Angles_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Angles_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Angles_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]
struct FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A  m_Items[1];

public:
	inline FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___positions_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lengths_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subChainIndices_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___worldPositions_6), (void*)NULL);
		#endif
	}
	inline FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___positions_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___lengths_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subChainIndices_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___worldPositions_6), (void*)NULL);
		#endif
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  m_Items[1];

public:
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		m_Items[index] = value;
	}
};


// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___result1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.CCD2D::DoIteration(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,UnityEngine.Vector3[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCD2D_DoIteration_m1D607CD8378D24A91390081C804084D2E17029B5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward1, int32_t ___last2, float ___velocity3, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___positions4, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.CCD2D::RotatePositionFrom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CCD2D_RotatePositionFrom_m28AD74B1B9318C1DADCC807796F1836788A6E90B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pivot1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.U2D.IK.IKChain2D::get_transformCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// UnityEngine.Transform[] UnityEngine.Experimental.U2D.IK.IKChain2D::get_transforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Profiling.Profiler::BeginSample(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_m72E4BD9503BC991BAFAED992FF1CA4504C741865_inline (String_t* ___name0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.U2D.IK.CCDSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CCDSolver2D_get_iterations_mE1D5CD8BCFE095249935A9C11D0B01F75AC009A6 (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Experimental.U2D.IK.CCDSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CCDSolver2D_get_tolerance_m2602BFB9C222ABF3A4CEBD20ABCE8581A669B826 (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.CCD2D::Solve(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,System.Single,UnityEngine.Vector3[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CCD2D_Solve_mD6766DD1647C06546984D2A00DDDA938FF3E6E28 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward1, int32_t ___solverLimit2, float ___tolerance3, float ___velocity4, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___positions5, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Profiling.Profiler::EndSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_EndSample_m78C76E709113E225D47687E26EA320E4FC548B71 (const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D__ctor_mC537759478AFA5D0995248B7C71903B6CFD9ECA5 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D__ctor_mCC6DB275466AE16396E6D5287B93C21C6F723E01 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::Forward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Forward_m1131B823FE49DD61B59DB66FFBC2E203C49CED23 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions2, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::Backward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Backward_m90F2F79345790A8D5CC66B362C8C0685B1CE0A45 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___originPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::ValidateChain(UnityEngine.Experimental.U2D.IK.FABRIKChain2D[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_ValidateChain_m83784526EFB8808C9BBBCA3C7714FD26CE65B2C3 (FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* ___chains0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::SolveForwardsChain(System.Int32,UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_SolveForwardsChain_m7EA3E51D504E3BFC97EC91DF0F740545D5E4AC78 (int32_t ___idx0, FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** ___chains1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::SolveBackwardsChain(System.Int32,UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_SolveBackwardsChain_m88CE7C3A4FBCFA40356F656DBC924B1C91FC0D43 (int32_t ___idx0, FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** ___chains1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::get_last()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_last_m8159FC465F916027A4EDC44318C71864A5AA3B53 (FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::get_first()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_first_m6E7E4E7ABCC1D6408CCE3B7640AC2278C86E2F5A (FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_SignedAngle_m007FAC4E36153EEBC62347D6FA67162238C34C69 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___from0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___to1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.Solver2D::GetPointOnSolverPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Solver2D_GetPointOnSolverPlane_mC2F7BC14F2837A6CB2BC1E7AC561DFC49363CB91 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.U2D.IK.FabrikSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FabrikSolver2D_get_iterations_mB8129A7196875F830410521CD9AB1CB27435DC27 (FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Experimental.U2D.IK.FabrikSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FabrikSolver2D_get_tolerance_m934CF0F1883F66671C5CED5FC99008152A5E9090 (FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::Solve(UnityEngine.Vector2,System.Int32,System.Single,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_Solve_m62CB139612039F5D8A835B30F217186FC9580856 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetPosition0, int32_t ___solverLimit1, float ___tolerance2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths3, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions4, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.Solver2D::GetWorldPositionFromSolverPlanePoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Solver2D_GetWorldPositionFromSolverPlanePoint_m7C4987D5B1B73C601EBE12D682FF9D2226CEBA5F (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___planePoint0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.IKChain2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_Validate_m7B12369B2250ABE74F4DB19B621D3AD0CEEB22E5 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.IKChain2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_get_isValid_mBC5D9767500249D602B102A57415FC511F376EF9 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::PrepareLengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_PrepareLengths_m5A8097EBDEE68C9565117999A7CB99F076628332 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_effector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_rootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_rootTransform_mD1E8BE034165BA11D4FFE2F52063380B79915E92 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_lastTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_lastTransform_m509EAC036D50BEF146C07B54BC42AFA8F9B5B8B1 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_target_mBFD7C9223F49270FA667647EE68C2753B16AF796 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.IKUtility::IsDescendentOf(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKUtility_IsDescendentOf_mE41AE4CAE6AA247768E912955D61F36C6032E0C0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ancestor1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Experimental.U2D.IK.IKUtility::GetAncestorCount(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKUtility_GetAncestorCount_m6B5E942815A7A056CD1DB42A95131598F77623B0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::OnEditorDataValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_OnEditorDataValidate_mB27512376B2F9A6AFBFB9CF845FD39E776CE9E51 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::FindChildSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_FindChildSolvers_m248908F8894EFD349EF10D4E8097DEC3A982D508 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::Clear()
inline void List_1_Clear_m5AA81C764170C3D0234228C4A078AAB0299A5CE3 (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::.ctor()
inline void List_1__ctor_m807E5FD7A629A4ED317C13EEA86F979F90729E68 (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponentsInChildren<UnityEngine.Experimental.U2D.IK.Solver2D>(System.Boolean,System.Collections.Generic.List`1<!!0>)
inline void Component_GetComponentsInChildren_TisSolver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E_m46C29F52C5F20AD5CF90ED5F72E4C5D3111AA776 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * ___result1, const RuntimeMethod* method)
{
	((  void (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared)(__this, ___includeInactive0, ___result1, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::GetEnumerator()
inline Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF  List_1_GetEnumerator_m815B0297DD0A45AF5944C2DC64DB2DF02AF38BED (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF  (*) (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.U2D.IK.Solver2D>::get_Current()
inline Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * Enumerator_get_Current_m7344EE67A09562114B6B179675E6C262A3013368_inline (Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF * __this, const RuntimeMethod* method)
{
	return ((  Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * (*) (Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Experimental.U2D.IK.IKManager2D>()
inline IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * Component_GetComponentInParent_TisIKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393_m3325CB9828B68496A6028EF534918913B95DE1E8 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::AddSolver(UnityEngine.Experimental.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_AddSolver_m8EECC9DD42B3362C0E548D2C40B808D3B16CEC0E (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * ___solver0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.U2D.IK.Solver2D>::MoveNext()
inline bool Enumerator_MoveNext_m8E88B1FF45DADFEF961F6849956FA9C3FF520D76 (Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.U2D.IK.Solver2D>::Dispose()
inline void Enumerator_Dispose_m4F1F490111786DDF83200465C839AFAC4E1FE94B (Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::Contains(!0)
inline bool List_1_Contains_mDB90A5F758E33AD6D4DDFA2C0D2F38DCD6A46224 (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * __this, Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 *, Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::Add(!0)
inline void List_1_Add_m519CB03985A9E3DDEAD0D674BBDC4302AC39CF5E (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * __this, Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 *, Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::AddSolverEditorData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_AddSolverEditorData_m6A05FFDEA189FD159506CF6139E633CD36E39395 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::RemoveSolverEditorData(UnityEngine.Experimental.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_RemoveSolverEditorData_mDBFCAB474FE63F897A3C49C0B89F45F3186723A3 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * ___solver0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D>::Remove(!0)
inline bool List_1_Remove_mCB1E88E8A08E765FD46E9397B5AF62578926647B (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * __this, Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 *, Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_isValid_mA90190EDB5213ECC3C04FAA3D46D9A7D0BDAECFA (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Initialize_m564277A15FA0C0EFBDB6EAF819CFEF6D45753447 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Experimental.U2D.IK.IKManager2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IKManager2D_get_weight_m11331D8209A9A0BBE68EBA30EED212DBE2248331 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::UpdateIK(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_m1747A6FC5D5C447B9A9E9A8EC55B2FF13DE9EFA5 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, float ___globalWeight0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::UpdateManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_UpdateManager_mBF7899421C7354384D5B906DDC5CFF0369F0798E (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m28EC098B41C037ED14C42FE47D0E5355CD2437F5 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::set_transformCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_transformCount_mF2A07A7294A3703A502876A260AB07DD3227F571 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::DoInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_DoInitialize_m135AAFEFA2AE3E1A0E22278EF6E2CBE123B3F9BC (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// System.Single[] UnityEngine.Experimental.U2D.IK.IKChain2D::get_lengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* IKChain2D_get_lengths_m887E99A57167730FCED53DA4959B834C30B012C7 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.Limb::Solve(UnityEngine.Vector3,System.Single[],UnityEngine.Vector3[],System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Limb_Solve_m2DBC3ADD10CD710B8F3A54B3EBA8D74B3823FEC2 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___angles3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.LimbSolver2D::get_flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LimbSolver2D_get_flip_mB0A246EA13CCE21FA6B9CC65BBBF08E75B26A835 (LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_Validate_m0928DA241D94A0E80096DC18A7E2C0ED59FF3EEC (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::HasTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_HasTargets_m18AFC7CEEAC2BC1F36FD256FDB6717DDD26F111F (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_Initialize_m9C97EB59783A05B1416FF84B4D473787A97E7E2B (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::set_normal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_set_normal_m4F84FE27CD58E2B3EE27DB108576B570EF8AE723 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::set_distance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_set_distance_m7B427E5F6F6D1DD44C96A503980F4627CDD4A59A (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_constrainRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_constrainRotation_m681D00D916E1B90EBB39E6B92D91733410D3DAE4 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::RestoreDefaultPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_RestoreDefaultPose_m2FF5188FF2EE2E7FA4753C7F6E38F50FBCB1E1BC (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, bool ___targetRotationIsConstrained0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_allChainsHaveTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_allChainsHaveTargets_m96ED4E974AF74C731B71156A4BDC456079E3D060 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::PrepareEffectorPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_PrepareEffectorPositions_mDCE851C72CC44C7649F5BD15BD03786CA1E538F3 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::UpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_m6E7BDC2C9424D525B142B726CAD93ADB6058B5BA (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___positions0, float ___globalWeight1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::get_chainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Solver2D_get_chainCount_m9BC3318C7DB73B32B09FB6B9816F6856AB67B4C0 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Experimental.U2D.IK.Solver2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver2D_get_weight_m618CE6112123D266966BF606EE5418CE5F32F603 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Prepare_mBBFF8346B6C8615595453EB42CE32E44DFF0D815 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_StoreLocalRotations_mCE39495A08732E41B45B780D95878A4D69523551 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::BlendFkToIk(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_BlendFkToIk_mD4A3E141269C74E808E528AA5E6DFC2F0E5852DD (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, float ___finalWeight0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_StoreLocalRotations_m422F4655EEB7D1B783F80898F4EDBCA9A9658EFF (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::BlendFkToIk(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_BlendFkToIk_m879633DF8BEB0F0237154414358F37E4B338B1FF (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, float ___finalWeight0, bool ___targetRotationIsConstrained1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::ClosestPointOnPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Plane_ClosestPointOnPlane_mDBB63D79FA643E10949FEE1AE692975940716BCE (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Profiling.Profiler::ValidateArguments(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_inline (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Profiling.Profiler::BeginSampleImpl(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_BeginSampleImpl_mF1EE2C3EB23D01B3F9A25C43C8BC82BFC4F3B5A0 (String_t* ___name0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___targetObject1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
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
// System.Boolean UnityEngine.Experimental.U2D.IK.CCD2D::Solve(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,System.Single,UnityEngine.Vector3[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CCD2D_Solve_mD6766DD1647C06546984D2A00DDDA938FF3E6E28 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward1, int32_t ___solverLimit2, float ___tolerance3, float ___velocity4, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___positions5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCD2D_Solve_mD6766DD1647C06546984D2A00DDDA938FF3E6E28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// int last = positions.Length - 1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_0 = ___positions5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (int32_t)1));
		// int iterations = 0;
		V_1 = 0;
		// float sqrTolerance = tolerance * tolerance;
		float L_2 = ___tolerance3;
		float L_3 = ___tolerance3;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// float sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___targetPosition0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_5 = ___positions5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_4, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_11;
		goto IL_0065;
	}

IL_002a:
	{
		// DoIteration(targetPosition, forward, last, velocity, ref positions);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___targetPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___forward1;
		int32_t L_14 = V_0;
		float L_15 = ___velocity4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_16 = ___positions5;
		CCD2D_DoIteration_m1D607CD8378D24A91390081C804084D2E17029B5(L_12, L_13, L_14, L_15, (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_16, /*hidden argument*/NULL);
		// sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ___targetPosition0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_18 = ___positions5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_19 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_18);
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_17, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		float L_24 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		V_3 = L_24;
		// if (++iterations >= solverLimit)
		int32_t L_25 = V_1;
		int32_t L_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		V_1 = L_26;
		int32_t L_27 = ___solverLimit2;
		V_5 = (bool)((((int32_t)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_5;
		if (!L_28)
		{
			goto IL_0064;
		}
	}
	{
		// break;
		goto IL_006f;
	}

IL_0064:
	{
	}

IL_0065:
	{
		// while (sqrDistanceToTarget > sqrTolerance)
		float L_29 = V_3;
		float L_30 = V_2;
		V_6 = (bool)((((float)L_29) > ((float)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_002a;
		}
	}

IL_006f:
	{
		// return iterations != 0;
		int32_t L_32 = V_1;
		V_7 = (bool)((!(((uint32_t)L_32) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0077;
	}

IL_0077:
	{
		// }
		bool L_33 = V_7;
		return L_33;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCD2D::DoIteration(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Single,UnityEngine.Vector3[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCD2D_DoIteration_m1D607CD8378D24A91390081C804084D2E17029B5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward1, int32_t ___last2, float ___velocity3, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___positions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCD2D_DoIteration_m1D607CD8378D24A91390081C804084D2E17029B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_0 = ___last2;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		goto IL_0091;
	}

IL_000a:
	{
		// Vector3 toTarget = targetPosition - positions[i];
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___targetPosition0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_2 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_2);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// Vector3 toLast = positions[last] - positions[i];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_8 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_9 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_8);
		int32_t L_10 = ___last2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_13 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_13);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// float angle = Vector3.SignedAngle(toLast, toTarget, forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = ___forward1;
		float L_22 = Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A(L_19, L_20, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		// angle = Mathf.Lerp(0f, angle, velocity);
		float L_23 = V_3;
		float L_24 = ___velocity3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_25 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((0.0f), L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// Quaternion deltaRotation = Quaternion.AngleAxis(angle, forward);
		float L_26 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = ___forward1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_26, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		// for (int j = last; j > i; --j)
		int32_t L_29 = ___last2;
		V_5 = L_29;
		goto IL_0081;
	}

IL_0057:
	{
		// positions[j] = RotatePositionFrom(positions[j], positions[i], deltaRotation);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_30 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_31 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_30);
		int32_t L_32 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_33 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_34 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_33);
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_38 = ___positions4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_39 = *((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_38);
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = CCD2D_RotatePositionFrom_m28AD74B1B9318C1DADCC807796F1836788A6E90B(L_37, L_42, L_43, /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_44);
		// for (int j = last; j > i; --j)
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1));
	}

IL_0081:
	{
		// for (int j = last; j > i; --j)
		int32_t L_46 = V_5;
		int32_t L_47 = V_0;
		V_6 = (bool)((((int32_t)L_46) > ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_6;
		if (L_48)
		{
			goto IL_0057;
		}
	}
	{
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1));
	}

IL_0091:
	{
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_50 = V_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_50) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_7;
		if (L_51)
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.CCD2D::RotatePositionFrom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CCD2D_RotatePositionFrom_m28AD74B1B9318C1DADCC807796F1836788A6E90B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pivot1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCD2D_RotatePositionFrom_m28AD74B1B9318C1DADCC807796F1836788A6E90B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 v = position - pivot;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___pivot1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// v = rotation * v;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = ___rotation2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// return pivot + v;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___pivot1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		return L_9;
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
// System.Int32 UnityEngine.Experimental.U2D.IK.CCDSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CCDSolver2D_get_iterations_mE1D5CD8BCFE095249935A9C11D0B01F75AC009A6 (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return m_Iterations; }
		int32_t L_0 = __this->get_m_Iterations_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Iterations; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::set_iterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_set_iterations_m69AF3407D3B467FD34FDAA9E7DC1B20B99E22B83 (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D_set_iterations_m69AF3407D3B467FD34FDAA9E7DC1B20B99E22B83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_0, 1, /*hidden argument*/NULL);
		__this->set_m_Iterations_14(L_1);
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		return;
	}
}
// System.Single UnityEngine.Experimental.U2D.IK.CCDSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CCDSolver2D_get_tolerance_m2602BFB9C222ABF3A4CEBD20ABCE8581A669B826 (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return m_Tolerance; }
		float L_0 = __this->get_m_Tolerance_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Tolerance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::set_tolerance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_set_tolerance_mAAA20482D485CCA6140851E16C1E05B819FC117E (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D_set_tolerance_mAAA20482D485CCA6140851E16C1E05B819FC117E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_0, (0.00100000005f), /*hidden argument*/NULL);
		__this->set_m_Tolerance_15(L_1);
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		return;
	}
}
// System.Single UnityEngine.Experimental.U2D.IK.CCDSolver2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CCDSolver2D_get_velocity_m82D938C344B15803256B020522515C1A6969B6B0 (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return m_Velocity; }
		float L_0 = __this->get_m_Velocity_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Velocity; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::set_velocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_set_velocity_mE0859AF449290F377AC23F4D6CD17BDBA339DC51 (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D_set_velocity_mE0859AF449290F377AC23F4D6CD17BDBA339DC51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Velocity = Mathf.Clamp01(value); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		__this->set_m_Velocity_16(L_1);
		// set { m_Velocity = Mathf.Clamp01(value); }
		return;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.CCDSolver2D::GetChainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CCDSolver2D_GetChainCount_m86B761D4F95B7047091C9EC8A1D24A4C9684BABC (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return 1;
		V_0 = 1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.CCDSolver2D::GetChain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * CCDSolver2D_GetChain_m622C6030E70408F10A4CD321345513FD1CD1D80B (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * V_0 = NULL;
	{
		// return m_Chain;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_0 = __this->get_m_Chain_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_DoPrepare_m415281A8F133D50B1CF88C9012EFD767F6737007 (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D_DoPrepare_m415281A8F133D50B1CF88C9012EFD767F6737007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (m_Positions == null || m_Positions.Length != m_Chain.transformCount)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_m_Positions_17();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = __this->get_m_Positions_17();
		NullCheck(L_1);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_2 = __this->get_m_Chain_13();
		NullCheck(L_2);
		int32_t L_3 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// m_Positions = new Vector3[m_Chain.transformCount];
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_5 = __this->get_m_Chain_13();
		NullCheck(L_5);
		int32_t L_6 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(L_5, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_7 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_m_Positions_17(L_7);
	}

IL_003e:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		V_1 = 0;
		goto IL_0064;
	}

IL_0042:
	{
		// m_Positions[i] = m_Chain.transforms[i].position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_m_Positions_17();
		int32_t L_9 = V_1;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_10 = __this->get_m_Chain_13();
		NullCheck(L_10);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_15);
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0064:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		int32_t L_17 = V_1;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_18 = __this->get_m_Chain_13();
		NullCheck(L_18);
		int32_t L_19 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(L_18, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_0042;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D_DoUpdateIK_mD6B5B7429A697A4F79B997E206C6C0B4BCCAC3E3 (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___effectorPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D_DoUpdateIK_mD6B5B7429A697A4F79B997E206C6C0B4BCCAC3E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	{
		// Profiler.BeginSample("CCDSolver2D.DoUpdateIK");
		Profiler_BeginSample_m72E4BD9503BC991BAFAED992FF1CA4504C741865_inline(_stringLiteral5073C13C2783CC73331A1CD2F89E8E7491DFAF7A, /*hidden argument*/NULL);
		// Vector3 effectorPosition = effectorPositions[0];
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___effectorPositions0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		V_0 = L_1;
		// Vector2 effectorLocalPosition2D = m_Chain.transforms[0].InverseTransformPoint(effectorPosition);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_2 = __this->get_m_Chain_13();
		NullCheck(L_2);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// effectorPosition = m_Chain.transforms[0].TransformPoint(effectorLocalPosition2D);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_9 = __this->get_m_Chain_13();
		NullCheck(L_9);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_12, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// if (CCD2D.Solve(effectorPosition, GetPlaneRootTransform().forward, iterations, tolerance, Mathf.Lerp(kMinVelocity, kMaxVelocity, m_Velocity), ref m_Positions))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(11 /* UnityEngine.Transform UnityEngine.Experimental.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_17, /*hidden argument*/NULL);
		int32_t L_19 = CCDSolver2D_get_iterations_mE1D5CD8BCFE095249935A9C11D0B01F75AC009A6(__this, /*hidden argument*/NULL);
		float L_20 = CCDSolver2D_get_tolerance_m2602BFB9C222ABF3A4CEBD20ABCE8581A669B826(__this, /*hidden argument*/NULL);
		float L_21 = __this->get_m_Velocity_16();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_22 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((0.00999999978f), (1.0f), L_21, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** L_23 = __this->get_address_of_m_Positions_17();
		bool L_24 = CCD2D_Solve_mD6766DD1647C06546984D2A00DDDA938FF3E6E28(L_16, L_18, L_19, L_20, L_22, (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_0106;
		}
	}
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		V_3 = 0;
		goto IL_00ef;
	}

IL_008a:
	{
		// Vector3 startLocalPosition = m_Chain.transforms[i + 1].localPosition;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_26 = __this->get_m_Chain_13();
		NullCheck(L_26);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_27 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_30, /*hidden argument*/NULL);
		V_4 = L_31;
		// Vector3 endLocalPosition = m_Chain.transforms[i].InverseTransformPoint(m_Positions[i + 1]);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_32 = __this->get_m_Chain_13();
		NullCheck(L_32);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_33 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_32, /*hidden argument*/NULL);
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_37 = __this->get_m_Positions_17();
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_36, L_40, /*hidden argument*/NULL);
		V_5 = L_41;
		// m_Chain.transforms[i].localRotation *= Quaternion.FromToRotation(startLocalPosition, endLocalPosition);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_42 = __this->get_m_Chain_13();
		NullCheck(L_42);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_43 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_42, /*hidden argument*/NULL);
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = L_46;
		NullCheck(L_47);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_49, L_50, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_52 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_48, L_51, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_47, L_52, /*hidden argument*/NULL);
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_53 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_00ef:
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_54 = V_3;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_55 = __this->get_m_Chain_13();
		NullCheck(L_55);
		int32_t L_56 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(L_55, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_54) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)1))))? 1 : 0);
		bool L_57 = V_6;
		if (L_57)
		{
			goto IL_008a;
		}
	}
	{
	}

IL_0106:
	{
		// Profiler.EndSample();
		Profiler_EndSample_m78C76E709113E225D47687E26EA320E4FC548B71(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.CCDSolver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CCDSolver2D__ctor_mAC21C1D9F724782C343883BB655C4DDA988A4C9E (CCDSolver2D_t6379B22E5B19060B3E88560E58E20F493225E52A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CCDSolver2D__ctor_mAC21C1D9F724782C343883BB655C4DDA988A4C9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IKChain2D m_Chain = new IKChain2D();
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_0 = (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *)il2cpp_codegen_object_new(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4_il2cpp_TypeInfo_var);
		IKChain2D__ctor_mC537759478AFA5D0995248B7C71903B6CFD9ECA5(L_0, /*hidden argument*/NULL);
		__this->set_m_Chain_13(L_0);
		// private int m_Iterations = 10;
		__this->set_m_Iterations_14(((int32_t)10));
		// private float m_Tolerance = 0.01f;
		__this->set_m_Tolerance_15((0.00999999978f));
		// private float m_Velocity = 0.5f;
		__this->set_m_Velocity_16((0.5f));
		Solver2D__ctor_mCC6DB275466AE16396E6D5287B93C21C6F723E01(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::Solve(UnityEngine.Vector2,System.Int32,System.Single,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_Solve_m62CB139612039F5D8A835B30F217186FC9580856 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetPosition0, int32_t ___solverLimit1, float ___tolerance2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths3, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_Solve_m62CB139612039F5D8A835B30F217186FC9580856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// int last = positions.Length - 1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_0 = ___positions4;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (int32_t)1));
		// int iterations = 0;
		V_1 = 0;
		// float sqrTolerance = tolerance * tolerance;
		float L_2 = ___tolerance2;
		float L_3 = ___tolerance2;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// float sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___targetPosition0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_5 = ___positions4;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_6 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_4, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), /*hidden argument*/NULL);
		V_3 = L_11;
		// Vector2 originPosition = positions[0];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_12 = ___positions4;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_13 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_12);
		NullCheck(L_13);
		int32_t L_14 = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		goto IL_0078;
	}

IL_0035:
	{
		// Forward(targetPosition, lengths, ref positions);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ___targetPosition0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = ___lengths3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_18 = ___positions4;
		FABRIK2D_Forward_m1131B823FE49DD61B59DB66FFBC2E203C49CED23(L_16, L_17, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_18, /*hidden argument*/NULL);
		// Backward(originPosition, lengths, ref positions);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = ___lengths3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_21 = ___positions4;
		FABRIK2D_Backward_m90F2F79345790A8D5CC66B362C8C0685B1CE0A45(L_19, L_20, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_21, /*hidden argument*/NULL);
		// sqrDistanceToTarget = (targetPosition - positions[last]).sqrMagnitude;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = ___targetPosition0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_23 = ___positions4;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_24 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_23);
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_22, L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		float L_29 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), /*hidden argument*/NULL);
		V_3 = L_29;
		// if (++iterations >= solverLimit)
		int32_t L_30 = V_1;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		V_1 = L_31;
		int32_t L_32 = ___solverLimit1;
		V_6 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_0077;
		}
	}
	{
		// break;
		goto IL_0082;
	}

IL_0077:
	{
	}

IL_0078:
	{
		// while (sqrDistanceToTarget > sqrTolerance)
		float L_34 = V_3;
		float L_35 = V_2;
		V_7 = (bool)((((float)L_34) > ((float)L_35))? 1 : 0);
		bool L_36 = V_7;
		if (L_36)
		{
			goto IL_0035;
		}
	}

IL_0082:
	{
		// return iterations != 0;
		int32_t L_37 = V_1;
		V_8 = (bool)((!(((uint32_t)L_37) <= ((uint32_t)0)))? 1 : 0);
		goto IL_008a;
	}

IL_008a:
	{
		// }
		bool L_38 = V_8;
		return L_38;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::SolveChain(System.Int32,UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_SolveChain_mA27A8F0CF3447A550FD474957C2A2623B70E72E7 (int32_t ___solverLimit0, FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** ___chains1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (ValidateChain(chains))
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_0 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_1 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_0);
		bool L_2 = FABRIK2D_ValidateChain_m83784526EFB8808C9BBBCA3C7714FD26CE65B2C3(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_0010:
	{
		// for (int iterations = 0; iterations < solverLimit; ++iterations)
		V_2 = 0;
		goto IL_0032;
	}

IL_0014:
	{
		// SolveForwardsChain(0, ref chains);
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_4 = ___chains1;
		FABRIK2D_SolveForwardsChain_m7EA3E51D504E3BFC97EC91DF0F740545D5E4AC78(0, (FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_4, /*hidden argument*/NULL);
		// if (!SolveBackwardsChain(0, ref chains))
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_5 = ___chains1;
		bool L_6 = FABRIK2D_SolveBackwardsChain_m88CE7C3A4FBCFA40356F656DBC924B1C91FC0D43(0, (FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_5, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		// break;
		goto IL_003c;
	}

IL_002d:
	{
		// for (int iterations = 0; iterations < solverLimit; ++iterations)
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0032:
	{
		// for (int iterations = 0; iterations < solverLimit; ++iterations)
		int32_t L_9 = V_2;
		int32_t L_10 = ___solverLimit0;
		V_4 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_4;
		if (L_11)
		{
			goto IL_0014;
		}
	}

IL_003c:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::ValidateChain(UnityEngine.Experimental.U2D.IK.FABRIKChain2D[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_ValidateChain_m83784526EFB8808C9BBBCA3C7714FD26CE65B2C3 (FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* ___chains0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_ValidateChain_m83784526EFB8808C9BBBCA3C7714FD26CE65B2C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* V_0 = NULL;
	int32_t V_1 = 0;
	FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	{
		// foreach (var chain in chains)
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_0 = ___chains0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_004e;
	}

IL_0008:
	{
		// foreach (var chain in chains)
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (chain.subChainIndices.Length == 0 && (chain.target - chain.last).sqrMagnitude > chain.sqrTolerance)
		FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A  L_5 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = L_5.get_subChainIndices_5();
		NullCheck(L_6);
		if ((((RuntimeArray*)L_6)->max_length))
		{
			goto IL_003f;
		}
	}
	{
		FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A  L_7 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = L_7.get_target_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = FABRIKChain2D_get_last_m8159FC465F916027A4EDC44318C71864A5AA3B53((FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), /*hidden argument*/NULL);
		FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A  L_12 = V_2;
		float L_13 = L_12.get_sqrTolerance_2();
		G_B4_0 = ((((float)L_11) > ((float)L_13))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B4_0 = 0;
	}

IL_0040:
	{
		V_3 = (bool)G_B4_0;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0049;
		}
	}
	{
		// return false;
		V_5 = (bool)0;
		goto IL_0059;
	}

IL_0049:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004e:
	{
		// foreach (var chain in chains)
		int32_t L_16 = V_1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0008;
		}
	}
	{
		// return true;
		V_5 = (bool)1;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		bool L_18 = V_5;
		return L_18;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::SolveForwardsChain(System.Int32,UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_SolveForwardsChain_m7EA3E51D504E3BFC97EC91DF0F740545D5E4AC78 (int32_t ___idx0, FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** ___chains1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_SolveForwardsChain_m7EA3E51D504E3BFC97EC91DF0F740545D5E4AC78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// var target = chains[idx].target;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_0 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_1 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_0);
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_target_1();
		V_0 = L_3;
		// if (chains[idx].subChainIndices.Length > 0)
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_4 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_5 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_4);
		int32_t L_6 = ___idx0;
		NullCheck(L_5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_subChainIndices_5();
		NullCheck(L_7);
		V_1 = (bool)((!(((uint32_t)(((RuntimeArray*)L_7)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		// target = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_9;
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		V_2 = 0;
		goto IL_0061;
	}

IL_002f:
	{
		// var childIdx = chains[idx].subChainIndices[i];
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_10 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_11 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_10);
		int32_t L_12 = ___idx0;
		NullCheck(L_11);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_subChainIndices_5();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		// SolveForwardsChain(childIdx, ref chains);
		int32_t L_17 = V_3;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_18 = ___chains1;
		FABRIK2D_SolveForwardsChain_m7EA3E51D504E3BFC97EC91DF0F740545D5E4AC78(L_17, (FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_18, /*hidden argument*/NULL);
		// target += chains[childIdx].first;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_0;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_20 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_21 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_20);
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = FABRIKChain2D_get_first_m6E7E4E7ABCC1D6408CCE3B7640AC2278C86E2F5A((FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A *)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_19, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0061:
	{
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		int32_t L_26 = V_2;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_27 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_28 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_27);
		int32_t L_29 = ___idx0;
		NullCheck(L_28);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->get_subChainIndices_5();
		NullCheck(L_30);
		V_4 = (bool)((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))? 1 : 0);
		bool L_31 = V_4;
		if (L_31)
		{
			goto IL_002f;
		}
	}
	{
		// target = target / chains[idx].subChainIndices.Length;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_0;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_33 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_34 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_33);
		int32_t L_35 = ___idx0;
		NullCheck(L_34);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->get_subChainIndices_5();
		NullCheck(L_36);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_32, (((float)((float)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))), /*hidden argument*/NULL);
		V_0 = L_37;
	}

IL_0091:
	{
		// Forward(target, chains[idx].lengths, ref chains[idx].positions);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = V_0;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_39 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_40 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_39);
		int32_t L_41 = ___idx0;
		NullCheck(L_40);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_lengths_4();
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_43 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_44 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_43);
		int32_t L_45 = ___idx0;
		NullCheck(L_44);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_address_of_positions_3();
		FABRIK2D_Forward_m1131B823FE49DD61B59DB66FFBC2E203C49CED23(L_38, L_42, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_46, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.FABRIK2D::SolveBackwardsChain(System.Int32,UnityEngine.Experimental.U2D.IK.FABRIKChain2D[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FABRIK2D_SolveBackwardsChain_m88CE7C3A4FBCFA40356F656DBC924B1C91FC0D43 (int32_t ___idx0, FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** ___chains1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_SolveBackwardsChain_m88CE7C3A4FBCFA40356F656DBC924B1C91FC0D43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	{
		// bool notSolved = false;
		V_0 = (bool)0;
		// Backward(chains[idx].origin, chains[idx].lengths, ref chains[idx].positions);
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_0 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_1 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_0);
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_origin_0();
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_4 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_5 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_4);
		int32_t L_6 = ___idx0;
		NullCheck(L_5);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_lengths_4();
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_8 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_9 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_8);
		int32_t L_10 = ___idx0;
		NullCheck(L_9);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_address_of_positions_3();
		FABRIK2D_Backward_m90F2F79345790A8D5CC66B362C8C0685B1CE0A45(L_3, L_7, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_11, /*hidden argument*/NULL);
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		V_1 = 0;
		goto IL_006e;
	}

IL_0034:
	{
		// var childIdx = chains[idx].subChainIndices[i];
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_12 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_13 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_12);
		int32_t L_14 = ___idx0;
		NullCheck(L_13);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->get_subChainIndices_5();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = L_18;
		// chains[childIdx].origin = chains[idx].last;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_19 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_20 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_19);
		int32_t L_21 = V_2;
		NullCheck(L_20);
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_22 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_23 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_22);
		int32_t L_24 = ___idx0;
		NullCheck(L_23);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = FABRIKChain2D_get_last_m8159FC465F916027A4EDC44318C71864A5AA3B53((FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), /*hidden argument*/NULL);
		((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->set_origin_0(L_25);
		// notSolved |= SolveBackwardsChain(childIdx, ref chains);
		bool L_26 = V_0;
		int32_t L_27 = V_2;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_28 = ___chains1;
		bool L_29 = FABRIK2D_SolveBackwardsChain_m88CE7C3A4FBCFA40356F656DBC924B1C91FC0D43(L_27, (FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_28, /*hidden argument*/NULL);
		V_0 = (bool)((int32_t)((int32_t)L_26|(int32_t)L_29));
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_006e:
	{
		// for (int i = 0; i < chains[idx].subChainIndices.Length; ++i)
		int32_t L_31 = V_1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_32 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_33 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_32);
		int32_t L_34 = ___idx0;
		NullCheck(L_33);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_subChainIndices_5();
		NullCheck(L_35);
		V_3 = (bool)((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))? 1 : 0);
		bool L_36 = V_3;
		if (L_36)
		{
			goto IL_0034;
		}
	}
	{
		// if (chains[idx].subChainIndices.Length == 0)
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_37 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_38 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_37);
		int32_t L_39 = ___idx0;
		NullCheck(L_38);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->get_subChainIndices_5();
		NullCheck(L_40);
		V_4 = (bool)((((int32_t)(((RuntimeArray*)L_40)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_4;
		if (!L_41)
		{
			goto IL_00d7;
		}
	}
	{
		// notSolved |= (chains[idx].target - chains[idx].last).sqrMagnitude > chains[idx].sqrTolerance;
		bool L_42 = V_0;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_43 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_44 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_43);
		int32_t L_45 = ___idx0;
		NullCheck(L_44);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_target_1();
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_47 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_48 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_47);
		int32_t L_49 = ___idx0;
		NullCheck(L_48);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50 = FABRIKChain2D_get_last_m8159FC465F916027A4EDC44318C71864A5AA3B53((FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A *)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_46, L_50, /*hidden argument*/NULL);
		V_5 = L_51;
		float L_52 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), /*hidden argument*/NULL);
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796** L_53 = ___chains1;
		FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796* L_54 = *((FABRIKChain2DU5BU5D_t639B77004B75584879465E213BFD769370CBE796**)L_53);
		int32_t L_55 = ___idx0;
		NullCheck(L_54);
		float L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->get_sqrTolerance_2();
		V_0 = (bool)((int32_t)((int32_t)L_42|(int32_t)((((float)L_52) > ((float)L_56))? 1 : 0)));
	}

IL_00d7:
	{
		// return notSolved;
		bool L_57 = V_0;
		V_6 = L_57;
		goto IL_00dc;
	}

IL_00dc:
	{
		// }
		bool L_58 = V_6;
		return L_58;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::Forward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Forward_m1131B823FE49DD61B59DB66FFBC2E203C49CED23 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_Forward_m1131B823FE49DD61B59DB66FFBC2E203C49CED23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// var last = positions.Length - 1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_0 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (int32_t)1));
		// positions[last] = targetPosition;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_2 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_3 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_2);
		int32_t L_4 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___targetPosition0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_5);
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_6 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		goto IL_0076;
	}

IL_0017:
	{
		// var r = positions[i + 1] - positions[i];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_7 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_8 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_7);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_12 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_13 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_12);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_11, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// var l = lengths[i] / r.magnitude;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = ___lengths1;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		V_3 = ((float)((float)L_21/(float)L_22));
		// var position = (1f - l) * positions[i + 1] + l * positions[i];
		float L_23 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_24 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_25 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_24);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_23)), L_28, /*hidden argument*/NULL);
		float L_30 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_31 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_32 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_31);
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_30, L_35, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_29, L_36, /*hidden argument*/NULL);
		V_4 = L_37;
		// positions[i] = position;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_38 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_39 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_38);
		int32_t L_40 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = V_4;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_41);
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1));
	}

IL_0076:
	{
		// for (int i = last - 1; i >= 0; --i)
		int32_t L_43 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_43) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_5;
		if (L_44)
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FABRIK2D::Backward(UnityEngine.Vector2,System.Single[],UnityEngine.Vector2[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FABRIK2D_Backward_m90F2F79345790A8D5CC66B362C8C0685B1CE0A45 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___originPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** ___positions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_Backward_m90F2F79345790A8D5CC66B362C8C0685B1CE0A45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// positions[0] = originPosition;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_0 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___originPosition0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_2);
		// var last = positions.Length - 1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_3 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_4 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_3);
		NullCheck(L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))), (int32_t)1));
		// for (int i = 0; i < last; ++i)
		V_1 = 0;
		goto IL_0076;
	}

IL_0015:
	{
		// var r = positions[i + 1] - positions[i];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_5 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_6 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_5);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_10 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_11 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_10);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_9, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// var l = lengths[i] / r.magnitude;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = ___lengths1;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		V_3 = ((float)((float)L_19/(float)L_20));
		// var position = (1f - l) * positions[i] + l * positions[i + 1];
		float L_21 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_22 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_23 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_22);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_21)), L_26, /*hidden argument*/NULL);
		float L_28 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_29 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_30 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_29);
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_28, L_33, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_27, L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		// positions[i + 1] = position;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_36 = ___positions2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_37 = *((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_36);
		int32_t L_38 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = V_4;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_39);
		// for (int i = 0; i < last; ++i)
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_0076:
	{
		// for (int i = 0; i < last; ++i)
		int32_t L_41 = V_1;
		int32_t L_42 = V_0;
		V_5 = (bool)((((int32_t)L_41) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIK2D::ValidateJoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIK2D_ValidateJoint_m2AF36DEE3416F1F8E87BE9F9ECC5B5B25CC34A37 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___endPosition0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startPosition1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___right2, float ___min3, float ___max4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIK2D_ValidateJoint_m2AF36DEE3416F1F8E87BE9F9ECC5B5B25CC34A37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// var localDifference = endPosition - startPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___endPosition0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___startPosition1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var angle = Vector2.SignedAngle(right, localDifference);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___right2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		float L_5 = Vector2_SignedAngle_m007FAC4E36153EEBC62347D6FA67162238C34C69(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// var validatedPosition = endPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___endPosition0;
		V_2 = L_6;
		// if (angle < min)
		float L_7 = V_1;
		float L_8 = ___min3;
		V_3 = (bool)((((float)L_7) < ((float)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		// var minRotation = Quaternion.Euler(0f, 0f, min);
		float L_10 = ___min3;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// validatedPosition = startPosition + (Vector2)(minRotation * right * localDifference.magnitude);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = ___startPosition1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___right2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_13, L_15, /*hidden argument*/NULL);
		float L_17 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_18, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_12, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_009b;
	}

IL_0056:
	{
		// else if (angle > max)
		float L_21 = V_1;
		float L_22 = ___max4;
		V_5 = (bool)((((float)L_21) > ((float)L_22))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_009b;
		}
	}
	{
		// var maxRotation = Quaternion.Euler(0f, 0f, max);
		float L_24 = ___max4;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		// validatedPosition = startPosition + (Vector2)(maxRotation * right * localDifference.magnitude);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = ___startPosition1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = ___right2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_27, L_29, /*hidden argument*/NULL);
		float L_31 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, L_31, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_32, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_26, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
	}

IL_009b:
	{
		// return validatedPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = V_2;
		V_7 = L_35;
		goto IL_00a0;
	}

IL_00a0:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = V_7;
		return L_36;
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
// Conversion methods for marshalling of: UnityEngine.Experimental.U2D.IK.FABRIKChain2D
IL2CPP_EXTERN_C void FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshal_pinvoke(const FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A& unmarshaled, FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshaled_pinvoke& marshaled)
{
	marshaled.___origin_0 = unmarshaled.get_origin_0();
	marshaled.___target_1 = unmarshaled.get_target_1();
	marshaled.___sqrTolerance_2 = unmarshaled.get_sqrTolerance_2();
	if (unmarshaled.get_positions_3() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_positions_Length = (unmarshaled.get_positions_3())->max_length;
		marshaled.___positions_3 = il2cpp_codegen_marshal_allocate_array<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 >(_unmarshaled_positions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_positions_Length); i++)
		{
			(marshaled.___positions_3)[i] = (unmarshaled.get_positions_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___positions_3 = NULL;
	}
	marshaled.___lengths_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_lengths_4());
	marshaled.___subChainIndices_5 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_subChainIndices_5());
	if (unmarshaled.get_worldPositions_6() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_worldPositions_Length = (unmarshaled.get_worldPositions_6())->max_length;
		marshaled.___worldPositions_6 = il2cpp_codegen_marshal_allocate_array<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E >(_unmarshaled_worldPositions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_worldPositions_Length); i++)
		{
			(marshaled.___worldPositions_6)[i] = (unmarshaled.get_worldPositions_6())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___worldPositions_6 = NULL;
	}
}
IL2CPP_EXTERN_C void FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshal_pinvoke_back(const FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshaled_pinvoke& marshaled, FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_origin_temp_0;
	memset((&unmarshaled_origin_temp_0), 0, sizeof(unmarshaled_origin_temp_0));
	unmarshaled_origin_temp_0 = marshaled.___origin_0;
	unmarshaled.set_origin_0(unmarshaled_origin_temp_0);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_target_temp_1;
	memset((&unmarshaled_target_temp_1), 0, sizeof(unmarshaled_target_temp_1));
	unmarshaled_target_temp_1 = marshaled.___target_1;
	unmarshaled.set_target_1(unmarshaled_target_temp_1);
	float unmarshaled_sqrTolerance_temp_2 = 0.0f;
	unmarshaled_sqrTolerance_temp_2 = marshaled.___sqrTolerance_2;
	unmarshaled.set_sqrTolerance_2(unmarshaled_sqrTolerance_temp_2);
	if (marshaled.___positions_3 != NULL)
	{
		if (unmarshaled.get_positions_3() == NULL)
		{
			unmarshaled.set_positions_3(reinterpret_cast<Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*>((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_positions_3())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_positions_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___positions_3)[i]);
		}
	}
	unmarshaled.set_lengths_4((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___lengths_4));
	unmarshaled.set_subChainIndices_5((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___subChainIndices_5));
	if (marshaled.___worldPositions_6 != NULL)
	{
		if (unmarshaled.get_worldPositions_6() == NULL)
		{
			unmarshaled.set_worldPositions_6(reinterpret_cast<Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*>((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_worldPositions_6())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_worldPositions_6())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___worldPositions_6)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.U2D.IK.FABRIKChain2D
IL2CPP_EXTERN_C void FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshal_pinvoke_cleanup(FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshaled_pinvoke& marshaled)
{
	if (marshaled.___positions_3 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___positions_3);
		marshaled.___positions_3 = NULL;
	}
	il2cpp_codegen_com_destroy_safe_array(marshaled.___lengths_4);
	marshaled.___lengths_4 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___subChainIndices_5);
	marshaled.___subChainIndices_5 = NULL;
	if (marshaled.___worldPositions_6 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___worldPositions_6);
		marshaled.___worldPositions_6 = NULL;
	}
}
// Conversion methods for marshalling of: UnityEngine.Experimental.U2D.IK.FABRIKChain2D
IL2CPP_EXTERN_C void FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshal_com(const FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A& unmarshaled, FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshaled_com& marshaled)
{
	marshaled.___origin_0 = unmarshaled.get_origin_0();
	marshaled.___target_1 = unmarshaled.get_target_1();
	marshaled.___sqrTolerance_2 = unmarshaled.get_sqrTolerance_2();
	if (unmarshaled.get_positions_3() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_positions_Length = (unmarshaled.get_positions_3())->max_length;
		marshaled.___positions_3 = il2cpp_codegen_marshal_allocate_array<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 >(_unmarshaled_positions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_positions_Length); i++)
		{
			(marshaled.___positions_3)[i] = (unmarshaled.get_positions_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___positions_3 = NULL;
	}
	marshaled.___lengths_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.get_lengths_4());
	marshaled.___subChainIndices_5 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_subChainIndices_5());
	if (unmarshaled.get_worldPositions_6() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_worldPositions_Length = (unmarshaled.get_worldPositions_6())->max_length;
		marshaled.___worldPositions_6 = il2cpp_codegen_marshal_allocate_array<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E >(_unmarshaled_worldPositions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_worldPositions_Length); i++)
		{
			(marshaled.___worldPositions_6)[i] = (unmarshaled.get_worldPositions_6())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___worldPositions_6 = NULL;
	}
}
IL2CPP_EXTERN_C void FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshal_com_back(const FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshaled_com& marshaled, FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_origin_temp_0;
	memset((&unmarshaled_origin_temp_0), 0, sizeof(unmarshaled_origin_temp_0));
	unmarshaled_origin_temp_0 = marshaled.___origin_0;
	unmarshaled.set_origin_0(unmarshaled_origin_temp_0);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_target_temp_1;
	memset((&unmarshaled_target_temp_1), 0, sizeof(unmarshaled_target_temp_1));
	unmarshaled_target_temp_1 = marshaled.___target_1;
	unmarshaled.set_target_1(unmarshaled_target_temp_1);
	float unmarshaled_sqrTolerance_temp_2 = 0.0f;
	unmarshaled_sqrTolerance_temp_2 = marshaled.___sqrTolerance_2;
	unmarshaled.set_sqrTolerance_2(unmarshaled_sqrTolerance_temp_2);
	if (marshaled.___positions_3 != NULL)
	{
		if (unmarshaled.get_positions_3() == NULL)
		{
			unmarshaled.set_positions_3(reinterpret_cast<Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*>((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_positions_3())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_positions_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___positions_3)[i]);
		}
	}
	unmarshaled.set_lengths_4((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, marshaled.___lengths_4));
	unmarshaled.set_subChainIndices_5((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___subChainIndices_5));
	if (marshaled.___worldPositions_6 != NULL)
	{
		if (unmarshaled.get_worldPositions_6() == NULL)
		{
			unmarshaled.set_worldPositions_6(reinterpret_cast<Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*>((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_worldPositions_6())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_worldPositions_6())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___worldPositions_6)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.U2D.IK.FABRIKChain2D
IL2CPP_EXTERN_C void FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshal_com_cleanup(FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A_marshaled_com& marshaled)
{
	if (marshaled.___positions_3 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___positions_3);
		marshaled.___positions_3 = NULL;
	}
	il2cpp_codegen_com_destroy_safe_array(marshaled.___lengths_4);
	marshaled.___lengths_4 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___subChainIndices_5);
	marshaled.___subChainIndices_5 = NULL;
	if (marshaled.___worldPositions_6 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___worldPositions_6);
		marshaled.___worldPositions_6 = NULL;
	}
}
// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::get_first()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_first_m6E7E4E7ABCC1D6408CCE3B7640AC2278C86E2F5A (FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return positions[0]; }
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = __this->get_positions_3();
		NullCheck(L_0);
		int32_t L_1 = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// get { return positions[0]; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_first_m6E7E4E7ABCC1D6408CCE3B7640AC2278C86E2F5A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A * _thisAdjusted = reinterpret_cast<FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A *>(__this + _offset);
	return FABRIKChain2D_get_first_m6E7E4E7ABCC1D6408CCE3B7640AC2278C86E2F5A(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.Experimental.U2D.IK.FABRIKChain2D::get_last()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_last_m8159FC465F916027A4EDC44318C71864A5AA3B53 (FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return positions[positions.Length - 1]; }
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = __this->get_positions_3();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = __this->get_positions_3();
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		// get { return positions[positions.Length - 1]; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  FABRIKChain2D_get_last_m8159FC465F916027A4EDC44318C71864A5AA3B53_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A * _thisAdjusted = reinterpret_cast<FABRIKChain2D_t03ED7933AF21B7F2BC68BC72FFE88C53E530720A *>(__this + _offset);
	return FABRIKChain2D_get_last_m8159FC465F916027A4EDC44318C71864A5AA3B53(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Experimental.U2D.IK.FabrikSolver2D::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FabrikSolver2D_get_iterations_mB8129A7196875F830410521CD9AB1CB27435DC27 (FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return m_Iterations; }
		int32_t L_0 = __this->get_m_Iterations_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Iterations; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FabrikSolver2D::set_iterations(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_set_iterations_m1914EAB63AFEBE369C7856489AC8DC5FB003B676 (FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FabrikSolver2D_set_iterations_m1914EAB63AFEBE369C7856489AC8DC5FB003B676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_0, 1, /*hidden argument*/NULL);
		__this->set_m_Iterations_12(L_1);
		// set { m_Iterations = Mathf.Max(value, kMinIterations); }
		return;
	}
}
// System.Single UnityEngine.Experimental.U2D.IK.FabrikSolver2D::get_tolerance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FabrikSolver2D_get_tolerance_m934CF0F1883F66671C5CED5FC99008152A5E9090 (FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return m_Tolerance; }
		float L_0 = __this->get_m_Tolerance_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Tolerance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FabrikSolver2D::set_tolerance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_set_tolerance_m681CDE85817610CB09F887B1BAB91C474DEEB3F7 (FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FabrikSolver2D_set_tolerance_m681CDE85817610CB09F887B1BAB91C474DEEB3F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_0, (0.00100000005f), /*hidden argument*/NULL);
		__this->set_m_Tolerance_13(L_1);
		// set { m_Tolerance = Mathf.Max(value, kMinTolerance); }
		return;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.FabrikSolver2D::GetChainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FabrikSolver2D_GetChainCount_m5984620912151BE3B74E9FA89F095B2C8B47B54C (FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return 1;
		V_0 = 1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.FabrikSolver2D::GetChain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * FabrikSolver2D_GetChain_mBF1A8FCDF9445CBA9F58EF4A1641EDA13CDE5C19 (FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * V_0 = NULL;
	{
		// return m_Chain;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_0 = __this->get_m_Chain_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FabrikSolver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_DoPrepare_m45FEC3593D6945472E611505F279558E52ADF3E4 (FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FabrikSolver2D_DoPrepare_m45FEC3593D6945472E611505F279558E52ADF3E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		// if (m_Positions == null || m_Positions.Length != m_Chain.transformCount)
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = __this->get_m_Positions_15();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = __this->get_m_Positions_15();
		NullCheck(L_1);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_2 = __this->get_m_Chain_11();
		NullCheck(L_2);
		int32_t L_3 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_006e;
		}
	}
	{
		// m_Positions = new Vector2[m_Chain.transformCount];
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_5 = __this->get_m_Chain_11();
		NullCheck(L_5);
		int32_t L_6 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(L_5, /*hidden argument*/NULL);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_7 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_m_Positions_15(L_7);
		// m_Lengths = new float[m_Chain.transformCount - 1];
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_8 = __this->get_m_Chain_11();
		NullCheck(L_8);
		int32_t L_9 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(L_8, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
		__this->set_m_Lengths_14(L_10);
		// m_WorldPositions = new Vector3[m_Chain.transformCount];
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_11 = __this->get_m_Chain_11();
		NullCheck(L_11);
		int32_t L_12 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(L_11, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_13 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->set_m_WorldPositions_16(L_13);
	}

IL_006e:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		V_1 = 0;
		goto IL_00a1;
	}

IL_0072:
	{
		// m_Positions[i] = GetPointOnSolverPlane(m_Chain.transforms[i].position);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_14 = __this->get_m_Positions_15();
		int32_t L_15 = V_1;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_16 = __this->get_m_Chain_11();
		NullCheck(L_16);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_17 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = Solver2D_GetPointOnSolverPlane_mC2F7BC14F2837A6CB2BC1E7AC561DFC49363CB91(__this, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_23);
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00a1:
	{
		// for (int i = 0; i < m_Chain.transformCount; ++i)
		int32_t L_25 = V_1;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_26 = __this->get_m_Chain_11();
		NullCheck(L_26);
		int32_t L_27 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(L_26, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_2;
		if (L_28)
		{
			goto IL_0072;
		}
	}
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		V_3 = 0;
		goto IL_00ed;
	}

IL_00b7:
	{
		// m_Lengths[i] = (m_Positions[i + 1] - m_Positions[i]).magnitude;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_29 = __this->get_m_Lengths_14();
		int32_t L_30 = V_3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_31 = __this->get_m_Positions_15();
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_35 = __this->get_m_Positions_15();
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_34, L_38, /*hidden argument*/NULL);
		V_4 = L_39;
		float L_40 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (float)L_40);
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00ed:
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_42 = V_3;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_43 = __this->get_m_Chain_11();
		NullCheck(L_43);
		int32_t L_44 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(L_43, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_42) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1))))? 1 : 0);
		bool L_45 = V_5;
		if (L_45)
		{
			goto IL_00b7;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FabrikSolver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D_DoUpdateIK_m33A80E5A76E76BEFBE3CF86701399AD35F1CBFE3 (FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___effectorPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FabrikSolver2D_DoUpdateIK_m33A80E5A76E76BEFBE3CF86701399AD35F1CBFE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	{
		// Profiler.BeginSample("FABRIKSolver2D.DoUpdateIK");
		Profiler_BeginSample_m72E4BD9503BC991BAFAED992FF1CA4504C741865_inline(_stringLiteralB41257E5E0C416B372DE6548D39D39CD5B915390, /*hidden argument*/NULL);
		// Vector3 effectorPosition = effectorPositions[0];
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___effectorPositions0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		V_0 = L_1;
		// effectorPosition = GetPointOnSolverPlane(effectorPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Solver2D_GetPointOnSolverPlane_mC2F7BC14F2837A6CB2BC1E7AC561DFC49363CB91(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (FABRIK2D.Solve(effectorPosition, iterations, tolerance, m_Lengths, ref m_Positions))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		int32_t L_6 = FabrikSolver2D_get_iterations_mB8129A7196875F830410521CD9AB1CB27435DC27(__this, /*hidden argument*/NULL);
		float L_7 = FabrikSolver2D_get_tolerance_m934CF0F1883F66671C5CED5FC99008152A5E9090(__this, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = __this->get_m_Lengths_14();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** L_9 = __this->get_address_of_m_Positions_15();
		bool L_10 = FABRIK2D_Solve_m62CB139612039F5D8A835B30F217186FC9580856(L_5, L_6, L_7, L_8, (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA**)L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0109;
		}
	}
	{
		// for (int i = 0; i < m_Positions.Length; ++i)
		V_2 = 0;
		goto IL_006f;
	}

IL_004b:
	{
		// m_WorldPositions[i] = GetWorldPositionFromSolverPlanePoint(m_Positions[i]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = __this->get_m_WorldPositions_16();
		int32_t L_13 = V_2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_14 = __this->get_m_Positions_15();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = Solver2D_GetWorldPositionFromSolverPlanePoint_m7C4987D5B1B73C601EBE12D682FF9D2226CEBA5F(__this, L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_18);
		// for (int i = 0; i < m_Positions.Length; ++i)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006f:
	{
		// for (int i = 0; i < m_Positions.Length; ++i)
		int32_t L_20 = V_2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_21 = __this->get_m_Positions_15();
		NullCheck(L_21);
		V_3 = (bool)((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_004b;
		}
	}
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		V_4 = 0;
		goto IL_00ee;
	}

IL_0083:
	{
		// Vector3 startLocalPosition = m_Chain.transforms[i + 1].localPosition;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_23 = __this->get_m_Chain_11();
		NullCheck(L_23);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_24 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_23, /*hidden argument*/NULL);
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		// Vector3 endLocalPosition = m_Chain.transforms[i].InverseTransformPoint(m_WorldPositions[i + 1]);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_29 = __this->get_m_Chain_11();
		NullCheck(L_29);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_30 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_29, /*hidden argument*/NULL);
		int32_t L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_34 = __this->get_m_WorldPositions_16();
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_33, L_37, /*hidden argument*/NULL);
		V_6 = L_38;
		// m_Chain.transforms[i].localRotation *= Quaternion.FromToRotation(startLocalPosition, endLocalPosition);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_39 = __this->get_m_Chain_11();
		NullCheck(L_39);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_40 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_39, /*hidden argument*/NULL);
		int32_t L_41 = V_4;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = L_43;
		NullCheck(L_44);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_45 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_46, L_47, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_45, L_48, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_44, L_49, /*hidden argument*/NULL);
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_50 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00ee:
	{
		// for (int i = 0; i < m_Chain.transformCount - 1; ++i)
		int32_t L_51 = V_4;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_52 = __this->get_m_Chain_11();
		NullCheck(L_52);
		int32_t L_53 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(L_52, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_51) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)1))))? 1 : 0);
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0083;
		}
	}
	{
	}

IL_0109:
	{
		// Profiler.EndSample();
		Profiler_EndSample_m78C76E709113E225D47687E26EA320E4FC548B71(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.FabrikSolver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FabrikSolver2D__ctor_mE27C95FD21D38F9D60C5728108D105CE527B87DD (FabrikSolver2D_t9706AC682E44FBE177E472627B1F7064BE3D6F2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FabrikSolver2D__ctor_mE27C95FD21D38F9D60C5728108D105CE527B87DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IKChain2D m_Chain = new IKChain2D();
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_0 = (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *)il2cpp_codegen_object_new(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4_il2cpp_TypeInfo_var);
		IKChain2D__ctor_mC537759478AFA5D0995248B7C71903B6CFD9ECA5(L_0, /*hidden argument*/NULL);
		__this->set_m_Chain_11(L_0);
		// private int m_Iterations = 10;
		__this->set_m_Iterations_12(((int32_t)10));
		// private float m_Tolerance = 0.01f;
		__this->set_m_Tolerance_13((0.00999999978f));
		Solver2D__ctor_mCC6DB275466AE16396E6D5287B93C21C6F723E01(__this, /*hidden argument*/NULL);
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
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_effector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	{
		// get { return m_EffectorTransform; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_EffectorTransform_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_EffectorTransform; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::set_effector(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_effector_mE5B7FA390BCF1BAFC3F042266F0FCD76000A775C (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_EffectorTransform = value; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_m_EffectorTransform_0(L_0);
		// set { m_EffectorTransform = value; }
		return;
	}
}
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_target_mBFD7C9223F49270FA667647EE68C2753B16AF796 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	{
		// get { return m_TargetTransform; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_TargetTransform_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_TargetTransform; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::set_target(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_target_m13F696A774FC74C9FC880DAFAAE9A3C57ECB2949 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_TargetTransform = value; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_m_TargetTransform_1(L_0);
		// set { m_TargetTransform = value; }
		return;
	}
}
// UnityEngine.Transform[] UnityEngine.Experimental.U2D.IK.IKChain2D::get_transforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_0 = NULL;
	{
		// get { return m_Transforms; }
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_m_Transforms_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Transforms; }
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_rootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_rootTransform_mD1E8BE034165BA11D4FFE2F52063380B79915E92 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	int32_t G_B4_0 = 0;
	{
		// if (m_Transforms != null && transformCount > 0 && m_Transforms.Length == transformCount)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_m_Transforms_3();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = __this->get_m_Transforms_3();
		NullCheck(L_2);
		int32_t L_3 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))) == ((int32_t)L_3))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// return m_Transforms[0];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_m_Transforms_3();
		NullCheck(L_5);
		int32_t L_6 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_0038;
	}

IL_0034:
	{
		// return null;
		V_1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.IKChain2D::get_lastTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * IKChain2D_get_lastTransform_m509EAC036D50BEF146C07B54BC42AFA8F9B5B8B1 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	int32_t G_B4_0 = 0;
	{
		// if (m_Transforms != null && transformCount > 0 && m_Transforms.Length == transformCount)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_m_Transforms_3();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = __this->get_m_Transforms_3();
		NullCheck(L_2);
		int32_t L_3 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))) == ((int32_t)L_3))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// return m_Transforms[transformCount - 1];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_m_Transforms_3();
		int32_t L_6 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		goto IL_003f;
	}

IL_003b:
	{
		// return null;
		V_1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_1;
		return L_9;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.IKChain2D::get_transformCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return m_TransformCount; }
		int32_t L_0 = __this->get_m_TransformCount_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_TransformCount; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::set_transformCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_set_transformCount_mF2A07A7294A3703A502876A260AB07DD3227F571 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKChain2D_set_transformCount_mF2A07A7294A3703A502876A260AB07DD3227F571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_TransformCount = Mathf.Max(0, value); }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(0, L_0, /*hidden argument*/NULL);
		__this->set_m_TransformCount_2(L_1);
		// set { m_TransformCount = Mathf.Max(0, value); }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.IKChain2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_get_isValid_mBC5D9767500249D602B102A57415FC511F376EF9 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return Validate(); }
		bool L_0 = IKChain2D_Validate_m7B12369B2250ABE74F4DB19B621D3AD0CEEB22E5(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return Validate(); }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Single[] UnityEngine.Experimental.U2D.IK.IKChain2D::get_lengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* IKChain2D_get_lengths_m887E99A57167730FCED53DA4959B834C30B012C7 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	{
		// if(isValid)
		bool L_0 = IKChain2D_get_isValid_mBC5D9767500249D602B102A57415FC511F376EF9(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// PrepareLengths();
		IKChain2D_PrepareLengths_m5A8097EBDEE68C9565117999A7CB99F076628332(__this, /*hidden argument*/NULL);
		// return m_Lengths;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_m_Lengths_6();
		V_1 = L_2;
		goto IL_0020;
	}

IL_001c:
	{
		// return null;
		V_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.IKChain2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKChain2D_Validate_m7B12369B2250ABE74F4DB19B621D3AD0CEEB22E5 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKChain2D_Validate_m7B12369B2250ABE74F4DB19B621D3AD0CEEB22E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B26_0 = 0;
	{
		// if (effector == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_0018:
	{
		// if (transformCount == 0)
		int32_t L_3 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_002c:
	{
		// if (m_Transforms == null || m_Transforms.Length != transformCount)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_m_Transforms_3();
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6 = __this->get_m_Transforms_3();
		NullCheck(L_6);
		int32_t L_7 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		G_B7_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004a;
	}

IL_0049:
	{
		G_B7_0 = 1;
	}

IL_004a:
	{
		V_3 = (bool)G_B7_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_0055:
	{
		// if (m_DefaultLocalRotations == null || m_DefaultLocalRotations.Length != transformCount)
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_9 = __this->get_m_DefaultLocalRotations_4();
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_10 = __this->get_m_DefaultLocalRotations_4();
		NullCheck(L_10);
		int32_t L_11 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B12_0 = 1;
	}

IL_0073:
	{
		V_4 = (bool)G_B12_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_0080:
	{
		// if (m_StoredLocalRotations ==  null || m_StoredLocalRotations.Length != transformCount)
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_13 = __this->get_m_StoredLocalRotations_5();
		if (!L_13)
		{
			goto IL_009d;
		}
	}
	{
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_14 = __this->get_m_StoredLocalRotations_5();
		NullCheck(L_14);
		int32_t L_15 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		G_B17_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B17_0 = 1;
	}

IL_009e:
	{
		V_5 = (bool)G_B17_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_00a8;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_00a8:
	{
		// if (rootTransform == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = IKChain2D_get_rootTransform_mD1E8BE034165BA11D4FFE2F52063380B79915E92(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_18;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00be;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_00be:
	{
		// if (lastTransform != effector)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = IKChain2D_get_lastTransform_m509EAC036D50BEF146C07B54BC42AFA8F9B5B8B1(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_20, L_21, /*hidden argument*/NULL);
		V_7 = L_22;
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00d9;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_00d9:
	{
		// if (target && IKUtility.IsDescendentOf(target, rootTransform))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = IKChain2D_get_target_mBFD7C9223F49270FA667647EE68C2753B16AF796(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00f9;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = IKChain2D_get_target_mBFD7C9223F49270FA667647EE68C2753B16AF796(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = IKChain2D_get_rootTransform_mD1E8BE034165BA11D4FFE2F52063380B79915E92(__this, /*hidden argument*/NULL);
		bool L_28 = IKUtility_IsDescendentOf_mE41AE4CAE6AA247768E912955D61F36C6032E0C0(L_26, L_27, /*hidden argument*/NULL);
		G_B26_0 = ((int32_t)(L_28));
		goto IL_00fa;
	}

IL_00f9:
	{
		G_B26_0 = 0;
	}

IL_00fa:
	{
		V_8 = (bool)G_B26_0;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_0104;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0108;
	}

IL_0104:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0108;
	}

IL_0108:
	{
		// }
		bool L_30 = V_1;
		return L_30;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_Initialize_m9C97EB59783A05B1416FF84B4D473787A97E7E2B (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKChain2D_Initialize_m9C97EB59783A05B1416FF84B4D473787A97E7E2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// if (effector == null || transformCount == 0 || IKUtility.GetAncestorCount(effector) < transformCount - 1)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A(__this, /*hidden argument*/NULL);
		int32_t L_4 = IKUtility_GetAncestorCount_m6B5E942815A7A056CD1DB42A95131598F77623B0(L_3, /*hidden argument*/NULL);
		int32_t L_5 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_4) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B4_0 = 1;
	}

IL_002f:
	{
		V_2 = (bool)G_B4_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// return;
		goto IL_00bb;
	}

IL_0038:
	{
		// m_Transforms = new Transform[transformCount];
		int32_t L_7 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_8 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->set_m_Transforms_3(L_8);
		// m_DefaultLocalRotations = new Quaternion[transformCount];
		int32_t L_9 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_10 = (QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)SZArrayNew(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->set_m_DefaultLocalRotations_4(L_10);
		// m_StoredLocalRotations = new Quaternion[transformCount];
		int32_t L_11 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_12 = (QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)SZArrayNew(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->set_m_StoredLocalRotations_5(L_12);
		// var currentTransform = effector;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A(__this, /*hidden argument*/NULL);
		V_0 = L_13;
		// int index = transformCount - 1;
		int32_t L_14 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		goto IL_00a5;
	}

IL_007d:
	{
		// m_Transforms[index] = currentTransform;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_15 = __this->get_m_Transforms_3();
		int32_t L_16 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = V_0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_17);
		// m_DefaultLocalRotations[index] = currentTransform.localRotation;
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_18 = __this->get_m_DefaultLocalRotations_4();
		int32_t L_19 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = V_0;
		NullCheck(L_20);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_21);
		// currentTransform = currentTransform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = V_0;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		// --index;
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
	}

IL_00a5:
	{
		// while (currentTransform && index >= 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_27 = V_1;
		G_B11_0 = ((((int32_t)((((int32_t)L_27) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B11_0 = 0;
	}

IL_00b7:
	{
		V_3 = (bool)G_B11_0;
		bool L_28 = V_3;
		if (L_28)
		{
			goto IL_007d;
		}
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::PrepareLengths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_PrepareLengths_m5A8097EBDEE68C9565117999A7CB99F076628332 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKChain2D_PrepareLengths_m5A8097EBDEE68C9565117999A7CB99F076628332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// var currentTransform = effector;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// int index = transformCount - 1;
		int32_t L_1 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		// if (m_Lengths == null || m_Lengths.Length != transformCount - 1)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_m_Lengths_6();
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = __this->get_m_Lengths_6();
		NullCheck(L_3);
		int32_t L_4 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 1;
	}

IL_0031:
	{
		V_2 = (bool)G_B3_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// m_Lengths = new float[transformCount - 1];
		int32_t L_6 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		__this->set_m_Lengths_6(L_7);
	}

IL_0048:
	{
		goto IL_0098;
	}

IL_004a:
	{
		// if (currentTransform.parent && index > 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_11 = V_1;
		G_B9_0 = ((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B9_0 = 0;
	}

IL_005f:
	{
		V_3 = (bool)G_B9_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		// m_Lengths[index - 1] = (currentTransform.position - currentTransform.parent.position).magnitude;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = __this->get_m_Lengths_6();
		int32_t L_14 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = V_0;
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = V_0;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_16, L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		float L_21 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1))), (float)L_21);
	}

IL_008c:
	{
		// currentTransform = currentTransform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = V_0;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		// --index;
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
	}

IL_0098:
	{
		// while (currentTransform && index >= 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_27 = V_1;
		G_B15_0 = ((((int32_t)((((int32_t)L_27) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B15_0 = 0;
	}

IL_00aa:
	{
		V_5 = (bool)G_B15_0;
		bool L_28 = V_5;
		if (L_28)
		{
			goto IL_004a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::RestoreDefaultPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_RestoreDefaultPose_m2FF5188FF2EE2E7FA4753C7F6E38F50FBCB1E1BC (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, bool ___targetRotationIsConstrained0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// var count = targetRotationIsConstrained ? transformCount : transformCount-1;
		bool L_0 = ___targetRotationIsConstrained0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0014;
	}

IL_000e:
	{
		int32_t L_2 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < count; ++i)
		V_1 = 0;
		goto IL_0037;
	}

IL_0019:
	{
		// m_Transforms[i].localRotation = m_DefaultLocalRotations[i];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_m_Transforms_3();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_7 = __this->get_m_DefaultLocalRotations_4();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_6, L_10, /*hidden argument*/NULL);
		// for (int i = 0; i < count; ++i)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		V_2 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_StoreLocalRotations_m422F4655EEB7D1B783F80898F4EDBCA9A9658EFF (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < m_Transforms.Length; ++i)
		V_0 = 0;
		goto IL_0022;
	}

IL_0005:
	{
		// m_StoredLocalRotations[i] = m_Transforms[i].localRotation;
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_0 = __this->get_m_StoredLocalRotations_5();
		int32_t L_1 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = __this->get_m_Transforms_3();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_6);
		// for (int i = 0; i < m_Transforms.Length; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < m_Transforms.Length; ++i)
		int32_t L_8 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_9 = __this->get_m_Transforms_3();
		NullCheck(L_9);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))? 1 : 0);
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::BlendFkToIk(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D_BlendFkToIk_m879633DF8BEB0F0237154414358F37E4B338B1FF (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, float ___finalWeight0, bool ___targetRotationIsConstrained1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKChain2D_BlendFkToIk_m879633DF8BEB0F0237154414358F37E4B338B1FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// var count = targetRotationIsConstrained ? transformCount : transformCount-1;
		bool L_0 = ___targetRotationIsConstrained1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0014;
	}

IL_000e:
	{
		int32_t L_2 = IKChain2D_get_transformCount_mD355C43CE944C57AE3DA5F6F7A38FA737ACC43F4(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < count; ++i)
		V_1 = 0;
		goto IL_004a;
	}

IL_0019:
	{
		// m_Transforms[i].localRotation = Quaternion.Slerp(m_StoredLocalRotations[i], m_Transforms[i].localRotation, finalWeight);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_m_Transforms_3();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_7 = __this->get_m_StoredLocalRotations_5();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11 = __this->get_m_Transforms_3();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_14, /*hidden argument*/NULL);
		float L_16 = ___finalWeight0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_10, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_6, L_17, /*hidden argument*/NULL);
		// for (int i = 0; i < count; ++i)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004a:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		V_2 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKChain2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKChain2D__ctor_mC537759478AFA5D0995248B7C71903B6CFD9ECA5 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Single UnityEngine.Experimental.U2D.IK.IKManager2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IKManager2D_get_weight_m11331D8209A9A0BBE68EBA30EED212DBE2248331 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return m_Weight; }
		float L_0 = __this->get_m_Weight_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Weight; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_set_weight_mF8105ECAF1F32A4E3AA0CCB6242EFEADD84F10C8 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_set_weight_mF8105ECAF1F32A4E3AA0CCB6242EFEADD84F10C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Weight = Mathf.Clamp01(value); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		__this->set_m_Weight_5(L_1);
		// set { m_Weight = Mathf.Clamp01(value); }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Experimental.U2D.IK.Solver2D> UnityEngine.Experimental.U2D.IK.IKManager2D::get_solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * IKManager2D_get_solvers_m6961B299CE82AB502181E9459A333DFDB8CB445E (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method)
{
	List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * V_0 = NULL;
	{
		// get { return m_Solvers; }
		List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * L_0 = __this->get_m_Solvers_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Solvers; }
		List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_OnValidate_mDD2B7EE44347ABBB52D7D9377198CF9115330C2F (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_OnValidate_mDD2B7EE44347ABBB52D7D9377198CF9115330C2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Weight = Mathf.Clamp01(m_Weight);
		float L_0 = __this->get_m_Weight_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		__this->set_m_Weight_5(L_1);
		// OnEditorDataValidate();
		IKManager2D_OnEditorDataValidate_mB27512376B2F9A6AFBFB9CF845FD39E776CE9E51(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_OnEnable_m48145A40DA92BD713EA90E39F28EA9DB3C5B96B8 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_Reset_m5765A3991F37FBD6B99AD8D24B58174D56D59D76 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method)
{
	{
		// FindChildSolvers();
		IKManager2D_FindChildSolvers_m248908F8894EFD349EF10D4E8097DEC3A982D508(__this, /*hidden argument*/NULL);
		// OnEditorDataValidate();
		IKManager2D_OnEditorDataValidate_mB27512376B2F9A6AFBFB9CF845FD39E776CE9E51(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::FindChildSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_FindChildSolvers_m248908F8894EFD349EF10D4E8097DEC3A982D508 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_FindChildSolvers_m248908F8894EFD349EF10D4E8097DEC3A982D508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * V_0 = NULL;
	Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// m_Solvers.Clear();
		List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * L_0 = __this->get_m_Solvers_4();
		NullCheck(L_0);
		List_1_Clear_m5AA81C764170C3D0234228C4A078AAB0299A5CE3(L_0, /*hidden argument*/List_1_Clear_m5AA81C764170C3D0234228C4A078AAB0299A5CE3_RuntimeMethod_var);
		// List<Solver2D> solvers = new List<Solver2D>();
		List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * L_1 = (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 *)il2cpp_codegen_object_new(List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7_il2cpp_TypeInfo_var);
		List_1__ctor_m807E5FD7A629A4ED317C13EEA86F979F90729E68(L_1, /*hidden argument*/List_1__ctor_m807E5FD7A629A4ED317C13EEA86F979F90729E68_RuntimeMethod_var);
		V_0 = L_1;
		// transform.GetComponentsInChildren<Solver2D>(true, solvers);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * L_3 = V_0;
		NullCheck(L_2);
		Component_GetComponentsInChildren_TisSolver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E_m46C29F52C5F20AD5CF90ED5F72E4C5D3111AA776(L_2, (bool)1, L_3, /*hidden argument*/Component_GetComponentsInChildren_TisSolver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E_m46C29F52C5F20AD5CF90ED5F72E4C5D3111AA776_RuntimeMethod_var);
		// foreach (Solver2D solver in solvers)
		List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * L_4 = V_0;
		NullCheck(L_4);
		Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF  L_5 = List_1_GetEnumerator_m815B0297DD0A45AF5944C2DC64DB2DF02AF38BED(L_4, /*hidden argument*/List_1_GetEnumerator_m815B0297DD0A45AF5944C2DC64DB2DF02AF38BED_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_002b:
		{
			// foreach (Solver2D solver in solvers)
			Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_6 = Enumerator_get_Current_m7344EE67A09562114B6B179675E6C262A3013368_inline((Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7344EE67A09562114B6B179675E6C262A3013368_RuntimeMethod_var);
			V_2 = L_6;
			// if (solver.GetComponentInParent<IKManager2D>() == this)
			Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_7 = V_2;
			NullCheck(L_7);
			IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * L_8 = Component_GetComponentInParent_TisIKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393_m3325CB9828B68496A6028EF534918913B95DE1E8(L_7, /*hidden argument*/Component_GetComponentInParent_TisIKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393_m3325CB9828B68496A6028EF534918913B95DE1E8_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, __this, /*hidden argument*/NULL);
			V_3 = L_9;
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_004c;
			}
		}

IL_0044:
		{
			// AddSolver(solver);
			Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_11 = V_2;
			IKManager2D_AddSolver_m8EECC9DD42B3362C0E548D2C40B808D3B16CEC0E(__this, L_11, /*hidden argument*/NULL);
		}

IL_004c:
		{
		}

IL_004d:
		{
			// foreach (Solver2D solver in solvers)
			bool L_12 = Enumerator_MoveNext_m8E88B1FF45DADFEF961F6849956FA9C3FF520D76((Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m8E88B1FF45DADFEF961F6849956FA9C3FF520D76_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_002b;
			}
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4F1F490111786DDF83200465C839AFAC4E1FE94B((Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF *)(&V_1), /*hidden argument*/Enumerator_Dispose_m4F1F490111786DDF83200465C839AFAC4E1FE94B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x67, IL_0067)
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::AddSolver(UnityEngine.Experimental.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_AddSolver_m8EECC9DD42B3362C0E548D2C40B808D3B16CEC0E (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_AddSolver_m8EECC9DD42B3362C0E548D2C40B808D3B16CEC0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!m_Solvers.Contains(solver))
		List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * L_0 = __this->get_m_Solvers_4();
		Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_1 = ___solver0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_mDB90A5F758E33AD6D4DDFA2C0D2F38DCD6A46224(L_0, L_1, /*hidden argument*/List_1_Contains_mDB90A5F758E33AD6D4DDFA2C0D2F38DCD6A46224_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// m_Solvers.Add(solver);
		List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * L_4 = __this->get_m_Solvers_4();
		Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_5 = ___solver0;
		NullCheck(L_4);
		List_1_Add_m519CB03985A9E3DDEAD0D674BBDC4302AC39CF5E(L_4, L_5, /*hidden argument*/List_1_Add_m519CB03985A9E3DDEAD0D674BBDC4302AC39CF5E_RuntimeMethod_var);
		// AddSolverEditorData();
		IKManager2D_AddSolverEditorData_m6A05FFDEA189FD159506CF6139E633CD36E39395(__this, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::RemoveSolver(UnityEngine.Experimental.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_RemoveSolver_mE28EC08E173AAB345724C71FA6BF79D3F50888EC (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_RemoveSolver_mE28EC08E173AAB345724C71FA6BF79D3F50888EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RemoveSolverEditorData(solver);
		Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_0 = ___solver0;
		IKManager2D_RemoveSolverEditorData_mDBFCAB474FE63F897A3C49C0B89F45F3186723A3(__this, L_0, /*hidden argument*/NULL);
		// m_Solvers.Remove(solver);
		List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * L_1 = __this->get_m_Solvers_4();
		Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_2 = ___solver0;
		NullCheck(L_1);
		List_1_Remove_mCB1E88E8A08E765FD46E9397B5AF62578926647B(L_1, L_2, /*hidden argument*/List_1_Remove_mCB1E88E8A08E765FD46E9397B5AF62578926647B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::UpdateManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_UpdateManager_mBF7899421C7354384D5B906DDC5CFF0369F0798E (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D_UpdateManager_mBF7899421C7354384D5B906DDC5CFF0369F0798E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	{
		// foreach (var solver in m_Solvers)
		List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * L_0 = __this->get_m_Solvers_4();
		NullCheck(L_0);
		Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF  L_1 = List_1_GetEnumerator_m815B0297DD0A45AF5944C2DC64DB2DF02AF38BED(L_0, /*hidden argument*/List_1_GetEnumerator_m815B0297DD0A45AF5944C2DC64DB2DF02AF38BED_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0056;
		}

IL_0010:
		{
			// foreach (var solver in m_Solvers)
			Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_2 = Enumerator_get_Current_m7344EE67A09562114B6B179675E6C262A3013368_inline((Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7344EE67A09562114B6B179675E6C262A3013368_RuntimeMethod_var);
			V_1 = L_2;
			// if (solver == null || !solver.isActiveAndEnabled)
			Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_3 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_002d;
			}
		}

IL_0022:
		{
			Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(L_5, /*hidden argument*/NULL);
			G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			goto IL_002e;
		}

IL_002d:
		{
			G_B5_0 = 1;
		}

IL_002e:
		{
			V_2 = (bool)G_B5_0;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0034;
			}
		}

IL_0032:
		{
			// continue;
			goto IL_0056;
		}

IL_0034:
		{
			// if (!solver.isValid)
			Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = Solver2D_get_isValid_mA90190EDB5213ECC3C04FAA3D46D9A7D0BDAECFA(L_8, /*hidden argument*/NULL);
			V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_0048;
			}
		}

IL_0041:
		{
			// solver.Initialize();
			Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_11 = V_1;
			NullCheck(L_11);
			Solver2D_Initialize_m564277A15FA0C0EFBDB6EAF819CFEF6D45753447(L_11, /*hidden argument*/NULL);
		}

IL_0048:
		{
			// solver.UpdateIK(weight);
			Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * L_12 = V_1;
			float L_13 = IKManager2D_get_weight_m11331D8209A9A0BBE68EBA30EED212DBE2248331(__this, /*hidden argument*/NULL);
			NullCheck(L_12);
			Solver2D_UpdateIK_m1747A6FC5D5C447B9A9E9A8EC55B2FF13DE9EFA5(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0056:
		{
			// foreach (var solver in m_Solvers)
			bool L_14 = Enumerator_MoveNext_m8E88B1FF45DADFEF961F6849956FA9C3FF520D76((Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8E88B1FF45DADFEF961F6849956FA9C3FF520D76_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0010;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x70, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4F1F490111786DDF83200465C839AFAC4E1FE94B((Enumerator_t1BD2575869D5E1887C29281B8FF44534CE6176FF *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4F1F490111786DDF83200465C839AFAC4E1FE94B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x70, IL_0070)
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_LateUpdate_mCB7F8224E4A3A680F1C4BB2CDD208EFD880486EE (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method)
{
	{
		// UpdateManager();
		IKManager2D_UpdateManager_mBF7899421C7354384D5B906DDC5CFF0369F0798E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::OnEditorDataValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_OnEditorDataValidate_mB27512376B2F9A6AFBFB9CF845FD39E776CE9E51 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method)
{
	{
		// void OnEditorDataValidate(){}
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::AddSolverEditorData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_AddSolverEditorData_m6A05FFDEA189FD159506CF6139E633CD36E39395 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method)
{
	{
		// void AddSolverEditorData(){}
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::RemoveSolverEditorData(UnityEngine.Experimental.U2D.IK.Solver2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D_RemoveSolverEditorData_mDBFCAB474FE63F897A3C49C0B89F45F3186723A3 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * ___solver0, const RuntimeMethod* method)
{
	{
		// void RemoveSolverEditorData(Solver2D solver){}
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKManager2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKManager2D__ctor_mD22976BC18FB29467B257719B283945BFA46D0D8 (IKManager2D_tC223DBF073D52E64216D85394FF6844493E0C393 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKManager2D__ctor_mD22976BC18FB29467B257719B283945BFA46D0D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Solver2D> m_Solvers = new List<Solver2D>();
		List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 * L_0 = (List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7 *)il2cpp_codegen_object_new(List_1_tEE34E689E9159D894F7AEE01ACA759940DADA3A7_il2cpp_TypeInfo_var);
		List_1__ctor_m807E5FD7A629A4ED317C13EEA86F979F90729E68(L_0, /*hidden argument*/List_1__ctor_m807E5FD7A629A4ED317C13EEA86F979F90729E68_RuntimeMethod_var);
		__this->set_m_Solvers_4(L_0);
		// private float m_Weight = 1f;
		__this->set_m_Weight_5((1.0f));
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
// System.Boolean UnityEngine.Experimental.U2D.IK.IKUtility::IsDescendentOf(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IKUtility_IsDescendentOf_mE41AE4CAE6AA247768E912955D61F36C6032E0C0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ancestor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKUtility_IsDescendentOf_mE41AE4CAE6AA247768E912955D61F36C6032E0C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// Debug.Assert(transform != null, "Transform is null");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m28EC098B41C037ED14C42FE47D0E5355CD2437F5(L_1, _stringLiteral6C99ECD71BC1A07A255289D56C289E257B38FF27, /*hidden argument*/NULL);
		// Transform currentParent = transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___transform0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0034;
	}

IL_001c:
	{
		// if (currentParent == ancestor)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___ancestor1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0042;
	}

IL_002c:
	{
		// currentParent = currentParent.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0034:
	{
		// while (currentParent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.IKUtility::GetAncestorCount(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKUtility_GetAncestorCount_m6B5E942815A7A056CD1DB42A95131598F77623B0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKUtility_GetAncestorCount_m6B5E942815A7A056CD1DB42A95131598F77623B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// Debug.Assert(transform != null, "Transform is null");
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m28EC098B41C037ED14C42FE47D0E5355CD2437F5(L_1, _stringLiteral6C99ECD71BC1A07A255289D56C289E257B38FF27, /*hidden argument*/NULL);
		// int ancestorCount = 0;
		V_0 = 0;
		goto IL_0025;
	}

IL_0017:
	{
		// ++ancestorCount;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		// transform = transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___transform0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_3, /*hidden argument*/NULL);
		___transform0 = L_4;
	}

IL_0025:
	{
		// while (transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___transform0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0017;
		}
	}
	{
		// return ancestorCount;
		int32_t L_9 = V_0;
		V_2 = L_9;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		int32_t L_10 = V_2;
		return L_10;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.IKUtility::GetMaxChainCount(UnityEngine.Experimental.U2D.IK.IKChain2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IKUtility_GetMaxChainCount_m1955D4E86004E5A1BC080F4E13C58A1B4F67B071 (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * ___chain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKUtility_GetMaxChainCount_m1955D4E86004E5A1BC080F4E13C58A1B4F67B071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// int maxChainCount = 0;
		V_0 = 0;
		// if (chain.effector)
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_0 = ___chain0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// maxChainCount = GetAncestorCount(chain.effector) + 1;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_4 = ___chain0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A(L_4, /*hidden argument*/NULL);
		int32_t L_6 = IKUtility_GetAncestorCount_m6B5E942815A7A056CD1DB42A95131598F77623B0(L_5, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0020:
	{
		// return maxChainCount;
		int32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		int32_t L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.IKUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IKUtility__ctor_m00B7AAE6DEF239DEC25FB6F15313A3BBDF500586 (IKUtility_t23FEEBEA9DB6EE7BE8567F25790ED90B6AD18CB7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Experimental.U2D.IK.Limb::Solve(UnityEngine.Vector3,System.Single[],UnityEngine.Vector3[],System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Limb_Solve_m2DBC3ADD10CD710B8F3A54B3EBA8D74B3823FEC2 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengths1, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___angles3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Limb_Solve_m2DBC3ADD10CD710B8F3A54B3EBA8D74B3823FEC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		// angles[0] = 0f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_0 = ___angles3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_0);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0f));
		// angles[1] = 0f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_2 = ___angles3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_2);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0f));
		// if (lengths[0] == 0f || lengths[1] == 0f)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___lengths1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_0029;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ___lengths1;
		NullCheck(L_7);
		int32_t L_8 = 1;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((float)L_9) == ((float)(0.0f)))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_7 = (bool)G_B3_0;
		bool L_10 = V_7;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		// return false;
		V_8 = (bool)0;
		goto IL_00ed;
	}

IL_0038:
	{
		// Vector3 startToEnd = targetPosition - positions[0];
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___targetPosition0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = ___positions2;
		NullCheck(L_12);
		int32_t L_13 = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// float distanceMagnitude = startToEnd.magnitude;
		float L_16 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_16;
		// float sqrDistance = startToEnd.sqrMagnitude;
		float L_17 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_17;
		// float sqrParentLength = (lengths[0] * lengths[0]);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = ___lengths1;
		NullCheck(L_18);
		int32_t L_19 = 0;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = ___lengths1;
		NullCheck(L_21);
		int32_t L_22 = 0;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((float)il2cpp_codegen_multiply((float)L_20, (float)L_23));
		// float sqrTargetLength = (lengths[1] * lengths[1]);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = ___lengths1;
		NullCheck(L_24);
		int32_t L_25 = 1;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = ___lengths1;
		NullCheck(L_27);
		int32_t L_28 = 1;
		float L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = ((float)il2cpp_codegen_multiply((float)L_26, (float)L_29));
		// float angle0Cos = (sqrDistance + sqrParentLength - sqrTargetLength) / (2f * lengths[0] * distanceMagnitude);
		float L_30 = V_2;
		float L_31 = V_3;
		float L_32 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_33 = ___lengths1;
		NullCheck(L_33);
		int32_t L_34 = 0;
		float L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		float L_36 = V_1;
		V_5 = ((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_30, (float)L_31)), (float)L_32))/(float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_35)), (float)L_36))));
		// float angle1Cos = (sqrDistance - sqrParentLength - sqrTargetLength) / (2f * lengths[0] * lengths[1]);
		float L_37 = V_2;
		float L_38 = V_3;
		float L_39 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_40 = ___lengths1;
		NullCheck(L_40);
		int32_t L_41 = 0;
		float L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_43 = ___lengths1;
		NullCheck(L_43);
		int32_t L_44 = 1;
		float L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = ((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_37, (float)L_38)), (float)L_39))/(float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_42)), (float)L_45))));
		// if ((angle0Cos >= -1f && angle0Cos <= 1f) && (angle1Cos >= -1f && angle1Cos <= 1f))
		float L_46 = V_5;
		if ((!(((float)L_46) >= ((float)(-1.0f)))))
		{
			goto IL_00bd;
		}
	}
	{
		float L_47 = V_5;
		if ((!(((float)L_47) <= ((float)(1.0f)))))
		{
			goto IL_00bd;
		}
	}
	{
		float L_48 = V_6;
		if ((!(((float)L_48) >= ((float)(-1.0f)))))
		{
			goto IL_00ba;
		}
	}
	{
		float L_49 = V_6;
		G_B10_0 = ((((int32_t)((!(((float)L_49) <= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00bb;
	}

IL_00ba:
	{
		G_B10_0 = 0;
	}

IL_00bb:
	{
		G_B12_0 = G_B10_0;
		goto IL_00be;
	}

IL_00bd:
	{
		G_B12_0 = 0;
	}

IL_00be:
	{
		V_9 = (bool)G_B12_0;
		bool L_50 = V_9;
		if (!L_50)
		{
			goto IL_00e8;
		}
	}
	{
		// angles[0] = Mathf.Acos(angle0Cos) * Mathf.Rad2Deg;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_51 = ___angles3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_52 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_51);
		float L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_54 = acosf(L_53);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_multiply((float)L_54, (float)(57.2957802f))));
		// angles[1] = Mathf.Acos(angle1Cos) * Mathf.Rad2Deg;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_55 = ___angles3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_56 = *((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_55);
		float L_57 = V_6;
		float L_58 = acosf(L_57);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)il2cpp_codegen_multiply((float)L_58, (float)(57.2957802f))));
	}

IL_00e8:
	{
		// return true;
		V_8 = (bool)1;
		goto IL_00ed;
	}

IL_00ed:
	{
		// }
		bool L_59 = V_8;
		return L_59;
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
// System.Boolean UnityEngine.Experimental.U2D.IK.LimbSolver2D::get_flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LimbSolver2D_get_flip_mB0A246EA13CCE21FA6B9CC65BBBF08E75B26A835 (LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return m_Flip; }
		bool L_0 = __this->get_m_Flip_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Flip; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.LimbSolver2D::set_flip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_set_flip_mCCD4B733706AA289804CAFA6373847053212179C (LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Flip = value; }
		bool L_0 = ___value0;
		__this->set_m_Flip_10(L_0);
		// set { m_Flip = value; }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.LimbSolver2D::DoInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_DoInitialize_m718695616A729AC52A91EE036464F1BCEDC88E57 (LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LimbSolver2D_DoInitialize_m718695616A729AC52A91EE036464F1BCEDC88E57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * G_B3_0 = NULL;
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * G_B1_0 = NULL;
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * G_B4_1 = NULL;
	{
		// m_Chain.transformCount = m_Chain.effector == null || IKUtility.GetAncestorCount(m_Chain.effector) < 2 ? 0 : 3;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_0 = __this->get_m_Chain_9();
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_1 = __this->get_m_Chain_9();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B3_0 = L_0;
			goto IL_0030;
		}
	}
	{
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_4 = __this->get_m_Chain_9();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A(L_4, /*hidden argument*/NULL);
		int32_t L_6 = IKUtility_GetAncestorCount_m6B5E942815A7A056CD1DB42A95131598F77623B0(L_5, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			G_B3_0 = G_B1_0;
			goto IL_0030;
		}
	}
	{
		G_B4_0 = 3;
		G_B4_1 = G_B2_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0031:
	{
		NullCheck(G_B4_1);
		IKChain2D_set_transformCount_mF2A07A7294A3703A502876A260AB07DD3227F571(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		// base.DoInitialize();
		Solver2D_DoInitialize_m135AAFEFA2AE3E1A0E22278EF6E2CBE123B3F9BC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Experimental.U2D.IK.LimbSolver2D::GetChainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LimbSolver2D_GetChainCount_mA1E1D6A6F1CB3FDDFA7D7B6B590B09080E7A01AF (LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return 1;
		V_0 = 1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.LimbSolver2D::GetChain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * LimbSolver2D_GetChain_mA458902DA4B579B31527A25C340697C00A44F506 (LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED * __this, int32_t ___index0, const RuntimeMethod* method)
{
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * V_0 = NULL;
	{
		// return m_Chain;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_0 = __this->get_m_Chain_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.LimbSolver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_DoPrepare_mBB2FFE47BD5F38DB31BC4E5AD11404062AD545DD (LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED * __this, const RuntimeMethod* method)
{
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// var lengths = m_Chain.lengths;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_0 = __this->get_m_Chain_9();
		NullCheck(L_0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = IKChain2D_get_lengths_m887E99A57167730FCED53DA4959B834C30B012C7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// m_Positions[0] = m_Chain.transforms[0].position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = __this->get_m_Positions_11();
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_3 = __this->get_m_Chain_9();
		NullCheck(L_3);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_4 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_7);
		// m_Positions[1] = m_Chain.transforms[1].position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_m_Positions_11();
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_9 = __this->get_m_Chain_9();
		NullCheck(L_9);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_13);
		// m_Positions[2] = m_Chain.transforms[2].position;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = __this->get_m_Positions_11();
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_15 = __this->get_m_Chain_9();
		NullCheck(L_15);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_16 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17 = 2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_19);
		// m_Lengths[0] = lengths[0];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = __this->get_m_Lengths_12();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 0;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_23);
		// m_Lengths[1] = lengths[1];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = __this->get_m_Lengths_12();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 1;
		float L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_27);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.LimbSolver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D_DoUpdateIK_m32D42D0A0D27503DD3FB7E1FC76A2C913B112C2F (LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___effectorPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LimbSolver2D_DoUpdateIK_m32D42D0A0D27503DD3FB7E1FC76A2C913B112C2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B7_0 = 0.0f;
	{
		// Vector3 effectorPosition = effectorPositions[0];
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___effectorPositions0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		V_0 = L_1;
		// Vector2 effectorLocalPosition2D = m_Chain.transforms[0].InverseTransformPoint(effectorPosition);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_2 = __this->get_m_Chain_9();
		NullCheck(L_2);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// effectorPosition = m_Chain.transforms[0].TransformPoint(effectorLocalPosition2D);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_9 = __this->get_m_Chain_9();
		NullCheck(L_9);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_12, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// if (effectorLocalPosition2D.sqrMagnitude > 0f && Limb.Solve(effectorPosition, m_Lengths, m_Positions, ref m_Angles))
		float L_16 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = __this->get_m_Lengths_12();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_19 = __this->get_m_Positions_11();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_20 = __this->get_address_of_m_Angles_13();
		bool L_21 = Limb_Solve_m2DBC3ADD10CD710B8F3A54B3EBA8D74B3823FEC2(L_17, L_18, L_19, (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA**)L_20, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_21));
		goto IL_0064;
	}

IL_0063:
	{
		G_B3_0 = 0;
	}

IL_0064:
	{
		V_2 = (bool)G_B3_0;
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_015f;
		}
	}
	{
		// float flipSign = flip ? -1f : 1f;
		bool L_23 = LimbSolver2D_get_flip_mB0A246EA13CCE21FA6B9CC65BBBF08E75B26A835(__this, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_007b;
		}
	}
	{
		G_B7_0 = (1.0f);
		goto IL_0080;
	}

IL_007b:
	{
		G_B7_0 = (-1.0f);
	}

IL_0080:
	{
		V_3 = G_B7_0;
		// m_Chain.transforms[0].localRotation *= Quaternion.FromToRotation(Vector3.right, effectorLocalPosition2D) * Quaternion.FromToRotation(m_Chain.transforms[1].localPosition, Vector3.right);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_24 = __this->get_m_Chain_9();
		NullCheck(L_24);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_25 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = L_27;
		NullCheck(L_28);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_30, L_32, /*hidden argument*/NULL);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_34 = __this->get_m_Chain_9();
		NullCheck(L_34);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_35 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_36 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_38, L_39, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_33, L_40, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_42 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_29, L_41, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_28, L_42, /*hidden argument*/NULL);
		// m_Chain.transforms[0].localRotation *= Quaternion.AngleAxis(flipSign * m_Angles[0], Vector3.forward);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_43 = __this->get_m_Chain_9();
		NullCheck(L_43);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_44 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		int32_t L_45 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = L_46;
		NullCheck(L_47);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_47, /*hidden argument*/NULL);
		float L_49 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = __this->get_m_Angles_13();
		NullCheck(L_50);
		int32_t L_51 = 0;
		float L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_multiply((float)L_49, (float)L_52)), L_53, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_48, L_54, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_47, L_55, /*hidden argument*/NULL);
		// m_Chain.transforms[1].localRotation *= Quaternion.FromToRotation(Vector3.right, m_Chain.transforms[1].InverseTransformPoint(effectorPosition)) * Quaternion.FromToRotation(m_Chain.transforms[2].localPosition, Vector3.right);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_56 = __this->get_m_Chain_9();
		NullCheck(L_56);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_57 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		int32_t L_58 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = L_59;
		NullCheck(L_60);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_61 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_63 = __this->get_m_Chain_9();
		NullCheck(L_63);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_64 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_65 = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = V_0;
		NullCheck(L_66);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_66, L_67, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_69 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_62, L_68, /*hidden argument*/NULL);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_70 = __this->get_m_Chain_9();
		NullCheck(L_70);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_71 = IKChain2D_get_transforms_m5191B600A3F32A5192C1AD8B2BAB6D9A38CEB417(L_70, /*hidden argument*/NULL);
		NullCheck(L_71);
		int32_t L_72 = 2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_73, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_76 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_74, L_75, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_77 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_69, L_76, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_78 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_61, L_77, /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_60, L_78, /*hidden argument*/NULL);
	}

IL_015f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.LimbSolver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimbSolver2D__ctor_mE91CC643152AB59209D861198803C90F048BA724 (LimbSolver2D_t7E1E4CB6B6CBCA2F749D12DD088A84ADD210D8ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LimbSolver2D__ctor_mE91CC643152AB59209D861198803C90F048BA724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IKChain2D m_Chain = new IKChain2D();
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_0 = (IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *)il2cpp_codegen_object_new(IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4_il2cpp_TypeInfo_var);
		IKChain2D__ctor_mC537759478AFA5D0995248B7C71903B6CFD9ECA5(L_0, /*hidden argument*/NULL);
		__this->set_m_Chain_9(L_0);
		// private Vector3[] m_Positions = new Vector3[3];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_m_Positions_11(L_1);
		// private float[] m_Lengths = new float[2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_Lengths_12(L_2);
		// private float[] m_Angles = new float[2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_m_Angles_13(L_3);
		Solver2D__ctor_mCC6DB275466AE16396E6D5287B93C21C6F723E01(__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::get_chainCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Solver2D_get_chainCount_m9BC3318C7DB73B32B09FB6B9816F6856AB67B4C0 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return GetChainCount(); }
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return GetChainCount(); }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_constrainRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_constrainRotation_m681D00D916E1B90EBB39E6B92D91733410D3DAE4 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return m_ConstrainRotation; }
		bool L_0 = __this->get_m_ConstrainRotation_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ConstrainRotation; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::set_constrainRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_set_constrainRotation_mBCBD82EEF6B47892C2B0AE07D480DA001F9EB0D8 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ConstrainRotation = value; }
		bool L_0 = ___value0;
		__this->set_m_ConstrainRotation_4(L_0);
		// set { m_ConstrainRotation = value; }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_restoreDefaultPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_restoreDefaultPose_mAAF4CBC3A928C2366BC10DD76E61C221A5DB2AD9 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return m_SolveFromDefaultPose; }
		bool L_0 = __this->get_m_SolveFromDefaultPose_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_SolveFromDefaultPose; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::set_restoreDefaultPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_set_restoreDefaultPose_m1665FA4757657D8C58209273EA1F09677396A5D9 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SolveFromDefaultPose = value; }
		bool L_0 = ___value0;
		__this->set_m_SolveFromDefaultPose_5(L_0);
		// set { m_SolveFromDefaultPose = value; }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_solveFromDefaultPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_solveFromDefaultPose_mED907B9B1D26C2153A4E2F483343D7804A303076 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return m_SolveFromDefaultPose; }
		bool L_0 = __this->get_m_SolveFromDefaultPose_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_SolveFromDefaultPose; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::set_solveFromDefaultPose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_set_solveFromDefaultPose_m0E0E6133C549989398C3739B34B16475869B07F3 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SolveFromDefaultPose = value; }
		bool L_0 = ___value0;
		__this->set_m_SolveFromDefaultPose_5(L_0);
		// set { m_SolveFromDefaultPose = value; }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_isValid_mA90190EDB5213ECC3C04FAA3D46D9A7D0BDAECFA (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return Validate(); }
		bool L_0 = Solver2D_Validate_m0928DA241D94A0E80096DC18A7E2C0ED59FF3EEC(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return Validate(); }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::get_allChainsHaveTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_get_allChainsHaveTargets_m96ED4E974AF74C731B71156A4BDC456079E3D060 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return HasTargets(); }
		bool L_0 = Solver2D_HasTargets_m18AFC7CEEAC2BC1F36FD256FDB6717DDD26F111F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return HasTargets(); }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Experimental.U2D.IK.Solver2D::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver2D_get_weight_m618CE6112123D266966BF606EE5418CE5F32F603 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return m_Weight; }
		float L_0 = __this->get_m_Weight_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Weight; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_set_weight_mA892B2B9638656D7EC4C48C307D89CBBEBD8114F (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_set_weight_mA892B2B9638656D7EC4C48C307D89CBBEBD8114F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_Weight = Mathf.Clamp01(value); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		__this->set_m_Weight_6(L_1);
		// set { m_Weight = Mathf.Clamp01(value); }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_OnEnable_m1F312E1CF5CFD050CB3BDE13A8CA63F63BB9F158 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	{
		// private void OnEnable() {}
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_OnValidate_m2AE95727CA7C48BC964ED34B26931C9EB80F7F0F (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_OnValidate_m2AE95727CA7C48BC964ED34B26931C9EB80F7F0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_Weight = Mathf.Clamp01(m_Weight);
		float L_0 = __this->get_m_Weight_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		__this->set_m_Weight_6(L_1);
		// if (!isValid)
		bool L_2 = Solver2D_get_isValid_mA90190EDB5213ECC3C04FAA3D46D9A7D0BDAECFA(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Initialize();
		Solver2D_Initialize_m564277A15FA0C0EFBDB6EAF819CFEF6D45753447(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_Validate_m0928DA241D94A0E80096DC18A7E2C0ED59FF3EEC (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_0024;
	}

IL_0005:
	{
		// var chain = GetChain(i);
		int32_t L_0 = V_0;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_1 = VirtFuncInvoker1< IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		V_1 = L_1;
		// if (!chain.isValid)
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_2 = V_1;
		NullCheck(L_2);
		bool L_3 = IKChain2D_get_isValid_mBC5D9767500249D602B102A57415FC511F376EF9(L_2, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_003c;
	}

IL_001f:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0024:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_6 = V_0;
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		V_4 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// return DoValidate();
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::DoValidate() */, __this);
		V_3 = L_9;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		bool L_10 = V_3;
		return L_10;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::HasTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_HasTargets_m18AFC7CEEAC2BC1F36FD256FDB6717DDD26F111F (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_HasTargets_m18AFC7CEEAC2BC1F36FD256FDB6717DDD26F111F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_0027;
	}

IL_0005:
	{
		// var chain = GetChain(i);
		int32_t L_0 = V_0;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_1 = VirtFuncInvoker1< IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		V_1 = L_1;
		// if (chain.target == null)
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_2 = V_1;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = IKChain2D_get_target_mBFD7C9223F49270FA667647EE68C2753B16AF796(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_003a;
	}

IL_0022:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_7 = V_0;
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		V_4 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		bool L_10 = V_3;
		return L_10;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Initialize_m564277A15FA0C0EFBDB6EAF819CFEF6D45753447 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * V_1 = NULL;
	bool V_2 = false;
	{
		// DoInitialize();
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.Experimental.U2D.IK.Solver2D::DoInitialize() */, __this);
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_0021;
	}

IL_000c:
	{
		// var chain = GetChain(i);
		int32_t L_0 = V_0;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_1 = VirtFuncInvoker1< IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		V_1 = L_1;
		// chain.Initialize();
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_2 = V_1;
		NullCheck(L_2);
		IKChain2D_Initialize_m9C97EB59783A05B1416FF84B4D473787A97E7E2B(L_2, /*hidden argument*/NULL);
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_4 = V_0;
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_Prepare_mBBFF8346B6C8615595453EB42CE32E44DFF0D815 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_Prepare_mBBFF8346B6C8615595453EB42CE32E44DFF0D815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B6_0 = 0;
	{
		// var rootTransform = GetPlaneRootTransform();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(11 /* UnityEngine.Transform UnityEngine.Experimental.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		V_0 = L_0;
		// if (rootTransform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// m_Plane.normal = rootTransform.forward;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_4 = __this->get_address_of_m_Plane_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_5, /*hidden argument*/NULL);
		Plane_set_normal_m4F84FE27CD58E2B3EE27DB108576B570EF8AE723((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_4, L_6, /*hidden argument*/NULL);
		// m_Plane.distance = -Vector3.Dot(m_Plane.normal, rootTransform.position);
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_7 = __this->get_address_of_m_Plane_7();
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_8 = __this->get_address_of_m_Plane_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_0;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		float L_12 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_9, L_11, /*hidden argument*/NULL);
		Plane_set_distance_m7B427E5F6F6D1DD44C96A503980F4627CDD4A59A((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_7, ((-L_12)), /*hidden argument*/NULL);
	}

IL_004a:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_2 = 0;
		goto IL_008a;
	}

IL_004e:
	{
		// var chain = GetChain(i);
		int32_t L_13 = V_2;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_14 = VirtFuncInvoker1< IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_13);
		V_3 = L_14;
		// var constrainTargetRotation = constrainRotation && chain.target != null;
		bool L_15 = Solver2D_get_constrainRotation_m681D00D916E1B90EBB39E6B92D91733410D3DAE4(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_16 = V_3;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = IKChain2D_get_target_mBFD7C9223F49270FA667647EE68C2753B16AF796(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_18));
		goto IL_006e;
	}

IL_006d:
	{
		G_B6_0 = 0;
	}

IL_006e:
	{
		V_4 = (bool)G_B6_0;
		// if (m_SolveFromDefaultPose)
		bool L_19 = __this->get_m_SolveFromDefaultPose_5();
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0085;
		}
	}
	{
		// chain.RestoreDefaultPose(constrainTargetRotation);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_21 = V_3;
		bool L_22 = V_4;
		NullCheck(L_21);
		IKChain2D_RestoreDefaultPose_m2FF5188FF2EE2E7FA4753C7F6E38F50FBCB1E1BC(L_21, L_22, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_008a:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_24 = V_2;
		int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		V_6 = (bool)((((int32_t)L_24) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_6;
		if (L_26)
		{
			goto IL_004e;
		}
	}
	{
		// DoPrepare();
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Experimental.U2D.IK.Solver2D::DoPrepare() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::PrepareEffectorPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_PrepareEffectorPositions_mDCE851C72CC44C7649F5BD15BD03786CA1E538F3 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_PrepareEffectorPositions_mDCE851C72CC44C7649F5BD15BD03786CA1E538F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// m_TargetPositions.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_m_TargetPositions_8();
		NullCheck(L_0);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_0, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_0045;
	}

IL_0011:
	{
		// var chain = GetChain(i);
		int32_t L_1 = V_0;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_2 = VirtFuncInvoker1< IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_1);
		V_1 = L_2;
		// if (chain.target)
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_3 = V_1;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = IKChain2D_get_target_mBFD7C9223F49270FA667647EE68C2753B16AF796(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// m_TargetPositions.Add(chain.target.position);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_7 = __this->get_m_TargetPositions_8();
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_8 = V_1;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = IKChain2D_get_target_mBFD7C9223F49270FA667647EE68C2753B16AF796(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_7, L_10, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
	}

IL_0040:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0045:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_12 = V_0;
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::UpdateIK(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_m1747A6FC5D5C447B9A9E9A8EC55B2FF13DE9EFA5 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, float ___globalWeight0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if(allChainsHaveTargets)
		bool L_0 = Solver2D_get_allChainsHaveTargets_m96ED4E974AF74C731B71156A4BDC456079E3D060(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// PrepareEffectorPositions();
		Solver2D_PrepareEffectorPositions_mDCE851C72CC44C7649F5BD15BD03786CA1E538F3(__this, /*hidden argument*/NULL);
		// UpdateIK(m_TargetPositions, globalWeight);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = __this->get_m_TargetPositions_8();
		float L_3 = ___globalWeight0;
		Solver2D_UpdateIK_m6E7BDC2C9424D525B142B726CAD93ADB6058B5BA(__this, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::UpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_UpdateIK_m6E7BDC2C9424D525B142B726CAD93ADB6058B5BA (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___positions0, float ___globalWeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_UpdateIK_m6E7BDC2C9424D525B142B726CAD93ADB6058B5BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if(positions.Count != chainCount)
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___positions0;
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_0, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		int32_t L_2 = Solver2D_get_chainCount_m9BC3318C7DB73B32B09FB6B9816F6856AB67B4C0(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_00e1;
	}

IL_001b:
	{
		// float finalWeight = globalWeight * weight;
		float L_4 = ___globalWeight1;
		float L_5 = Solver2D_get_weight_m618CE6112123D266966BF606EE5418CE5F32F603(__this, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5));
		// if (finalWeight == 0f)
		float L_6 = V_0;
		V_2 = (bool)((((float)L_6) == ((float)(0.0f)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// return;
		goto IL_00e1;
	}

IL_0035:
	{
		// if (!isValid)
		bool L_8 = Solver2D_get_isValid_mA90190EDB5213ECC3C04FAA3D46D9A7D0BDAECFA(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		// return;
		goto IL_00e1;
	}

IL_0047:
	{
		// Prepare();
		Solver2D_Prepare_mBBFF8346B6C8615595453EB42CE32E44DFF0D815(__this, /*hidden argument*/NULL);
		// if (finalWeight < 1f)
		float L_10 = V_0;
		V_4 = (bool)((((float)L_10) < ((float)(1.0f)))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		// StoreLocalRotations();
		Solver2D_StoreLocalRotations_mCE39495A08732E41B45B780D95878A4D69523551(__this, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// DoUpdateIK(positions);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_12 = ___positions0;
		VirtActionInvoker1< List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * >::Invoke(7 /* System.Void UnityEngine.Experimental.U2D.IK.Solver2D::DoUpdateIK(System.Collections.Generic.List`1<UnityEngine.Vector3>) */, __this, L_12);
		// if (constrainRotation)
		bool L_13 = Solver2D_get_constrainRotation_m681D00D916E1B90EBB39E6B92D91733410D3DAE4(__this, /*hidden argument*/NULL);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00cb;
		}
	}
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_6 = 0;
		goto IL_00ba;
	}

IL_007d:
	{
		// var chain = GetChain(i);
		int32_t L_15 = V_6;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_16 = VirtFuncInvoker1< IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_15);
		V_7 = L_16;
		// if (chain.target)
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_17 = V_7;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = IKChain2D_get_target_mBFD7C9223F49270FA667647EE68C2753B16AF796(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_18, /*hidden argument*/NULL);
		V_8 = L_19;
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00b3;
		}
	}
	{
		// chain.effector.rotation = chain.target.rotation;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_21 = V_7;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = IKChain2D_get_effector_m8E4C9E03776868CBBA884BD84A3BF291AB3FFF1A(L_21, /*hidden argument*/NULL);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_23 = V_7;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = IKChain2D_get_target_mBFD7C9223F49270FA667647EE68C2753B16AF796(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_22, L_25, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00ba:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_27 = V_6;
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		V_9 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_9;
		if (L_29)
		{
			goto IL_007d;
		}
	}
	{
	}

IL_00cb:
	{
		// if (finalWeight < 1f)
		float L_30 = V_0;
		V_10 = (bool)((((float)L_30) < ((float)(1.0f)))? 1 : 0);
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_00e1;
		}
	}
	{
		// BlendFkToIk(finalWeight);
		float L_32 = V_0;
		Solver2D_BlendFkToIk_mD4A3E141269C74E808E528AA5E6DFC2F0E5852DD(__this, L_32, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::StoreLocalRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_StoreLocalRotations_mCE39495A08732E41B45B780D95878A4D69523551 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * V_1 = NULL;
	bool V_2 = false;
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// var chain = GetChain(i);
		int32_t L_0 = V_0;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_1 = VirtFuncInvoker1< IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		V_1 = L_1;
		// chain.StoreLocalRotations();
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_2 = V_1;
		NullCheck(L_2);
		IKChain2D_StoreLocalRotations_m422F4655EEB7D1B783F80898F4EDBCA9A9658EFF(L_2, /*hidden argument*/NULL);
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001a:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_4 = V_0;
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::BlendFkToIk(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_BlendFkToIk_mD4A3E141269C74E808E528AA5E6DFC2F0E5852DD (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, float ___finalWeight0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_BlendFkToIk_mD4A3E141269C74E808E528AA5E6DFC2F0E5852DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		V_0 = 0;
		goto IL_0034;
	}

IL_0005:
	{
		// var chain = GetChain(i);
		int32_t L_0 = V_0;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_1 = VirtFuncInvoker1< IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, L_0);
		V_1 = L_1;
		// var constrainTargetRotation = constrainRotation && chain.target != null;
		bool L_2 = Solver2D_get_constrainRotation_m681D00D916E1B90EBB39E6B92D91733410D3DAE4(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_3 = V_1;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = IKChain2D_get_target_mBFD7C9223F49270FA667647EE68C2753B16AF796(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 0;
	}

IL_0025:
	{
		V_2 = (bool)G_B4_0;
		// chain.BlendFkToIk(finalWeight, constrainTargetRotation);
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_6 = V_1;
		float L_7 = ___finalWeight0;
		bool L_8 = V_2;
		NullCheck(L_6);
		IKChain2D_BlendFkToIk_m879633DF8BEB0F0237154414358F37E4B338B1FF(L_6, L_7, L_8, /*hidden argument*/NULL);
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0034:
	{
		// for (int i = 0; i < GetChainCount(); ++i)
		int32_t L_10 = V_0;
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Experimental.U2D.IK.Solver2D::GetChainCount() */, __this);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.Experimental.U2D.IK.Solver2D::DoValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver2D_DoValidate_mD50C199129D207B614890447F69752A49366D187 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// protected virtual bool DoValidate() { return true; }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// protected virtual bool DoValidate() { return true; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::DoInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_DoInitialize_m135AAFEFA2AE3E1A0E22278EF6E2CBE123B3F9BC (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	{
		// protected virtual void DoInitialize() {}
		return;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::DoPrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D_DoPrepare_mC146A6DA5BB49F7C192D81E7132001368EFB86C4 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	{
		// protected virtual void DoPrepare() {}
		return;
	}
}
// UnityEngine.Transform UnityEngine.Experimental.U2D.IK.Solver2D::GetPlaneRootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Solver2D_GetPlaneRootTransform_m66B2390CD4FC87B7B22EDDAEA19C5A71C8E62805 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	{
		// if (chainCount > 0)
		int32_t L_0 = Solver2D_get_chainCount_m9BC3318C7DB73B32B09FB6B9816F6856AB67B4C0(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// return GetChain(0).rootTransform;
		IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 * L_2 = VirtFuncInvoker1< IKChain2D_tCBB560D741330D6DD03A6A9B1F5B8B306FFA1FF4 *, int32_t >::Invoke(5 /* UnityEngine.Experimental.U2D.IK.IKChain2D UnityEngine.Experimental.U2D.IK.Solver2D::GetChain(System.Int32) */, __this, 0);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = IKChain2D_get_rootTransform_mD1E8BE034165BA11D4FFE2F52063380B79915E92(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0021;
	}

IL_001d:
	{
		// return null;
		V_1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.Solver2D::GetPointOnSolverPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Solver2D_GetPointOnSolverPlane_mC2F7BC14F2837A6CB2BC1E7AC561DFC49363CB91 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return GetPlaneRootTransform().InverseTransformPoint(m_Plane.ClosestPointOnPlane(worldPosition));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(11 /* UnityEngine.Transform UnityEngine.Experimental.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_1 = __this->get_address_of_m_Plane_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___worldPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Plane_ClosestPointOnPlane_mDBB63D79FA643E10949FEE1AE692975940716BCE((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector3 UnityEngine.Experimental.U2D.IK.Solver2D::GetWorldPositionFromSolverPlanePoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Solver2D_GetWorldPositionFromSolverPlanePoint_m7C4987D5B1B73C601EBE12D682FF9D2226CEBA5F (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___planePoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D_GetWorldPositionFromSolverPlanePoint_m7C4987D5B1B73C601EBE12D682FF9D2226CEBA5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return GetPlaneRootTransform().TransformPoint(planePoint);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = VirtFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(11 /* UnityEngine.Transform UnityEngine.Experimental.U2D.IK.Solver2D::GetPlaneRootTransform() */, __this);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___planePoint0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2D__ctor_mCC6DB275466AE16396E6D5287B93C21C6F723E01 (Solver2D_tC8D174E8C0C58E1ADD5FBC46180A614C9AF8674E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver2D__ctor_mCC6DB275466AE16396E6D5287B93C21C6F723E01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool m_ConstrainRotation = true;
		__this->set_m_ConstrainRotation_4((bool)1);
		// private bool m_SolveFromDefaultPose = true;
		__this->set_m_SolveFromDefaultPose_5((bool)1);
		// private float m_Weight = 1f;
		__this->set_m_Weight_6((1.0f));
		// private List<Vector3> m_TargetPositions = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_0, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_m_TargetPositions_8(L_0);
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
// System.String UnityEngine.Experimental.U2D.IK.Solver2DMenuAttribute::get_menuPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Solver2DMenuAttribute_get_menuPath_mE54360A9E6EDF875D8C4E693FA6C7FAD9C1738E7 (Solver2DMenuAttribute_t216390F3EFD27C73A74A3CEE22CA3ACEFEFA711B * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return m_MenuPath; }
		String_t* L_0 = __this->get_m_MenuPath_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MenuPath; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.U2D.IK.Solver2DMenuAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver2DMenuAttribute__ctor_m0C9971EA32C6FBD6E8B84FBB4229108E447E2CF3 (Solver2DMenuAttribute_t216390F3EFD27C73A74A3CEE22CA3ACEFEFA711B * __this, String_t* ____menuPath0, const RuntimeMethod* method)
{
	{
		// public Solver2DMenuAttribute(string _menuPath)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// m_MenuPath = _menuPath;
		String_t* L_0 = ____menuPath0;
		__this->set_m_MenuPath_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_m72E4BD9503BC991BAFAED992FF1CA4504C741865_inline (String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_inline(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		Profiler_BeginSampleImpl_mF1EE2C3EB23D01B3F9A25C43C8BC82BFC4F3B5A0(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a1;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a1;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_inline (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512Unity_2D_IK_Runtime_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_3, _stringLiteral31D159E683556C06B3B3963D92483B6867EB3233, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Profiler_ValidateArguments_mBD8BD2520B428CBAA924D27613F9F0BB5D9C4512_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
