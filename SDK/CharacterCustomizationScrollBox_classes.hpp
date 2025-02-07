#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterCustomizationScrollBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_structs.hpp"
#include "SCT_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterCustomizationScrollBox.CharacterCustomizationScrollBox_C
// 0x0358 (0x06D0 - 0x0378)
class UCharacterCustomizationScrollBox_C final : public UCustomizationScrollBoxUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                AccessoryButton;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AccessoryImage;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                AppearanceButton;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AppearanceImage;                                   // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             AppearanceScrollbox;                               // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BodyButton;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_CustomizationCategoryButton_C*      ButtonAccessory;                                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_CustomizationCategoryButton_C*      ButtonAppearance;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_CustomizationCategoryButton_C*      ButtonBody;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_CustomizationCategoryButton_C*      ButtonEyewear;                                     // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_CustomizationCategoryButton_C*      ButtonFacialHair;                                  // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_CustomizationCategoryButton_C*      ButtonFeet;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_CustomizationCategoryButton_C*      ButtonHeadwear;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_CustomizationCategoryButton_C*      ButtonLegs;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ButtonsBox;                                        // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuListBanner_C*                   ClassicBanner;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuListBanner_C*                   ElegantBanner;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuListBanner_C*                   ExtravagentBanner;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuListBanner_C*                   EyeColorBanner_1;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                EyewearButton;                                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EyewearImage;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                FacialHairButton;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FacialHairImage;                                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuListBanner_C*                   FacialPresetBanner;                                // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                FeetButton;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                FeminineButton;                                    // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               FeminineOverlay;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FeminineText;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FootwearImage;                                     // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuListBanner_C*                   HairColorBanner;                                   // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                HeadButton;                                        // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeaderText;                                        // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeadwearImage;                                     // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_149;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_446;                                         // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                LegsButton;                                        // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LowerBodyImage;                                    // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuListBanner_C*                   LuxuriousBanner;                                   // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MasculineButton;                                   // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MasculineOverlay;                                  // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MasculineText;                                     // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MenuSwitcher;                                      // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MenuListBanner_C*                   SkintoneBanner;                                    // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UpperBodyImage;                                    // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             WardrobeScrollbox;                                 // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_CustomizationSettings_C*            CustomizationConfig;                               // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ACharacterPreviewerSCTBP_C*             CharacterPreviewer;                                // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULocalUserRecords_C*                    SaveSlot;                                          // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoMaskLegs;                                        // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_501[0x7];                                      // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LegsRowName;                                       // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             UpdateHeadItem;                                    // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             UpdateBodyItem;                                    // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             UpdateFeetItem;                                    // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             UpdateLegsItem;                                    // 0x0548(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             UpdateEyewearItem;                                 // 0x0558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkComponent*                           Ak;                                                // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeCategory;                                  // 0x0570(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFCTAchievementList                    AchievementsList;                                  // 0x0580(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFCTPublicPlayerData                   CloudSave;                                         // 0x05A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           AppearanceColor;                                   // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HeadwearColor;                                     // 0x05E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           UpperBodyColor;                                    // 0x05F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LoweBodyColor;                                     // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FootwearColor;                                     // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSwapGender;                                      // 0x0620(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMadeChanges;                                     // 0x0630(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                           SelectedColor;                                     // 0x0640(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ClassicColor;                                      // 0x0650(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ElegantColor;                                      // 0x0660(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LuxuriousColor;                                    // 0x0670(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ExtravagentColor;                                  // 0x0680(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             UpdateAccessoryItem;                               // 0x0690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             UpdateFacialHairItem;                              // 0x06A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnItemFocused;                                     // 0x06B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_ItemTooltip_C*                      ItemTooltip;                                       // 0x06C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x06C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateHeadItem__DelegateSignature(const class FString& RowName);
	void UpdateFeetItem__DelegateSignature(const class FString& RowName);
	void UpdateBodyItem__DelegateSignature(const class FString& RowName);
	void UpdateLegsItem__DelegateSignature(const class FString& RowName);
	void OnChangeCategory__DelegateSignature(EPlayerCustomizationType Category);
	void OnSwapGender__DelegateSignature(EPlayerCustomizationGender Gender_0);
	void OnMadeChanges__DelegateSignature();
	void UpdateEyewearItem__DelegateSignature(const class FString& RowName);
	void UpdateAccessoryItem__DelegateSignature(const class FString& RowName);
	void UpdateFacialHairItem__DelegateSignature(const class FString& RowName);
	void OnItemFocused__DelegateSignature(EPlayerCustomizationType Type, const class FString& RowName, bool Focused);
	void ExecuteUbergraph_CharacterCustomizationScrollBox(int32 EntryPoint);
	void BndEvt__CharacterCustomizationScrollBox_GirlyButton_K2Node_ComponentBoundEvent_3_OnButtonState__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_ManlyButton_K2Node_ComponentBoundEvent_0_OnButtonState__DelegateSignature();
	void OnSetToolTipVisibilityByTimer();
	void OnSetTooltipVisibility(bool Visible, class UBP_ItemCard_C* ItemCard, uint8 CategoryAsByte);
	void OnFacialHairFocused(bool Focused, class UBP_ItemCard_C* ItemCard);
	void OnAccessoryFocused(bool Focused, class UBP_ItemCard_C* ItemCard);
	void OnEyewearItemFocused(bool Focused, class UBP_ItemCard_C* ItemCard);
	void OnHeadItemFocused(const bool Focused, const class UBP_ItemCard_C* ItemCard);
	void OnFeetItemFocused(bool Focused, class UBP_ItemCard_C* ItemCard);
	void OnLegsItemFocused(bool Focused, class UBP_ItemCard_C* ItemCard);
	void OnBodyItemFocused(bool Focused, class UBP_ItemCard_C* ItemCard);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CharacterCustomizationScrollBox_ButtonFeet_K2Node_ComponentBoundEvent_20_OnCategorySelected__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_ButtonLegs_K2Node_ComponentBoundEvent_19_OnCategorySelected__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_ButtonBody_K2Node_ComponentBoundEvent_18_OnCategorySelected__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_ButtonAccessory_K2Node_ComponentBoundEvent_17_OnCategorySelected__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_ButtonFacialHair_K2Node_ComponentBoundEvent_16_OnCategorySelected__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_ButtonEyewear_K2Node_ComponentBoundEvent_15_OnCategorySelected__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_ButtonAppearance_K2Node_ComponentBoundEvent_14_OnCategorySelected__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_CM_CustomizationCategoryButton_1_K2Node_ComponentBoundEvent_13_OnCategorySelected__DelegateSignature();
	void OnFacialHairUpdated(class UBP_ItemCard_C* ItemCard);
	void OnAccessorySelected(class UBP_ItemCard_C* ItemCard);
	void OnEyewearSelected(class UBP_ItemCard_C* ItemCard);
	void Set_Focus_For_Gamepad();
	void Enter_Emote_Customization();
	void K2_UpdateHairColor(const class FString& Selected);
	void K2_UpdatePreset(const class FString& Selected);
	void K2_UpdateSkinMaterial(const class FString& Selected);
	void K2_UpdateEyeMaterial(const class FString& Selected);
	void BndEvt__CharacterCustomizationScrollBox_MasculineSwapButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_MasculineSwapButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_FeminineSwapButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_FeminineSwapButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CharacterCustomizationScrollBox_MasculineSwapButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void AddEntitlementsToGrid(EPlayerCustomizationType Category, const TArray<class FName>& DTNames);
	void BuildCategory(EPlayerCustomizationType Category);
	void InitializeCustomization(class ABP_CustomizationSettings_C* CustomizationConfig_0, class ACharacterPreviewerSCTBP_C* Previewer);
	void OnHeadItemSelected(const class UBP_ItemCard_C* ItemCard);
	void OnFeetItemSelected(class UBP_ItemCard_C* ItemCard);
	void OnLegsItemSelected(class UBP_ItemCard_C* ItemCard);
	void OnBodyItemSelected(class UBP_ItemCard_C* ItemCard);
	void OnSuccess_625FB1904FA9ABD0D98D04A2D6D0240B(const struct FAccelByteModelsEntitlementPagingSlicedResult& Entitlements, int32 Code, const class FString& Message);
	void OnFail_625FB1904FA9ABD0D98D04A2D6D0240B(int32 Code, const class FString& Message);
	void Set_UIColors(class UBP_CustomizationMenu_C* CustomizationMenu);
	void SetPreviewerAndGender(const class FString& Tag, EPlayerCustomizationGender Gender_0);
	void Set_Item(const struct FPlayerCustomizationItemTableRow& Item, class USkeletalMeshComponent* Mesh, class FName MaskName);
	void InitializeScrollbox();
	void Init_Item_By_Category(EPlayerCustomizationType Category, class USkeletalMeshComponent* Mesh, class FName MaskName, struct FPlayerCustomizationItemTableRow* Item);
	void Set_Button_to_Unselected(class UButton* Button);
	void SetAllButtonsToUnselected();
	void Set_Gender_States();
	void InitializeFeatures();
	void BuildColorFeatureGrid(TArray<class FName>& InRowNames, class UDataTable* InDT, class UGridPanel* Grid, ECustomizationOption Type);
	void AddToGrid(class UUserWidget* Widget, class UGridPanel* Grid, int32 Index_0, int32 SlotsPerRow);
	void Build_PresetFeature_Grid();
	void UpdateQualityGridVisibility(class UGridPanel* Grid);
	void UpdateCurrentButton(class UCM_CustomizationCategoryButton_C* NextButton);
	void GetCurrent_Category_Button(class UCM_CustomizationCategoryButton_C** AsCM_Customization_Category_Button);
	void BuildResidentCategory(EPlayerCustomizationType ItemCategory);
	int32 GetCurrentLevel();
	void SetTooltipVisibility(bool bIsVisible, class UBP_ItemCard_C* ItemCard, uint8 CategoryAsByte);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterCustomizationScrollBox_C">();
	}
	static class UCharacterCustomizationScrollBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterCustomizationScrollBox_C>();
	}
};
static_assert(alignof(UCharacterCustomizationScrollBox_C) == 0x000008, "Wrong alignment on UCharacterCustomizationScrollBox_C");
static_assert(sizeof(UCharacterCustomizationScrollBox_C) == 0x0006D0, "Wrong size on UCharacterCustomizationScrollBox_C");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, UberGraphFrame) == 0x000378, "Member 'UCharacterCustomizationScrollBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, AccessoryButton) == 0x000380, "Member 'UCharacterCustomizationScrollBox_C::AccessoryButton' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, AccessoryImage) == 0x000388, "Member 'UCharacterCustomizationScrollBox_C::AccessoryImage' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, AppearanceButton) == 0x000390, "Member 'UCharacterCustomizationScrollBox_C::AppearanceButton' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, AppearanceImage) == 0x000398, "Member 'UCharacterCustomizationScrollBox_C::AppearanceImage' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, AppearanceScrollbox) == 0x0003A0, "Member 'UCharacterCustomizationScrollBox_C::AppearanceScrollbox' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, BodyButton) == 0x0003A8, "Member 'UCharacterCustomizationScrollBox_C::BodyButton' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ButtonAccessory) == 0x0003B0, "Member 'UCharacterCustomizationScrollBox_C::ButtonAccessory' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ButtonAppearance) == 0x0003B8, "Member 'UCharacterCustomizationScrollBox_C::ButtonAppearance' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ButtonBody) == 0x0003C0, "Member 'UCharacterCustomizationScrollBox_C::ButtonBody' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ButtonEyewear) == 0x0003C8, "Member 'UCharacterCustomizationScrollBox_C::ButtonEyewear' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ButtonFacialHair) == 0x0003D0, "Member 'UCharacterCustomizationScrollBox_C::ButtonFacialHair' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ButtonFeet) == 0x0003D8, "Member 'UCharacterCustomizationScrollBox_C::ButtonFeet' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ButtonHeadwear) == 0x0003E0, "Member 'UCharacterCustomizationScrollBox_C::ButtonHeadwear' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ButtonLegs) == 0x0003E8, "Member 'UCharacterCustomizationScrollBox_C::ButtonLegs' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ButtonsBox) == 0x0003F0, "Member 'UCharacterCustomizationScrollBox_C::ButtonsBox' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ClassicBanner) == 0x0003F8, "Member 'UCharacterCustomizationScrollBox_C::ClassicBanner' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ElegantBanner) == 0x000400, "Member 'UCharacterCustomizationScrollBox_C::ElegantBanner' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ExtravagentBanner) == 0x000408, "Member 'UCharacterCustomizationScrollBox_C::ExtravagentBanner' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, EyeColorBanner_1) == 0x000410, "Member 'UCharacterCustomizationScrollBox_C::EyeColorBanner_1' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, EyewearButton) == 0x000418, "Member 'UCharacterCustomizationScrollBox_C::EyewearButton' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, EyewearImage) == 0x000420, "Member 'UCharacterCustomizationScrollBox_C::EyewearImage' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, FacialHairButton) == 0x000428, "Member 'UCharacterCustomizationScrollBox_C::FacialHairButton' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, FacialHairImage) == 0x000430, "Member 'UCharacterCustomizationScrollBox_C::FacialHairImage' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, FacialPresetBanner) == 0x000438, "Member 'UCharacterCustomizationScrollBox_C::FacialPresetBanner' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, FeetButton) == 0x000440, "Member 'UCharacterCustomizationScrollBox_C::FeetButton' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, FeminineButton) == 0x000448, "Member 'UCharacterCustomizationScrollBox_C::FeminineButton' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, FeminineOverlay) == 0x000450, "Member 'UCharacterCustomizationScrollBox_C::FeminineOverlay' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, FeminineText) == 0x000458, "Member 'UCharacterCustomizationScrollBox_C::FeminineText' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, FootwearImage) == 0x000460, "Member 'UCharacterCustomizationScrollBox_C::FootwearImage' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, HairColorBanner) == 0x000468, "Member 'UCharacterCustomizationScrollBox_C::HairColorBanner' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, HeadButton) == 0x000470, "Member 'UCharacterCustomizationScrollBox_C::HeadButton' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, HeaderText) == 0x000478, "Member 'UCharacterCustomizationScrollBox_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, HeadwearImage) == 0x000480, "Member 'UCharacterCustomizationScrollBox_C::HeadwearImage' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, Image_149) == 0x000488, "Member 'UCharacterCustomizationScrollBox_C::Image_149' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, Image_446) == 0x000490, "Member 'UCharacterCustomizationScrollBox_C::Image_446' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, LegsButton) == 0x000498, "Member 'UCharacterCustomizationScrollBox_C::LegsButton' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, LowerBodyImage) == 0x0004A0, "Member 'UCharacterCustomizationScrollBox_C::LowerBodyImage' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, LuxuriousBanner) == 0x0004A8, "Member 'UCharacterCustomizationScrollBox_C::LuxuriousBanner' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, MasculineButton) == 0x0004B0, "Member 'UCharacterCustomizationScrollBox_C::MasculineButton' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, MasculineOverlay) == 0x0004B8, "Member 'UCharacterCustomizationScrollBox_C::MasculineOverlay' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, MasculineText) == 0x0004C0, "Member 'UCharacterCustomizationScrollBox_C::MasculineText' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, MenuSwitcher) == 0x0004C8, "Member 'UCharacterCustomizationScrollBox_C::MenuSwitcher' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, SkintoneBanner) == 0x0004D0, "Member 'UCharacterCustomizationScrollBox_C::SkintoneBanner' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, UpperBodyImage) == 0x0004D8, "Member 'UCharacterCustomizationScrollBox_C::UpperBodyImage' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, WardrobeScrollbox) == 0x0004E0, "Member 'UCharacterCustomizationScrollBox_C::WardrobeScrollbox' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, CustomizationConfig) == 0x0004E8, "Member 'UCharacterCustomizationScrollBox_C::CustomizationConfig' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, CharacterPreviewer) == 0x0004F0, "Member 'UCharacterCustomizationScrollBox_C::CharacterPreviewer' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, SaveSlot) == 0x0004F8, "Member 'UCharacterCustomizationScrollBox_C::SaveSlot' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, DoMaskLegs) == 0x000500, "Member 'UCharacterCustomizationScrollBox_C::DoMaskLegs' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, LegsRowName) == 0x000508, "Member 'UCharacterCustomizationScrollBox_C::LegsRowName' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, UpdateHeadItem) == 0x000518, "Member 'UCharacterCustomizationScrollBox_C::UpdateHeadItem' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, UpdateBodyItem) == 0x000528, "Member 'UCharacterCustomizationScrollBox_C::UpdateBodyItem' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, UpdateFeetItem) == 0x000538, "Member 'UCharacterCustomizationScrollBox_C::UpdateFeetItem' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, UpdateLegsItem) == 0x000548, "Member 'UCharacterCustomizationScrollBox_C::UpdateLegsItem' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, UpdateEyewearItem) == 0x000558, "Member 'UCharacterCustomizationScrollBox_C::UpdateEyewearItem' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, Ak) == 0x000568, "Member 'UCharacterCustomizationScrollBox_C::Ak' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, OnChangeCategory) == 0x000570, "Member 'UCharacterCustomizationScrollBox_C::OnChangeCategory' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, AchievementsList) == 0x000580, "Member 'UCharacterCustomizationScrollBox_C::AchievementsList' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, CloudSave) == 0x0005A8, "Member 'UCharacterCustomizationScrollBox_C::CloudSave' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, AppearanceColor) == 0x0005D0, "Member 'UCharacterCustomizationScrollBox_C::AppearanceColor' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, HeadwearColor) == 0x0005E0, "Member 'UCharacterCustomizationScrollBox_C::HeadwearColor' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, UpperBodyColor) == 0x0005F0, "Member 'UCharacterCustomizationScrollBox_C::UpperBodyColor' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, LoweBodyColor) == 0x000600, "Member 'UCharacterCustomizationScrollBox_C::LoweBodyColor' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, FootwearColor) == 0x000610, "Member 'UCharacterCustomizationScrollBox_C::FootwearColor' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, OnSwapGender) == 0x000620, "Member 'UCharacterCustomizationScrollBox_C::OnSwapGender' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, OnMadeChanges) == 0x000630, "Member 'UCharacterCustomizationScrollBox_C::OnMadeChanges' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, SelectedColor) == 0x000640, "Member 'UCharacterCustomizationScrollBox_C::SelectedColor' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ClassicColor) == 0x000650, "Member 'UCharacterCustomizationScrollBox_C::ClassicColor' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ElegantColor) == 0x000660, "Member 'UCharacterCustomizationScrollBox_C::ElegantColor' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, LuxuriousColor) == 0x000670, "Member 'UCharacterCustomizationScrollBox_C::LuxuriousColor' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ExtravagentColor) == 0x000680, "Member 'UCharacterCustomizationScrollBox_C::ExtravagentColor' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, UpdateAccessoryItem) == 0x000690, "Member 'UCharacterCustomizationScrollBox_C::UpdateAccessoryItem' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, UpdateFacialHairItem) == 0x0006A0, "Member 'UCharacterCustomizationScrollBox_C::UpdateFacialHairItem' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, OnItemFocused) == 0x0006B0, "Member 'UCharacterCustomizationScrollBox_C::OnItemFocused' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, ItemTooltip) == 0x0006C0, "Member 'UCharacterCustomizationScrollBox_C::ItemTooltip' has a wrong offset!");
static_assert(offsetof(UCharacterCustomizationScrollBox_C, TimerHandle) == 0x0006C8, "Member 'UCharacterCustomizationScrollBox_C::TimerHandle' has a wrong offset!");

}

