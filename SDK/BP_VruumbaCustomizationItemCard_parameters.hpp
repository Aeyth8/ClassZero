#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VruumbaCustomizationItemCard

#include "Basic.hpp"

#include "SCT_structs.hpp"


namespace SDK::Params
{

// Function BP_VruumbaCustomizationItemCard.BP_VruumbaCustomizationItemCard_C.ExecuteUbergraph_BP_VruumbaCustomizationItemCard
// 0x0004 (0x0004 - 0x0000)
struct BP_VruumbaCustomizationItemCard_C_ExecuteUbergraph_BP_VruumbaCustomizationItemCard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VruumbaCustomizationItemCard_C_ExecuteUbergraph_BP_VruumbaCustomizationItemCard) == 0x000004, "Wrong alignment on BP_VruumbaCustomizationItemCard_C_ExecuteUbergraph_BP_VruumbaCustomizationItemCard");
static_assert(sizeof(BP_VruumbaCustomizationItemCard_C_ExecuteUbergraph_BP_VruumbaCustomizationItemCard) == 0x000004, "Wrong size on BP_VruumbaCustomizationItemCard_C_ExecuteUbergraph_BP_VruumbaCustomizationItemCard");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_ExecuteUbergraph_BP_VruumbaCustomizationItemCard, EntryPoint) == 0x000000, "Member 'BP_VruumbaCustomizationItemCard_C_ExecuteUbergraph_BP_VruumbaCustomizationItemCard::EntryPoint' has a wrong offset!");

// Function BP_VruumbaCustomizationItemCard.BP_VruumbaCustomizationItemCard_C.Init Slot
// 0x0078 (0x0078 - 0x0000)
struct BP_VruumbaCustomizationItemCard_C_Init_Slot final
{
public:
	class FString                                 InDTRowName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	EVruumbaCustomizationType                     CustomizationCategory;                             // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_VruumbaCustomizationScrollBox_C*    Parent;                                            // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                             QualityGrid;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemQuality                                  Quality;                                           // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentLevel;                                      // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Visible, class UBP_ItemCard_C* ItemCard, uint8 CategoryAsByte)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class UGridPanel*                             CallFunc_SetParticleItemVariables_QualityGrid;     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                             CallFunc_SetAntennaItemVariables_QualityGrid;      // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                             CallFunc_SetBodyItemVariables_QualityGrid;         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPlayerProfileMainMenu_BP_C*>    CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0060(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPlayerProfileMainMenu_BP_C*            CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VruumbaCustomizationItemCard_C_Init_Slot) == 0x000008, "Wrong alignment on BP_VruumbaCustomizationItemCard_C_Init_Slot");
static_assert(sizeof(BP_VruumbaCustomizationItemCard_C_Init_Slot) == 0x000078, "Wrong size on BP_VruumbaCustomizationItemCard_C_Init_Slot");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, InDTRowName) == 0x000000, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::InDTRowName' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, CustomizationCategory) == 0x000010, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::CustomizationCategory' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, Parent) == 0x000018, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::Parent' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, QualityGrid) == 0x000020, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::QualityGrid' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, Quality) == 0x000028, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::Quality' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, CurrentLevel) == 0x00002C, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::CurrentLevel' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, CallFunc_SetParticleItemVariables_QualityGrid) == 0x000040, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::CallFunc_SetParticleItemVariables_QualityGrid' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, CallFunc_SetAntennaItemVariables_QualityGrid) == 0x000048, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::CallFunc_SetAntennaItemVariables_QualityGrid' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, CallFunc_SetBodyItemVariables_QualityGrid) == 0x000050, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::CallFunc_SetBodyItemVariables_QualityGrid' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000060, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Init_Slot, CallFunc_Array_Get_Item) == 0x000070, "Member 'BP_VruumbaCustomizationItemCard_C_Init_Slot::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BP_VruumbaCustomizationItemCard.BP_VruumbaCustomizationItemCard_C.Set Quality to Card
// 0x0020 (0x0020 - 0x0000)
struct BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card final
{
public:
	EItemQuality                                  Quality;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_VruumbaCustomizationScrollBox_C*    Parent;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridPanel*                             QualityGrid;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card) == 0x000008, "Wrong alignment on BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card");
static_assert(sizeof(BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card) == 0x000020, "Wrong size on BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card, Quality) == 0x000000, "Member 'BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card::Quality' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card, Parent) == 0x000008, "Member 'BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card::Parent' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card, QualityGrid) == 0x000010, "Member 'BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card::QualityGrid' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'BP_VruumbaCustomizationItemCard_C_Set_Quality_to_Card::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_VruumbaCustomizationItemCard.BP_VruumbaCustomizationItemCard_C.SetBodyItemVariables
// 0x0130 (0x0130 - 0x0000)
struct BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables final
{
public:
	class UBP_VruumbaCustomizationScrollBox_C*    Parent;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             QualityGrid;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UBP_ItemCard_C* Item)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Focused, class UBP_ItemCard_C* Item)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UGridPanel*                             CallFunc_Set_Quality_to_Card_QualityGrid;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVruumbaSkeletalMeshCustomizationItemTableRow CallFunc_GetBodyByName_Out_Row;                    // 0x0048(0x0080)()
	struct FVruumbaCustomizationTableRow          K2Node_MakeStruct_VruumbaCustomizationTableRow;    // 0x00C8(0x0068)()
};
static_assert(alignof(BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables) == 0x000008, "Wrong alignment on BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables");
static_assert(sizeof(BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables) == 0x000130, "Wrong size on BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables, Parent) == 0x000000, "Member 'BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables::Parent' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables, CurrentLevel) == 0x000008, "Member 'BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables::CurrentLevel' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables, QualityGrid) == 0x000010, "Member 'BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables::QualityGrid' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables, CallFunc_Set_Quality_to_Card_QualityGrid) == 0x000038, "Member 'BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables::CallFunc_Set_Quality_to_Card_QualityGrid' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables, CallFunc_Conv_StringToName_ReturnValue) == 0x000040, "Member 'BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables, CallFunc_GetBodyByName_Out_Row) == 0x000048, "Member 'BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables::CallFunc_GetBodyByName_Out_Row' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables, K2Node_MakeStruct_VruumbaCustomizationTableRow) == 0x0000C8, "Member 'BP_VruumbaCustomizationItemCard_C_SetBodyItemVariables::K2Node_MakeStruct_VruumbaCustomizationTableRow' has a wrong offset!");

