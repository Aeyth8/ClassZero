#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PassengerLogDisplayWI

#include "Basic.hpp"

#include "SCT_structs.hpp"


namespace SDK::Params
{

// Function PassengerLogDisplayWI.PassengerLogDisplayWI_C.ExecuteUbergraph_PassengerLogDisplayWI
// 0x0038 (0x0038 - 0x0000)
struct PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_In;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_OptionalDuration;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterSCTBP_C*                      CallFunc_GetSCT_Player_Character_AsCharacter_SCT;  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                             CallFunc_GetSCT_Player_Character_CharacterInventory; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI) == 0x000008, "Wrong alignment on PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI");
static_assert(sizeof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI) == 0x000038, "Wrong size on PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI");
static_assert(offsetof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI, EntryPoint) == 0x000000, "Member 'PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI, K2Node_Event_IsDesignTime) == 0x000004, "Member 'PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI, K2Node_CustomEvent_In) == 0x000005, "Member 'PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI::K2Node_CustomEvent_In' has a wrong offset!");
static_assert(offsetof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI, K2Node_CustomEvent_OptionalDuration) == 0x000008, "Member 'PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI::K2Node_CustomEvent_OptionalDuration' has a wrong offset!");
static_assert(offsetof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI, CallFunc_GetSCT_Player_Character_AsCharacter_SCT) == 0x000020, "Member 'PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI::CallFunc_GetSCT_Player_Character_AsCharacter_SCT' has a wrong offset!");
static_assert(offsetof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI, CallFunc_GetSCT_Player_Character_CharacterInventory) == 0x000028, "Member 'PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI::CallFunc_GetSCT_Player_Character_CharacterInventory' has a wrong offset!");
static_assert(offsetof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI, Temp_bool_IsClosed_Variable) == 0x000030, "Member 'PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI, Temp_bool_Has_Been_Initd_Variable) == 0x000031, "Member 'PassengerLogDisplayWI_C_ExecuteUbergraph_PassengerLogDisplayWI::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");

// Function PassengerLogDisplayWI.PassengerLogDisplayWI_C.fade
// 0x0008 (0x0008 - 0x0000)
struct PassengerLogDisplayWI_C_Fade final
{
public:
	bool                                          In;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OptionalDuration;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PassengerLogDisplayWI_C_Fade) == 0x000004, "Wrong alignment on PassengerLogDisplayWI_C_Fade");
static_assert(sizeof(PassengerLogDisplayWI_C_Fade) == 0x000008, "Wrong size on PassengerLogDisplayWI_C_Fade");
static_assert(offsetof(PassengerLogDisplayWI_C_Fade, In) == 0x000000, "Member 'PassengerLogDisplayWI_C_Fade::In' has a wrong offset!");
static_assert(offsetof(PassengerLogDisplayWI_C_Fade, OptionalDuration) == 0x000004, "Member 'PassengerLogDisplayWI_C_Fade::OptionalDuration' has a wrong offset!");

// Function PassengerLogDisplayWI.PassengerLogDisplayWI_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PassengerLogDisplayWI_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassengerLogDisplayWI_C_PreConstruct) == 0x000001, "Wrong alignment on PassengerLogDisplayWI_C_PreConstruct");
static_assert(sizeof(PassengerLogDisplayWI_C_PreConstruct) == 0x000001, "Wrong size on PassengerLogDisplayWI_C_PreConstruct");
static_assert(offsetof(PassengerLogDisplayWI_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PassengerLogDisplayWI_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PassengerLogDisplayWI.PassengerLogDisplayWI_C.Initialize
// 0x0040 (0x0040 - 0x0000)
struct PassengerLogDisplayWI_C_Initialize final
{
public:
	struct FPassengerLogInformation               Information;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(PassengerLogDisplayWI_C_Initialize) == 0x000008, "Wrong alignment on PassengerLogDisplayWI_C_Initialize");
static_assert(sizeof(PassengerLogDisplayWI_C_Initialize) == 0x000040, "Wrong size on PassengerLogDisplayWI_C_Initialize");
static_assert(offsetof(PassengerLogDisplayWI_C_Initialize, Information) == 0x000000, "Member 'PassengerLogDisplayWI_C_Initialize::Information' has a wrong offset!");
static_assert(offsetof(PassengerLogDisplayWI_C_Initialize, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'PassengerLogDisplayWI_C_Initialize::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
