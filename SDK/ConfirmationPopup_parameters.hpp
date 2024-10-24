#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConfirmationPopup

#include "Basic.hpp"


namespace SDK::Params
{

// Function ConfirmationPopup.ConfirmationPopup_C.ExecuteUbergraph_ConfirmationPopup
// 0x0014 (0x0014 - 0x0000)
struct ConfirmationPopup_C_ExecuteUbergraph_ConfirmationPopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ConfirmationPopup_C_ExecuteUbergraph_ConfirmationPopup) == 0x000004, "Wrong alignment on ConfirmationPopup_C_ExecuteUbergraph_ConfirmationPopup");
static_assert(sizeof(ConfirmationPopup_C_ExecuteUbergraph_ConfirmationPopup) == 0x000014, "Wrong size on ConfirmationPopup_C_ExecuteUbergraph_ConfirmationPopup");
static_assert(offsetof(ConfirmationPopup_C_ExecuteUbergraph_ConfirmationPopup, EntryPoint) == 0x000000, "Member 'ConfirmationPopup_C_ExecuteUbergraph_ConfirmationPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(ConfirmationPopup_C_ExecuteUbergraph_ConfirmationPopup, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ConfirmationPopup_C_ExecuteUbergraph_ConfirmationPopup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function ConfirmationPopup.ConfirmationPopup_C.SetAcceptText
// 0x0002 (0x0002 - 0x0000)
struct ConfirmationPopup_C_SetAcceptText final
{
public:
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConfirmationPopup_C_SetAcceptText) == 0x000001, "Wrong alignment on ConfirmationPopup_C_SetAcceptText");
static_assert(sizeof(ConfirmationPopup_C_SetAcceptText) == 0x000002, "Wrong size on ConfirmationPopup_C_SetAcceptText");
static_assert(offsetof(ConfirmationPopup_C_SetAcceptText, CallFunc_TextIsEmpty_ReturnValue) == 0x000000, "Member 'ConfirmationPopup_C_SetAcceptText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationPopup_C_SetAcceptText, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'ConfirmationPopup_C_SetAcceptText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function ConfirmationPopup.ConfirmationPopup_C.SetDeclineText
// 0x0002 (0x0002 - 0x0000)
struct ConfirmationPopup_C_SetDeclineText final
{
public:
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConfirmationPopup_C_SetDeclineText) == 0x000001, "Wrong alignment on ConfirmationPopup_C_SetDeclineText");
static_assert(sizeof(ConfirmationPopup_C_SetDeclineText) == 0x000002, "Wrong size on ConfirmationPopup_C_SetDeclineText");
static_assert(offsetof(ConfirmationPopup_C_SetDeclineText, CallFunc_TextIsEmpty_ReturnValue) == 0x000000, "Member 'ConfirmationPopup_C_SetDeclineText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationPopup_C_SetDeclineText, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'ConfirmationPopup_C_SetDeclineText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function ConfirmationPopup.ConfirmationPopup_C.RemoveOtherConfirmationPrompts
// 0x0038 (0x0038 - 0x0000)
struct ConfirmationPopup_C_RemoveOtherConfirmationPrompts final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UConfirmationPopup_C*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UConfirmationPopup_C*                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ConfirmationPopup_C_RemoveOtherConfirmationPrompts) == 0x000008, "Wrong alignment on ConfirmationPopup_C_RemoveOtherConfirmationPrompts");
static_assert(sizeof(ConfirmationPopup_C_RemoveOtherConfirmationPrompts) == 0x000038, "Wrong size on ConfirmationPopup_C_RemoveOtherConfirmationPrompts");
static_assert(offsetof(ConfirmationPopup_C_RemoveOtherConfirmationPrompts, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ConfirmationPopup_C_RemoveOtherConfirmationPrompts::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ConfirmationPopup_C_RemoveOtherConfirmationPrompts, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ConfirmationPopup_C_RemoveOtherConfirmationPrompts::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ConfirmationPopup_C_RemoveOtherConfirmationPrompts, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ConfirmationPopup_C_RemoveOtherConfirmationPrompts::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationPopup_C_RemoveOtherConfirmationPrompts, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000010, "Member 'ConfirmationPopup_C_RemoveOtherConfirmationPrompts::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(ConfirmationPopup_C_RemoveOtherConfirmationPrompts, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'ConfirmationPopup_C_RemoveOtherConfirmationPrompts::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationPopup_C_RemoveOtherConfirmationPrompts, CallFunc_Array_Get_Item) == 0x000028, "Member 'ConfirmationPopup_C_RemoveOtherConfirmationPrompts::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ConfirmationPopup_C_RemoveOtherConfirmationPrompts, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'ConfirmationPopup_C_RemoveOtherConfirmationPrompts::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

