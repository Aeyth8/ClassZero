#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bpc_ac_Lock

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function bpc_ac_Lock.bpc_ac_Lock_C.OnLockedStateChanged__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct bpc_ac_Lock_C_OnLockedStateChanged__DelegateSignature final
{
public:
	bool                                          IsLocked_0;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsOnCooldown_0;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(bpc_ac_Lock_C_OnLockedStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on bpc_ac_Lock_C_OnLockedStateChanged__DelegateSignature");
static_assert(sizeof(bpc_ac_Lock_C_OnLockedStateChanged__DelegateSignature) == 0x000002, "Wrong size on bpc_ac_Lock_C_OnLockedStateChanged__DelegateSignature");
static_assert(offsetof(bpc_ac_Lock_C_OnLockedStateChanged__DelegateSignature, IsLocked_0) == 0x000000, "Member 'bpc_ac_Lock_C_OnLockedStateChanged__DelegateSignature::IsLocked_0' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_OnLockedStateChanged__DelegateSignature, IsOnCooldown_0) == 0x000001, "Member 'bpc_ac_Lock_C_OnLockedStateChanged__DelegateSignature::IsOnCooldown_0' has a wrong offset!");

// Function bpc_ac_Lock.bpc_ac_Lock_C.OnFailCooldownUpdate__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct bpc_ac_Lock_C_OnFailCooldownUpdate__DelegateSignature final
{
public:
	float                                         CooldownLeft;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(bpc_ac_Lock_C_OnFailCooldownUpdate__DelegateSignature) == 0x000004, "Wrong alignment on bpc_ac_Lock_C_OnFailCooldownUpdate__DelegateSignature");
static_assert(sizeof(bpc_ac_Lock_C_OnFailCooldownUpdate__DelegateSignature) == 0x000004, "Wrong size on bpc_ac_Lock_C_OnFailCooldownUpdate__DelegateSignature");
static_assert(offsetof(bpc_ac_Lock_C_OnFailCooldownUpdate__DelegateSignature, CooldownLeft) == 0x000000, "Member 'bpc_ac_Lock_C_OnFailCooldownUpdate__DelegateSignature::CooldownLeft' has a wrong offset!");

// Function bpc_ac_Lock.bpc_ac_Lock_C.ExecuteUbergraph_bpc_ac_Lock
// 0x0028 (0x0028 - 0x0000)
struct bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MathExpression_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock) == 0x000008, "Wrong alignment on bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock");
static_assert(sizeof(bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock) == 0x000028, "Wrong size on bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock");
static_assert(offsetof(bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock, EntryPoint) == 0x000000, "Member 'bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock::EntryPoint' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock, Temp_bool_Variable) == 0x000004, "Member 'bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock, Temp_float_Variable) == 0x000008, "Member 'bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock, CallFunc_GetServerWorldTimeSeconds_ReturnValue) == 0x000018, "Member 'bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock::CallFunc_GetServerWorldTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock, K2Node_MathExpression_ReturnValue) == 0x00001C, "Member 'bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock::K2Node_MathExpression_ReturnValue' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock, CallFunc_Less_FloatFloat_ReturnValue) == 0x000020, "Member 'bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock, K2Node_Select_Default) == 0x000024, "Member 'bpc_ac_Lock_C_ExecuteUbergraph_bpc_ac_Lock::K2Node_Select_Default' has a wrong offset!");

