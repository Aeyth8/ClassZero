#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquipablePower_SprintBoost

#include "Basic.hpp"


namespace SDK::Params
{

// Function EquipablePower_SprintBoost.EquipablePower_SprintBoost_C.ExecuteUbergraph_EquipablePower_SprintBoost
// 0x0020 (0x0020 - 0x0000)
struct EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_wasCancelled;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterSCTBP_C*                      K2Node_DynamicCast_AsCharacter_SCTBP;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_3;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_4;       // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost) == 0x000008, "Wrong alignment on EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost");
static_assert(sizeof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost) == 0x000020, "Wrong size on EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost");
static_assert(offsetof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost, EntryPoint) == 0x000000, "Member 'EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost::EntryPoint' has a wrong offset!");
static_assert(offsetof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost, K2Node_Event_wasCancelled) == 0x000004, "Member 'EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost::K2Node_Event_wasCancelled' has a wrong offset!");
static_assert(offsetof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost, K2Node_DynamicCast_AsCharacter_SCTBP) == 0x000010, "Member 'EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost::K2Node_DynamicCast_AsCharacter_SCTBP' has a wrong offset!");
static_assert(offsetof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000019, "Member 'EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x00001A, "Member 'EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost, CallFunc_K2_AttachToComponent_ReturnValue_2) == 0x00001B, "Member 'EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost::CallFunc_K2_AttachToComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost, CallFunc_K2_AttachToComponent_ReturnValue_3) == 0x00001C, "Member 'EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost::CallFunc_K2_AttachToComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost, CallFunc_K2_AttachToComponent_ReturnValue_4) == 0x00001D, "Member 'EquipablePower_SprintBoost_C_ExecuteUbergraph_EquipablePower_SprintBoost::CallFunc_K2_AttachToComponent_ReturnValue_4' has a wrong offset!");

// Function EquipablePower_SprintBoost.EquipablePower_SprintBoost_C.Deactivate
// 0x0001 (0x0001 - 0x0000)
struct EquipablePower_SprintBoost_C_Deactivate final
{
public:
	bool                                          WasCancelled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipablePower_SprintBoost_C_Deactivate) == 0x000001, "Wrong alignment on EquipablePower_SprintBoost_C_Deactivate");
static_assert(sizeof(EquipablePower_SprintBoost_C_Deactivate) == 0x000001, "Wrong size on EquipablePower_SprintBoost_C_Deactivate");
static_assert(offsetof(EquipablePower_SprintBoost_C_Deactivate, WasCancelled) == 0x000000, "Member 'EquipablePower_SprintBoost_C_Deactivate::WasCancelled' has a wrong offset!");

}

