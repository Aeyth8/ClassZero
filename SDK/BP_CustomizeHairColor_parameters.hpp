#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomizeHairColor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SCT_structs.hpp"


namespace SDK::Params
{

// Function BP_CustomizeHairColor.BP_CustomizeHairColor_C.OnUpdateHairColor__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_CustomizeHairColor_C_OnUpdateHairColor__DelegateSignature final
{
public:
	struct FLinearColor                           HairColor;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizeHairColor_C_OnUpdateHairColor__DelegateSignature) == 0x000004, "Wrong alignment on BP_CustomizeHairColor_C_OnUpdateHairColor__DelegateSignature");
static_assert(sizeof(BP_CustomizeHairColor_C_OnUpdateHairColor__DelegateSignature) == 0x000010, "Wrong size on BP_CustomizeHairColor_C_OnUpdateHairColor__DelegateSignature");
static_assert(offsetof(BP_CustomizeHairColor_C_OnUpdateHairColor__DelegateSignature, HairColor) == 0x000000, "Member 'BP_CustomizeHairColor_C_OnUpdateHairColor__DelegateSignature::HairColor' has a wrong offset!");

// Function BP_CustomizeHairColor.BP_CustomizeHairColor_C.ExecuteUbergraph_BP_CustomizeHairColor
// 0x0048 (0x0048 - 0x0000)
struct BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue_1;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_1;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue_2;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_2;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAccelByteGIS*                          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAccelByteGIS*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor) == 0x000008, "Wrong alignment on BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor");
static_assert(sizeof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor) == 0x000048, "Wrong size on BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, EntryPoint) == 0x000000, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, CallFunc_GetValue_ReturnValue) == 0x000004, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, CallFunc_GetValue_ReturnValue_1) == 0x000008, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::CallFunc_GetValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, K2Node_ComponentBoundEvent_Value_1) == 0x00000C, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::K2Node_ComponentBoundEvent_Value_1' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, CallFunc_GetValue_ReturnValue_2) == 0x000010, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::CallFunc_GetValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, K2Node_ComponentBoundEvent_Value) == 0x000014, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, CallFunc_MakeColor_ReturnValue) == 0x000018, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, CallFunc_Conv_LinearColorToColor_ReturnValue) == 0x000028, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::CallFunc_Conv_LinearColorToColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, K2Node_ComponentBoundEvent_Value_2) == 0x00002C, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::K2Node_ComponentBoundEvent_Value_2' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000038, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000040, "Member 'BP_CustomizeHairColor_C_ExecuteUbergraph_BP_CustomizeHairColor::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");

