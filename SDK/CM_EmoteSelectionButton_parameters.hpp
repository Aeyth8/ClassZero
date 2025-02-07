#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_EmoteSelectionButton

#include "Basic.hpp"

#include "S_Emote_structs.hpp"


namespace SDK::Params
{

// Function CM_EmoteSelectionButton.CM_EmoteSelectionButton_C.ExecuteUbergraph_CM_EmoteSelectionButton
// 0x0008 (0x0008 - 0x0000)
struct CM_EmoteSelectionButton_C_ExecuteUbergraph_CM_EmoteSelectionButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CM_EmoteSelectionButton_C_ExecuteUbergraph_CM_EmoteSelectionButton) == 0x000004, "Wrong alignment on CM_EmoteSelectionButton_C_ExecuteUbergraph_CM_EmoteSelectionButton");
static_assert(sizeof(CM_EmoteSelectionButton_C_ExecuteUbergraph_CM_EmoteSelectionButton) == 0x000008, "Wrong size on CM_EmoteSelectionButton_C_ExecuteUbergraph_CM_EmoteSelectionButton");
static_assert(offsetof(CM_EmoteSelectionButton_C_ExecuteUbergraph_CM_EmoteSelectionButton, EntryPoint) == 0x000000, "Member 'CM_EmoteSelectionButton_C_ExecuteUbergraph_CM_EmoteSelectionButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(CM_EmoteSelectionButton_C_ExecuteUbergraph_CM_EmoteSelectionButton, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CM_EmoteSelectionButton_C_ExecuteUbergraph_CM_EmoteSelectionButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function CM_EmoteSelectionButton.CM_EmoteSelectionButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CM_EmoteSelectionButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CM_EmoteSelectionButton_C_PreConstruct) == 0x000001, "Wrong alignment on CM_EmoteSelectionButton_C_PreConstruct");
static_assert(sizeof(CM_EmoteSelectionButton_C_PreConstruct) == 0x000001, "Wrong size on CM_EmoteSelectionButton_C_PreConstruct");
static_assert(offsetof(CM_EmoteSelectionButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CM_EmoteSelectionButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CM_EmoteSelectionButton.CM_EmoteSelectionButton_C.InitSlot
// 0x0098 (0x0098 - 0x0000)
struct CM_EmoteSelectionButton_C_InitSlot final
{
public:
	class UCM_EmoteCustomization_C*               Parent;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 RowName_0;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	struct FS_Emote                               CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CM_EmoteSelectionButton_C_InitSlot) == 0x000008, "Wrong alignment on CM_EmoteSelectionButton_C_InitSlot");
static_assert(sizeof(CM_EmoteSelectionButton_C_InitSlot) == 0x000098, "Wrong size on CM_EmoteSelectionButton_C_InitSlot");
static_assert(offsetof(CM_EmoteSelectionButton_C_InitSlot, Parent) == 0x000000, "Member 'CM_EmoteSelectionButton_C_InitSlot::Parent' has a wrong offset!");
static_assert(offsetof(CM_EmoteSelectionButton_C_InitSlot, RowName_0) == 0x000008, "Member 'CM_EmoteSelectionButton_C_InitSlot::RowName_0' has a wrong offset!");
static_assert(offsetof(CM_EmoteSelectionButton_C_InitSlot, CallFunc_Conv_StringToName_ReturnValue) == 0x000018, "Member 'CM_EmoteSelectionButton_C_InitSlot::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_EmoteSelectionButton_C_InitSlot, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'CM_EmoteSelectionButton_C_InitSlot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CM_EmoteSelectionButton_C_InitSlot, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'CM_EmoteSelectionButton_C_InitSlot::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(CM_EmoteSelectionButton_C_InitSlot, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000090, "Member 'CM_EmoteSelectionButton_C_InitSlot::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

}