// Function BP_VruumbaCustomizationItemCard.BP_VruumbaCustomizationItemCard_C.SetAntennaItemVariables
// 0x01C0 (0x01C0 - 0x0000)
struct BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables final
{
public:
	class UBP_VruumbaCustomizationScrollBox_C*    Parent;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             QualityGrid;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVruumbaAnimatedMeshCustomizationItemTableRow Payload;                                           // 0x0018(0x0088)(Edit, BlueprintVisible)
	TDelegate<void(class UBP_ItemCard_C* Item)>   K2Node_CreateDelegate_OutputDelegate;              // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Focused, class UBP_ItemCard_C* Item)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	class UGridPanel*                             CallFunc_Set_Quality_to_Card_QualityGrid;          // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVruumbaAnimatedMeshCustomizationItemTableRow CallFunc_GetAntennaByName_Out_Row;                 // 0x00D0(0x0088)()
	struct FVruumbaCustomizationTableRow          K2Node_MakeStruct_VruumbaCustomizationTableRow;    // 0x0158(0x0068)()
};
static_assert(alignof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables) == 0x000008, "Wrong alignment on BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables");
static_assert(sizeof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables) == 0x0001C0, "Wrong size on BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables, Parent) == 0x000000, "Member 'BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables::Parent' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables, CurrentLevel) == 0x000008, "Member 'BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables::CurrentLevel' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables, QualityGrid) == 0x000010, "Member 'BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables::QualityGrid' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables, Payload) == 0x000018, "Member 'BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables::Payload' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables, K2Node_CreateDelegate_OutputDelegate) == 0x0000A0, "Member 'BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B0, "Member 'BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables, CallFunc_Set_Quality_to_Card_QualityGrid) == 0x0000C0, "Member 'BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables::CallFunc_Set_Quality_to_Card_QualityGrid' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables, CallFunc_Conv_StringToName_ReturnValue) == 0x0000C8, "Member 'BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables, CallFunc_GetAntennaByName_Out_Row) == 0x0000D0, "Member 'BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables::CallFunc_GetAntennaByName_Out_Row' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables, K2Node_MakeStruct_VruumbaCustomizationTableRow) == 0x000158, "Member 'BP_VruumbaCustomizationItemCard_C_SetAntennaItemVariables::K2Node_MakeStruct_VruumbaCustomizationTableRow' has a wrong offset!");

// Function BP_VruumbaCustomizationItemCard.BP_VruumbaCustomizationItemCard_C.SetParticleItemVariables
// 0x0190 (0x0190 - 0x0000)
struct BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables final
{
public:
	class UBP_VruumbaCustomizationScrollBox_C*    Parent;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridPanel*                             QualityGrid;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVruumbaParticlesCustomizationItemTableRow Payload;                                           // 0x0018(0x0070)(Edit, BlueprintVisible)
	TDelegate<void(class UBP_ItemCard_C* Item)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Focused, class UBP_ItemCard_C* Item)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	class UGridPanel*                             CallFunc_Set_Quality_to_Card_QualityGrid;          // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVruumbaParticlesCustomizationItemTableRow CallFunc_GetParticlesByName_Out_Row;               // 0x00B8(0x0070)()
	struct FVruumbaCustomizationTableRow          K2Node_MakeStruct_VruumbaCustomizationTableRow;    // 0x0128(0x0068)()
};
static_assert(alignof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables) == 0x000008, "Wrong alignment on BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables");
static_assert(sizeof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables) == 0x000190, "Wrong size on BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables, Parent) == 0x000000, "Member 'BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables::Parent' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables, CurrentLevel) == 0x000008, "Member 'BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables::CurrentLevel' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables, QualityGrid) == 0x000010, "Member 'BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables::QualityGrid' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables, Payload) == 0x000018, "Member 'BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables::Payload' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables, K2Node_CreateDelegate_OutputDelegate_1) == 0x000098, "Member 'BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables, CallFunc_Set_Quality_to_Card_QualityGrid) == 0x0000A8, "Member 'BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables::CallFunc_Set_Quality_to_Card_QualityGrid' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B0, "Member 'BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables, CallFunc_GetParticlesByName_Out_Row) == 0x0000B8, "Member 'BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables::CallFunc_GetParticlesByName_Out_Row' has a wrong offset!");
static_assert(offsetof(BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables, K2Node_MakeStruct_VruumbaCustomizationTableRow) == 0x000128, "Member 'BP_VruumbaCustomizationItemCard_C_SetParticleItemVariables::K2Node_MakeStruct_VruumbaCustomizationTableRow' has a wrong offset!");

}

