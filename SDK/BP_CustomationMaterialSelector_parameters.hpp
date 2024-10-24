#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomationMaterialSelector

#include "Basic.hpp"

#include "SCT_structs.hpp"


namespace SDK::Params
{

// Function BP_CustomationMaterialSelector.BP_CustomationMaterialSelector_C.OnUpdateMaterial__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct BP_CustomationMaterialSelector_C_OnUpdateMaterial__DelegateSignature final
{
public:
	int32                                         OptionIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomationMaterialSelector_C_OnUpdateMaterial__DelegateSignature) == 0x000004, "Wrong alignment on BP_CustomationMaterialSelector_C_OnUpdateMaterial__DelegateSignature");
static_assert(sizeof(BP_CustomationMaterialSelector_C_OnUpdateMaterial__DelegateSignature) == 0x000004, "Wrong size on BP_CustomationMaterialSelector_C_OnUpdateMaterial__DelegateSignature");
static_assert(offsetof(BP_CustomationMaterialSelector_C_OnUpdateMaterial__DelegateSignature, OptionIndex) == 0x000000, "Member 'BP_CustomationMaterialSelector_C_OnUpdateMaterial__DelegateSignature::OptionIndex' has a wrong offset!");

// Function BP_CustomationMaterialSelector.BP_CustomationMaterialSelector_C.ExecuteUbergraph_BP_CustomationMaterialSelector
// 0x0060 (0x0060 - 0x0000)
struct BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAccelByteGIS*                          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InMaterialIndex;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstance*>              K2Node_CustomEvent_InOptions;                      // 0x0018(0x0010)(ConstParm, ReferenceParm)
	class UPrimitiveComponent*                    K2Node_CustomEvent_InClothingComponent;            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCustomizationGender                    K2Node_CustomEvent_InGender;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCustomizationType                      K2Node_CustomEvent_InCustomizationCategory;        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_OptionIndex;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAccelByteGIS*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GenerateOptions_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector) == 0x000008, "Wrong alignment on BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector");
static_assert(sizeof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector) == 0x000060, "Wrong size on BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, EntryPoint) == 0x000000, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, K2Node_CustomEvent_InMaterialIndex) == 0x000010, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::K2Node_CustomEvent_InMaterialIndex' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, K2Node_CustomEvent_InOptions) == 0x000018, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::K2Node_CustomEvent_InOptions' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, K2Node_CustomEvent_InClothingComponent) == 0x000028, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::K2Node_CustomEvent_InClothingComponent' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, K2Node_CustomEvent_InGender) == 0x000030, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::K2Node_CustomEvent_InGender' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, K2Node_CustomEvent_InCustomizationCategory) == 0x000031, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::K2Node_CustomEvent_InCustomizationCategory' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, K2Node_CustomEvent_OptionIndex) == 0x000034, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::K2Node_CustomEvent_OptionIndex' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, K2Node_SwitchEnum_CmpSuccess) == 0x000038, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000040, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, CallFunc_GenerateOptions_ReturnValue) == 0x000048, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::CallFunc_GenerateOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector, CallFunc_Conv_IntToString_ReturnValue) == 0x000050, "Member 'BP_CustomationMaterialSelector_C_ExecuteUbergraph_BP_CustomationMaterialSelector::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");

// Function BP_CustomationMaterialSelector.BP_CustomationMaterialSelector_C.OnUpdateMaterial_Event
// 0x0004 (0x0004 - 0x0000)
struct BP_CustomationMaterialSelector_C_OnUpdateMaterial_Event final
{
public:
	int32                                         OptionIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomationMaterialSelector_C_OnUpdateMaterial_Event) == 0x000004, "Wrong alignment on BP_CustomationMaterialSelector_C_OnUpdateMaterial_Event");
static_assert(sizeof(BP_CustomationMaterialSelector_C_OnUpdateMaterial_Event) == 0x000004, "Wrong size on BP_CustomationMaterialSelector_C_OnUpdateMaterial_Event");
static_assert(offsetof(BP_CustomationMaterialSelector_C_OnUpdateMaterial_Event, OptionIndex) == 0x000000, "Member 'BP_CustomationMaterialSelector_C_OnUpdateMaterial_Event::OptionIndex' has a wrong offset!");

