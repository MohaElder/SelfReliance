#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>
struct List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6;
// Unity.Notifications.iOS.iOSNotification
struct iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152;
// Unity.Notifications.iOS.iOSNotificationCenter/<>c
struct U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683;
// Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback
struct AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189;
// Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2;
// Unity.Notifications.iOS.iOSNotificationData[]
struct iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655;
// Unity.Notifications.iOS.iOSNotificationTrigger
struct iOSNotificationTrigger_t9317CA39408C0657F4820C5A4873EF67DD0AEC64;
// Unity.Notifications.iOS.iOSNotificationsWrapper
struct iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594;
// Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback
struct AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA;
// Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback
struct NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;

IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral27A526548B2C2EC709AAB2262D373E18C6A9BA5B;
IL2CPP_EXTERN_C String_t* _stringLiteral42E1675938518324B72A94620A159CD1F6BA5EC2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFAB71E5D1FB16640B1BDCE11C50A9A011D7DAA40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m934BA0CD604C9CC41771E26124D28F7B956D75BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBCE38FCE77D055DB4DAB2D26565FF286D60A7E13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mD3015742B85C089E24CBB4C2C3236D9E03C215DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mEA3D256AEC9EC9F2674B3C41A86D1E63337B78E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m66EEEDB16F4C44686541EE33DBB4780E4BC6CD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mDF88FD38287F43C9F0A3911846572A39E33E0D2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0B1B510A34429B8382C3E13BDA4A3BA82038092F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_0_m7D2F7EC015976494580E6AE364931F86F043CFE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_1_mFDB7D5BC81ED0A4AFB1E88E44709727F61998F21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__37_2_mC2696DD88D007A9F3F3D63D39CD7D9358242392C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_AuthorizationRequestReceived_m0B9514890D5292A398583EB5FB52C84E89EF2C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_NotificationReceived_m15A8B9969D3B760901868EED3ECD57F6251D3F8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSNotificationsWrapper_RemoteNotificationReceived_m7892270BF1067E6B09F2AD79891BD9C0E7B5E2EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AuthorizationRequestCallback_BeginInvoke_m895E3AFF02A699B132BA6C7D03313B53A7BB91E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthorizationRequestCompletedCallback_BeginInvoke_mC6AF9367C08237BF86E371A3268505CB5C75AD00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NotificationReceivedCallback_BeginInvoke_m60E1D2AA8BC1A9D1693F5D6051324160E2C5AAAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mD0D1AFA0A6458CCA98B59749D14AEF846E60B19E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_GetLastRespondedNotification_m0FA87E439B933EFA568B4BFED97CEE8B1C3094CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_Initialize_m8E140449CE45E01DEF3D3B64704FC15A6F802F30_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_RemoveAllDeliveredNotifications_mCCEE21CC9AEE369D499F050198D260083DB25328_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_RemoveAllScheduledNotifications_m4E7E85B5BBE66984B3B8000691F49A7CB5728D3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_ScheduleNotification_mF05108B3E65917BC05B25615F280D0764B08A3CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter__cctor_m1BF4E25CF195A7AD6155931A6D13878707CBFBF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_onFinishedAuthorizationRequest_m48B8078CB367A66D0A9E13B1734F7310CC9B7A79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_onReceivedRemoteNotification_m2A9BB7A51DC29BDA203595DDEE5762B115893EDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationCenter_onSentNotification_m9F136BE7C08D6938CDC4BC02BB0B6873D7510B31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotification__ctor_m6A4F6FCE4D0EB26D5D101ABF056D835D26E85674_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotification__ctor_m6D7A48CC3DDF0E0F8637B72AAB3865C38AAF1021_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotification_set_Trigger_m697D4E1EA33C328BAB37B1E1199B4D1D92D29ECE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_AuthorizationRequestReceived_m0B9514890D5292A398583EB5FB52C84E89EF2C44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_GetDeliveredNotificationData_m6CD497233458F93AD76535CD43409084B75FBB60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_GetLastNotificationData_mC2434D4A9E96E2D2CEDFFB013F1F823165900125_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_GetNotificationSettings_m2EF48F45F4214C512AB7B831E235E43E3D45EEB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_GetScheduledNotificationData_m9703F377E5207667BB79C5556B39BC734DECAF51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_NotificationReceived_m15A8B9969D3B760901868EED3ECD57F6251D3F8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_m3E440F5B8EC1B93CD028B82AD56F4D4CEA393B09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_RegisterOnReceivedCallback_mC632044738B230A3F2C4B9EC6F40983590C0C654_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_m704006DD49795B9AD24DE22229A103C46C218E38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_RemoteNotificationReceived_m7892270BF1067E6B09F2AD79891BD9C0E7B5E2EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSNotificationsWrapper_ScheduleLocalNotification_m586932E29D8B00E1A20A3ECF6DD1FC1EB26123EB_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6;;
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke;
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke;;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tEAB667AE9BD07531EA6E9EDC805B5483E6CEE9E6 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>
struct  List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70, ____items_1)); }
	inline iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* get__items_1() const { return ____items_1; }
	inline iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70_StaticFields, ____emptyArray_5)); }
	inline iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* get__emptyArray_5() const { return ____emptyArray_5; }
	inline iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.Notifications.iOS.iOSNotificationCenter
struct  iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0  : public RuntimeObject
{
public:

public:
};

struct iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields
{
public:
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::initialized
	bool ___initialized_0;
	// Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::onNotificationReceived
	NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * ___onNotificationReceived_1;
	// Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationCenter::onRemoteNotificationReceived
	NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * ___onRemoteNotificationReceived_2;
	// Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback Unity.Notifications.iOS.iOSNotificationCenter::OnAuthorizationRequestCompleted
	AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * ___OnAuthorizationRequestCompleted_3;

public:
	inline static int32_t get_offset_of_initialized_0() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields, ___initialized_0)); }
	inline bool get_initialized_0() const { return ___initialized_0; }
	inline bool* get_address_of_initialized_0() { return &___initialized_0; }
	inline void set_initialized_0(bool value)
	{
		___initialized_0 = value;
	}

	inline static int32_t get_offset_of_onNotificationReceived_1() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields, ___onNotificationReceived_1)); }
	inline NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * get_onNotificationReceived_1() const { return ___onNotificationReceived_1; }
	inline NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 ** get_address_of_onNotificationReceived_1() { return &___onNotificationReceived_1; }
	inline void set_onNotificationReceived_1(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * value)
	{
		___onNotificationReceived_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNotificationReceived_1), (void*)value);
	}

	inline static int32_t get_offset_of_onRemoteNotificationReceived_2() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields, ___onRemoteNotificationReceived_2)); }
	inline NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * get_onRemoteNotificationReceived_2() const { return ___onRemoteNotificationReceived_2; }
	inline NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 ** get_address_of_onRemoteNotificationReceived_2() { return &___onRemoteNotificationReceived_2; }
	inline void set_onRemoteNotificationReceived_2(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * value)
	{
		___onRemoteNotificationReceived_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRemoteNotificationReceived_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnAuthorizationRequestCompleted_3() { return static_cast<int32_t>(offsetof(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields, ___OnAuthorizationRequestCompleted_3)); }
	inline AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * get_OnAuthorizationRequestCompleted_3() const { return ___OnAuthorizationRequestCompleted_3; }
	inline AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 ** get_address_of_OnAuthorizationRequestCompleted_3() { return &___OnAuthorizationRequestCompleted_3; }
	inline void set_OnAuthorizationRequestCompleted_3(AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * value)
	{
		___OnAuthorizationRequestCompleted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAuthorizationRequestCompleted_3), (void*)value);
	}
};


// Unity.Notifications.iOS.iOSNotificationCenter_<>c
struct  U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields
{
public:
	// Unity.Notifications.iOS.iOSNotificationCenter_<>c Unity.Notifications.iOS.iOSNotificationCenter_<>c::<>9
	U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
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


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Unity.Notifications.iOS.iOSAuthorizationRequestData
struct  iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 
{
public:
	// System.Boolean Unity.Notifications.iOS.iOSAuthorizationRequestData::granted
	bool ___granted_0;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::error
	String_t* ___error_1;
	// System.Boolean Unity.Notifications.iOS.iOSAuthorizationRequestData::finished
	bool ___finished_2;
	// System.String Unity.Notifications.iOS.iOSAuthorizationRequestData::deviceToken
	String_t* ___deviceToken_3;

public:
	inline static int32_t get_offset_of_granted_0() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6, ___granted_0)); }
	inline bool get_granted_0() const { return ___granted_0; }
	inline bool* get_address_of_granted_0() { return &___granted_0; }
	inline void set_granted_0(bool value)
	{
		___granted_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6, ___error_1)); }
	inline String_t* get_error_1() const { return ___error_1; }
	inline String_t** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(String_t* value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}

	inline static int32_t get_offset_of_deviceToken_3() { return static_cast<int32_t>(offsetof(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6, ___deviceToken_3)); }
	inline String_t* get_deviceToken_3() const { return ___deviceToken_3; }
	inline String_t** get_address_of_deviceToken_3() { return &___deviceToken_3; }
	inline void set_deviceToken_3(String_t* value)
	{
		___deviceToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceToken_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke
{
	int32_t ___granted_0;
	char* ___error_1;
	int32_t ___finished_2;
	char* ___deviceToken_3;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSAuthorizationRequestData
struct iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_com
{
	int32_t ___granted_0;
	Il2CppChar* ___error_1;
	int32_t ___finished_2;
	Il2CppChar* ___deviceToken_3;
};

// Unity.Notifications.iOS.iOSNotificationData
struct  iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F 
{
public:
	// System.String Unity.Notifications.iOS.iOSNotificationData::identifier
	String_t* ___identifier_0;
	// System.String Unity.Notifications.iOS.iOSNotificationData::title
	String_t* ___title_1;
	// System.String Unity.Notifications.iOS.iOSNotificationData::body
	String_t* ___body_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::badge
	int32_t ___badge_3;
	// System.String Unity.Notifications.iOS.iOSNotificationData::subtitle
	String_t* ___subtitle_4;
	// System.String Unity.Notifications.iOS.iOSNotificationData::categoryIdentifier
	String_t* ___categoryIdentifier_5;
	// System.String Unity.Notifications.iOS.iOSNotificationData::threadIdentifier
	String_t* ___threadIdentifier_6;
	// System.String Unity.Notifications.iOS.iOSNotificationData::data
	String_t* ___data_7;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::showInForeground
	bool ___showInForeground_8;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::showInForegroundPresentationOptions
	int32_t ___showInForegroundPresentationOptions_9;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::triggerType
	int32_t ___triggerType_10;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::repeats
	bool ___repeats_11;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::timeTriggerInterval
	int32_t ___timeTriggerInterval_12;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerYear
	int32_t ___calendarTriggerYear_13;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerMonth
	int32_t ___calendarTriggerMonth_14;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerDay
	int32_t ___calendarTriggerDay_15;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerHour
	int32_t ___calendarTriggerHour_16;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerMinute
	int32_t ___calendarTriggerMinute_17;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationData::calendarTriggerSecond
	int32_t ___calendarTriggerSecond_18;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerCenterX
	float ___locationTriggerCenterX_19;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerCenterY
	float ___locationTriggerCenterY_20;
	// System.Single Unity.Notifications.iOS.iOSNotificationData::locationTriggerRadius
	float ___locationTriggerRadius_21;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::locationTriggerNotifyOnEntry
	bool ___locationTriggerNotifyOnEntry_22;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationData::locationTriggerNotifyOnExit
	bool ___locationTriggerNotifyOnExit_23;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_1), (void*)value);
	}

	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___body_2)); }
	inline String_t* get_body_2() const { return ___body_2; }
	inline String_t** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(String_t* value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_2), (void*)value);
	}

	inline static int32_t get_offset_of_badge_3() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___badge_3)); }
	inline int32_t get_badge_3() const { return ___badge_3; }
	inline int32_t* get_address_of_badge_3() { return &___badge_3; }
	inline void set_badge_3(int32_t value)
	{
		___badge_3 = value;
	}

	inline static int32_t get_offset_of_subtitle_4() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___subtitle_4)); }
	inline String_t* get_subtitle_4() const { return ___subtitle_4; }
	inline String_t** get_address_of_subtitle_4() { return &___subtitle_4; }
	inline void set_subtitle_4(String_t* value)
	{
		___subtitle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subtitle_4), (void*)value);
	}

	inline static int32_t get_offset_of_categoryIdentifier_5() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___categoryIdentifier_5)); }
	inline String_t* get_categoryIdentifier_5() const { return ___categoryIdentifier_5; }
	inline String_t** get_address_of_categoryIdentifier_5() { return &___categoryIdentifier_5; }
	inline void set_categoryIdentifier_5(String_t* value)
	{
		___categoryIdentifier_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryIdentifier_5), (void*)value);
	}

	inline static int32_t get_offset_of_threadIdentifier_6() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___threadIdentifier_6)); }
	inline String_t* get_threadIdentifier_6() const { return ___threadIdentifier_6; }
	inline String_t** get_address_of_threadIdentifier_6() { return &___threadIdentifier_6; }
	inline void set_threadIdentifier_6(String_t* value)
	{
		___threadIdentifier_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadIdentifier_6), (void*)value);
	}

	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___data_7)); }
	inline String_t* get_data_7() const { return ___data_7; }
	inline String_t** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(String_t* value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_7), (void*)value);
	}

	inline static int32_t get_offset_of_showInForeground_8() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___showInForeground_8)); }
	inline bool get_showInForeground_8() const { return ___showInForeground_8; }
	inline bool* get_address_of_showInForeground_8() { return &___showInForeground_8; }
	inline void set_showInForeground_8(bool value)
	{
		___showInForeground_8 = value;
	}

	inline static int32_t get_offset_of_showInForegroundPresentationOptions_9() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___showInForegroundPresentationOptions_9)); }
	inline int32_t get_showInForegroundPresentationOptions_9() const { return ___showInForegroundPresentationOptions_9; }
	inline int32_t* get_address_of_showInForegroundPresentationOptions_9() { return &___showInForegroundPresentationOptions_9; }
	inline void set_showInForegroundPresentationOptions_9(int32_t value)
	{
		___showInForegroundPresentationOptions_9 = value;
	}

	inline static int32_t get_offset_of_triggerType_10() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___triggerType_10)); }
	inline int32_t get_triggerType_10() const { return ___triggerType_10; }
	inline int32_t* get_address_of_triggerType_10() { return &___triggerType_10; }
	inline void set_triggerType_10(int32_t value)
	{
		___triggerType_10 = value;
	}

	inline static int32_t get_offset_of_repeats_11() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___repeats_11)); }
	inline bool get_repeats_11() const { return ___repeats_11; }
	inline bool* get_address_of_repeats_11() { return &___repeats_11; }
	inline void set_repeats_11(bool value)
	{
		___repeats_11 = value;
	}

	inline static int32_t get_offset_of_timeTriggerInterval_12() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___timeTriggerInterval_12)); }
	inline int32_t get_timeTriggerInterval_12() const { return ___timeTriggerInterval_12; }
	inline int32_t* get_address_of_timeTriggerInterval_12() { return &___timeTriggerInterval_12; }
	inline void set_timeTriggerInterval_12(int32_t value)
	{
		___timeTriggerInterval_12 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerYear_13() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerYear_13)); }
	inline int32_t get_calendarTriggerYear_13() const { return ___calendarTriggerYear_13; }
	inline int32_t* get_address_of_calendarTriggerYear_13() { return &___calendarTriggerYear_13; }
	inline void set_calendarTriggerYear_13(int32_t value)
	{
		___calendarTriggerYear_13 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerMonth_14() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerMonth_14)); }
	inline int32_t get_calendarTriggerMonth_14() const { return ___calendarTriggerMonth_14; }
	inline int32_t* get_address_of_calendarTriggerMonth_14() { return &___calendarTriggerMonth_14; }
	inline void set_calendarTriggerMonth_14(int32_t value)
	{
		___calendarTriggerMonth_14 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerDay_15() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerDay_15)); }
	inline int32_t get_calendarTriggerDay_15() const { return ___calendarTriggerDay_15; }
	inline int32_t* get_address_of_calendarTriggerDay_15() { return &___calendarTriggerDay_15; }
	inline void set_calendarTriggerDay_15(int32_t value)
	{
		___calendarTriggerDay_15 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerHour_16() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerHour_16)); }
	inline int32_t get_calendarTriggerHour_16() const { return ___calendarTriggerHour_16; }
	inline int32_t* get_address_of_calendarTriggerHour_16() { return &___calendarTriggerHour_16; }
	inline void set_calendarTriggerHour_16(int32_t value)
	{
		___calendarTriggerHour_16 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerMinute_17() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerMinute_17)); }
	inline int32_t get_calendarTriggerMinute_17() const { return ___calendarTriggerMinute_17; }
	inline int32_t* get_address_of_calendarTriggerMinute_17() { return &___calendarTriggerMinute_17; }
	inline void set_calendarTriggerMinute_17(int32_t value)
	{
		___calendarTriggerMinute_17 = value;
	}

	inline static int32_t get_offset_of_calendarTriggerSecond_18() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___calendarTriggerSecond_18)); }
	inline int32_t get_calendarTriggerSecond_18() const { return ___calendarTriggerSecond_18; }
	inline int32_t* get_address_of_calendarTriggerSecond_18() { return &___calendarTriggerSecond_18; }
	inline void set_calendarTriggerSecond_18(int32_t value)
	{
		___calendarTriggerSecond_18 = value;
	}

	inline static int32_t get_offset_of_locationTriggerCenterX_19() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___locationTriggerCenterX_19)); }
	inline float get_locationTriggerCenterX_19() const { return ___locationTriggerCenterX_19; }
	inline float* get_address_of_locationTriggerCenterX_19() { return &___locationTriggerCenterX_19; }
	inline void set_locationTriggerCenterX_19(float value)
	{
		___locationTriggerCenterX_19 = value;
	}

	inline static int32_t get_offset_of_locationTriggerCenterY_20() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___locationTriggerCenterY_20)); }
	inline float get_locationTriggerCenterY_20() const { return ___locationTriggerCenterY_20; }
	inline float* get_address_of_locationTriggerCenterY_20() { return &___locationTriggerCenterY_20; }
	inline void set_locationTriggerCenterY_20(float value)
	{
		___locationTriggerCenterY_20 = value;
	}

	inline static int32_t get_offset_of_locationTriggerRadius_21() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___locationTriggerRadius_21)); }
	inline float get_locationTriggerRadius_21() const { return ___locationTriggerRadius_21; }
	inline float* get_address_of_locationTriggerRadius_21() { return &___locationTriggerRadius_21; }
	inline void set_locationTriggerRadius_21(float value)
	{
		___locationTriggerRadius_21 = value;
	}

	inline static int32_t get_offset_of_locationTriggerNotifyOnEntry_22() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___locationTriggerNotifyOnEntry_22)); }
	inline bool get_locationTriggerNotifyOnEntry_22() const { return ___locationTriggerNotifyOnEntry_22; }
	inline bool* get_address_of_locationTriggerNotifyOnEntry_22() { return &___locationTriggerNotifyOnEntry_22; }
	inline void set_locationTriggerNotifyOnEntry_22(bool value)
	{
		___locationTriggerNotifyOnEntry_22 = value;
	}

	inline static int32_t get_offset_of_locationTriggerNotifyOnExit_23() { return static_cast<int32_t>(offsetof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F, ___locationTriggerNotifyOnExit_23)); }
	inline bool get_locationTriggerNotifyOnExit_23() const { return ___locationTriggerNotifyOnExit_23; }
	inline bool* get_address_of_locationTriggerNotifyOnExit_23() { return &___locationTriggerNotifyOnExit_23; }
	inline void set_locationTriggerNotifyOnExit_23(bool value)
	{
		___locationTriggerNotifyOnExit_23 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_pinvoke
{
	char* ___identifier_0;
	char* ___title_1;
	char* ___body_2;
	int32_t ___badge_3;
	char* ___subtitle_4;
	char* ___categoryIdentifier_5;
	char* ___threadIdentifier_6;
	char* ___data_7;
	int32_t ___showInForeground_8;
	int32_t ___showInForegroundPresentationOptions_9;
	int32_t ___triggerType_10;
	int32_t ___repeats_11;
	int32_t ___timeTriggerInterval_12;
	int32_t ___calendarTriggerYear_13;
	int32_t ___calendarTriggerMonth_14;
	int32_t ___calendarTriggerDay_15;
	int32_t ___calendarTriggerHour_16;
	int32_t ___calendarTriggerMinute_17;
	int32_t ___calendarTriggerSecond_18;
	float ___locationTriggerCenterX_19;
	float ___locationTriggerCenterY_20;
	float ___locationTriggerRadius_21;
	int32_t ___locationTriggerNotifyOnEntry_22;
	int32_t ___locationTriggerNotifyOnExit_23;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationData
struct iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Il2CppChar* ___title_1;
	Il2CppChar* ___body_2;
	int32_t ___badge_3;
	Il2CppChar* ___subtitle_4;
	Il2CppChar* ___categoryIdentifier_5;
	Il2CppChar* ___threadIdentifier_6;
	Il2CppChar* ___data_7;
	int32_t ___showInForeground_8;
	int32_t ___showInForegroundPresentationOptions_9;
	int32_t ___triggerType_10;
	int32_t ___repeats_11;
	int32_t ___timeTriggerInterval_12;
	int32_t ___calendarTriggerYear_13;
	int32_t ___calendarTriggerMonth_14;
	int32_t ___calendarTriggerDay_15;
	int32_t ___calendarTriggerHour_16;
	int32_t ___calendarTriggerMinute_17;
	int32_t ___calendarTriggerSecond_18;
	float ___locationTriggerCenterX_19;
	float ___locationTriggerCenterY_20;
	float ___locationTriggerRadius_21;
	int32_t ___locationTriggerNotifyOnEntry_22;
	int32_t ___locationTriggerNotifyOnExit_23;
};

// Unity.Notifications.iOS.iOSNotificationPushTrigger
struct  iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5__padding[1];
	};

