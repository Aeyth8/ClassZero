#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomizationCategory

#include "Basic.hpp"

#include "SCT_structs.hpp"
#include "SCT_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_CustomizationCategory.BP_CustomizationCategory_C
// 0x0198 (0x0458 - 0x02C0)
class UBP_CustomizationCategory_C final : public UCustomizationRowUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                             HeaderName;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MoveLeft;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MoveRight;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentItemIndex;                                  // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedItemPadding;                               // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           MovementHandle;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdateSelectionUI;                               // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBindSlots_ForUpdateOverTime;                     // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetOpacityOverTime;                              // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                              NextTranslation;                                   // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerCustomizationItem>       Items;                                             // 0x0328(0x0010)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnSelectionComplete;                               // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         InterpSpeed_0;                                     // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34C[0x4];                                      // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnUpdateSlotUIOverTimej;                           // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEndSlotUIUpdateImmediately;                      // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_CustomizationMaterialsContainer_C*  OptionsCustomization;                              // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCustomizationType                      Category;                                          // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ClothMask;                                         // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerCustomizationItem               CurrentCustomizationItem;                          // 0x0388(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnUpdateClothingMask;                              // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCurrentIndexUpdated;                             // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EPlayerCustomizationGender                    Gender;                                            // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnUpdateSelectionUI__DelegateSignature();
	void OnBindSlots_ForUpdateOverTime__DelegateSignature();
	void OnSetOpacityOverTime__DelegateSignature();
	void OnSelectionComplete__DelegateSignature();
	void OnUpdateSlotUIOverTimej__DelegateSignature();
	void OnEndSlotUIUpdateImmediately__DelegateSignature();
	void OnUpdateClothingMask__DelegateSignature();
	void OnCurrentIndexUpdated__DelegateSignature(int32 NewIndex);
	void ExecuteUbergraph_BP_CustomizationCategory(int32 EntryPoint);
	void OnUpdateCurrentAndPreviousSlotUIImmediate_CB();
	void OnFadeInRightSlotImmediate_CB();
	void OnFadeInLeftSlotImmediate_CB();
	void OnFadeoutRightmostSlotImmediate_CB();
	void OnFadeoutLeftmostSlotImmediate_CB();
	void OnFadeInRightSlot_CB();
	void OnFadeinLeftSlot_UI();
	void OnFadeoutRightmostSlot_CB();
	void OnFadeoutLeftmostSlot_CB();
	void OnUpdateCurrentAndPreviousSlotUIOverTime_CB();
	void OnBindSlots_ForUpdate_EVENT();
	void BndEvt__MoveRight_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MoveLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnUpdateSelectionUI_Event();
	void Construct();
	void Init(class UBP_CustomizationMaterialsContainer_C* OptionsContainer, struct FCloudCustomizationSetting& Setting, EPlayerCustomizationGender InGender, EPlayerCustomizationType CustomizationCategory, class UMeshComponent* CustomizationMesh_0, bool RowEnabled);
	void Set_Slot_Opacity_Over_Time_At(int32 Index_0, float TargetAlpha);
	void Update_Slot_UI_Immediately_At(int32 Index_0, float TargetScale, float TargetOpacity, float TargetPadding);
	void SetDefaultBoxSlotAlignment(class UObject* SlotObject);
	void Update_Clothing(class UCustomizationSlotUserWidget* Item);
	int32 GetCustomizationListCount();
	void SetButtonsEnabled(bool bIsEnabled_0);
	void GetTranslationRelativeToSelected(struct FVector2D* Output_Get);
	void GenerateStyleOptions();
	void UpdateNeighborSlot(int32 Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CustomizationCategory_C">();
	}
	static class UBP_CustomizationCategory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CustomizationCategory_C>();
	}
};
static_assert(alignof(UBP_CustomizationCategory_C) == 0x000008, "Wrong alignment on UBP_CustomizationCategory_C");
static_assert(sizeof(UBP_CustomizationCategory_C) == 0x000458, "Wrong size on UBP_CustomizationCategory_C");
static_assert(offsetof(UBP_CustomizationCategory_C, UberGraphFrame) == 0x0002C0, "Member 'UBP_CustomizationCategory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, HeaderName) == 0x0002C8, "Member 'UBP_CustomizationCategory_C::HeaderName' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, MoveLeft) == 0x0002D0, "Member 'UBP_CustomizationCategory_C::MoveLeft' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, MoveRight) == 0x0002D8, "Member 'UBP_CustomizationCategory_C::MoveRight' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, CurrentItemIndex) == 0x0002E0, "Member 'UBP_CustomizationCategory_C::CurrentItemIndex' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, SelectedItemPadding) == 0x0002E4, "Member 'UBP_CustomizationCategory_C::SelectedItemPadding' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, MovementHandle) == 0x0002E8, "Member 'UBP_CustomizationCategory_C::MovementHandle' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, OnUpdateSelectionUI) == 0x0002F0, "Member 'UBP_CustomizationCategory_C::OnUpdateSelectionUI' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, OnBindSlots_ForUpdateOverTime) == 0x000300, "Member 'UBP_CustomizationCategory_C::OnBindSlots_ForUpdateOverTime' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, OnSetOpacityOverTime) == 0x000310, "Member 'UBP_CustomizationCategory_C::OnSetOpacityOverTime' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, NextTranslation) == 0x000320, "Member 'UBP_CustomizationCategory_C::NextTranslation' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, Items) == 0x000328, "Member 'UBP_CustomizationCategory_C::Items' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, OnSelectionComplete) == 0x000338, "Member 'UBP_CustomizationCategory_C::OnSelectionComplete' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, InterpSpeed_0) == 0x000348, "Member 'UBP_CustomizationCategory_C::InterpSpeed_0' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, OnUpdateSlotUIOverTimej) == 0x000350, "Member 'UBP_CustomizationCategory_C::OnUpdateSlotUIOverTimej' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, OnEndSlotUIUpdateImmediately) == 0x000360, "Member 'UBP_CustomizationCategory_C::OnEndSlotUIUpdateImmediately' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, OptionsCustomization) == 0x000370, "Member 'UBP_CustomizationCategory_C::OptionsCustomization' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, Category) == 0x000378, "Member 'UBP_CustomizationCategory_C::Category' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, ClothMask) == 0x000380, "Member 'UBP_CustomizationCategory_C::ClothMask' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, CurrentCustomizationItem) == 0x000388, "Member 'UBP_CustomizationCategory_C::CurrentCustomizationItem' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, OnUpdateClothingMask) == 0x000430, "Member 'UBP_CustomizationCategory_C::OnUpdateClothingMask' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, OnCurrentIndexUpdated) == 0x000440, "Member 'UBP_CustomizationCategory_C::OnCurrentIndexUpdated' has a wrong offset!");
static_assert(offsetof(UBP_CustomizationCategory_C, Gender) == 0x000450, "Member 'UBP_CustomizationCategory_C::Gender' has a wrong offset!");

}