// Function BP_CustomationMaterialSelector.BP_CustomationMaterialSelector_C.OnGenerateOptions
// 0x0028 (0x0028 - 0x0000)
struct BP_CustomationMaterialSelector_C_OnGenerateOptions final
{
public:
	int32                                         InMaterialIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstance*>              InOptions;                                         // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UPrimitiveComponent*                    InClothingComponent;                               // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCustomizationGender                    InGender;                                          // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCustomizationType                      InCustomizationCategory;                           // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CustomationMaterialSelector_C_OnGenerateOptions) == 0x000008, "Wrong alignment on BP_CustomationMaterialSelector_C_OnGenerateOptions");
static_assert(sizeof(BP_CustomationMaterialSelector_C_OnGenerateOptions) == 0x000028, "Wrong size on BP_CustomationMaterialSelector_C_OnGenerateOptions");
static_assert(offsetof(BP_CustomationMaterialSelector_C_OnGenerateOptions, InMaterialIndex) == 0x000000, "Member 'BP_CustomationMaterialSelector_C_OnGenerateOptions::InMaterialIndex' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_OnGenerateOptions, InOptions) == 0x000008, "Member 'BP_CustomationMaterialSelector_C_OnGenerateOptions::InOptions' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_OnGenerateOptions, InClothingComponent) == 0x000018, "Member 'BP_CustomationMaterialSelector_C_OnGenerateOptions::InClothingComponent' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_OnGenerateOptions, InGender) == 0x000020, "Member 'BP_CustomationMaterialSelector_C_OnGenerateOptions::InGender' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_OnGenerateOptions, InCustomizationCategory) == 0x000021, "Member 'BP_CustomationMaterialSelector_C_OnGenerateOptions::InCustomizationCategory' has a wrong offset!");

// Function BP_CustomationMaterialSelector.BP_CustomationMaterialSelector_C.Initialize
// 0x0038 (0x0038 - 0x0000)
struct BP_CustomationMaterialSelector_C_Initialize final
{
public:
	class FText                                   InSelectorName;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         InOptionIndex;                                     // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCustomizationGender                    InGender;                                          // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CustomizationMaterialSlot_C*        K2Node_DynamicCast_AsBP_Customization_Material_Slot; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CustomationMaterialSelector_C_Initialize) == 0x000008, "Wrong alignment on BP_CustomationMaterialSelector_C_Initialize");
static_assert(sizeof(BP_CustomationMaterialSelector_C_Initialize) == 0x000038, "Wrong size on BP_CustomationMaterialSelector_C_Initialize");
static_assert(offsetof(BP_CustomationMaterialSelector_C_Initialize, InSelectorName) == 0x000000, "Member 'BP_CustomationMaterialSelector_C_Initialize::InSelectorName' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_Initialize, InOptionIndex) == 0x000018, "Member 'BP_CustomationMaterialSelector_C_Initialize::InOptionIndex' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_Initialize, InGender) == 0x00001C, "Member 'BP_CustomationMaterialSelector_C_Initialize::InGender' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_Initialize, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'BP_CustomationMaterialSelector_C_Initialize::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_Initialize, K2Node_DynamicCast_AsBP_Customization_Material_Slot) == 0x000028, "Member 'BP_CustomationMaterialSelector_C_Initialize::K2Node_DynamicCast_AsBP_Customization_Material_Slot' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_Initialize, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_CustomationMaterialSelector_C_Initialize::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_CustomationMaterialSelector.BP_CustomationMaterialSelector_C.Set Temp Customization Material
// 0x0054 (0x0054 - 0x0000)
struct BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material final
{
public:
	struct FCloudCustomizationPayload             CustomizationPayload;                              // 0x0000(0x0044)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FCloudCustomizationSetting             TempCustomizationSetting;                          // 0x0044(0x000C)(Edit, BlueprintVisible, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material) == 0x000004, "Wrong alignment on BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material");
static_assert(sizeof(BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material) == 0x000054, "Wrong size on BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material");
static_assert(offsetof(BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material, CustomizationPayload) == 0x000000, "Member 'BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material::CustomizationPayload' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material, TempCustomizationSetting) == 0x000044, "Member 'BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material::TempCustomizationSetting' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material, K2Node_SwitchEnum_CmpSuccess) == 0x000050, "Member 'BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000051, "Member 'BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material, K2Node_SwitchEnum_CmpSuccess_1) == 0x000052, "Member 'BP_CustomationMaterialSelector_C_Set_Temp_Customization_Material::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

}

