#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: POI_WidgetComponent_HatTag

#include "Basic.hpp"


namespace SDK::Params
{

// Function POI_WidgetComponent_HatTag.POI_WidgetComponent_HatTag_C.SetVisibilityState
// 0x0020 (0x0020 - 0x0000)
struct POI_WidgetComponent_HatTag_C_SetVisibilityState final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterSCTBP_C*                      CallFunc_GetSCT_Player_Character_AsCharacter_SCT;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                             CallFunc_GetSCT_Player_Character_CharacterInventory; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAlive_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(POI_WidgetComponent_HatTag_C_SetVisibilityState) == 0x000008, "Wrong alignment on POI_WidgetComponent_HatTag_C_SetVisibilityState");
static_assert(sizeof(POI_WidgetComponent_HatTag_C_SetVisibilityState) == 0x000020, "Wrong size on POI_WidgetComponent_HatTag_C_SetVisibilityState");
static_assert(offsetof(POI_WidgetComponent_HatTag_C_SetVisibilityState, Visibility) == 0x000000, "Member 'POI_WidgetComponent_HatTag_C_SetVisibilityState::Visibility' has a wrong offset!");
static_assert(offsetof(POI_WidgetComponent_HatTag_C_SetVisibilityState, CallFunc_GetSCT_Player_Character_AsCharacter_SCT) == 0x000008, "Member 'POI_WidgetComponent_HatTag_C_SetVisibilityState::CallFunc_GetSCT_Player_Character_AsCharacter_SCT' has a wrong offset!");
static_assert(offsetof(POI_WidgetComponent_HatTag_C_SetVisibilityState, CallFunc_GetSCT_Player_Character_CharacterInventory) == 0x000010, "Member 'POI_WidgetComponent_HatTag_C_SetVisibilityState::CallFunc_GetSCT_Player_Character_CharacterInventory' has a wrong offset!");
static_assert(offsetof(POI_WidgetComponent_HatTag_C_SetVisibilityState, CallFunc_IsAlive_ReturnValue) == 0x000018, "Member 'POI_WidgetComponent_HatTag_C_SetVisibilityState::CallFunc_IsAlive_ReturnValue' has a wrong offset!");
static_assert(offsetof(POI_WidgetComponent_HatTag_C_SetVisibilityState, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'POI_WidgetComponent_HatTag_C_SetVisibilityState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(POI_WidgetComponent_HatTag_C_SetVisibilityState, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'POI_WidgetComponent_HatTag_C_SetVisibilityState::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(POI_WidgetComponent_HatTag_C_SetVisibilityState, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'POI_WidgetComponent_HatTag_C_SetVisibilityState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
