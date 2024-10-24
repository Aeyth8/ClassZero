#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemCard

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SCT_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ItemCard.BP_ItemCard_C.OnItemSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_ItemCard_C_OnItemSelected__DelegateSignature final
{
public:
	class UBP_ItemCard_C*                         Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemCard_C_OnItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on BP_ItemCard_C_OnItemSelected__DelegateSignature");
static_assert(sizeof(BP_ItemCard_C_OnItemSelected__DelegateSignature) == 0x000008, "Wrong size on BP_ItemCard_C_OnItemSelected__DelegateSignature");
static_assert(offsetof(BP_ItemCard_C_OnItemSelected__DelegateSignature, Item) == 0x000000, "Member 'BP_ItemCard_C_OnItemSelected__DelegateSignature::Item' has a wrong offset!");

// Function BP_ItemCard.BP_ItemCard_C.OnItemFocusStateChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_ItemCard_C_OnItemFocusStateChanged__DelegateSignature final
{
public:
	bool                                          Focused;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ItemCard_C*                         Item;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemCard_C_OnItemFocusStateChanged__DelegateSignature) == 0x000008, "Wrong alignment on BP_ItemCard_C_OnItemFocusStateChanged__DelegateSignature");
static_assert(sizeof(BP_ItemCard_C_OnItemFocusStateChanged__DelegateSignature) == 0x000010, "Wrong size on BP_ItemCard_C_OnItemFocusStateChanged__DelegateSignature");
static_assert(offsetof(BP_ItemCard_C_OnItemFocusStateChanged__DelegateSignature, Focused) == 0x000000, "Member 'BP_ItemCard_C_OnItemFocusStateChanged__DelegateSignature::Focused' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_OnItemFocusStateChanged__DelegateSignature, Item) == 0x000008, "Member 'BP_ItemCard_C_OnItemFocusStateChanged__DelegateSignature::Item' has a wrong offset!");

// Function BP_ItemCard.BP_ItemCard_C.OnSetTooltipState__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BP_ItemCard_C_OnSetTooltipState__DelegateSignature final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ItemCard_C*                         ItemCard;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CategoryAsByte_0;                                  // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemCard_C_OnSetTooltipState__DelegateSignature) == 0x000008, "Wrong alignment on BP_ItemCard_C_OnSetTooltipState__DelegateSignature");
static_assert(sizeof(BP_ItemCard_C_OnSetTooltipState__DelegateSignature) == 0x000018, "Wrong size on BP_ItemCard_C_OnSetTooltipState__DelegateSignature");
static_assert(offsetof(BP_ItemCard_C_OnSetTooltipState__DelegateSignature, Visible) == 0x000000, "Member 'BP_ItemCard_C_OnSetTooltipState__DelegateSignature::Visible' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_OnSetTooltipState__DelegateSignature, ItemCard) == 0x000008, "Member 'BP_ItemCard_C_OnSetTooltipState__DelegateSignature::ItemCard' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_OnSetTooltipState__DelegateSignature, CategoryAsByte_0) == 0x000010, "Member 'BP_ItemCard_C_OnSetTooltipState__DelegateSignature::CategoryAsByte_0' has a wrong offset!");

// Function BP_ItemCard.BP_ItemCard_C.ExecuteUbergraph_BP_ItemCard
// 0x0078 (0x0078 - 0x0000)
struct BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	struct FFocusEvent                            K2Node_Event_InFocusEvent_1;                       // 0x0030(0x0008)(NoDestructor)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0038(0x0008)(NoDestructor)
	float                                         K2Node_CustomEvent_Time;                           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0050(0x0028)(UObjectWrapper)
};
static_assert(alignof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard) == 0x000008, "Wrong alignment on BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard");
static_assert(sizeof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard) == 0x000078, "Wrong size on BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard");
static_assert(offsetof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard, EntryPoint) == 0x000000, "Member 'BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard, K2Node_Event_InFocusEvent_1) == 0x000030, "Member 'BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard::K2Node_Event_InFocusEvent_1' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard, K2Node_Event_InFocusEvent) == 0x000038, "Member 'BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard, K2Node_CustomEvent_Time) == 0x000040, "Member 'BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard::K2Node_CustomEvent_Time' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard, CallFunc_Add_FloatFloat_ReturnValue) == 0x000044, "Member 'BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000048, "Member 'BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard, K2Node_MakeStruct_SlateColor) == 0x000050, "Member 'BP_ItemCard_C_ExecuteUbergraph_BP_ItemCard::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function BP_ItemCard.BP_ItemCard_C.OnSetPreviewEventTimer
// 0x0004 (0x0004 - 0x0000)
struct BP_ItemCard_C_OnSetPreviewEventTimer final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemCard_C_OnSetPreviewEventTimer) == 0x000004, "Wrong alignment on BP_ItemCard_C_OnSetPreviewEventTimer");
static_assert(sizeof(BP_ItemCard_C_OnSetPreviewEventTimer) == 0x000004, "Wrong size on BP_ItemCard_C_OnSetPreviewEventTimer");
static_assert(offsetof(BP_ItemCard_C_OnSetPreviewEventTimer, Time) == 0x000000, "Member 'BP_ItemCard_C_OnSetPreviewEventTimer::Time' has a wrong offset!");