public:
};


// Unity.Notifications.iOS.iOSNotificationSettings
struct  iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::authorizationStatus
	int32_t ___authorizationStatus_0;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::notificationCenterSetting
	int32_t ___notificationCenterSetting_1;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::lockScreenSetting
	int32_t ___lockScreenSetting_2;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::carPlaySetting
	int32_t ___carPlaySetting_3;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertSetting
	int32_t ___alertSetting_4;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::badgeSetting
	int32_t ___badgeSetting_5;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::soundSetting
	int32_t ___soundSetting_6;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::alertStyle
	int32_t ___alertStyle_7;
	// System.Int32 Unity.Notifications.iOS.iOSNotificationSettings::showPreviewsSetting
	int32_t ___showPreviewsSetting_8;

public:
	inline static int32_t get_offset_of_authorizationStatus_0() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___authorizationStatus_0)); }
	inline int32_t get_authorizationStatus_0() const { return ___authorizationStatus_0; }
	inline int32_t* get_address_of_authorizationStatus_0() { return &___authorizationStatus_0; }
	inline void set_authorizationStatus_0(int32_t value)
	{
		___authorizationStatus_0 = value;
	}

	inline static int32_t get_offset_of_notificationCenterSetting_1() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___notificationCenterSetting_1)); }
	inline int32_t get_notificationCenterSetting_1() const { return ___notificationCenterSetting_1; }
	inline int32_t* get_address_of_notificationCenterSetting_1() { return &___notificationCenterSetting_1; }
	inline void set_notificationCenterSetting_1(int32_t value)
	{
		___notificationCenterSetting_1 = value;
	}

	inline static int32_t get_offset_of_lockScreenSetting_2() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___lockScreenSetting_2)); }
	inline int32_t get_lockScreenSetting_2() const { return ___lockScreenSetting_2; }
	inline int32_t* get_address_of_lockScreenSetting_2() { return &___lockScreenSetting_2; }
	inline void set_lockScreenSetting_2(int32_t value)
	{
		___lockScreenSetting_2 = value;
	}

	inline static int32_t get_offset_of_carPlaySetting_3() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___carPlaySetting_3)); }
	inline int32_t get_carPlaySetting_3() const { return ___carPlaySetting_3; }
	inline int32_t* get_address_of_carPlaySetting_3() { return &___carPlaySetting_3; }
	inline void set_carPlaySetting_3(int32_t value)
	{
		___carPlaySetting_3 = value;
	}

	inline static int32_t get_offset_of_alertSetting_4() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___alertSetting_4)); }
	inline int32_t get_alertSetting_4() const { return ___alertSetting_4; }
	inline int32_t* get_address_of_alertSetting_4() { return &___alertSetting_4; }
	inline void set_alertSetting_4(int32_t value)
	{
		___alertSetting_4 = value;
	}

	inline static int32_t get_offset_of_badgeSetting_5() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___badgeSetting_5)); }
	inline int32_t get_badgeSetting_5() const { return ___badgeSetting_5; }
	inline int32_t* get_address_of_badgeSetting_5() { return &___badgeSetting_5; }
	inline void set_badgeSetting_5(int32_t value)
	{
		___badgeSetting_5 = value;
	}

	inline static int32_t get_offset_of_soundSetting_6() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___soundSetting_6)); }
	inline int32_t get_soundSetting_6() const { return ___soundSetting_6; }
	inline int32_t* get_address_of_soundSetting_6() { return &___soundSetting_6; }
	inline void set_soundSetting_6(int32_t value)
	{
		___soundSetting_6 = value;
	}

	inline static int32_t get_offset_of_alertStyle_7() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___alertStyle_7)); }
	inline int32_t get_alertStyle_7() const { return ___alertStyle_7; }
	inline int32_t* get_address_of_alertStyle_7() { return &___alertStyle_7; }
	inline void set_alertStyle_7(int32_t value)
	{
		___alertStyle_7 = value;
	}

	inline static int32_t get_offset_of_showPreviewsSetting_8() { return static_cast<int32_t>(offsetof(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0, ___showPreviewsSetting_8)); }
	inline int32_t get_showPreviewsSetting_8() const { return ___showPreviewsSetting_8; }
	inline int32_t* get_address_of_showPreviewsSetting_8() { return &___showPreviewsSetting_8; }
	inline void set_showPreviewsSetting_8(int32_t value)
	{
		___showPreviewsSetting_8 = value;
	}
};


// Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct  iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 
{
public:
	// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::timeInterval
	int32_t ___timeInterval_0;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_timeInterval_0() { return static_cast<int32_t>(offsetof(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880, ___timeInterval_0)); }
	inline int32_t get_timeInterval_0() const { return ___timeInterval_0; }
	inline int32_t* get_address_of_timeInterval_0() { return &___timeInterval_0; }
	inline void set_timeInterval_0(int32_t value)
	{
		___timeInterval_0 = value;
	}

	inline static int32_t get_offset_of_U3CRepeatsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880, ___U3CRepeatsU3Ek__BackingField_1)); }
	inline bool get_U3CRepeatsU3Ek__BackingField_1() const { return ___U3CRepeatsU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CRepeatsU3Ek__BackingField_1() { return &___U3CRepeatsU3Ek__BackingField_1; }
	inline void set_U3CRepeatsU3Ek__BackingField_1(bool value)
	{
		___U3CRepeatsU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_pinvoke
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
struct iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_com
{
	int32_t ___timeInterval_0;
	int32_t ___U3CRepeatsU3Ek__BackingField_1;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>
struct  Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 
{
public:
	// T System.Nullable`1::value
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284, ___value_0)); }
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  get_value_0() const { return ___value_0; }
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___data_7), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Unity.Notifications.iOS.PresentationOption
struct  PresentationOption_tF8BB33E1901FBBC3E0F388632C7715A3A5FDB8B3 
{
public:
	// System.Int32 Unity.Notifications.iOS.PresentationOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PresentationOption_tF8BB33E1901FBBC3E0F388632C7715A3A5FDB8B3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Notifications.iOS.iOSNotification
struct  iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152  : public RuntimeObject
{
public:
	// Unity.Notifications.iOS.iOSNotificationData Unity.Notifications.iOS.iOSNotification::data
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152, ___data_0)); }
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  get_data_0() const { return ___data_0; }
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___data_0))->___data_7), (void*)NULL);
		#endif
	}
};


// Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct  iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F 
{
public:
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Year>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CYearU3Ek__BackingField_0;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Month>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMonthU3Ek__BackingField_1;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Day>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CDayU3Ek__BackingField_2;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Hour>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CHourU3Ek__BackingField_3;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Minute>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMinuteU3Ek__BackingField_4;
	// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Second>k__BackingField
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CSecondU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::<Repeats>k__BackingField
	bool ___U3CRepeatsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CYearU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CYearU3Ek__BackingField_0)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CYearU3Ek__BackingField_0() const { return ___U3CYearU3Ek__BackingField_0; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CYearU3Ek__BackingField_0() { return &___U3CYearU3Ek__BackingField_0; }
	inline void set_U3CYearU3Ek__BackingField_0(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CYearU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMonthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CMonthU3Ek__BackingField_1)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CMonthU3Ek__BackingField_1() const { return ___U3CMonthU3Ek__BackingField_1; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CMonthU3Ek__BackingField_1() { return &___U3CMonthU3Ek__BackingField_1; }
	inline void set_U3CMonthU3Ek__BackingField_1(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CMonthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CDayU3Ek__BackingField_2)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CDayU3Ek__BackingField_2() const { return ___U3CDayU3Ek__BackingField_2; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CDayU3Ek__BackingField_2() { return &___U3CDayU3Ek__BackingField_2; }
	inline void set_U3CDayU3Ek__BackingField_2(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CDayU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CHourU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CHourU3Ek__BackingField_3)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CHourU3Ek__BackingField_3() const { return ___U3CHourU3Ek__BackingField_3; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CHourU3Ek__BackingField_3() { return &___U3CHourU3Ek__BackingField_3; }
	inline void set_U3CHourU3Ek__BackingField_3(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CHourU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMinuteU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CMinuteU3Ek__BackingField_4)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CMinuteU3Ek__BackingField_4() const { return ___U3CMinuteU3Ek__BackingField_4; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CMinuteU3Ek__BackingField_4() { return &___U3CMinuteU3Ek__BackingField_4; }
	inline void set_U3CMinuteU3Ek__BackingField_4(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CMinuteU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSecondU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CSecondU3Ek__BackingField_5)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_U3CSecondU3Ek__BackingField_5() const { return ___U3CSecondU3Ek__BackingField_5; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_U3CSecondU3Ek__BackingField_5() { return &___U3CSecondU3Ek__BackingField_5; }
	inline void set_U3CSecondU3Ek__BackingField_5(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___U3CSecondU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CRepeatsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F, ___U3CRepeatsU3Ek__BackingField_6)); }
	inline bool get_U3CRepeatsU3Ek__BackingField_6() const { return ___U3CRepeatsU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CRepeatsU3Ek__BackingField_6() { return &___U3CRepeatsU3Ek__BackingField_6; }
	inline void set_U3CRepeatsU3Ek__BackingField_6(bool value)
	{
		___U3CRepeatsU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_pinvoke
{
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CYearU3Ek__BackingField_0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CDayU3Ek__BackingField_2;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CHourU3Ek__BackingField_3;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CRepeatsU3Ek__BackingField_6;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationCalendarTrigger
struct iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_com
{
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CYearU3Ek__BackingField_0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMonthU3Ek__BackingField_1;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CDayU3Ek__BackingField_2;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CHourU3Ek__BackingField_3;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CMinuteU3Ek__BackingField_4;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___U3CSecondU3Ek__BackingField_5;
	int32_t ___U3CRepeatsU3Ek__BackingField_6;
};

// Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct  iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B 
{
public:
	// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Center>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CCenterU3Ek__BackingField_0;
	// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::<Radius>k__BackingField
	float ___U3CRadiusU3Ek__BackingField_1;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnEntry>k__BackingField
	bool ___U3CNotifyOnEntryU3Ek__BackingField_2;
	// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::<NotifyOnExit>k__BackingField
	bool ___U3CNotifyOnExitU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B, ___U3CCenterU3Ek__BackingField_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CCenterU3Ek__BackingField_0() const { return ___U3CCenterU3Ek__BackingField_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CCenterU3Ek__BackingField_0() { return &___U3CCenterU3Ek__BackingField_0; }
	inline void set_U3CCenterU3Ek__BackingField_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CCenterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B, ___U3CRadiusU3Ek__BackingField_1)); }
	inline float get_U3CRadiusU3Ek__BackingField_1() const { return ___U3CRadiusU3Ek__BackingField_1; }
	inline float* get_address_of_U3CRadiusU3Ek__BackingField_1() { return &___U3CRadiusU3Ek__BackingField_1; }
	inline void set_U3CRadiusU3Ek__BackingField_1(float value)
	{
		___U3CRadiusU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNotifyOnEntryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B, ___U3CNotifyOnEntryU3Ek__BackingField_2)); }
	inline bool get_U3CNotifyOnEntryU3Ek__BackingField_2() const { return ___U3CNotifyOnEntryU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CNotifyOnEntryU3Ek__BackingField_2() { return &___U3CNotifyOnEntryU3Ek__BackingField_2; }
	inline void set_U3CNotifyOnEntryU3Ek__BackingField_2(bool value)
	{
		___U3CNotifyOnEntryU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNotifyOnExitU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B, ___U3CNotifyOnExitU3Ek__BackingField_3)); }
	inline bool get_U3CNotifyOnExitU3Ek__BackingField_3() const { return ___U3CNotifyOnExitU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CNotifyOnExitU3Ek__BackingField_3() { return &___U3CNotifyOnExitU3Ek__BackingField_3; }
	inline void set_U3CNotifyOnExitU3Ek__BackingField_3(bool value)
	{
		___U3CNotifyOnExitU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_pinvoke
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CCenterU3Ek__BackingField_0;
	float ___U3CRadiusU3Ek__BackingField_1;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Unity.Notifications.iOS.iOSNotificationLocationTrigger
struct iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_com
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CCenterU3Ek__BackingField_0;
	float ___U3CRadiusU3Ek__BackingField_1;
	int32_t ___U3CNotifyOnEntryU3Ek__BackingField_2;
	int32_t ___U3CNotifyOnExitU3Ek__BackingField_3;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback
struct  AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback
struct  NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback
struct  AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback
struct  NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Unity.Notifications.iOS.iOSNotificationsWrapper
struct  iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields
{
public:
	// Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback Unity.Notifications.iOS.iOSNotificationsWrapper::onAuthenticationRequestFinished
	AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * ___onAuthenticationRequestFinished_4;
	// Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationsWrapper::onNotificationReceived
	NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___onNotificationReceived_5;
	// Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback Unity.Notifications.iOS.iOSNotificationsWrapper::onRemoteNotificationReceived
	NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___onRemoteNotificationReceived_6;

public:
	inline static int32_t get_offset_of_onAuthenticationRequestFinished_4() { return static_cast<int32_t>(offsetof(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields, ___onAuthenticationRequestFinished_4)); }
	inline AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * get_onAuthenticationRequestFinished_4() const { return ___onAuthenticationRequestFinished_4; }
	inline AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA ** get_address_of_onAuthenticationRequestFinished_4() { return &___onAuthenticationRequestFinished_4; }
	inline void set_onAuthenticationRequestFinished_4(AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * value)
	{
		___onAuthenticationRequestFinished_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onAuthenticationRequestFinished_4), (void*)value);
	}

	inline static int32_t get_offset_of_onNotificationReceived_5() { return static_cast<int32_t>(offsetof(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields, ___onNotificationReceived_5)); }
	inline NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * get_onNotificationReceived_5() const { return ___onNotificationReceived_5; }
	inline NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 ** get_address_of_onNotificationReceived_5() { return &___onNotificationReceived_5; }
	inline void set_onNotificationReceived_5(NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * value)
	{
		___onNotificationReceived_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNotificationReceived_5), (void*)value);
	}

	inline static int32_t get_offset_of_onRemoteNotificationReceived_6() { return static_cast<int32_t>(offsetof(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields, ___onRemoteNotificationReceived_6)); }
	inline NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * get_onRemoteNotificationReceived_6() const { return ___onRemoteNotificationReceived_6; }
	inline NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 ** get_address_of_onRemoteNotificationReceived_6() { return &___onRemoteNotificationReceived_6; }
	inline void set_onRemoteNotificationReceived_6(NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * value)
	{
		___onRemoteNotificationReceived_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRemoteNotificationReceived_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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
// Unity.Notifications.iOS.iOSNotificationData[]
struct iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  m_Items[1];

public:
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data_7), (void*)NULL);
		#endif
	}
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___identifier_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___body_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subtitle_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___categoryIdentifier_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___threadIdentifier_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___data_7), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke_back(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled);
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled);

// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mDF88FD38287F43C9F0A3911846572A39E33E0D2B_gshared_inline (Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  Nullable_1_get_Value_m0B1B510A34429B8382C3E13BDA4A3BA82038092F_gshared (Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<Unity.Notifications.iOS.iOSNotificationData>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mD3015742B85C089E24CBB4C2C3236D9E03C215DF_gshared (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___structure0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Unity.Notifications.iOS.iOSNotificationData>(!!0,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mEA3D256AEC9EC9F2674B3C41A86D1E63337B78E7_gshared (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mBCE38FCE77D055DB4DAB2D26565FF286D60A7E13_gshared (List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mFAB71E5D1FB16640B1BDCE11C50A9A011D7DAA40_gshared (List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * __this, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* List_1_ToArray_m934BA0CD604C9CC41771E26124D28F7B956D75BB_gshared (List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m66EEEDB16F4C44686541EE33DBB4780E4BC6CD3A_gshared (Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 * __this, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___value0, const RuntimeMethod* method);

// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_m9C339D4E98CEFE0B44DA8A24B05D1690476B1116 (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_mDBE8EB76AFB1BF0BFFD30EFA1FA67956061F2D4B_inline (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_m826168462BB6FFC0D945CBFE618A67126F85675B (const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Year_mBBCED3DDF15A9E843C813CB365E24CE55687E75D_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared)(__this, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Month_m0DF590657656E149DC90E7D63CA9E575105103D1_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Day_mF30D77FF88E0730D47C3DDC6DF4CADC350F589AD_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Hour_m384BE74AD4DC2FEDD2310DCD77D7B353B9AF3D4C_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Minute_m7AC063853B8B4DF3ECF996B3188901304C935A2A_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Second_mA4751D11679102E3F60CF1973003D0A916A2BBFF_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mA056204B0FD6839466C691EBB03196253D850439_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_mAD6EE7678084A9AF883C67970B948914622028EB (const RuntimeMethod* method);
// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Center()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m92862B7E2AAA2731DB9F1BAE5656A68046B9AD17_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_m0E16244BD95BD77F19DDEEF3115278E9319C623B_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method);
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_m9B7631C5EEA1FC5C5D6AF9EA192C116BA17B7873_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m6A4F6FCE4D0EB26D5D101ABF056D835D26E85674 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___identifier0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_mC632044738B230A3F2C4B9EC6F40983590C0C654 (const RuntimeMethod* method);
// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData> Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284  iOSNotificationsWrapper_GetLastNotificationData_mC2434D4A9E96E2D2CEDFFB013F1F823165900125 (const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::get_HasValue()
inline bool Nullable_1_get_HasValue_mDF88FD38287F43C9F0A3911846572A39E33E0D2B_inline (Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 *, const RuntimeMethod*))Nullable_1_get_HasValue_mDF88FD38287F43C9F0A3911846572A39E33E0D2B_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::get_Value()
inline iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  Nullable_1_get_Value_m0B1B510A34429B8382C3E13BDA4A3BA82038092F (Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 * __this, const RuntimeMethod* method)
{
	return ((  iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  (*) (Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 *, const RuntimeMethod*))Nullable_1_get_Value_m0B1B510A34429B8382C3E13BDA4A3BA82038092F_gshared)(__this, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m8E140449CE45E01DEF3D3B64704FC15A6F802F30 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllScheduledNotifications_m70DECB7DF21179FAF479CA2FB06D082A2F2C7A3F (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllDeliveredNotifications_mD16EFD4673109F3475259839F7939F1E9E74924E (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_m586932E29D8B00E1A20A3ECF6DD1FC1EB26123EB (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mE95F6C6AE41D6E8C65B78EAE908899BA05D1A1A4 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___notification0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::Invoke(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback_Invoke_m3BBF26929CDEF40853EFFB9F86F8190082C3F5FD (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m77868881D517501310180FCF0E528357596B4CC9 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/AuthorizationRequestCompletedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback__ctor_m5062FC79DA5A3F6A3D78BB8F075D9807327A667F (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF28B20E1637C3E25D81593EAE5E400DE93D00215 (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * __this, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_TimeInterval(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_TimeInterval_mA8D518C2F510F3917081552D8361DF975BC15AE3 (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m307A5902AD61CD35BB11B17024931CB2CA53849E_inline (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_m0B9514890D5292A398583EB5FB52C84E89EF2C44 (intptr_t ___authRequestDataPtr0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_m7892270BF1067E6B09F2AD79891BD9C0E7B5E2EC (intptr_t ___notificationDataPtr0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_m15A8B9969D3B760901868EED3ECD57F6251D3F8E (intptr_t ___notificationDataPtr0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_m73B765EC0995B5B174379ACAF70E93A857FBB1B5 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_mD75E7C4E7C7A6CED0293E31765A5885BF9C4B35C (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m5DBBA71545C75619DF41ABA7567123E9B14F7A5D (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_m10CE9B582E43A999BADF8FB1ABE6E0AEB28A7FDA (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___callback0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m363297CE6CE661F68760DACF5F0F82D5F3382357 (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___callback0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43 (intptr_t ___ptr0, Type_t * ___structureType1, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::onFinishedAuthorizationRequest(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_onFinishedAuthorizationRequest_m48B8078CB367A66D0A9E13B1734F7310CC9B7A79 (iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::onReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_onReceivedRemoteNotification_m2A9BB7A51DC29BDA203595DDEE5762B115893EDA (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::onSentNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_onSentNotification_m9F136BE7C08D6938CDC4BC02BB0B6873D7510B31 (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_m40962C59E37C30F1A4FE32BAC587F491D6FE8BEA (int32_t ___options0, bool ___registerForRemote1, const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetNotificationSettings_m8CABEFD845927E5E30F447E2D1EA87EEDCC08B09 (const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagedStruct(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagedStruct_mF3AD5E1C5994F6C9D4202938DADDD0A1E3EE6095 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<Unity.Notifications.iOS.iOSNotificationData>(!!0)
inline int32_t Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mD3015742B85C089E24CBB4C2C3236D9E03C215DF (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F , const RuntimeMethod*))Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mD3015742B85C089E24CBB4C2C3236D9E03C215DF_gshared)(___structure0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58 (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Unity.Notifications.iOS.iOSNotificationData>(!!0,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mEA3D256AEC9EC9F2674B3C41A86D1E63337B78E7 (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F , intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mEA3D256AEC9EC9F2674B3C41A86D1E63337B78E7_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_m4F901D298DEB899D3E28229AF7B4401660F476D3 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetDeliveredNotificationDataCount_mFB47185B7B95333A58FD13B0C24830561546304F (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor()
inline void List_1__ctor_mBCE38FCE77D055DB4DAB2D26565FF286D60A7E13 (List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 *, const RuntimeMethod*))List_1__ctor_mBCE38FCE77D055DB4DAB2D26565FF286D60A7E13_gshared)(__this, method);
}
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataAt_m7240C990927BAFC8371E453F87CD659F47EB5680 (int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::Add(!0)
inline void List_1_Add_mFAB71E5D1FB16640B1BDCE11C50A9A011D7DAA40 (List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * __this, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 *, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F , const RuntimeMethod*))List_1_Add_mFAB71E5D1FB16640B1BDCE11C50A9A011D7DAA40_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<Unity.Notifications.iOS.iOSNotificationData>::ToArray()
inline iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* List_1_ToArray_m934BA0CD604C9CC41771E26124D28F7B956D75BB (List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * __this, const RuntimeMethod* method)
{
	return ((  iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* (*) (List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 *, const RuntimeMethod*))List_1_ToArray_m934BA0CD604C9CC41771E26124D28F7B956D75BB_gshared)(__this, method);
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetScheduledNotificationDataCount_mEEBA7222DA52EF627763D71509F38DB94940206E (const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataAt_m2112911929348F235E1A86D7B83C5B892967E714 (int32_t ___index0, const RuntimeMethod* method);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m7A159E4AD133AEAF471C5DD883AB21CFBC37D120 (int32_t ___badge0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_m8D7669E17F0E0EBBBC7FA6AEFA44B294C0CC5672 (const RuntimeMethod* method);
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_mE65A279F2D6A41C0ED3D52DC9BD8D14FEEEBE9A6 (const RuntimeMethod* method);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_mA218BDD1A1DE5305674150E48E6A35347840AA68 (const RuntimeMethod* method);
// System.Void System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData>::.ctor(!0)
inline void Nullable_1__ctor_m66EEEDB16F4C44686541EE33DBB4780E4BC6CD3A (Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 * __this, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 *, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F , const RuntimeMethod*))Nullable_1__ctor_m66EEEDB16F4C44686541EE33DBB4780E4BC6CD3A_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled)
{
	marshaled.___granted_0 = static_cast<int32_t>(unmarshaled.get_granted_0());
	marshaled.___error_1 = il2cpp_codegen_marshal_string(unmarshaled.get_error_1());
	marshaled.___finished_2 = static_cast<int32_t>(unmarshaled.get_finished_2());
	marshaled.___deviceToken_3 = il2cpp_codegen_marshal_string(unmarshaled.get_deviceToken_3());
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke_back(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled)
{
	bool unmarshaled_granted_temp_0 = false;
	unmarshaled_granted_temp_0 = static_cast<bool>(marshaled.___granted_0);
	unmarshaled.set_granted_0(unmarshaled_granted_temp_0);
	unmarshaled.set_error_1(il2cpp_codegen_marshal_string_result(marshaled.___error_1));
	bool unmarshaled_finished_temp_2 = false;
	unmarshaled_finished_temp_2 = static_cast<bool>(marshaled.___finished_2);
	unmarshaled.set_finished_2(unmarshaled_finished_temp_2);
	unmarshaled.set_deviceToken_3(il2cpp_codegen_marshal_string_result(marshaled.___deviceToken_3));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke_cleanup(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___deviceToken_3);
	marshaled.___deviceToken_3 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_com(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_com& marshaled)
{
	marshaled.___granted_0 = static_cast<int32_t>(unmarshaled.get_granted_0());
	marshaled.___error_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_error_1());
	marshaled.___finished_2 = static_cast<int32_t>(unmarshaled.get_finished_2());
	marshaled.___deviceToken_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_deviceToken_3());
}
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_com_back(const iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_com& marshaled, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6& unmarshaled)
{
	bool unmarshaled_granted_temp_0 = false;
	unmarshaled_granted_temp_0 = static_cast<bool>(marshaled.___granted_0);
	unmarshaled.set_granted_0(unmarshaled_granted_temp_0);
	unmarshaled.set_error_1(il2cpp_codegen_marshal_bstring_result(marshaled.___error_1));
	bool unmarshaled_finished_temp_2 = false;
	unmarshaled_finished_temp_2 = static_cast<bool>(marshaled.___finished_2);
	unmarshaled.set_finished_2(unmarshaled_finished_temp_2);
	unmarshaled.set_deviceToken_3(il2cpp_codegen_marshal_bstring_result(marshaled.___deviceToken_3));
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSAuthorizationRequestData
IL2CPP_EXTERN_C void iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_com_cleanup(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___error_1);
	marshaled.___error_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___deviceToken_3);
	marshaled.___deviceToken_3 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.iOS.iOSNotification::set_Identifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Identifier_m0FE3E82FE6D9BCFCD869D7B2828046CC8E0F1D2C (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.identifier = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_identifier_0(L_1);
		// set { data.identifier = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_CategoryIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_CategoryIdentifier_m5C3578B780BF192292015164EBA3D184A3DC62E7 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.categoryIdentifier = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_categoryIdentifier_5(L_1);
		// set { data.categoryIdentifier = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ThreadIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ThreadIdentifier_m8490EBCA321051DAB22B314A1EFD8F0B82E086A9 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set {  data.threadIdentifier = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_threadIdentifier_6(L_1);
		// set {  data.threadIdentifier = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Title_mCE7950DDE7F07E7A311C8B0285D7F0361DA545E7 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set {  data.title = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_title_1(L_1);
		// set {  data.title = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Subtitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Subtitle_m1A7B33D06A7E6F7A36CD3A02B4A317437D458FE3 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set {  data.subtitle = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_subtitle_4(L_1);
		// set {  data.subtitle = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Body(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Body_m9D5CAFA5C34626CF4A0E82CA31B528D7F865FE98 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set {  data.body = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_body_2(L_1);
		// set {  data.body = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ShowInForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ShowInForeground_m1785C04DD53C52E9CCB9296CDFDC310B721767F1 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set {  data.showInForeground = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		bool L_1 = ___value0;
		L_0->set_showInForeground_8(L_1);
		// set {  data.showInForeground = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_ForegroundPresentationOption(Unity.Notifications.iOS.PresentationOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_ForegroundPresentationOption_m52D2F50E111F887CB1AFEB447FB06FF8C062C930 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { data.showInForegroundPresentationOptions = (int) value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		int32_t L_1 = ___value0;
		L_0->set_showInForegroundPresentationOptions_9(L_1);
		// set { data.showInForegroundPresentationOptions = (int) value; }
		return;
	}
}
// System.String Unity.Notifications.iOS.iOSNotification::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSNotification_get_Data_m8B57E0DCD9ADF972A2A3BA3A06A1B61DAFE87F17 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	{
		// get { return data.data; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = L_0->get_data_7();
		return L_1;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Data(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Data_mF99458275C22949D52305B3B76615FB7CFDE0407 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { data.data = value; }
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		String_t* L_1 = ___value0;
		L_0->set_data_7(L_1);
		// set { data.data = value; }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::set_Trigger(Unity.Notifications.iOS.iOSNotificationTrigger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification_set_Trigger_m697D4E1EA33C328BAB37B1E1199B4D1D92D29ECE (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotification_set_Trigger_m697D4E1EA33C328BAB37B1E1199B4D1D92D29ECE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880  V_0;
	memset((&V_0), 0, sizeof(V_0));
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B8_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B9_1 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B11_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B12_1 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B14_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B15_1 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B17_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B18_1 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B20_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B21_1 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B23_0 = NULL;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * G_B24_1 = NULL;
	{
		// if (value is iOSNotificationTimeIntervalTrigger)
		RuntimeObject* L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_il2cpp_TypeInfo_var)))
		{
			goto IL_0064;
		}
	}
	{
		// var trigger = (iOSNotificationTimeIntervalTrigger) value;
		RuntimeObject* L_1 = ___value0;
		V_0 = ((*(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *)((iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *)UnBox(L_1, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationTimeIntervalTrigger.Type;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_2 = __this->get_address_of_data_0();
		int32_t L_3 = iOSNotificationTimeIntervalTrigger_get_Type_m9C339D4E98CEFE0B44DA8A24B05D1690476B1116(/*hidden argument*/NULL);
		L_2->set_triggerType_10(L_3);
		// data.timeTriggerInterval = trigger.timeInterval;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_4 = __this->get_address_of_data_0();
		iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880  L_5 = V_0;
		int32_t L_6 = L_5.get_timeInterval_0();
		L_4->set_timeTriggerInterval_12(L_6);
		// if (trigger.timeInterval > 60)
		iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880  L_7 = V_0;
		int32_t L_8 = L_7.get_timeInterval_0();
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)60))))
		{
			goto IL_004d;
		}
	}
	{
		// data.repeats = trigger.Repeats;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_9 = __this->get_address_of_data_0();
		bool L_10 = iOSNotificationTimeIntervalTrigger_get_Repeats_mDBE8EB76AFB1BF0BFFD30EFA1FA67956061F2D4B_inline((iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *)(&V_0), /*hidden argument*/NULL);
		L_9->set_repeats_11(L_10);
		// }
		return;
	}

IL_004d:
	{
		// if (trigger.Repeats)
		bool L_11 = iOSNotificationTimeIntervalTrigger_get_Repeats_mDBE8EB76AFB1BF0BFFD30EFA1FA67956061F2D4B_inline((iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *)(&V_0), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0245;
		}
	}
	{
		// Debug.LogWarning("Time interval must be at least 60 for repeating notifications.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral27A526548B2C2EC709AAB2262D373E18C6A9BA5B, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0064:
	{
		// else if (value is iOSNotificationCalendarTrigger)
		RuntimeObject* L_12 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_il2cpp_TypeInfo_var)))
		{
			goto IL_01ad;
		}
	}
	{
		// var trigger = (iOSNotificationCalendarTrigger) value;
		RuntimeObject* L_13 = ___value0;
		V_1 = ((*(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)UnBox(L_13, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationCalendarTrigger.Type;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_14 = __this->get_address_of_data_0();
		int32_t L_15 = iOSNotificationCalendarTrigger_get_Type_m826168462BB6FFC0D945CBFE618A67126F85675B(/*hidden argument*/NULL);
		L_14->set_triggerType_10(L_15);
		// data.calendarTriggerYear = trigger.Year != null ? trigger.Year.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_16 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_17 = iOSNotificationCalendarTrigger_get_Year_mBBCED3DDF15A9E843C813CB365E24CE55687E75D_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_17;
		bool L_18 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B7_0 = L_16;
		if (L_18)
		{
			G_B8_0 = L_16;
			goto IL_00a0;
		}
	}
	{
		G_B9_0 = (-1);
		G_B9_1 = G_B7_0;
		goto IL_00af;
	}

IL_00a0:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_19 = iOSNotificationCalendarTrigger_get_Year_mBBCED3DDF15A9E843C813CB365E24CE55687E75D_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_19;
		int32_t L_20 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B9_0 = L_20;
		G_B9_1 = G_B8_0;
	}

IL_00af:
	{
		G_B9_1->set_calendarTriggerYear_13(G_B9_0);
		// data.calendarTriggerMonth = trigger.Month != null ? trigger.Month.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_21 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_22 = iOSNotificationCalendarTrigger_get_Month_m0DF590657656E149DC90E7D63CA9E575105103D1_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_22;
		bool L_23 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B10_0 = L_21;
		if (L_23)
		{
			G_B11_0 = L_21;
			goto IL_00ce;
		}
	}
	{
		G_B12_0 = (-1);
		G_B12_1 = G_B10_0;
		goto IL_00dd;
	}

IL_00ce:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_24 = iOSNotificationCalendarTrigger_get_Month_m0DF590657656E149DC90E7D63CA9E575105103D1_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_24;
		int32_t L_25 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B12_0 = L_25;
		G_B12_1 = G_B11_0;
	}

IL_00dd:
	{
		G_B12_1->set_calendarTriggerMonth_14(G_B12_0);
		// data.calendarTriggerDay = trigger.Day != null ? trigger.Day.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_26 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_27 = iOSNotificationCalendarTrigger_get_Day_mF30D77FF88E0730D47C3DDC6DF4CADC350F589AD_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_27;
		bool L_28 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B13_0 = L_26;
		if (L_28)
		{
			G_B14_0 = L_26;
			goto IL_00fc;
		}
	}
	{
		G_B15_0 = (-1);
		G_B15_1 = G_B13_0;
		goto IL_010b;
	}

IL_00fc:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_29 = iOSNotificationCalendarTrigger_get_Day_mF30D77FF88E0730D47C3DDC6DF4CADC350F589AD_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_29;
		int32_t L_30 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B15_0 = L_30;
		G_B15_1 = G_B14_0;
	}

IL_010b:
	{
		G_B15_1->set_calendarTriggerDay_15(G_B15_0);
		// data.calendarTriggerHour = trigger.Hour != null ? trigger.Hour.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_31 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_32 = iOSNotificationCalendarTrigger_get_Hour_m384BE74AD4DC2FEDD2310DCD77D7B353B9AF3D4C_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_32;
		bool L_33 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B16_0 = L_31;
		if (L_33)
		{
			G_B17_0 = L_31;
			goto IL_012a;
		}
	}
	{
		G_B18_0 = (-1);
		G_B18_1 = G_B16_0;
		goto IL_0139;
	}

IL_012a:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_34 = iOSNotificationCalendarTrigger_get_Hour_m384BE74AD4DC2FEDD2310DCD77D7B353B9AF3D4C_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_34;
		int32_t L_35 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B18_0 = L_35;
		G_B18_1 = G_B17_0;
	}

IL_0139:
	{
		G_B18_1->set_calendarTriggerHour_16(G_B18_0);
		// data.calendarTriggerMinute = trigger.Minute != null ? trigger.Minute.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_36 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_37 = iOSNotificationCalendarTrigger_get_Minute_m7AC063853B8B4DF3ECF996B3188901304C935A2A_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_37;
		bool L_38 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B19_0 = L_36;
		if (L_38)
		{
			G_B20_0 = L_36;
			goto IL_0158;
		}
	}
	{
		G_B21_0 = (-1);
		G_B21_1 = G_B19_0;
		goto IL_0167;
	}

IL_0158:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_39 = iOSNotificationCalendarTrigger_get_Minute_m7AC063853B8B4DF3ECF996B3188901304C935A2A_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_39;
		int32_t L_40 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B21_0 = L_40;
		G_B21_1 = G_B20_0;
	}

IL_0167:
	{
		G_B21_1->set_calendarTriggerMinute_17(G_B21_0);
		// data.calendarTriggerSecond = trigger.Second != null ? trigger.Second.Value : -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_41 = __this->get_address_of_data_0();
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_42 = iOSNotificationCalendarTrigger_get_Second_mA4751D11679102E3F60CF1973003D0A916A2BBFF_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_42;
		bool L_43 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		G_B22_0 = L_41;
		if (L_43)
		{
			G_B23_0 = L_41;
			goto IL_0186;
		}
	}
	{
		G_B24_0 = (-1);
		G_B24_1 = G_B22_0;
		goto IL_0195;
	}

IL_0186:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_44 = iOSNotificationCalendarTrigger_get_Second_mA4751D11679102E3F60CF1973003D0A916A2BBFF_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_44;
		int32_t L_45 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_0;
	}

IL_0195:
	{
		G_B24_1->set_calendarTriggerSecond_18(G_B24_0);
		// data.repeats = trigger.Repeats;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_46 = __this->get_address_of_data_0();
		bool L_47 = iOSNotificationCalendarTrigger_get_Repeats_mA056204B0FD6839466C691EBB03196253D850439_inline((iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *)(&V_1), /*hidden argument*/NULL);
		L_46->set_repeats_11(L_47);
		// }
		return;
	}

IL_01ad:
	{
		// else if (value is iOSNotificationLocationTrigger)
		RuntimeObject* L_48 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_48, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_il2cpp_TypeInfo_var)))
		{
			goto IL_0231;
		}
	}
	{
		// var trigger = (iOSNotificationLocationTrigger) value;
		RuntimeObject* L_49 = ___value0;
		V_3 = ((*(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)UnBox(L_49, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_il2cpp_TypeInfo_var))));
		// data.triggerType = iOSNotificationLocationTrigger.Type;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_50 = __this->get_address_of_data_0();
		int32_t L_51 = iOSNotificationLocationTrigger_get_Type_mAD6EE7678084A9AF883C67970B948914622028EB(/*hidden argument*/NULL);
		L_50->set_triggerType_10(L_51);
		// data.locationTriggerCenterX = trigger.Center.x;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_52 = __this->get_address_of_data_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_53 = iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_3), /*hidden argument*/NULL);
		float L_54 = L_53.get_x_0();
		L_52->set_locationTriggerCenterX_19(L_54);
		// data.locationTriggerCenterY = trigger.Center.x;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_55 = __this->get_address_of_data_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_56 = iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_3), /*hidden argument*/NULL);
		float L_57 = L_56.get_x_0();
		L_55->set_locationTriggerCenterY_20(L_57);
		// data.locationTriggerNotifyOnEntry = trigger.NotifyOnEntry;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_58 = __this->get_address_of_data_0();
		bool L_59 = iOSNotificationLocationTrigger_get_NotifyOnEntry_m92862B7E2AAA2731DB9F1BAE5656A68046B9AD17_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_3), /*hidden argument*/NULL);
		L_58->set_locationTriggerNotifyOnEntry_22(L_59);
		// data.locationTriggerNotifyOnExit = trigger.NotifyOnExit;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_60 = __this->get_address_of_data_0();
		bool L_61 = iOSNotificationLocationTrigger_get_NotifyOnExit_m0E16244BD95BD77F19DDEEF3115278E9319C623B_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_3), /*hidden argument*/NULL);
		L_60->set_locationTriggerNotifyOnExit_23(L_61);
		// data.locationTriggerRadius = trigger.Radius;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_62 = __this->get_address_of_data_0();
		float L_63 = iOSNotificationLocationTrigger_get_Radius_m9B7631C5EEA1FC5C5D6AF9EA192C116BA17B7873_inline((iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *)(&V_3), /*hidden argument*/NULL);
		L_62->set_locationTriggerRadius_21(L_63);
		// }
		return;
	}

IL_0231:
	{
		// else if (value is iOSNotificationPushTrigger)
		RuntimeObject* L_64 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_64, iOSNotificationPushTrigger_t29A1F47CC48E56F32F2D3E8A51868CFD825355B5_il2cpp_TypeInfo_var)))
		{
			goto IL_0245;
		}
	}
	{
		// data.triggerType = 3;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_65 = __this->get_address_of_data_0();
		L_65->set_triggerType_10(3);
	}

IL_0245:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m6D7A48CC3DDF0E0F8637B72AAB3865C38AAF1021 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotification__ctor_m6D7A48CC3DDF0E0F8637B72AAB3865C38AAF1021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public iOSNotification() : this(
		//     Math.Abs(DateTime.Now.ToString("yyMMddHHmmssffffff").GetHashCode()).ToString())
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), _stringLiteral42E1675938518324B72A94620A159CD1F6BA5EC2, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_3 = il2cpp_codegen_abs(L_2);
		V_1 = L_3;
		String_t* L_4 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		iOSNotification__ctor_m6A4F6FCE4D0EB26D5D101ABF056D835D26E85674(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotification::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotification__ctor_m6A4F6FCE4D0EB26D5D101ABF056D835D26E85674 (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotification__ctor_m6A4F6FCE4D0EB26D5D101ABF056D835D26E85674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public iOSNotification(string identifier)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// data = new iOSNotificationData();
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_0 = __this->get_address_of_data_0();
		il2cpp_codegen_initobj(L_0, sizeof(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F ));
		// data.identifier = identifier;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_1 = __this->get_address_of_data_0();
		String_t* L_2 = ___identifier0;
		L_1->set_identifier_0(L_2);
		// data.title = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_3 = __this->get_address_of_data_0();
		L_3->set_title_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.body = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_4 = __this->get_address_of_data_0();
		L_4->set_body_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.badge = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_5 = __this->get_address_of_data_0();
		L_5->set_badge_3((-1));
		// data.subtitle = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_6 = __this->get_address_of_data_0();
		L_6->set_subtitle_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.categoryIdentifier = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_7 = __this->get_address_of_data_0();
		L_7->set_categoryIdentifier_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.threadIdentifier = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_8 = __this->get_address_of_data_0();
		L_8->set_threadIdentifier_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.data = "";
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_9 = __this->get_address_of_data_0();
		L_9->set_data_7(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// data.showInForeground = false;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_10 = __this->get_address_of_data_0();
		L_10->set_showInForeground_8((bool)0);
		// data.showInForegroundPresentationOptions = (int) (PresentationOption.Alert |
		//                                              PresentationOption.Sound);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_11 = __this->get_address_of_data_0();
		L_11->set_showInForegroundPresentationOptions_9(6);
		// data.triggerType = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_12 = __this->get_address_of_data_0();
		L_12->set_triggerType_10((-1));
		// data.repeats = false;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_13 = __this->get_address_of_data_0();
		L_13->set_repeats_11((bool)0);
		// data.timeTriggerInterval = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_14 = __this->get_address_of_data_0();
		L_14->set_timeTriggerInterval_12((-1));
		// data.calendarTriggerYear = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_15 = __this->get_address_of_data_0();
		L_15->set_calendarTriggerYear_13((-1));
		// data.calendarTriggerMonth = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_16 = __this->get_address_of_data_0();
		L_16->set_calendarTriggerMonth_14((-1));
		// data.calendarTriggerDay = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_17 = __this->get_address_of_data_0();
		L_17->set_calendarTriggerDay_15((-1));
		// data.calendarTriggerHour = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_18 = __this->get_address_of_data_0();
		L_18->set_calendarTriggerHour_16((-1));
		// data.calendarTriggerMinute = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_19 = __this->get_address_of_data_0();
		L_19->set_calendarTriggerMinute_17((-1));
		// data.calendarTriggerSecond = -1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_20 = __this->get_address_of_data_0();
		L_20->set_calendarTriggerSecond_18((-1));
		// data.locationTriggerCenterX = 0f;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_21 = __this->get_address_of_data_0();
		L_21->set_locationTriggerCenterX_19((0.0f));
		// data.locationTriggerCenterY = 0f;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_22 = __this->get_address_of_data_0();
		L_22->set_locationTriggerCenterY_20((0.0f));
		// data.locationTriggerRadius = 2f;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_23 = __this->get_address_of_data_0();
		L_23->set_locationTriggerRadius_21((2.0f));
		// data.locationTriggerNotifyOnEntry = true;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_24 = __this->get_address_of_data_0();
		L_24->set_locationTriggerNotifyOnEntry_22((bool)1);
		// data.locationTriggerNotifyOnExit = false;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F * L_25 = __this->get_address_of_data_0();
		L_25->set_locationTriggerNotifyOnExit_23((bool)0);
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_pinvoke(const iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F& unmarshaled, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_pinvoke_back(const iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_pinvoke& marshaled, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_pinvoke_cleanup(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_com(const iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F& unmarshaled, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_com& marshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_com_back(const iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_com& marshaled, iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F& unmarshaled)
{
	Exception_t* ___U3CYearU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Year>k__BackingField' of type 'iOSNotificationCalendarTrigger'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CYearU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationCalendarTrigger
IL2CPP_EXTERN_C void iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshal_com_cleanup(iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationCalendarTrigger_get_Type_m826168462BB6FFC0D945CBFE618A67126F85675B (const RuntimeMethod* method)
{
	{
		// public static int Type { get { return (int)NotificationTriggerType.CalendarTrigger; }}
		return ((int32_t)10);
	}
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Year_mBBCED3DDF15A9E843C813CB365E24CE55687E75D (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CYearU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Year_mBBCED3DDF15A9E843C813CB365E24CE55687E75D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Year_mBBCED3DDF15A9E843C813CB365E24CE55687E75D_inline(_thisAdjusted, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Month_m0DF590657656E149DC90E7D63CA9E575105103D1 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CMonthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Month_m0DF590657656E149DC90E7D63CA9E575105103D1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Month_m0DF590657656E149DC90E7D63CA9E575105103D1_inline(_thisAdjusted, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Day_mF30D77FF88E0730D47C3DDC6DF4CADC350F589AD (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CDayU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Day_mF30D77FF88E0730D47C3DDC6DF4CADC350F589AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Day_mF30D77FF88E0730D47C3DDC6DF4CADC350F589AD_inline(_thisAdjusted, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Hour_m384BE74AD4DC2FEDD2310DCD77D7B353B9AF3D4C (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CHourU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Hour_m384BE74AD4DC2FEDD2310DCD77D7B353B9AF3D4C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Hour_m384BE74AD4DC2FEDD2310DCD77D7B353B9AF3D4C_inline(_thisAdjusted, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Minute_m7AC063853B8B4DF3ECF996B3188901304C935A2A (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CMinuteU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Minute_m7AC063853B8B4DF3ECF996B3188901304C935A2A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Minute_m7AC063853B8B4DF3ECF996B3188901304C935A2A_inline(_thisAdjusted, method);
}
// System.Nullable`1<System.Int32> Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Second_mA4751D11679102E3F60CF1973003D0A916A2BBFF (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CSecondU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Second_mA4751D11679102E3F60CF1973003D0A916A2BBFF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Second_mA4751D11679102E3F60CF1973003D0A916A2BBFF_inline(_thisAdjusted, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationCalendarTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mA056204B0FD6839466C691EBB03196253D850439 (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationCalendarTrigger_get_Repeats_mA056204B0FD6839466C691EBB03196253D850439_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * _thisAdjusted = reinterpret_cast<iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F *>(__this + _offset);
	return iOSNotificationCalendarTrigger_get_Repeats_mA056204B0FD6839466C691EBB03196253D850439_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Notifications.iOS.iOSNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationCenter_Initialize_m8E140449CE45E01DEF3D3B64704FC15A6F802F30 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_Initialize_m8E140449CE45E01DEF3D3B64704FC15A6F802F30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (initialized)
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		bool L_0 = ((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_initialized_0();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0009:
	{
		// iOSNotificationsWrapper.RegisterOnReceivedCallback();
		iOSNotificationsWrapper_RegisterOnReceivedCallback_mC632044738B230A3F2C4B9EC6F40983590C0C654(/*hidden argument*/NULL);
		// return initialized = true;
		int32_t L_1 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->set_initialized_0((bool)L_1);
		return (bool)L_1;
	}
}
// Unity.Notifications.iOS.iOSNotification Unity.Notifications.iOS.iOSNotificationCenter::GetLastRespondedNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * iOSNotificationCenter_GetLastRespondedNotification_m0FA87E439B933EFA568B4BFED97CEE8B1C3094CC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_GetLastRespondedNotification_m0FA87E439B933EFA568B4BFED97CEE8B1C3094CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = iOSNotificationsWrapper.GetLastNotificationData();
		Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284  L_0 = iOSNotificationsWrapper_GetLastNotificationData_mC2434D4A9E96E2D2CEDFFB013F1F823165900125(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (data == null)
		bool L_1 = Nullable_1_get_HasValue_mDF88FD38287F43C9F0A3911846572A39E33E0D2B_inline((Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mDF88FD38287F43C9F0A3911846572A39E33E0D2B_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *)NULL;
	}

IL_0011:
	{
		// var notification = new iOSNotification(data.Value.identifier);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_2 = Nullable_1_get_Value_m0B1B510A34429B8382C3E13BDA4A3BA82038092F((Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m0B1B510A34429B8382C3E13BDA4A3BA82038092F_RuntimeMethod_var);
		String_t* L_3 = L_2.get_identifier_0();
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_4 = (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *)il2cpp_codegen_object_new(iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m6A4F6FCE4D0EB26D5D101ABF056D835D26E85674(L_4, L_3, /*hidden argument*/NULL);
		// notification.data = data.Value;
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_5 = L_4;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_6 = Nullable_1_get_Value_m0B1B510A34429B8382C3E13BDA4A3BA82038092F((Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m0B1B510A34429B8382C3E13BDA4A3BA82038092F_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->set_data_0(L_6);
		// return notification;
		return L_5;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveAllScheduledNotifications_m4E7E85B5BBE66984B3B8000691F49A7CB5728D3D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_RemoveAllScheduledNotifications_m4E7E85B5BBE66984B3B8000691F49A7CB5728D3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		bool L_0 = iOSNotificationCenter_Initialize_m8E140449CE45E01DEF3D3B64704FC15A6F802F30(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// iOSNotificationsWrapper._RemoveAllScheduledNotifications();
		iOSNotificationsWrapper__RemoveAllScheduledNotifications_m70DECB7DF21179FAF479CA2FB06D082A2F2C7A3F(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_RemoveAllDeliveredNotifications_mCCEE21CC9AEE369D499F050198D260083DB25328 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_RemoveAllDeliveredNotifications_mCCEE21CC9AEE369D499F050198D260083DB25328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		bool L_0 = iOSNotificationCenter_Initialize_m8E140449CE45E01DEF3D3B64704FC15A6F802F30(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// iOSNotificationsWrapper._RemoveAllDeliveredNotifications();
		iOSNotificationsWrapper__RemoveAllDeliveredNotifications_mD16EFD4673109F3475259839F7939F1E9E74924E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::ScheduleNotification(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_ScheduleNotification_mF05108B3E65917BC05B25615F280D0764B08A3CA (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___notification0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_ScheduleNotification_mF05108B3E65917BC05B25615F280D0764B08A3CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		bool L_0 = iOSNotificationCenter_Initialize_m8E140449CE45E01DEF3D3B64704FC15A6F802F30(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// iOSNotificationsWrapper.ScheduleLocalNotification(notification.data);
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_1 = ___notification0;
		NullCheck(L_1);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_2 = L_1->get_data_0();
		iOSNotificationsWrapper_ScheduleLocalNotification_m586932E29D8B00E1A20A3ECF6DD1FC1EB26123EB(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::onReceivedRemoteNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_onReceivedRemoteNotification_m2A9BB7A51DC29BDA203595DDEE5762B115893EDA (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_onReceivedRemoteNotification_m2A9BB7A51DC29BDA203595DDEE5762B115893EDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * V_0 = NULL;
	{
		// var notification = new iOSNotification(data.identifier);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_0 = ___data0;
		String_t* L_1 = L_0.get_identifier_0();
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_2 = (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *)il2cpp_codegen_object_new(iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m6A4F6FCE4D0EB26D5D101ABF056D835D26E85674(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// notification.data = data;
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_3 = V_0;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_4 = ___data0;
		NullCheck(L_3);
		L_3->set_data_0(L_4);
		// onRemoteNotificationReceived(notification);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_5 = ((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_onRemoteNotificationReceived_2();
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_6 = V_0;
		NullCheck(L_5);
		NotificationReceivedCallback_Invoke_mE95F6C6AE41D6E8C65B78EAE908899BA05D1A1A4(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::onSentNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_onSentNotification_m9F136BE7C08D6938CDC4BC02BB0B6873D7510B31 (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_onSentNotification_m9F136BE7C08D6938CDC4BC02BB0B6873D7510B31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * V_0 = NULL;
	{
		// var notification = new iOSNotification(data.identifier);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_0 = ___data0;
		String_t* L_1 = L_0.get_identifier_0();
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_2 = (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *)il2cpp_codegen_object_new(iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152_il2cpp_TypeInfo_var);
		iOSNotification__ctor_m6A4F6FCE4D0EB26D5D101ABF056D835D26E85674(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// notification.data = data;
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_3 = V_0;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_4 = ___data0;
		NullCheck(L_3);
		L_3->set_data_0(L_4);
		// onNotificationReceived(notification);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_5 = ((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_onNotificationReceived_1();
		iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * L_6 = V_0;
		NullCheck(L_5);
		NotificationReceivedCallback_Invoke_mE95F6C6AE41D6E8C65B78EAE908899BA05D1A1A4(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::onFinishedAuthorizationRequest(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter_onFinishedAuthorizationRequest_m48B8078CB367A66D0A9E13B1734F7310CC9B7A79 (iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter_onFinishedAuthorizationRequest_m48B8078CB367A66D0A9E13B1734F7310CC9B7A79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnAuthorizationRequestCompleted(data);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * L_0 = ((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->get_OnAuthorizationRequestCompleted_3();
		iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  L_1 = ___data0;
		NullCheck(L_0);
		AuthorizationRequestCompletedCallback_Invoke_m3BBF26929CDEF40853EFFB9F86F8190082C3F5FD(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationCenter__cctor_m1BF4E25CF195A7AD6155931A6D13878707CBFBF1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationCenter__cctor_m1BF4E25CF195A7AD6155931A6D13878707CBFBF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static event NotificationReceivedCallback onNotificationReceived = delegate(iOSNotification notification) {  };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var);
		U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * L_0 = ((U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_1 = (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *)il2cpp_codegen_object_new(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m77868881D517501310180FCF0E528357596B4CC9(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_0_m7D2F7EC015976494580E6AE364931F86F043CFE9_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->set_onNotificationReceived_1(L_1);
		// private static event NotificationReceivedCallback onRemoteNotificationReceived = delegate(iOSNotification notification) {  };
		U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * L_2 = ((U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * L_3 = (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 *)il2cpp_codegen_object_new(NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m77868881D517501310180FCF0E528357596B4CC9(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_1_mFDB7D5BC81ED0A4AFB1E88E44709727F61998F21_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->set_onRemoteNotificationReceived_2(L_3);
		// internal static event AuthorizationRequestCompletedCallback OnAuthorizationRequestCompleted = delegate { };
		U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * L_4 = ((U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * L_5 = (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 *)il2cpp_codegen_object_new(AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189_il2cpp_TypeInfo_var);
		AuthorizationRequestCompletedCallback__ctor_m5062FC79DA5A3F6A3D78BB8F075D9807327A667F(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__37_2_mC2696DD88D007A9F3F3D63D39CD7D9358242392C_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var))->set_OnAuthorizationRequestCompleted_3(L_5);
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
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD0D1AFA0A6458CCA98B59749D14AEF846E60B19E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mD0D1AFA0A6458CCA98B59749D14AEF846E60B19E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * L_0 = (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 *)il2cpp_codegen_object_new(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF28B20E1637C3E25D81593EAE5E400DE93D00215(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF28B20E1637C3E25D81593EAE5E400DE93D00215 (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_<>c::<.cctor>b__37_0(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_0_m7D2F7EC015976494580E6AE364931F86F043CFE9 (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * __this, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___notification0, const RuntimeMethod* method)
{
	{
		// private static event NotificationReceivedCallback onNotificationReceived = delegate(iOSNotification notification) {  };
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_<>c::<.cctor>b__37_1(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_1_mFDB7D5BC81ED0A4AFB1E88E44709727F61998F21 (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * __this, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___notification0, const RuntimeMethod* method)
{
	{
		// private static event NotificationReceivedCallback onRemoteNotificationReceived = delegate(iOSNotification notification) {  };
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_<>c::<.cctor>b__37_2(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__37_2_mC2696DD88D007A9F3F3D63D39CD7D9358242392C (U3CU3Ec_t68EA248BDCA12E75C36F99D8508BD0214CFC4683 * __this, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// internal static event AuthorizationRequestCompletedCallback OnAuthorizationRequestCompleted = delegate { };
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshaled_pinvoke ____data0_marshaled = {};
	iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke(___data0, ____data0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

	// Marshaling cleanup of parameter '___data0' native representation
	iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_marshal_pinvoke_cleanup(____data0_marshaled);

}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback__ctor_m5062FC79DA5A3F6A3D78BB8F075D9807327A667F (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback::Invoke(Unity.Notifications.iOS.iOSAuthorizationRequestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback_Invoke_m3BBF26929CDEF40853EFFB9F86F8190082C3F5FD (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___data0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback::BeginInvoke(Unity.Notifications.iOS.iOSAuthorizationRequestData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthorizationRequestCompletedCallback_BeginInvoke_mC6AF9367C08237BF86E371A3268505CB5C75AD00 (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6  ___data0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthorizationRequestCompletedCallback_BeginInvoke_mC6AF9367C08237BF86E371A3268505CB5C75AD00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_il2cpp_TypeInfo_var, &___data0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_AuthorizationRequestCompletedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCompletedCallback_EndInvoke_mCD857E6CAD35EC1238E6E94A9054B435BED45EFC (AuthorizationRequestCompletedCallback_t0E72D128F9903275221F73E1589CBECED9383189 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m77868881D517501310180FCF0E528357596B4CC9 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback::Invoke(Unity.Notifications.iOS.iOSNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mE95F6C6AE41D6E8C65B78EAE908899BA05D1A1A4 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___notification0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___notification0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___notification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___notification0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___notification0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___notification0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * >::Invoke(targetMethod, targetThis, ___notification0);
					else
						GenericVirtActionInvoker1< iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * >::Invoke(targetMethod, targetThis, ___notification0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___notification0);
					else
						VirtActionInvoker1< iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___notification0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___notification0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___notification0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback::BeginInvoke(Unity.Notifications.iOS.iOSNotification,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_m29E617166ACC183B35F1A812131F2538749ED5D5 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, iOSNotification_t71401F978AF93D07BDE3E0928160B19948138152 * ___notification0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___notification0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.iOS.iOSNotificationCenter_NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_m7CB038002697C11D0501E7AF2622DCA3A88B02E7 (NotificationReceivedCallback_t2115016018F6C3C833C35282BFA2F797CAEF97E2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_pinvoke(const iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F& unmarshaled, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_pinvoke& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.get_identifier_0());
	marshaled.___title_1 = il2cpp_codegen_marshal_string(unmarshaled.get_title_1());
	marshaled.___body_2 = il2cpp_codegen_marshal_string(unmarshaled.get_body_2());
	marshaled.___badge_3 = unmarshaled.get_badge_3();
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_string(unmarshaled.get_subtitle_4());
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_string(unmarshaled.get_categoryIdentifier_5());
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_string(unmarshaled.get_threadIdentifier_6());
	marshaled.___data_7 = il2cpp_codegen_marshal_string(unmarshaled.get_data_7());
	marshaled.___showInForeground_8 = static_cast<int32_t>(unmarshaled.get_showInForeground_8());
	marshaled.___showInForegroundPresentationOptions_9 = unmarshaled.get_showInForegroundPresentationOptions_9();
	marshaled.___triggerType_10 = unmarshaled.get_triggerType_10();
	marshaled.___repeats_11 = static_cast<int32_t>(unmarshaled.get_repeats_11());
	marshaled.___timeTriggerInterval_12 = unmarshaled.get_timeTriggerInterval_12();
	marshaled.___calendarTriggerYear_13 = unmarshaled.get_calendarTriggerYear_13();
	marshaled.___calendarTriggerMonth_14 = unmarshaled.get_calendarTriggerMonth_14();
	marshaled.___calendarTriggerDay_15 = unmarshaled.get_calendarTriggerDay_15();
	marshaled.___calendarTriggerHour_16 = unmarshaled.get_calendarTriggerHour_16();
	marshaled.___calendarTriggerMinute_17 = unmarshaled.get_calendarTriggerMinute_17();
	marshaled.___calendarTriggerSecond_18 = unmarshaled.get_calendarTriggerSecond_18();
	marshaled.___locationTriggerCenterX_19 = unmarshaled.get_locationTriggerCenterX_19();
	marshaled.___locationTriggerCenterY_20 = unmarshaled.get_locationTriggerCenterY_20();
	marshaled.___locationTriggerRadius_21 = unmarshaled.get_locationTriggerRadius_21();
	marshaled.___locationTriggerNotifyOnEntry_22 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnEntry_22());
	marshaled.___locationTriggerNotifyOnExit_23 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnExit_23());
}
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_pinvoke_back(const iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_pinvoke& marshaled, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F& unmarshaled)
{
	unmarshaled.set_identifier_0(il2cpp_codegen_marshal_string_result(marshaled.___identifier_0));
	unmarshaled.set_title_1(il2cpp_codegen_marshal_string_result(marshaled.___title_1));
	unmarshaled.set_body_2(il2cpp_codegen_marshal_string_result(marshaled.___body_2));
	int32_t unmarshaled_badge_temp_3 = 0;
	unmarshaled_badge_temp_3 = marshaled.___badge_3;
	unmarshaled.set_badge_3(unmarshaled_badge_temp_3);
	unmarshaled.set_subtitle_4(il2cpp_codegen_marshal_string_result(marshaled.___subtitle_4));
	unmarshaled.set_categoryIdentifier_5(il2cpp_codegen_marshal_string_result(marshaled.___categoryIdentifier_5));
	unmarshaled.set_threadIdentifier_6(il2cpp_codegen_marshal_string_result(marshaled.___threadIdentifier_6));
	unmarshaled.set_data_7(il2cpp_codegen_marshal_string_result(marshaled.___data_7));
	bool unmarshaled_showInForeground_temp_8 = false;
	unmarshaled_showInForeground_temp_8 = static_cast<bool>(marshaled.___showInForeground_8);
	unmarshaled.set_showInForeground_8(unmarshaled_showInForeground_temp_8);
	int32_t unmarshaled_showInForegroundPresentationOptions_temp_9 = 0;
	unmarshaled_showInForegroundPresentationOptions_temp_9 = marshaled.___showInForegroundPresentationOptions_9;
	unmarshaled.set_showInForegroundPresentationOptions_9(unmarshaled_showInForegroundPresentationOptions_temp_9);
	int32_t unmarshaled_triggerType_temp_10 = 0;
	unmarshaled_triggerType_temp_10 = marshaled.___triggerType_10;
	unmarshaled.set_triggerType_10(unmarshaled_triggerType_temp_10);
	bool unmarshaled_repeats_temp_11 = false;
	unmarshaled_repeats_temp_11 = static_cast<bool>(marshaled.___repeats_11);
	unmarshaled.set_repeats_11(unmarshaled_repeats_temp_11);
	int32_t unmarshaled_timeTriggerInterval_temp_12 = 0;
	unmarshaled_timeTriggerInterval_temp_12 = marshaled.___timeTriggerInterval_12;
	unmarshaled.set_timeTriggerInterval_12(unmarshaled_timeTriggerInterval_temp_12);
	int32_t unmarshaled_calendarTriggerYear_temp_13 = 0;
	unmarshaled_calendarTriggerYear_temp_13 = marshaled.___calendarTriggerYear_13;
	unmarshaled.set_calendarTriggerYear_13(unmarshaled_calendarTriggerYear_temp_13);
	int32_t unmarshaled_calendarTriggerMonth_temp_14 = 0;
	unmarshaled_calendarTriggerMonth_temp_14 = marshaled.___calendarTriggerMonth_14;
	unmarshaled.set_calendarTriggerMonth_14(unmarshaled_calendarTriggerMonth_temp_14);
	int32_t unmarshaled_calendarTriggerDay_temp_15 = 0;
	unmarshaled_calendarTriggerDay_temp_15 = marshaled.___calendarTriggerDay_15;
	unmarshaled.set_calendarTriggerDay_15(unmarshaled_calendarTriggerDay_temp_15);
	int32_t unmarshaled_calendarTriggerHour_temp_16 = 0;
	unmarshaled_calendarTriggerHour_temp_16 = marshaled.___calendarTriggerHour_16;
	unmarshaled.set_calendarTriggerHour_16(unmarshaled_calendarTriggerHour_temp_16);
	int32_t unmarshaled_calendarTriggerMinute_temp_17 = 0;
	unmarshaled_calendarTriggerMinute_temp_17 = marshaled.___calendarTriggerMinute_17;
	unmarshaled.set_calendarTriggerMinute_17(unmarshaled_calendarTriggerMinute_temp_17);
	int32_t unmarshaled_calendarTriggerSecond_temp_18 = 0;
	unmarshaled_calendarTriggerSecond_temp_18 = marshaled.___calendarTriggerSecond_18;
	unmarshaled.set_calendarTriggerSecond_18(unmarshaled_calendarTriggerSecond_temp_18);
	float unmarshaled_locationTriggerCenterX_temp_19 = 0.0f;
	unmarshaled_locationTriggerCenterX_temp_19 = marshaled.___locationTriggerCenterX_19;
	unmarshaled.set_locationTriggerCenterX_19(unmarshaled_locationTriggerCenterX_temp_19);
	float unmarshaled_locationTriggerCenterY_temp_20 = 0.0f;
	unmarshaled_locationTriggerCenterY_temp_20 = marshaled.___locationTriggerCenterY_20;
	unmarshaled.set_locationTriggerCenterY_20(unmarshaled_locationTriggerCenterY_temp_20);
	float unmarshaled_locationTriggerRadius_temp_21 = 0.0f;
	unmarshaled_locationTriggerRadius_temp_21 = marshaled.___locationTriggerRadius_21;
	unmarshaled.set_locationTriggerRadius_21(unmarshaled_locationTriggerRadius_temp_21);
	bool unmarshaled_locationTriggerNotifyOnEntry_temp_22 = false;
	unmarshaled_locationTriggerNotifyOnEntry_temp_22 = static_cast<bool>(marshaled.___locationTriggerNotifyOnEntry_22);
	unmarshaled.set_locationTriggerNotifyOnEntry_22(unmarshaled_locationTriggerNotifyOnEntry_temp_22);
	bool unmarshaled_locationTriggerNotifyOnExit_temp_23 = false;
	unmarshaled_locationTriggerNotifyOnExit_temp_23 = static_cast<bool>(marshaled.___locationTriggerNotifyOnExit_23);
	unmarshaled.set_locationTriggerNotifyOnExit_23(unmarshaled_locationTriggerNotifyOnExit_temp_23);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_pinvoke_cleanup(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___data_7);
	marshaled.___data_7 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_com(const iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F& unmarshaled, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_com& marshaled)
{
	marshaled.___identifier_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_identifier_0());
	marshaled.___title_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_title_1());
	marshaled.___body_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_body_2());
	marshaled.___badge_3 = unmarshaled.get_badge_3();
	marshaled.___subtitle_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_subtitle_4());
	marshaled.___categoryIdentifier_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_categoryIdentifier_5());
	marshaled.___threadIdentifier_6 = il2cpp_codegen_marshal_bstring(unmarshaled.get_threadIdentifier_6());
	marshaled.___data_7 = il2cpp_codegen_marshal_bstring(unmarshaled.get_data_7());
	marshaled.___showInForeground_8 = static_cast<int32_t>(unmarshaled.get_showInForeground_8());
	marshaled.___showInForegroundPresentationOptions_9 = unmarshaled.get_showInForegroundPresentationOptions_9();
	marshaled.___triggerType_10 = unmarshaled.get_triggerType_10();
	marshaled.___repeats_11 = static_cast<int32_t>(unmarshaled.get_repeats_11());
	marshaled.___timeTriggerInterval_12 = unmarshaled.get_timeTriggerInterval_12();
	marshaled.___calendarTriggerYear_13 = unmarshaled.get_calendarTriggerYear_13();
	marshaled.___calendarTriggerMonth_14 = unmarshaled.get_calendarTriggerMonth_14();
	marshaled.___calendarTriggerDay_15 = unmarshaled.get_calendarTriggerDay_15();
	marshaled.___calendarTriggerHour_16 = unmarshaled.get_calendarTriggerHour_16();
	marshaled.___calendarTriggerMinute_17 = unmarshaled.get_calendarTriggerMinute_17();
	marshaled.___calendarTriggerSecond_18 = unmarshaled.get_calendarTriggerSecond_18();
	marshaled.___locationTriggerCenterX_19 = unmarshaled.get_locationTriggerCenterX_19();
	marshaled.___locationTriggerCenterY_20 = unmarshaled.get_locationTriggerCenterY_20();
	marshaled.___locationTriggerRadius_21 = unmarshaled.get_locationTriggerRadius_21();
	marshaled.___locationTriggerNotifyOnEntry_22 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnEntry_22());
	marshaled.___locationTriggerNotifyOnExit_23 = static_cast<int32_t>(unmarshaled.get_locationTriggerNotifyOnExit_23());
}
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_com_back(const iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_com& marshaled, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F& unmarshaled)
{
	unmarshaled.set_identifier_0(il2cpp_codegen_marshal_bstring_result(marshaled.___identifier_0));
	unmarshaled.set_title_1(il2cpp_codegen_marshal_bstring_result(marshaled.___title_1));
	unmarshaled.set_body_2(il2cpp_codegen_marshal_bstring_result(marshaled.___body_2));
	int32_t unmarshaled_badge_temp_3 = 0;
	unmarshaled_badge_temp_3 = marshaled.___badge_3;
	unmarshaled.set_badge_3(unmarshaled_badge_temp_3);
	unmarshaled.set_subtitle_4(il2cpp_codegen_marshal_bstring_result(marshaled.___subtitle_4));
	unmarshaled.set_categoryIdentifier_5(il2cpp_codegen_marshal_bstring_result(marshaled.___categoryIdentifier_5));
	unmarshaled.set_threadIdentifier_6(il2cpp_codegen_marshal_bstring_result(marshaled.___threadIdentifier_6));
	unmarshaled.set_data_7(il2cpp_codegen_marshal_bstring_result(marshaled.___data_7));
	bool unmarshaled_showInForeground_temp_8 = false;
	unmarshaled_showInForeground_temp_8 = static_cast<bool>(marshaled.___showInForeground_8);
	unmarshaled.set_showInForeground_8(unmarshaled_showInForeground_temp_8);
	int32_t unmarshaled_showInForegroundPresentationOptions_temp_9 = 0;
	unmarshaled_showInForegroundPresentationOptions_temp_9 = marshaled.___showInForegroundPresentationOptions_9;
	unmarshaled.set_showInForegroundPresentationOptions_9(unmarshaled_showInForegroundPresentationOptions_temp_9);
	int32_t unmarshaled_triggerType_temp_10 = 0;
	unmarshaled_triggerType_temp_10 = marshaled.___triggerType_10;
	unmarshaled.set_triggerType_10(unmarshaled_triggerType_temp_10);
	bool unmarshaled_repeats_temp_11 = false;
	unmarshaled_repeats_temp_11 = static_cast<bool>(marshaled.___repeats_11);
	unmarshaled.set_repeats_11(unmarshaled_repeats_temp_11);
	int32_t unmarshaled_timeTriggerInterval_temp_12 = 0;
	unmarshaled_timeTriggerInterval_temp_12 = marshaled.___timeTriggerInterval_12;
	unmarshaled.set_timeTriggerInterval_12(unmarshaled_timeTriggerInterval_temp_12);
	int32_t unmarshaled_calendarTriggerYear_temp_13 = 0;
	unmarshaled_calendarTriggerYear_temp_13 = marshaled.___calendarTriggerYear_13;
	unmarshaled.set_calendarTriggerYear_13(unmarshaled_calendarTriggerYear_temp_13);
	int32_t unmarshaled_calendarTriggerMonth_temp_14 = 0;
	unmarshaled_calendarTriggerMonth_temp_14 = marshaled.___calendarTriggerMonth_14;
	unmarshaled.set_calendarTriggerMonth_14(unmarshaled_calendarTriggerMonth_temp_14);
	int32_t unmarshaled_calendarTriggerDay_temp_15 = 0;
	unmarshaled_calendarTriggerDay_temp_15 = marshaled.___calendarTriggerDay_15;
	unmarshaled.set_calendarTriggerDay_15(unmarshaled_calendarTriggerDay_temp_15);
	int32_t unmarshaled_calendarTriggerHour_temp_16 = 0;
	unmarshaled_calendarTriggerHour_temp_16 = marshaled.___calendarTriggerHour_16;
	unmarshaled.set_calendarTriggerHour_16(unmarshaled_calendarTriggerHour_temp_16);
	int32_t unmarshaled_calendarTriggerMinute_temp_17 = 0;
	unmarshaled_calendarTriggerMinute_temp_17 = marshaled.___calendarTriggerMinute_17;
	unmarshaled.set_calendarTriggerMinute_17(unmarshaled_calendarTriggerMinute_temp_17);
	int32_t unmarshaled_calendarTriggerSecond_temp_18 = 0;
	unmarshaled_calendarTriggerSecond_temp_18 = marshaled.___calendarTriggerSecond_18;
	unmarshaled.set_calendarTriggerSecond_18(unmarshaled_calendarTriggerSecond_temp_18);
	float unmarshaled_locationTriggerCenterX_temp_19 = 0.0f;
	unmarshaled_locationTriggerCenterX_temp_19 = marshaled.___locationTriggerCenterX_19;
	unmarshaled.set_locationTriggerCenterX_19(unmarshaled_locationTriggerCenterX_temp_19);
	float unmarshaled_locationTriggerCenterY_temp_20 = 0.0f;
	unmarshaled_locationTriggerCenterY_temp_20 = marshaled.___locationTriggerCenterY_20;
	unmarshaled.set_locationTriggerCenterY_20(unmarshaled_locationTriggerCenterY_temp_20);
	float unmarshaled_locationTriggerRadius_temp_21 = 0.0f;
	unmarshaled_locationTriggerRadius_temp_21 = marshaled.___locationTriggerRadius_21;
	unmarshaled.set_locationTriggerRadius_21(unmarshaled_locationTriggerRadius_temp_21);
	bool unmarshaled_locationTriggerNotifyOnEntry_temp_22 = false;
	unmarshaled_locationTriggerNotifyOnEntry_temp_22 = static_cast<bool>(marshaled.___locationTriggerNotifyOnEntry_22);
	unmarshaled.set_locationTriggerNotifyOnEntry_22(unmarshaled_locationTriggerNotifyOnEntry_temp_22);
	bool unmarshaled_locationTriggerNotifyOnExit_temp_23 = false;
	unmarshaled_locationTriggerNotifyOnExit_temp_23 = static_cast<bool>(marshaled.___locationTriggerNotifyOnExit_23);
	unmarshaled.set_locationTriggerNotifyOnExit_23(unmarshaled_locationTriggerNotifyOnExit_temp_23);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationData
IL2CPP_EXTERN_C void iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshal_com_cleanup(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___identifier_0);
	marshaled.___identifier_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___body_2);
	marshaled.___body_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___subtitle_4);
	marshaled.___subtitle_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___categoryIdentifier_5);
	marshaled.___categoryIdentifier_5 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___threadIdentifier_6);
	marshaled.___threadIdentifier_6 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___data_7);
	marshaled.___data_7 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_pinvoke(const iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B& unmarshaled, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaled.get_U3CCenterU3Ek__BackingField_0();
	marshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaled.get_U3CRadiusU3Ek__BackingField_1();
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnEntryU3Ek__BackingField_2());
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnExitU3Ek__BackingField_3());
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_pinvoke_back(const iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_pinvoke& marshaled, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B& unmarshaled)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  unmarshaled_U3CCenterU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CCenterU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CCenterU3Ek__BackingField_temp_0));
	unmarshaled_U3CCenterU3Ek__BackingField_temp_0 = marshaled.___U3CCenterU3Ek__BackingField_0;
	unmarshaled.set_U3CCenterU3Ek__BackingField_0(unmarshaled_U3CCenterU3Ek__BackingField_temp_0);
	float unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = marshaled.___U3CRadiusU3Ek__BackingField_1;
	unmarshaled.set_U3CRadiusU3Ek__BackingField_1(unmarshaled_U3CRadiusU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	unmarshaled.set_U3CNotifyOnEntryU3Ek__BackingField_2(unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2);
	bool unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = false;
	unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
	unmarshaled.set_U3CNotifyOnExitU3Ek__BackingField_3(unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_pinvoke_cleanup(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_com(const iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B& unmarshaled, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_com& marshaled)
{
	marshaled.___U3CCenterU3Ek__BackingField_0 = unmarshaled.get_U3CCenterU3Ek__BackingField_0();
	marshaled.___U3CRadiusU3Ek__BackingField_1 = unmarshaled.get_U3CRadiusU3Ek__BackingField_1();
	marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnEntryU3Ek__BackingField_2());
	marshaled.___U3CNotifyOnExitU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.get_U3CNotifyOnExitU3Ek__BackingField_3());
}
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_com_back(const iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_com& marshaled, iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B& unmarshaled)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  unmarshaled_U3CCenterU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CCenterU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CCenterU3Ek__BackingField_temp_0));
	unmarshaled_U3CCenterU3Ek__BackingField_temp_0 = marshaled.___U3CCenterU3Ek__BackingField_0;
	unmarshaled.set_U3CCenterU3Ek__BackingField_0(unmarshaled_U3CCenterU3Ek__BackingField_temp_0);
	float unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = 0.0f;
	unmarshaled_U3CRadiusU3Ek__BackingField_temp_1 = marshaled.___U3CRadiusU3Ek__BackingField_1;
	unmarshaled.set_U3CRadiusU3Ek__BackingField_1(unmarshaled_U3CRadiusU3Ek__BackingField_temp_1);
	bool unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = false;
	unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CNotifyOnEntryU3Ek__BackingField_2);
	unmarshaled.set_U3CNotifyOnEntryU3Ek__BackingField_2(unmarshaled_U3CNotifyOnEntryU3Ek__BackingField_temp_2);
	bool unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = false;
	unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CNotifyOnExitU3Ek__BackingField_3);
	unmarshaled.set_U3CNotifyOnExitU3Ek__BackingField_3(unmarshaled_U3CNotifyOnExitU3Ek__BackingField_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationLocationTrigger
IL2CPP_EXTERN_C void iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshal_com_cleanup(iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationLocationTrigger_get_Type_mAD6EE7678084A9AF883C67970B948914622028EB (const RuntimeMethod* method)
{
	{
		// public static int Type { get { return (int)NotificationTriggerType.LocationTrigger; }}
		return ((int32_t)20);
	}
}
// UnityEngine.Vector2 Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912 (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Center { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CCenterU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	return iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_inline(_thisAdjusted, method);
}
// System.Single Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_m9B7631C5EEA1FC5C5D6AF9EA192C116BA17B7873 (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float iOSNotificationLocationTrigger_get_Radius_m9B7631C5EEA1FC5C5D6AF9EA192C116BA17B7873_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	return iOSNotificationLocationTrigger_get_Radius_m9B7631C5EEA1FC5C5D6AF9EA192C116BA17B7873_inline(_thisAdjusted, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m92862B7E2AAA2731DB9F1BAE5656A68046B9AD17 (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->get_U3CNotifyOnEntryU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m92862B7E2AAA2731DB9F1BAE5656A68046B9AD17_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	return iOSNotificationLocationTrigger_get_NotifyOnEntry_m92862B7E2AAA2731DB9F1BAE5656A68046B9AD17_inline(_thisAdjusted, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationLocationTrigger::get_NotifyOnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_m0E16244BD95BD77F19DDEEF3115278E9319C623B (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->get_U3CNotifyOnExitU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationLocationTrigger_get_NotifyOnExit_m0E16244BD95BD77F19DDEEF3115278E9319C623B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * _thisAdjusted = reinterpret_cast<iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B *>(__this + _offset);
	return iOSNotificationLocationTrigger_get_NotifyOnExit_m0E16244BD95BD77F19DDEEF3115278E9319C623B_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_pinvoke(const iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880& unmarshaled, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_pinvoke& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.get_timeInterval_0();
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_pinvoke_back(const iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_pinvoke& marshaled, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880& unmarshaled)
{
	int32_t unmarshaled_timeInterval_temp_0 = 0;
	unmarshaled_timeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.set_timeInterval_0(unmarshaled_timeInterval_temp_0);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_1(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_pinvoke_cleanup(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_com(const iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880& unmarshaled, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_com& marshaled)
{
	marshaled.___timeInterval_0 = unmarshaled.get_timeInterval_0();
	marshaled.___U3CRepeatsU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CRepeatsU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_com_back(const iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_com& marshaled, iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880& unmarshaled)
{
	int32_t unmarshaled_timeInterval_temp_0 = 0;
	unmarshaled_timeInterval_temp_0 = marshaled.___timeInterval_0;
	unmarshaled.set_timeInterval_0(unmarshaled_timeInterval_temp_0);
	bool unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CRepeatsU3Ek__BackingField_1);
	unmarshaled.set_U3CRepeatsU3Ek__BackingField_1(unmarshaled_U3CRepeatsU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger
IL2CPP_EXTERN_C void iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshal_com_cleanup(iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationTimeIntervalTrigger_get_Type_m9C339D4E98CEFE0B44DA8A24B05D1690476B1116 (const RuntimeMethod* method)
{
	{
		// public static int Type { get { return (int)NotificationTriggerType.TimeTrigger; }}
		return 0;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_TimeInterval(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_TimeInterval_mA8D518C2F510F3917081552D8361DF975BC15AE3 (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	{
		// timeInterval = (int) value.TotalSeconds;
		double L_0 = TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&___value0), /*hidden argument*/NULL);
		__this->set_timeInterval_0((((int32_t)((int32_t)L_0))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationTimeIntervalTrigger_set_TimeInterval_mA8D518C2F510F3917081552D8361DF975BC15AE3_AdjustorThunk (RuntimeObject * __this, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *>(__this + _offset);
	iOSNotificationTimeIntervalTrigger_set_TimeInterval_mA8D518C2F510F3917081552D8361DF975BC15AE3(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::get_Repeats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_mDBE8EB76AFB1BF0BFFD30EFA1FA67956061F2D4B (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool iOSNotificationTimeIntervalTrigger_get_Repeats_mDBE8EB76AFB1BF0BFFD30EFA1FA67956061F2D4B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *>(__this + _offset);
	return iOSNotificationTimeIntervalTrigger_get_Repeats_mDBE8EB76AFB1BF0BFFD30EFA1FA67956061F2D4B_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.iOS.iOSNotificationTimeIntervalTrigger::set_Repeats(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m307A5902AD61CD35BB11B17024931CB2CA53849E (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void iOSNotificationTimeIntervalTrigger_set_Repeats_m307A5902AD61CD35BB11B17024931CB2CA53849E_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * _thisAdjusted = reinterpret_cast<iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 *>(__this + _offset);
	iOSNotificationTimeIntervalTrigger_set_Repeats_m307A5902AD61CD35BB11B17024931CB2CA53849E_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_AuthorizationRequestReceived_m0B9514890D5292A398583EB5FB52C84E89EF2C44(intptr_t ___authRequestDataPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	iOSNotificationsWrapper_AuthorizationRequestReceived_m0B9514890D5292A398583EB5FB52C84E89EF2C44(___authRequestDataPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_RemoteNotificationReceived_m7892270BF1067E6B09F2AD79891BD9C0E7B5E2EC(intptr_t ___notificationDataPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	iOSNotificationsWrapper_RemoteNotificationReceived_m7892270BF1067E6B09F2AD79891BD9C0E7B5E2EC(___notificationDataPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSNotificationsWrapper_NotificationReceived_m15A8B9969D3B760901868EED3ECD57F6251D3F8E(intptr_t ___notificationDataPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	iOSNotificationsWrapper_NotificationReceived_m15A8B9969D3B760901868EED3ECD57F6251D3F8E(___notificationDataPtr0, NULL);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _RequestAuthorization(int32_t, int32_t);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RequestAuthorization(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RequestAuthorization_m40962C59E37C30F1A4FE32BAC587F491D6FE8BEA (int32_t ___options0, bool ___registerForRemote1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RequestAuthorization)(___options0, static_cast<int32_t>(___registerForRemote1));

}
IL2CPP_EXTERN_C void DEFAULT_CALL _ScheduleLocalNotification(intptr_t);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_ScheduleLocalNotification(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ScheduleLocalNotification_m4F901D298DEB899D3E28229AF7B4401660F476D3 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ScheduleLocalNotification)(___ptr0);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _SetNotificationReceivedDelegate(Il2CppMethodPointer);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetNotificationReceivedDelegate_m363297CE6CE661F68760DACF5F0F82D5F3382357 (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetNotificationReceivedDelegate)(____callback0_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _SetRemoteNotificationReceivedDelegate(Il2CppMethodPointer);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetRemoteNotificationReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_m10CE9B582E43A999BADF8FB1ABE6E0AEB28A7FDA (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetRemoteNotificationReceivedDelegate)(____callback0_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL _SetAuthorizationRequestReceivedDelegate(Il2CppMethodPointer);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetAuthorizationRequestReceivedDelegate(Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_mD75E7C4E7C7A6CED0293E31765A5885BF9C4B35C (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetAuthorizationRequestReceivedDelegate)(____callback0_marshaled);

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetNotificationSettings();
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetNotificationSettings_m8CABEFD845927E5E30F447E2D1EA87EEDCC08B09 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetNotificationSettings)();

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetScheduledNotificationDataCount();
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetScheduledNotificationDataCount_mEEBA7222DA52EF627763D71509F38DB94940206E (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetScheduledNotificationDataCount)();

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetScheduledNotificationDataAt(int32_t);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetScheduledNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetScheduledNotificationDataAt_m2112911929348F235E1A86D7B83C5B892967E714 (int32_t ___index0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetScheduledNotificationDataAt)(___index0);

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetDeliveredNotificationDataCount();
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetDeliveredNotificationDataCount_mFB47185B7B95333A58FD13B0C24830561546304F (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetDeliveredNotificationDataCount)();

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetDeliveredNotificationDataAt(int32_t);
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetDeliveredNotificationDataAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetDeliveredNotificationDataAt_m7240C990927BAFC8371E453F87CD659F47EB5680 (int32_t ___index0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetDeliveredNotificationDataAt)(___index0);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveScheduledNotification(char*);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveScheduledNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveScheduledNotification_m2883E237E95AD3BAB35D3D68A40D2F0CCAECD175 (String_t* ___identifier0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveScheduledNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllScheduledNotifications();
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllScheduledNotifications_m70DECB7DF21179FAF479CA2FB06D082A2F2C7A3F (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllScheduledNotifications)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveDeliveredNotification(char*);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveDeliveredNotification(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveDeliveredNotification_m2A703DD7A7975A3E2ACA09088E806A869197149D (String_t* ___identifier0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___identifier0' to native representation
	char* ____identifier0_marshaled = NULL;
	____identifier0_marshaled = il2cpp_codegen_marshal_string(___identifier0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveDeliveredNotification)(____identifier0_marshaled);

	// Marshaling cleanup of parameter '___identifier0' native representation
	il2cpp_codegen_marshal_free(____identifier0_marshaled);
	____identifier0_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL _SetApplicationBadge(int32_t);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__SetApplicationBadge_m7A159E4AD133AEAF471C5DD883AB21CFBC37D120 (int32_t ___badge0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_SetApplicationBadge)(___badge0);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetApplicationBadge();
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::_GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper__GetApplicationBadge_m8D7669E17F0E0EBBBC7FA6AEFA44B294C0CC5672 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetApplicationBadge)();

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetAppOpenedUsingNotification();
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::_GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper__GetAppOpenedUsingNotification_mE65A279F2D6A41C0ED3D52DC9BD8D14FEEEBE9A6 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetAppOpenedUsingNotification)();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C void DEFAULT_CALL _RemoveAllDeliveredNotifications();
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_RemoveAllDeliveredNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__RemoveAllDeliveredNotifications_mD16EFD4673109F3475259839F7939F1E9E74924E (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_RemoveAllDeliveredNotifications)();

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _GetLastNotificationData();
// System.IntPtr Unity.Notifications.iOS.iOSNotificationsWrapper::_GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSNotificationsWrapper__GetLastNotificationData_mA218BDD1A1DE5305674150E48E6A35347840AA68 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_GetLastNotificationData)();

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL _FreeUnmanagedStruct(intptr_t);
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::_FreeUnmanagedStruct(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__FreeUnmanagedStruct_mF3AD5E1C5994F6C9D4202938DADDD0A1E3EE6095 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_FreeUnmanagedStruct)(___ptr0);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterAuthorizationRequestCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_m3E440F5B8EC1B93CD028B82AD56F4D4CEA393B09 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_RegisterAuthorizationRequestCallback_m3E440F5B8EC1B93CD028B82AD56F4D4CEA393B09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onAuthenticationRequestFinished = new AuthorizationRequestCallback(AuthorizationRequestReceived);
		AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * L_0 = (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA *)il2cpp_codegen_object_new(AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA_il2cpp_TypeInfo_var);
		AuthorizationRequestCallback__ctor_m73B765EC0995B5B174379ACAF70E93A857FBB1B5(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_AuthorizationRequestReceived_m0B9514890D5292A398583EB5FB52C84E89EF2C44_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->set_onAuthenticationRequestFinished_4(L_0);
		// _SetAuthorizationRequestReceivedDelegate(onAuthenticationRequestFinished);
		AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * L_1 = ((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->get_onAuthenticationRequestFinished_4();
		iOSNotificationsWrapper__SetAuthorizationRequestReceivedDelegate_mD75E7C4E7C7A6CED0293E31765A5885BF9C4B35C(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedRemoteNotificationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_m704006DD49795B9AD24DE22229A103C46C218E38 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_RegisterOnReceivedRemoteNotificationCallback_m704006DD49795B9AD24DE22229A103C46C218E38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onRemoteNotificationReceived = new NotificationReceivedCallback(RemoteNotificationReceived);
		NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * L_0 = (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 *)il2cpp_codegen_object_new(NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m5DBBA71545C75619DF41ABA7567123E9B14F7A5D(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_RemoteNotificationReceived_m7892270BF1067E6B09F2AD79891BD9C0E7B5E2EC_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->set_onRemoteNotificationReceived_6(L_0);
		// _SetRemoteNotificationReceivedDelegate(onRemoteNotificationReceived);
		NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * L_1 = ((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->get_onRemoteNotificationReceived_6();
		iOSNotificationsWrapper__SetRemoteNotificationReceivedDelegate_m10CE9B582E43A999BADF8FB1ABE6E0AEB28A7FDA(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RegisterOnReceivedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RegisterOnReceivedCallback_mC632044738B230A3F2C4B9EC6F40983590C0C654 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_RegisterOnReceivedCallback_mC632044738B230A3F2C4B9EC6F40983590C0C654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onNotificationReceived = new NotificationReceivedCallback(NotificationReceived);
		NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * L_0 = (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 *)il2cpp_codegen_object_new(NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m5DBBA71545C75619DF41ABA7567123E9B14F7A5D(L_0, NULL, (intptr_t)((intptr_t)iOSNotificationsWrapper_NotificationReceived_m15A8B9969D3B760901868EED3ECD57F6251D3F8E_RuntimeMethod_var), /*hidden argument*/NULL);
		((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->set_onNotificationReceived_5(L_0);
		// _SetNotificationReceivedDelegate(onNotificationReceived);
		NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * L_1 = ((iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_StaticFields*)il2cpp_codegen_static_fields_for(iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594_il2cpp_TypeInfo_var))->get_onNotificationReceived_5();
		iOSNotificationsWrapper__SetNotificationReceivedDelegate_m363297CE6CE661F68760DACF5F0F82D5F3382357(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::AuthorizationRequestReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_AuthorizationRequestReceived_m0B9514890D5292A398583EB5FB52C84E89EF2C44 (intptr_t ___authRequestDataPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_AuthorizationRequestReceived_m0B9514890D5292A398583EB5FB52C84E89EF2C44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// data = (iOSAuthorizationRequestData)Marshal.PtrToStructure(authRequestDataPtr, typeof(iOSAuthorizationRequestData));
		intptr_t L_0 = ___authRequestDataPtr0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// iOSNotificationCenter.onFinishedAuthorizationRequest(data);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		iOSNotificationCenter_onFinishedAuthorizationRequest_m48B8078CB367A66D0A9E13B1734F7310CC9B7A79(((*(iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 *)((iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6 *)UnBox(L_3, iOSAuthorizationRequestData_t6C24EAE783FA6D0B65CFD70ACDFB1CA4141702C6_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RemoteNotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RemoteNotificationReceived_m7892270BF1067E6B09F2AD79891BD9C0E7B5E2EC (intptr_t ___notificationDataPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_RemoteNotificationReceived_m7892270BF1067E6B09F2AD79891BD9C0E7B5E2EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(notificationDataPtr, typeof(iOSNotificationData));
		intptr_t L_0 = ___notificationDataPtr0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// iOSNotificationCenter.onReceivedRemoteNotification(data);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		iOSNotificationCenter_onReceivedRemoteNotification_m2A9BB7A51DC29BDA203595DDEE5762B115893EDA(((*(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)((iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)UnBox(L_3, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::NotificationReceived(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_NotificationReceived_m15A8B9969D3B760901868EED3ECD57F6251D3F8E (intptr_t ___notificationDataPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_NotificationReceived_m15A8B9969D3B760901868EED3ECD57F6251D3F8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// data = (iOSNotificationData)Marshal.PtrToStructure(notificationDataPtr, typeof(iOSNotificationData));
		intptr_t L_0 = ___notificationDataPtr0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// iOSNotificationCenter.onSentNotification(data);
		IL2CPP_RUNTIME_CLASS_INIT(iOSNotificationCenter_t261E5B425BD69718864213B1C809903E79B9BFC0_il2cpp_TypeInfo_var);
		iOSNotificationCenter_onSentNotification_m9F136BE7C08D6938CDC4BC02BB0B6873D7510B31(((*(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)((iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)UnBox(L_3, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::RequestAuthorization(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_RequestAuthorization_m3CDC2B24E164CB900647647A1E7E403729744DA1 (int32_t ___options0, bool ___registerRemote1, const RuntimeMethod* method)
{
	{
		// _RequestAuthorization(options, registerRemote);
		int32_t L_0 = ___options0;
		bool L_1 = ___registerRemote1;
		iOSNotificationsWrapper__RequestAuthorization_m40962C59E37C30F1A4FE32BAC587F491D6FE8BEA(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationSettings Unity.Notifications.iOS.iOSNotificationsWrapper::GetNotificationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0  iOSNotificationsWrapper_GetNotificationSettings_m2EF48F45F4214C512AB7B831E235E43E3D45EEB7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_GetNotificationSettings_m2EF48F45F4214C512AB7B831E235E43E3D45EEB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// IntPtr ptr = _GetNotificationSettings();
		intptr_t L_0 = iOSNotificationsWrapper__GetNotificationSettings_m8CABEFD845927E5E30F447E2D1EA87EEDCC08B09(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		// settings = (iOSNotificationSettings) Marshal.PtrToStructure(ptr, typeof(iOSNotificationSettings));
		intptr_t L_1 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_1, L_3, /*hidden argument*/NULL);
		// _FreeUnmanagedStruct(ptr);
		intptr_t L_5 = V_0;
		iOSNotificationsWrapper__FreeUnmanagedStruct_mF3AD5E1C5994F6C9D4202938DADDD0A1E3EE6095((intptr_t)L_5, /*hidden argument*/NULL);
		// return settings;
		return ((*(iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0 *)((iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0 *)UnBox(L_4, iOSNotificationSettings_tA899796CD7A3BBEED72000E6A207C24A5576FDE0_il2cpp_TypeInfo_var))));
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::ScheduleLocalNotification(Unity.Notifications.iOS.iOSNotificationData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_ScheduleLocalNotification_m586932E29D8B00E1A20A3ECF6DD1FC1EB26123EB (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_ScheduleLocalNotification_m586932E29D8B00E1A20A3ECF6DD1FC1EB26123EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr ptr = Marshal.AllocHGlobal(Marshal.SizeOf(data));
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_1 = Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mD3015742B85C089E24CBB4C2C3236D9E03C215DF(L_0, /*hidden argument*/Marshal_SizeOf_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mD3015742B85C089E24CBB4C2C3236D9E03C215DF_RuntimeMethod_var);
		intptr_t L_2 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		// Marshal.StructureToPtr(data, ptr, false);
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_3 = ___data0;
		intptr_t L_4 = V_0;
		Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mEA3D256AEC9EC9F2674B3C41A86D1E63337B78E7(L_3, (intptr_t)L_4, (bool)0, /*hidden argument*/Marshal_StructureToPtr_TisiOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_mEA3D256AEC9EC9F2674B3C41A86D1E63337B78E7_RuntimeMethod_var);
		// _ScheduleLocalNotification(ptr);
		intptr_t L_5 = V_0;
		iOSNotificationsWrapper__ScheduleLocalNotification_m4F901D298DEB899D3E28229AF7B4401660F476D3((intptr_t)L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.iOS.iOSNotificationData[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetDeliveredNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* iOSNotificationsWrapper_GetDeliveredNotificationData_m6CD497233458F93AD76535CD43409084B75FBB60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_GetDeliveredNotificationData_m6CD497233458F93AD76535CD43409084B75FBB60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * V_1 = NULL;
	int32_t V_2 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var size = _GetDeliveredNotificationDataCount();
		int32_t L_0 = iOSNotificationsWrapper__GetDeliveredNotificationDataCount_mFB47185B7B95333A58FD13B0C24830561546304F(/*hidden argument*/NULL);
		V_0 = L_0;
		// var dataList = new List<iOSNotificationData>();
		List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * L_1 = (List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 *)il2cpp_codegen_object_new(List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70_il2cpp_TypeInfo_var);
		List_1__ctor_mBCE38FCE77D055DB4DAB2D26565FF286D60A7E13(L_1, /*hidden argument*/List_1__ctor_mBCE38FCE77D055DB4DAB2D26565FF286D60A7E13_RuntimeMethod_var);
		V_1 = L_1;
		// for (var i = 0; i < size; i++)
		V_2 = 0;
		goto IL_004f;
	}

IL_0010:
	{
		// IntPtr ptr = _GetDeliveredNotificationDataAt(i);
		int32_t L_2 = V_2;
		intptr_t L_3 = iOSNotificationsWrapper__GetDeliveredNotificationDataAt_m7240C990927BAFC8371E453F87CD659F47EB5680(L_2, /*hidden argument*/NULL);
		V_4 = (intptr_t)L_3;
		// if (ptr != IntPtr.Zero)
		intptr_t L_4 = V_4;
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// data = (iOSNotificationData) Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_6 = V_4;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		V_3 = ((*(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)((iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)UnBox(L_9, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var))));
		// dataList.Add(data);
		List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * L_10 = V_1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_11 = V_3;
		NullCheck(L_10);
		List_1_Add_mFAB71E5D1FB16640B1BDCE11C50A9A011D7DAA40(L_10, L_11, /*hidden argument*/List_1_Add_mFAB71E5D1FB16640B1BDCE11C50A9A011D7DAA40_RuntimeMethod_var);
		// _FreeUnmanagedStruct(ptr);
		intptr_t L_12 = V_4;
		iOSNotificationsWrapper__FreeUnmanagedStruct_mF3AD5E1C5994F6C9D4202938DADDD0A1E3EE6095((intptr_t)L_12, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004f:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0010;
		}
	}
	{
		// return dataList.ToArray();
		List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * L_16 = V_1;
		NullCheck(L_16);
		iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* L_17 = List_1_ToArray_m934BA0CD604C9CC41771E26124D28F7B956D75BB(L_16, /*hidden argument*/List_1_ToArray_m934BA0CD604C9CC41771E26124D28F7B956D75BB_RuntimeMethod_var);
		return L_17;
	}
}
// Unity.Notifications.iOS.iOSNotificationData[] Unity.Notifications.iOS.iOSNotificationsWrapper::GetScheduledNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* iOSNotificationsWrapper_GetScheduledNotificationData_m9703F377E5207667BB79C5556B39BC734DECAF51 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_GetScheduledNotificationData_m9703F377E5207667BB79C5556B39BC734DECAF51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * V_1 = NULL;
	int32_t V_2 = 0;
	iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var size = _GetScheduledNotificationDataCount();
		int32_t L_0 = iOSNotificationsWrapper__GetScheduledNotificationDataCount_mEEBA7222DA52EF627763D71509F38DB94940206E(/*hidden argument*/NULL);
		V_0 = L_0;
		// var dataList = new List<iOSNotificationData>();
		List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * L_1 = (List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 *)il2cpp_codegen_object_new(List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70_il2cpp_TypeInfo_var);
		List_1__ctor_mBCE38FCE77D055DB4DAB2D26565FF286D60A7E13(L_1, /*hidden argument*/List_1__ctor_mBCE38FCE77D055DB4DAB2D26565FF286D60A7E13_RuntimeMethod_var);
		V_1 = L_1;
		// for (var i = 0; i < size; i++)
		V_2 = 0;
		goto IL_004f;
	}

IL_0010:
	{
		// IntPtr ptr = _GetScheduledNotificationDataAt(i);
		int32_t L_2 = V_2;
		intptr_t L_3 = iOSNotificationsWrapper__GetScheduledNotificationDataAt_m2112911929348F235E1A86D7B83C5B892967E714(L_2, /*hidden argument*/NULL);
		V_4 = (intptr_t)L_3;
		// if (ptr != IntPtr.Zero)
		intptr_t L_4 = V_4;
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// data = (iOSNotificationData) Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_6 = V_4;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		V_3 = ((*(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)((iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)UnBox(L_9, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var))));
		// dataList.Add(data);
		List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * L_10 = V_1;
		iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F  L_11 = V_3;
		NullCheck(L_10);
		List_1_Add_mFAB71E5D1FB16640B1BDCE11C50A9A011D7DAA40(L_10, L_11, /*hidden argument*/List_1_Add_mFAB71E5D1FB16640B1BDCE11C50A9A011D7DAA40_RuntimeMethod_var);
		// _FreeUnmanagedStruct(ptr);
		intptr_t L_12 = V_4;
		iOSNotificationsWrapper__FreeUnmanagedStruct_mF3AD5E1C5994F6C9D4202938DADDD0A1E3EE6095((intptr_t)L_12, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004f:
	{
		// for (var i = 0; i < size; i++)
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0010;
		}
	}
	{
		// return dataList.ToArray();
		List_1_tA8851D6613F910154EA0BF7F8064AAFD2FD4CE70 * L_16 = V_1;
		NullCheck(L_16);
		iOSNotificationDataU5BU5D_t1B33A45A3DBC0DEE98833B426BB2CDAB8ABA2655* L_17 = List_1_ToArray_m934BA0CD604C9CC41771E26124D28F7B956D75BB(L_16, /*hidden argument*/List_1_ToArray_m934BA0CD604C9CC41771E26124D28F7B956D75BB_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::SetApplicationBadge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper_SetApplicationBadge_mDAF5DD283255733D681DD19511BE1016F6AF95FC (int32_t ___badge0, const RuntimeMethod* method)
{
	{
		// _SetApplicationBadge(badge);
		int32_t L_0 = ___badge0;
		iOSNotificationsWrapper__SetApplicationBadge_m7A159E4AD133AEAF471C5DD883AB21CFBC37D120(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Notifications.iOS.iOSNotificationsWrapper::GetApplicationBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSNotificationsWrapper_GetApplicationBadge_mF418560135A3704728EB77CE44A621E377E965CE (const RuntimeMethod* method)
{
	{
		// return _GetApplicationBadge();
		int32_t L_0 = iOSNotificationsWrapper__GetApplicationBadge_m8D7669E17F0E0EBBBC7FA6AEFA44B294C0CC5672(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.Notifications.iOS.iOSNotificationsWrapper::GetAppOpenedUsingNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSNotificationsWrapper_GetAppOpenedUsingNotification_m27B7347FECBBF94BA257B69918E12C985A3FFF87 (const RuntimeMethod* method)
{
	{
		// return _GetAppOpenedUsingNotification();
		bool L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_mE65A279F2D6A41C0ED3D52DC9BD8D14FEEEBE9A6(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Nullable`1<Unity.Notifications.iOS.iOSNotificationData> Unity.Notifications.iOS.iOSNotificationsWrapper::GetLastNotificationData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284  iOSNotificationsWrapper_GetLastNotificationData_mC2434D4A9E96E2D2CEDFFB013F1F823165900125 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSNotificationsWrapper_GetLastNotificationData_mC2434D4A9E96E2D2CEDFFB013F1F823165900125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (_GetAppOpenedUsingNotification())
		bool L_0 = iOSNotificationsWrapper__GetAppOpenedUsingNotification_mE65A279F2D6A41C0ED3D52DC9BD8D14FEEEBE9A6(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// IntPtr ptr = _GetLastNotificationData();
		intptr_t L_1 = iOSNotificationsWrapper__GetLastNotificationData_mA218BDD1A1DE5305674150E48E6A35347840AA68(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		// if (ptr != IntPtr.Zero)
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// data = (iOSNotificationData) Marshal.PtrToStructure(ptr, typeof(iOSNotificationData));
		intptr_t L_4 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_7 = Marshal_PtrToStructure_mE1821119EAFE83614B6A16D3F14996713502DF43((intptr_t)L_4, L_6, /*hidden argument*/NULL);
		// _FreeUnmanagedStruct(ptr);
		intptr_t L_8 = V_0;
		iOSNotificationsWrapper__FreeUnmanagedStruct_mF3AD5E1C5994F6C9D4202938DADDD0A1E3EE6095((intptr_t)L_8, /*hidden argument*/NULL);
		// return data;
		Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m66EEEDB16F4C44686541EE33DBB4780E4BC6CD3A((&L_9), ((*(iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)((iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F *)UnBox(L_7, iOSNotificationData_t7353CF8D5E700BF4BADEC63789CCBA698BC61C0F_il2cpp_TypeInfo_var)))), /*hidden argument*/Nullable_1__ctor_m66EEEDB16F4C44686541EE33DBB4780E4BC6CD3A_RuntimeMethod_var);
		return L_9;
	}

IL_003b:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 ));
		Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284  L_10 = V_1;
		return L_10;
	}
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSNotificationsWrapper__ctor_mDC79460B4C8C438B97091AF3D4D8E38B410A1461 (iOSNotificationsWrapper_tE8DABB28E40E106DCA589AB001785A6BFE95F594 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, intptr_t ___authdata0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___authdata0);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback__ctor_m73B765EC0995B5B174379ACAF70E93A857FBB1B5 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_Invoke_m3F9E761D9744D4033B7287BAB074C24707CF0870 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, intptr_t ___authdata0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___authdata0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authdata0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___authdata0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authdata0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authdata0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___authdata0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___authdata0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___authdata0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___authdata0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AuthorizationRequestCallback_BeginInvoke_m895E3AFF02A699B132BA6C7D03313B53A7BB91E7 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, intptr_t ___authdata0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthorizationRequestCallback_BeginInvoke_m895E3AFF02A699B132BA6C7D03313B53A7BB91E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___authdata0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_AuthorizationRequestCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthorizationRequestCallback_EndInvoke_mA719082D7002B65D3B8802E3EBC079CD8A810856 (AuthorizationRequestCallback_t5C7C130B6978B88B1E28EFA41FA22C180AC554DA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, intptr_t ___notificationData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___notificationData0);

}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m5DBBA71545C75619DF41ABA7567123E9B14F7A5D (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_mCF01BEA3E7D714EABDFFAE059B2A0DF0048D844C (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, intptr_t ___notificationData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___notificationData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___notificationData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___notificationData0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___notificationData0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___notificationData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___notificationData0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___notificationData0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___notificationData0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___notificationData0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_m60E1D2AA8BC1A9D1693F5D6051324160E2C5AAAB (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, intptr_t ___notificationData0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotificationReceivedCallback_BeginInvoke_m60E1D2AA8BC1A9D1693F5D6051324160E2C5AAAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___notificationData0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.iOS.iOSNotificationsWrapper_NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_m587707498DFCE71901F653DB1A5EF4B8104E63D5 (NotificationReceivedCallback_t36CA898676A875809CB4E94B6284CF5DBC5AD0D0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationTimeIntervalTrigger_get_Repeats_mDBE8EB76AFB1BF0BFFD30EFA1FA67956061F2D4B_inline (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Year_mBBCED3DDF15A9E843C813CB365E24CE55687E75D_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Year { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CYearU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Month_m0DF590657656E149DC90E7D63CA9E575105103D1_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Month { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CMonthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Day_mF30D77FF88E0730D47C3DDC6DF4CADC350F589AD_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Day { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CDayU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Hour_m384BE74AD4DC2FEDD2310DCD77D7B353B9AF3D4C_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Hour { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CHourU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Minute_m7AC063853B8B4DF3ECF996B3188901304C935A2A_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Minute { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CMinuteU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  iOSNotificationCalendarTrigger_get_Second_mA4751D11679102E3F60CF1973003D0A916A2BBFF_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public int? Second { get; set; }
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_0 = __this->get_U3CSecondU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationCalendarTrigger_get_Repeats_mA056204B0FD6839466C691EBB03196253D850439_inline (iOSNotificationCalendarTrigger_t676551E74A49A667BA853D2E32674D849018324F * __this, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = __this->get_U3CRepeatsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  iOSNotificationLocationTrigger_get_Center_m4D05E6A08ACB04CB28161C053FD8F44264231912_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Center { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CCenterU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnEntry_m92862B7E2AAA2731DB9F1BAE5656A68046B9AD17_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnEntry { get; set; }
		bool L_0 = __this->get_U3CNotifyOnEntryU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool iOSNotificationLocationTrigger_get_NotifyOnExit_m0E16244BD95BD77F19DDEEF3115278E9319C623B_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public bool NotifyOnExit { get; set; }
		bool L_0 = __this->get_U3CNotifyOnExitU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float iOSNotificationLocationTrigger_get_Radius_m9B7631C5EEA1FC5C5D6AF9EA192C116BA17B7873_inline (iOSNotificationLocationTrigger_tA0AF6FC316E9F5422BB0ADCC3D97E4109F21EE0B * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; set; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void iOSNotificationTimeIntervalTrigger_set_Repeats_m307A5902AD61CD35BB11B17024931CB2CA53849E_inline (iOSNotificationTimeIntervalTrigger_t6EC3508402881A8FA22CF035D827F64BE67B0880 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Repeats { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRepeatsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mDF88FD38287F43C9F0A3911846572A39E33E0D2B_gshared_inline (Nullable_1_t79105065F83C37BC992A82CA9F0D1D1242B64284 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
