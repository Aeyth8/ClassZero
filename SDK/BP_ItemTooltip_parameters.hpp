#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_ItemTooltip.BP_ItemTooltip_C.Set Variables
// 0x0048 (0x0048 - 0x0000)
struct BP_ItemTooltip_C_Set_Variables final
{
public:
	class UBP_ItemCard_C*                         ItemCard;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InEquipped;                                        // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AchievementString;                                 // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_C_Set_Variables) == 0x000008, "Wrong alignment on BP_ItemTooltip_C_Set_Variables");
static_assert(sizeof(BP_ItemTooltip_C_Set_Variables) == 0x000048, "Wrong size on BP_ItemTooltip_C_Set_Variables");
static_assert(offsetof(BP_ItemTooltip_C_Set_Variables, ItemCard) == 0x000000, "Member 'BP_ItemTooltip_C_Set_Variables::ItemCard' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_Set_Variables, InEquipped) == 0x000008, "Member 'BP_ItemTooltip_C_Set_Variables::InEquipped' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_Set_Variables, AchievementString) == 0x000010, "Member 'BP_ItemTooltip_C_Set_Variables::AchievementString' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_Set_Variables, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000020, "Member 'BP_ItemTooltip_C_Set_Variables::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_Set_Variables, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BP_ItemTooltip_C_Set_Variables::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_Set_Variables, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'BP_ItemTooltip_C_Set_Variables::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_Set_Variables, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x000040, "Member 'BP_ItemTooltip_C_Set_Variables::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_Set_Variables, CallFunc_GetVisibility_ReturnValue) == 0x000041, "Member 'BP_ItemTooltip_C_Set_Variables::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_Set_Variables, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000042, "Member 'BP_ItemTooltip_C_Set_Variables::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_ItemTooltip.BP_ItemTooltip_C.SetCharacterVariables
// 0x0020 (0x0020 - 0x0000)
struct BP_ItemTooltip_C_SetCharacterVariables final
{
public:
	class UBP_ItemCard_C*                         ItemCard;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CategoryAsByte;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_CustomizationItemCard_C*            K2Node_DynamicCast_AsBP_Customization_Item_Card;   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_C_SetCharacterVariables) == 0x000008, "Wrong alignment on BP_ItemTooltip_C_SetCharacterVariables");
static_assert(sizeof(BP_ItemTooltip_C_SetCharacterVariables) == 0x000020, "Wrong size on BP_ItemTooltip_C_SetCharacterVariables");
static_assert(offsetof(BP_ItemTooltip_C_SetCharacterVariables, ItemCard) == 0x000000, "Member 'BP_ItemTooltip_C_SetCharacterVariables::ItemCard' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetCharacterVariables, CategoryAsByte) == 0x000008, "Member 'BP_ItemTooltip_C_SetCharacterVariables::CategoryAsByte' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetCharacterVariables, K2Node_DynamicCast_AsBP_Customization_Item_Card) == 0x000010, "Member 'BP_ItemTooltip_C_SetCharacterVariables::K2Node_DynamicCast_AsBP_Customization_Item_Card' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetCharacterVariables, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ItemTooltip_C_SetCharacterVariables::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetCharacterVariables, CallFunc_GetValidValue_ReturnValue) == 0x000019, "Member 'BP_ItemTooltip_C_SetCharacterVariables::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetCharacterVariables, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'BP_ItemTooltip_C_SetCharacterVariables::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_ItemTooltip.BP_ItemTooltip_C.SetVruumbaVariables
// 0x0020 (0x0020 - 0x0000)
struct BP_ItemTooltip_C_SetVruumbaVariables final
{
public:
	class UBP_ItemCard_C*                         ItemCard;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CategoryAsByte;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_VruumbaCustomizationItemCard_C*     K2Node_DynamicCast_AsBP_Vruumba_Customization_Item_Card; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_C_SetVruumbaVariables) == 0x000008, "Wrong alignment on BP_ItemTooltip_C_SetVruumbaVariables");
static_assert(sizeof(BP_ItemTooltip_C_SetVruumbaVariables) == 0x000020, "Wrong size on BP_ItemTooltip_C_SetVruumbaVariables");
static_assert(offsetof(BP_ItemTooltip_C_SetVruumbaVariables, ItemCard) == 0x000000, "Member 'BP_ItemTooltip_C_SetVruumbaVariables::ItemCard' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetVruumbaVariables, CategoryAsByte) == 0x000008, "Member 'BP_ItemTooltip_C_SetVruumbaVariables::CategoryAsByte' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetVruumbaVariables, K2Node_DynamicCast_AsBP_Vruumba_Customization_Item_Card) == 0x000010, "Member 'BP_ItemTooltip_C_SetVruumbaVariables::K2Node_DynamicCast_AsBP_Vruumba_Customization_Item_Card' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetVruumbaVariables, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ItemTooltip_C_SetVruumbaVariables::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetVruumbaVariables, CallFunc_GetValidValue_ReturnValue) == 0x000019, "Member 'BP_ItemTooltip_C_SetVruumbaVariables::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetVruumbaVariables, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'BP_ItemTooltip_C_SetVruumbaVariables::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_ItemTooltip.BP_ItemTooltip_C.SetTexture
// 0x0018 (0x0018 - 0x0000)
struct BP_ItemTooltip_C_SetTexture final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2DDynamic*                      TextureDynamic;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_C_SetTexture) == 0x000008, "Wrong alignment on BP_ItemTooltip_C_SetTexture");
static_assert(sizeof(BP_ItemTooltip_C_SetTexture) == 0x000018, "Wrong size on BP_ItemTooltip_C_SetTexture");
static_assert(offsetof(BP_ItemTooltip_C_SetTexture, Texture) == 0x000000, "Member 'BP_ItemTooltip_C_SetTexture::Texture' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetTexture, TextureDynamic) == 0x000008, "Member 'BP_ItemTooltip_C_SetTexture::TextureDynamic' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetTexture, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_ItemTooltip_C_SetTexture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_C_SetTexture, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'BP_ItemTooltip_C_SetTexture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_ItemTooltip.BP_ItemTooltip_C.Set QualityText
// 0x0001 (0x0001 - 0x0000)
struct BP_ItemTooltip_C_Set_QualityText final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_C_Set_QualityText) == 0x000001, "Wrong alignment on BP_ItemTooltip_C_Set_QualityText");
static_assert(sizeof(BP_ItemTooltip_C_Set_QualityText) == 0x000001, "Wrong size on BP_ItemTooltip_C_Set_QualityText");
static_assert(offsetof(BP_ItemTooltip_C_Set_QualityText, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'BP_ItemTooltip_C_Set_QualityText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