// Function BP_CustomizeHairColor.BP_CustomizeHairColor_C.BndEvt__RedSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_CustomizeHairColor_C_BndEvt__RedSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizeHairColor_C_BndEvt__RedSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on BP_CustomizeHairColor_C_BndEvt__RedSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(BP_CustomizeHairColor_C_BndEvt__RedSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on BP_CustomizeHairColor_C_BndEvt__RedSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(BP_CustomizeHairColor_C_BndEvt__RedSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'BP_CustomizeHairColor_C_BndEvt__RedSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function BP_CustomizeHairColor.BP_CustomizeHairColor_C.BndEvt__GreenSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_CustomizeHairColor_C_BndEvt__GreenSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizeHairColor_C_BndEvt__GreenSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on BP_CustomizeHairColor_C_BndEvt__GreenSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(BP_CustomizeHairColor_C_BndEvt__GreenSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on BP_CustomizeHairColor_C_BndEvt__GreenSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(BP_CustomizeHairColor_C_BndEvt__GreenSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'BP_CustomizeHairColor_C_BndEvt__GreenSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function BP_CustomizeHairColor.BP_CustomizeHairColor_C.BndEvt__BlueSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_CustomizeHairColor_C_BndEvt__BlueSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizeHairColor_C_BndEvt__BlueSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on BP_CustomizeHairColor_C_BndEvt__BlueSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(BP_CustomizeHairColor_C_BndEvt__BlueSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on BP_CustomizeHairColor_C_BndEvt__BlueSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(BP_CustomizeHairColor_C_BndEvt__BlueSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'BP_CustomizeHairColor_C_BndEvt__BlueSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function BP_CustomizeHairColor.BP_CustomizeHairColor_C.Initialize
// 0x0078 (0x0078 - 0x0000)
struct BP_CustomizeHairColor_C_Initialize final
{
public:
	class ACharacterPreviewerSCTBP_C*             CharacterPreviewer;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCustomizationGender                    InGender;                                          // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FLinearColor& HairColor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_GetValue_ReturnValue_1;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue_2;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue_3;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue_4;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue_5;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizeHairColor_C_Initialize) == 0x000008, "Wrong alignment on BP_CustomizeHairColor_C_Initialize");
static_assert(sizeof(BP_CustomizeHairColor_C_Initialize) == 0x000078, "Wrong size on BP_CustomizeHairColor_C_Initialize");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, CharacterPreviewer) == 0x000000, "Member 'BP_CustomizeHairColor_C_Initialize::CharacterPreviewer' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, Color) == 0x000008, "Member 'BP_CustomizeHairColor_C_Initialize::Color' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, InGender) == 0x000018, "Member 'BP_CustomizeHairColor_C_Initialize::InGender' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, CallFunc_GetValue_ReturnValue) == 0x00001C, "Member 'BP_CustomizeHairColor_C_Initialize::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, CallFunc_BreakColor_R) == 0x000020, "Member 'BP_CustomizeHairColor_C_Initialize::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, CallFunc_BreakColor_G) == 0x000024, "Member 'BP_CustomizeHairColor_C_Initialize::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, CallFunc_BreakColor_B) == 0x000028, "Member 'BP_CustomizeHairColor_C_Initialize::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, CallFunc_BreakColor_A) == 0x00002C, "Member 'BP_CustomizeHairColor_C_Initialize::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_CustomizeHairColor_C_Initialize::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, CallFunc_GetValue_ReturnValue_1) == 0x000040, "Member 'BP_CustomizeHairColor_C_Initialize::CallFunc_GetValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, CallFunc_GetValue_ReturnValue_2) == 0x000044, "Member 'BP_CustomizeHairColor_C_Initialize::CallFunc_GetValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, CallFunc_GetValue_ReturnValue_3) == 0x000048, "Member 'BP_CustomizeHairColor_C_Initialize::CallFunc_GetValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, K2Node_MakeStruct_LinearColor) == 0x00004C, "Member 'BP_CustomizeHairColor_C_Initialize::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, CallFunc_GetValue_ReturnValue_4) == 0x00005C, "Member 'BP_CustomizeHairColor_C_Initialize::CallFunc_GetValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, CallFunc_GetValue_ReturnValue_5) == 0x000060, "Member 'BP_CustomizeHairColor_C_Initialize::CallFunc_GetValue_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_Initialize, K2Node_MakeStruct_LinearColor_1) == 0x000064, "Member 'BP_CustomizeHairColor_C_Initialize::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");

// Function BP_CustomizeHairColor.BP_CustomizeHairColor_C.UpdateUIRow
// 0x0048 (0x0048 - 0x0000)
struct BP_CustomizeHairColor_C_UpdateUIRow final
{
public:
	class USlider*                                ColorSlider;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             ColorText;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ColorValue;                                        // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VerifiedColorValue;                                // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0028(0x0018)()
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomizeHairColor_C_UpdateUIRow) == 0x000008, "Wrong alignment on BP_CustomizeHairColor_C_UpdateUIRow");
static_assert(sizeof(BP_CustomizeHairColor_C_UpdateUIRow) == 0x000048, "Wrong size on BP_CustomizeHairColor_C_UpdateUIRow");
static_assert(offsetof(BP_CustomizeHairColor_C_UpdateUIRow, ColorSlider) == 0x000000, "Member 'BP_CustomizeHairColor_C_UpdateUIRow::ColorSlider' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_UpdateUIRow, ColorText) == 0x000008, "Member 'BP_CustomizeHairColor_C_UpdateUIRow::ColorText' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_UpdateUIRow, ColorValue) == 0x000010, "Member 'BP_CustomizeHairColor_C_UpdateUIRow::ColorValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_UpdateUIRow, VerifiedColorValue) == 0x000014, "Member 'BP_CustomizeHairColor_C_UpdateUIRow::VerifiedColorValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_UpdateUIRow, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_CustomizeHairColor_C_UpdateUIRow::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_UpdateUIRow, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_CustomizeHairColor_C_UpdateUIRow::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_UpdateUIRow, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000020, "Member 'BP_CustomizeHairColor_C_UpdateUIRow::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_UpdateUIRow, CallFunc_Conv_FloatToText_ReturnValue) == 0x000028, "Member 'BP_CustomizeHairColor_C_UpdateUIRow::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomizeHairColor_C_UpdateUIRow, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000040, "Member 'BP_CustomizeHairColor_C_UpdateUIRow::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

}

