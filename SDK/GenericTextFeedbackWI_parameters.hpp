#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericTextFeedbackWI

#include "Basic.hpp"


namespace SDK::Params
{

// Function GenericTextFeedbackWI.GenericTextFeedbackWI_C.ExecuteUbergraph_GenericTextFeedbackWI
// 0x0038 (0x0038 - 0x0000)
struct GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Duration;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0008(0x0018)()
	class APlayerController*                      K2Node_CustomEvent_OwningPlayer;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGenericTextFeedbackEntryWI_C*          CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI) == 0x000008, "Wrong alignment on GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI");
static_assert(sizeof(GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI) == 0x000038, "Wrong size on GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI");
static_assert(offsetof(GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI, EntryPoint) == 0x000000, "Member 'GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI, K2Node_CustomEvent_Duration) == 0x000004, "Member 'GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI::K2Node_CustomEvent_Duration' has a wrong offset!");
static_assert(offsetof(GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI, K2Node_CustomEvent_Text) == 0x000008, "Member 'GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI, K2Node_CustomEvent_OwningPlayer) == 0x000020, "Member 'GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI::K2Node_CustomEvent_OwningPlayer' has a wrong offset!");
static_assert(offsetof(GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI, CallFunc_Create_ReturnValue) == 0x000028, "Member 'GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000030, "Member 'GenericTextFeedbackWI_C_ExecuteUbergraph_GenericTextFeedbackWI::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function GenericTextFeedbackWI.GenericTextFeedbackWI_C.Add Message
// 0x0028 (0x0028 - 0x0000)
struct GenericTextFeedbackWI_C_Add_Message final
{
public:
	float                                         Duration;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerController*                      OwningPlayer;                                      // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GenericTextFeedbackWI_C_Add_Message) == 0x000008, "Wrong alignment on GenericTextFeedbackWI_C_Add_Message");
static_assert(sizeof(GenericTextFeedbackWI_C_Add_Message) == 0x000028, "Wrong size on GenericTextFeedbackWI_C_Add_Message");
static_assert(offsetof(GenericTextFeedbackWI_C_Add_Message, Duration) == 0x000000, "Member 'GenericTextFeedbackWI_C_Add_Message::Duration' has a wrong offset!");
static_assert(offsetof(GenericTextFeedbackWI_C_Add_Message, Text) == 0x000008, "Member 'GenericTextFeedbackWI_C_Add_Message::Text' has a wrong offset!");
static_assert(offsetof(GenericTextFeedbackWI_C_Add_Message, OwningPlayer) == 0x000020, "Member 'GenericTextFeedbackWI_C_Add_Message::OwningPlayer' has a wrong offset!");

}

