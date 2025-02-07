#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_Mall

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CM_Mall.CM_Mall_C.ExecuteUbergraph_CM_Mall
// 0x0038 (0x0038 - 0x0000)
struct CM_Mall_C_ExecuteUbergraph_CM_Mall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRenderOpacity_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRenderOpacity_ReturnValue_1;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CM_Mall_C_ExecuteUbergraph_CM_Mall) == 0x000008, "Wrong alignment on CM_Mall_C_ExecuteUbergraph_CM_Mall");
static_assert(sizeof(CM_Mall_C_ExecuteUbergraph_CM_Mall) == 0x000038, "Wrong size on CM_Mall_C_ExecuteUbergraph_CM_Mall");
static_assert(offsetof(CM_Mall_C_ExecuteUbergraph_CM_Mall, EntryPoint) == 0x000000, "Member 'CM_Mall_C_ExecuteUbergraph_CM_Mall::EntryPoint' has a wrong offset!");
static_assert(offsetof(CM_Mall_C_ExecuteUbergraph_CM_Mall, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CM_Mall_C_ExecuteUbergraph_CM_Mall::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CM_Mall_C_ExecuteUbergraph_CM_Mall, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000014, "Member 'CM_Mall_C_ExecuteUbergraph_CM_Mall::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_Mall_C_ExecuteUbergraph_CM_Mall, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'CM_Mall_C_ExecuteUbergraph_CM_Mall::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_Mall_C_ExecuteUbergraph_CM_Mall, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x000020, "Member 'CM_Mall_C_ExecuteUbergraph_CM_Mall::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CM_Mall_C_ExecuteUbergraph_CM_Mall, CallFunc_GetRenderOpacity_ReturnValue) == 0x000024, "Member 'CM_Mall_C_ExecuteUbergraph_CM_Mall::CallFunc_GetRenderOpacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_Mall_C_ExecuteUbergraph_CM_Mall, CallFunc_GetRenderOpacity_ReturnValue_1) == 0x000028, "Member 'CM_Mall_C_ExecuteUbergraph_CM_Mall::CallFunc_GetRenderOpacity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CM_Mall_C_ExecuteUbergraph_CM_Mall, CallFunc_FInterpTo_ReturnValue) == 0x00002C, "Member 'CM_Mall_C_ExecuteUbergraph_CM_Mall::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_Mall_C_ExecuteUbergraph_CM_Mall, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000030, "Member 'CM_Mall_C_ExecuteUbergraph_CM_Mall::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_Mall_C_ExecuteUbergraph_CM_Mall, K2Node_Event_IsDesignTime) == 0x000031, "Member 'CM_Mall_C_ExecuteUbergraph_CM_Mall::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function CM_Mall.CM_Mall_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CM_Mall_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CM_Mall_C_PreConstruct) == 0x000001, "Wrong alignment on CM_Mall_C_PreConstruct");
static_assert(sizeof(CM_Mall_C_PreConstruct) == 0x000001, "Wrong size on CM_Mall_C_PreConstruct");
static_assert(offsetof(CM_Mall_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CM_Mall_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