// Function bpc_ac_Lock.bpc_ac_Lock_C.LockServer
// 0x0002 (0x0002 - 0x0000)
struct bpc_ac_Lock_C_LockServer final
{
public:
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(bpc_ac_Lock_C_LockServer) == 0x000001, "Wrong alignment on bpc_ac_Lock_C_LockServer");
static_assert(sizeof(bpc_ac_Lock_C_LockServer) == 0x000002, "Wrong size on bpc_ac_Lock_C_LockServer");
static_assert(offsetof(bpc_ac_Lock_C_LockServer, CallFunc_IsServer_ReturnValue) == 0x000000, "Member 'bpc_ac_Lock_C_LockServer::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_LockServer, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'bpc_ac_Lock_C_LockServer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function bpc_ac_Lock.bpc_ac_Lock_C.UnlockServer
// 0x0001 (0x0001 - 0x0000)
struct bpc_ac_Lock_C_UnlockServer final
{
public:
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(bpc_ac_Lock_C_UnlockServer) == 0x000001, "Wrong alignment on bpc_ac_Lock_C_UnlockServer");
static_assert(sizeof(bpc_ac_Lock_C_UnlockServer) == 0x000001, "Wrong size on bpc_ac_Lock_C_UnlockServer");
static_assert(offsetof(bpc_ac_Lock_C_UnlockServer, CallFunc_IsServer_ReturnValue) == 0x000000, "Member 'bpc_ac_Lock_C_UnlockServer::CallFunc_IsServer_ReturnValue' has a wrong offset!");

// Function bpc_ac_Lock.bpc_ac_Lock_C.OnRep_IsOnCooldown
// 0x0030 (0x0030 - 0x0000)
struct bpc_ac_Lock_C_OnRep_IsOnCooldown final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	float                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(bpc_ac_Lock_C_OnRep_IsOnCooldown) == 0x000008, "Wrong alignment on bpc_ac_Lock_C_OnRep_IsOnCooldown");
static_assert(sizeof(bpc_ac_Lock_C_OnRep_IsOnCooldown) == 0x000030, "Wrong size on bpc_ac_Lock_C_OnRep_IsOnCooldown");
static_assert(offsetof(bpc_ac_Lock_C_OnRep_IsOnCooldown, Temp_bool_Variable) == 0x000000, "Member 'bpc_ac_Lock_C_OnRep_IsOnCooldown::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_OnRep_IsOnCooldown, Temp_float_Variable) == 0x000004, "Member 'bpc_ac_Lock_C_OnRep_IsOnCooldown::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_OnRep_IsOnCooldown, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'bpc_ac_Lock_C_OnRep_IsOnCooldown::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_OnRep_IsOnCooldown, CallFunc_GetServerWorldTimeSeconds_ReturnValue) == 0x000010, "Member 'bpc_ac_Lock_C_OnRep_IsOnCooldown::CallFunc_GetServerWorldTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_OnRep_IsOnCooldown, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'bpc_ac_Lock_C_OnRep_IsOnCooldown::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_OnRep_IsOnCooldown, K2Node_Select_Default) == 0x000024, "Member 'bpc_ac_Lock_C_OnRep_IsOnCooldown::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_OnRep_IsOnCooldown, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'bpc_ac_Lock_C_OnRep_IsOnCooldown::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function bpc_ac_Lock.bpc_ac_Lock_C.CooldownStartServer
// 0x0018 (0x0018 - 0x0000)
struct bpc_ac_Lock_C_CooldownStartServer final
{
public:
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(bpc_ac_Lock_C_CooldownStartServer) == 0x000008, "Wrong alignment on bpc_ac_Lock_C_CooldownStartServer");
static_assert(sizeof(bpc_ac_Lock_C_CooldownStartServer) == 0x000018, "Wrong size on bpc_ac_Lock_C_CooldownStartServer");
static_assert(offsetof(bpc_ac_Lock_C_CooldownStartServer, CallFunc_IsServer_ReturnValue) == 0x000000, "Member 'bpc_ac_Lock_C_CooldownStartServer::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_CooldownStartServer, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'bpc_ac_Lock_C_CooldownStartServer::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(bpc_ac_Lock_C_CooldownStartServer, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'bpc_ac_Lock_C_CooldownStartServer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function bpc_ac_Lock.bpc_ac_Lock_C.CooldownEndServer
// 0x0001 (0x0001 - 0x0000)
struct bpc_ac_Lock_C_CooldownEndServer final
{
public:
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(bpc_ac_Lock_C_CooldownEndServer) == 0x000001, "Wrong alignment on bpc_ac_Lock_C_CooldownEndServer");
static_assert(sizeof(bpc_ac_Lock_C_CooldownEndServer) == 0x000001, "Wrong size on bpc_ac_Lock_C_CooldownEndServer");
static_assert(offsetof(bpc_ac_Lock_C_CooldownEndServer, CallFunc_IsServer_ReturnValue) == 0x000000, "Member 'bpc_ac_Lock_C_CooldownEndServer::CallFunc_IsServer_ReturnValue' has a wrong offset!");

}