// Function BP_ItemCard.BP_ItemCard_C.OnRemovedFromFocusPath
// 0x0008 (0x0008 - 0x0000)
struct BP_ItemCard_C_OnRemovedFromFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_ItemCard_C_OnRemovedFromFocusPath) == 0x000004, "Wrong alignment on BP_ItemCard_C_OnRemovedFromFocusPath");
static_assert(sizeof(BP_ItemCard_C_OnRemovedFromFocusPath) == 0x000008, "Wrong size on BP_ItemCard_C_OnRemovedFromFocusPath");
static_assert(offsetof(BP_ItemCard_C_OnRemovedFromFocusPath, InFocusEvent) == 0x000000, "Member 'BP_ItemCard_C_OnRemovedFromFocusPath::InFocusEvent' has a wrong offset!");

// Function BP_ItemCard.BP_ItemCard_C.OnAddedToFocusPath
// 0x0008 (0x0008 - 0x0000)
struct BP_ItemCard_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_ItemCard_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on BP_ItemCard_C_OnAddedToFocusPath");
static_assert(sizeof(BP_ItemCard_C_OnAddedToFocusPath) == 0x000008, "Wrong size on BP_ItemCard_C_OnAddedToFocusPath");
static_assert(offsetof(BP_ItemCard_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'BP_ItemCard_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

// Function BP_ItemCard.BP_ItemCard_C.SetVariables
// 0x00A0 (0x00A0 - 0x0000)
struct BP_ItemCard_C_SetVariables final
{
public:
	class UTexture2D*                             IconThumbnail;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 AchievementCode;                                   // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         UnlockLevel;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentLevel;                                      // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFCTAchievementList                    AchievementList;                                   // 0x0020(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B[0x1];                                       // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x2];                                       // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0060(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAccelByteGIS*                          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFCTAchievement*                        CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemCard_C_SetVariables) == 0x000008, "Wrong alignment on BP_ItemCard_C_SetVariables");
static_assert(sizeof(BP_ItemCard_C_SetVariables) == 0x0000A0, "Wrong size on BP_ItemCard_C_SetVariables");
static_assert(offsetof(BP_ItemCard_C_SetVariables, IconThumbnail) == 0x000000, "Member 'BP_ItemCard_C_SetVariables::IconThumbnail' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, AchievementCode) == 0x000008, "Member 'BP_ItemCard_C_SetVariables::AchievementCode' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, UnlockLevel) == 0x000018, "Member 'BP_ItemCard_C_SetVariables::UnlockLevel' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CurrentLevel) == 0x00001C, "Member 'BP_ItemCard_C_SetVariables::CurrentLevel' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, AchievementList) == 0x000020, "Member 'BP_ItemCard_C_SetVariables::AchievementList' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000048, "Member 'BP_ItemCard_C_SetVariables::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, Temp_bool_True_if_break_was_hit_Variable) == 0x000049, "Member 'BP_ItemCard_C_SetVariables::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_Not_PreBool_ReturnValue) == 0x00004A, "Member 'BP_ItemCard_C_SetVariables::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'BP_ItemCard_C_SetVariables::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_ItemCard_C_SetVariables::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_Not_PreBool_ReturnValue_1) == 0x000051, "Member 'BP_ItemCard_C_SetVariables::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'BP_ItemCard_C_SetVariables::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_Greater_IntInt_ReturnValue) == 0x000058, "Member 'BP_ItemCard_C_SetVariables::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_Conv_IntToText_ReturnValue) == 0x000060, "Member 'BP_ItemCard_C_SetVariables::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, Temp_int_Loop_Counter_Variable) == 0x000078, "Member 'BP_ItemCard_C_SetVariables::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_Add_IntInt_ReturnValue_1) == 0x00007C, "Member 'BP_ItemCard_C_SetVariables::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000080, "Member 'BP_ItemCard_C_SetVariables::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'BP_ItemCard_C_SetVariables::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_Array_Get_Item) == 0x000090, "Member 'BP_ItemCard_C_SetVariables::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'BP_ItemCard_C_SetVariables::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_BooleanAND_ReturnValue) == 0x000099, "Member 'BP_ItemCard_C_SetVariables::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetVariables, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x00009A, "Member 'BP_ItemCard_C_SetVariables::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function BP_ItemCard.BP_ItemCard_C.GetTooltip
// 0x0020 (0x0020 - 0x0000)
struct BP_ItemCard_C_GetTooltip final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 AchievementString;                                 // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Equipped;                                          // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemCard_C_GetTooltip) == 0x000008, "Wrong alignment on BP_ItemCard_C_GetTooltip");
static_assert(sizeof(BP_ItemCard_C_GetTooltip) == 0x000020, "Wrong size on BP_ItemCard_C_GetTooltip");
static_assert(offsetof(BP_ItemCard_C_GetTooltip, ReturnValue) == 0x000000, "Member 'BP_ItemCard_C_GetTooltip::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_GetTooltip, AchievementString) == 0x000008, "Member 'BP_ItemCard_C_GetTooltip::AchievementString' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_GetTooltip, Equipped) == 0x000018, "Member 'BP_ItemCard_C_GetTooltip::Equipped' has a wrong offset!");

