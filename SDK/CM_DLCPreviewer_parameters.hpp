#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_DLCPreviewer

#include "Basic.hpp"

#include "SCT_structs.hpp"


namespace SDK::Params
{

// Function CM_DLCPreviewer.CM_DLCPreviewer_C.ExecuteUbergraph_CM_DLCPreviewer
// 0x0040 (0x0040 - 0x0000)
struct CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ACharacterPreviewerSCTBP_C*>     CallFunc_GetAllActorsOfClass_OutActors;            // 0x0010(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterPreviewerSCTBP_C*             CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer) == 0x000008, "Wrong alignment on CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer");
static_assert(sizeof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer) == 0x000040, "Wrong size on CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, EntryPoint) == 0x000000, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::EntryPoint' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, Temp_int_Array_Index_Variable) == 0x000004, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, Temp_bool_True_if_break_was_hit_Variable) == 0x000008, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, K2Node_Event_IsDesignTime) == 0x00000A, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, CallFunc_Array_Get_Item) == 0x000028, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer, CallFunc_BooleanAND_ReturnValue) == 0x000039, "Member 'CM_DLCPreviewer_C_ExecuteUbergraph_CM_DLCPreviewer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function CM_DLCPreviewer.CM_DLCPreviewer_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CM_DLCPreviewer_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CM_DLCPreviewer_C_PreConstruct) == 0x000001, "Wrong alignment on CM_DLCPreviewer_C_PreConstruct");
static_assert(sizeof(CM_DLCPreviewer_C_PreConstruct) == 0x000001, "Wrong size on CM_DLCPreviewer_C_PreConstruct");
static_assert(offsetof(CM_DLCPreviewer_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CM_DLCPreviewer_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CM_DLCPreviewer.CM_DLCPreviewer_C.InitializePreviewer
// 0x00B8 (0x00B8 - 0x0000)
struct CM_DLCPreviewer_C_InitializePreviewer final
{
public:
	class FString                                 InStoreId;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPlayerCustomizationItemTableRow       InItems;                                           // 0x0010(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CM_DLCPreviewer_C_InitializePreviewer) == 0x000008, "Wrong alignment on CM_DLCPreviewer_C_InitializePreviewer");
static_assert(sizeof(CM_DLCPreviewer_C_InitializePreviewer) == 0x0000B8, "Wrong size on CM_DLCPreviewer_C_InitializePreviewer");
static_assert(offsetof(CM_DLCPreviewer_C_InitializePreviewer, InStoreId) == 0x000000, "Member 'CM_DLCPreviewer_C_InitializePreviewer::InStoreId' has a wrong offset!");
static_assert(offsetof(CM_DLCPreviewer_C_InitializePreviewer, InItems) == 0x000010, "Member 'CM_DLCPreviewer_C_InitializePreviewer::InItems' has a wrong offset!");

}

