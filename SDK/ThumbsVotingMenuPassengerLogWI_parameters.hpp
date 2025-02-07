#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThumbsVotingMenuPassengerLogWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_structs.hpp"


namespace SDK::Params
{

// Function ThumbsVotingMenuPassengerLogWI.ThumbsVotingMenuPassengerLogWI_C.ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI
// 0x0018 (0x0018 - 0x0000)
struct ThumbsVotingMenuPassengerLogWI_C_ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASCTPlayerState*                        CallFunc_GetLocalPlayerState_AsSCTPlayer_State;    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasPassengerLog_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ThumbsVotingMenuPassengerLogWI_C_ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI) == 0x000008, "Wrong alignment on ThumbsVotingMenuPassengerLogWI_C_ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI");
static_assert(sizeof(ThumbsVotingMenuPassengerLogWI_C_ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI) == 0x000018, "Wrong size on ThumbsVotingMenuPassengerLogWI_C_ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI, EntryPoint) == 0x000000, "Member 'ThumbsVotingMenuPassengerLogWI_C_ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI, CallFunc_GetLocalPlayerState_AsSCTPlayer_State) == 0x000008, "Member 'ThumbsVotingMenuPassengerLogWI_C_ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI::CallFunc_GetLocalPlayerState_AsSCTPlayer_State' has a wrong offset!");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI, CallFunc_HasPassengerLog_ReturnValue) == 0x000010, "Member 'ThumbsVotingMenuPassengerLogWI_C_ExecuteUbergraph_ThumbsVotingMenuPassengerLogWI::CallFunc_HasPassengerLog_ReturnValue' has a wrong offset!");

// Function ThumbsVotingMenuPassengerLogWI.ThumbsVotingMenuPassengerLogWI_C.Display_Log
// 0x0050 (0x0050 - 0x0000)
struct ThumbsVotingMenuPassengerLogWI_C_Display_Log final
{
public:
	class ACharacterSCTBP_C*                      CallFunc_GetSCT_Player_Character_AsCharacter_SCT;  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                             CallFunc_GetSCT_Player_Character_CharacterInventory; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASCTPlayerState*                        CallFunc_GetSCTPlayerState_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPassengerLogInformation               CallFunc_GetLatestPassengerLog_ReturnValue;        // 0x0020(0x0028)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ThumbsVotingMenuPassengerLogWI_C_Display_Log) == 0x000008, "Wrong alignment on ThumbsVotingMenuPassengerLogWI_C_Display_Log");
static_assert(sizeof(ThumbsVotingMenuPassengerLogWI_C_Display_Log) == 0x000050, "Wrong size on ThumbsVotingMenuPassengerLogWI_C_Display_Log");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_Display_Log, CallFunc_GetSCT_Player_Character_AsCharacter_SCT) == 0x000000, "Member 'ThumbsVotingMenuPassengerLogWI_C_Display_Log::CallFunc_GetSCT_Player_Character_AsCharacter_SCT' has a wrong offset!");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_Display_Log, CallFunc_GetSCT_Player_Character_CharacterInventory) == 0x000008, "Member 'ThumbsVotingMenuPassengerLogWI_C_Display_Log::CallFunc_GetSCT_Player_Character_CharacterInventory' has a wrong offset!");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_Display_Log, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ThumbsVotingMenuPassengerLogWI_C_Display_Log::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_Display_Log, CallFunc_GetSCTPlayerState_ReturnValue) == 0x000018, "Member 'ThumbsVotingMenuPassengerLogWI_C_Display_Log::CallFunc_GetSCTPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_Display_Log, CallFunc_GetLatestPassengerLog_ReturnValue) == 0x000020, "Member 'ThumbsVotingMenuPassengerLogWI_C_Display_Log::CallFunc_GetLatestPassengerLog_ReturnValue' has a wrong offset!");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_Display_Log, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'ThumbsVotingMenuPassengerLogWI_C_Display_Log::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function ThumbsVotingMenuPassengerLogWI.ThumbsVotingMenuPassengerLogWI_C.Clear UI
// 0x0028 (0x0028 - 0x0000)
struct ThumbsVotingMenuPassengerLogWI_C_Clear_UI final
{
public:
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0010(0x0018)()
};
static_assert(alignof(ThumbsVotingMenuPassengerLogWI_C_Clear_UI) == 0x000008, "Wrong alignment on ThumbsVotingMenuPassengerLogWI_C_Clear_UI");
static_assert(sizeof(ThumbsVotingMenuPassengerLogWI_C_Clear_UI) == 0x000028, "Wrong size on ThumbsVotingMenuPassengerLogWI_C_Clear_UI");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_Clear_UI, K2Node_MakeArray_Array) == 0x000000, "Member 'ThumbsVotingMenuPassengerLogWI_C_Clear_UI::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_Clear_UI, CallFunc_Format_ReturnValue) == 0x000010, "Member 'ThumbsVotingMenuPassengerLogWI_C_Clear_UI::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function ThumbsVotingMenuPassengerLogWI.ThumbsVotingMenuPassengerLogWI_C.DisplayDescription
// 0x0018 (0x0018 - 0x0000)
struct ThumbsVotingMenuPassengerLogWI_C_DisplayDescription final
{
public:
	class FText                                   Description;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ThumbsVotingMenuPassengerLogWI_C_DisplayDescription) == 0x000008, "Wrong alignment on ThumbsVotingMenuPassengerLogWI_C_DisplayDescription");
static_assert(sizeof(ThumbsVotingMenuPassengerLogWI_C_DisplayDescription) == 0x000018, "Wrong size on ThumbsVotingMenuPassengerLogWI_C_DisplayDescription");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_DisplayDescription, Description) == 0x000000, "Member 'ThumbsVotingMenuPassengerLogWI_C_DisplayDescription::Description' has a wrong offset!");

// Function ThumbsVotingMenuPassengerLogWI.ThumbsVotingMenuPassengerLogWI_C.DisplayTargets
// 0x0028 (0x0028 - 0x0000)
struct ThumbsVotingMenuPassengerLogWI_C_DisplayTargets final
{
public:
	class FString                                 Targets;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(ThumbsVotingMenuPassengerLogWI_C_DisplayTargets) == 0x000008, "Wrong alignment on ThumbsVotingMenuPassengerLogWI_C_DisplayTargets");
static_assert(sizeof(ThumbsVotingMenuPassengerLogWI_C_DisplayTargets) == 0x000028, "Wrong size on ThumbsVotingMenuPassengerLogWI_C_DisplayTargets");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_DisplayTargets, Targets) == 0x000000, "Member 'ThumbsVotingMenuPassengerLogWI_C_DisplayTargets::Targets' has a wrong offset!");
static_assert(offsetof(ThumbsVotingMenuPassengerLogWI_C_DisplayTargets, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'ThumbsVotingMenuPassengerLogWI_C_DisplayTargets::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