// Function BP_ItemCard.BP_ItemCard_C.CreateTooltipWidget
// 0x0020 (0x0020 - 0x0000)
struct BP_ItemCard_C_CreateTooltipWidget final
{
public:
	class FString                                 InAchievementString;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InEquipped;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_CustomizationSlotTooltip_C*         ToolTip;                                           // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemCard_C_CreateTooltipWidget) == 0x000008, "Wrong alignment on BP_ItemCard_C_CreateTooltipWidget");
static_assert(sizeof(BP_ItemCard_C_CreateTooltipWidget) == 0x000020, "Wrong size on BP_ItemCard_C_CreateTooltipWidget");
static_assert(offsetof(BP_ItemCard_C_CreateTooltipWidget, InAchievementString) == 0x000000, "Member 'BP_ItemCard_C_CreateTooltipWidget::InAchievementString' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_CreateTooltipWidget, InEquipped) == 0x000010, "Member 'BP_ItemCard_C_CreateTooltipWidget::InEquipped' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_CreateTooltipWidget, ToolTip) == 0x000018, "Member 'BP_ItemCard_C_CreateTooltipWidget::ToolTip' has a wrong offset!");

// Function BP_ItemCard.BP_ItemCard_C.SetAbsolutePosition
// 0x0010 (0x0010 - 0x0000)
struct BP_ItemCard_C_SetAbsolutePosition final
{
public:
	class UWidget*                                ParentWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetWidgetLocation_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemCard_C_SetAbsolutePosition) == 0x000008, "Wrong alignment on BP_ItemCard_C_SetAbsolutePosition");
static_assert(sizeof(BP_ItemCard_C_SetAbsolutePosition) == 0x000010, "Wrong size on BP_ItemCard_C_SetAbsolutePosition");
static_assert(offsetof(BP_ItemCard_C_SetAbsolutePosition, ParentWidget) == 0x000000, "Member 'BP_ItemCard_C_SetAbsolutePosition::ParentWidget' has a wrong offset!");
static_assert(offsetof(BP_ItemCard_C_SetAbsolutePosition, CallFunc_GetWidgetLocation_ReturnValue) == 0x000008, "Member 'BP_ItemCard_C_SetAbsolutePosition::CallFunc_GetWidgetLocation_ReturnValue' has a wrong offset!");

}

