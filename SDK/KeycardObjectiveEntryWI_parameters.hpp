#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeycardObjectiveEntryWI

#include "Basic.hpp"


namespace SDK::Params
{

// Function KeycardObjectiveEntryWI.KeycardObjectiveEntryWI_C.ExecuteUbergraph_KeycardObjectiveEntryWI
// 0x0018 (0x0018 - 0x0000)
struct KeycardObjectiveEntryWI_C_ExecuteUbergraph_KeycardObjectiveEntryWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeycardObjectiveEntryWI_C_ExecuteUbergraph_KeycardObjectiveEntryWI) == 0x000008, "Wrong alignment on KeycardObjectiveEntryWI_C_ExecuteUbergraph_KeycardObjectiveEntryWI");
static_assert(sizeof(KeycardObjectiveEntryWI_C_ExecuteUbergraph_KeycardObjectiveEntryWI) == 0x000018, "Wrong size on KeycardObjectiveEntryWI_C_ExecuteUbergraph_KeycardObjectiveEntryWI");
static_assert(offsetof(KeycardObjectiveEntryWI_C_ExecuteUbergraph_KeycardObjectiveEntryWI, EntryPoint) == 0x000000, "Member 'KeycardObjectiveEntryWI_C_ExecuteUbergraph_KeycardObjectiveEntryWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveEntryWI_C_ExecuteUbergraph_KeycardObjectiveEntryWI, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'KeycardObjectiveEntryWI_C_ExecuteUbergraph_KeycardObjectiveEntryWI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveEntryWI_C_ExecuteUbergraph_KeycardObjectiveEntryWI, K2Node_Event_IsDesignTime) == 0x000010, "Member 'KeycardObjectiveEntryWI_C_ExecuteUbergraph_KeycardObjectiveEntryWI::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function KeycardObjectiveEntryWI.KeycardObjectiveEntryWI_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct KeycardObjectiveEntryWI_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeycardObjectiveEntryWI_C_PreConstruct) == 0x000001, "Wrong alignment on KeycardObjectiveEntryWI_C_PreConstruct");
static_assert(sizeof(KeycardObjectiveEntryWI_C_PreConstruct) == 0x000001, "Wrong size on KeycardObjectiveEntryWI_C_PreConstruct");
static_assert(offsetof(KeycardObjectiveEntryWI_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'KeycardObjectiveEntryWI_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
