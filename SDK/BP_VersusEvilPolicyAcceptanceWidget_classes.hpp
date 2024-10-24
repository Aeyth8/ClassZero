#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VersusEvilPolicyAcceptanceWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"
#include "SCT_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_VersusEvilPolicyAcceptanceWidget.BP_VersusEvilPolicyAcceptanceWidget_C
// 0x0110 (0x0370 - 0x0260)
class UBP_VersusEvilPolicyAcceptanceWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                ConfirmButton;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ConfirmButtonContainer;                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                GamepadFocus;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadScrollUtilityWI_C*              GamepadScrollUtilityWI;                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_141;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_223;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_866;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                NextButton;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NextButtonContainer;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PolicyContentTextBlock;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             PolicyScrollBox;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ToSHeaderBox;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCancelRegistration;                              // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                           FCTColor;                                          // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnVerificationEmailSent;                           // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FVersusEvilDocument>            Documents;                                         // 0x0320(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UBP_VersusEvilPolicyHeaderWidget_C*> Headers;                                           // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         Page;                                              // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_344[0x4];                                      // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSetupVersusEvilLogin;                            // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class Ubp_wi_StartScreen_C*                   StartSCreen;                                       // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DebugMode;                                         // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_361[0x3];                                      // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GamepadCurrentScrollSpeed;                         // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GamepadScrollSpeedFriction;                        // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCancelRegistration__DelegateSignature();
	void OnVerificationEmailSent__DelegateSignature();
	void OnSetupVersusEvilLogin__DelegateSignature();
	void ExecuteUbergraph_BP_VersusEvilPolicyAcceptanceWidget(int32 EntryPoint);
	void BndEvt__BP_VersusEvilPolicyAcceptanceWidget_GamepadScrollUtilityWI_K2Node_ComponentBoundEvent_2_OnGamepadScrolled__DelegateSignature(float CurrentOffset);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__PolicyScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void BndEvt__CancelButton_1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnSuccess_44DCD488472A0305AB4751B0D3B65E70(const class FString& Result, int32 Code);
	void OnError_44DCD488472A0305AB4751B0D3B65E70(const class FString& Result, int32 Code);
	void UpdateCurrentPolicyPage();
	class UWidget* GamepadFocus_Navigation(EUINavigation Navigation_0);
	class UWidget* NextButton_Navigation(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VersusEvilPolicyAcceptanceWidget_C">();
	}
	static class UBP_VersusEvilPolicyAcceptanceWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VersusEvilPolicyAcceptanceWidget_C>();
	}
};
static_assert(alignof(UBP_VersusEvilPolicyAcceptanceWidget_C) == 0x000008, "Wrong alignment on UBP_VersusEvilPolicyAcceptanceWidget_C");
static_assert(sizeof(UBP_VersusEvilPolicyAcceptanceWidget_C) == 0x000370, "Wrong size on UBP_VersusEvilPolicyAcceptanceWidget_C");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, UberGraphFrame) == 0x000260, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, ConfirmButton) == 0x000268, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::ConfirmButton' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, ConfirmButtonContainer) == 0x000270, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::ConfirmButtonContainer' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, GamepadFocus) == 0x000278, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::GamepadFocus' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, GamepadScrollUtilityWI) == 0x000280, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::GamepadScrollUtilityWI' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, Image) == 0x000288, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::Image' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, Image_1) == 0x000290, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::Image_1' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, Image_2) == 0x000298, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::Image_2' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, Image_3) == 0x0002A0, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::Image_3' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, Image_5) == 0x0002A8, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::Image_5' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, Image_141) == 0x0002B0, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::Image_141' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, Image_223) == 0x0002B8, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::Image_223' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, Image_866) == 0x0002C0, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::Image_866' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, NextButton) == 0x0002C8, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::NextButton' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, NextButtonContainer) == 0x0002D0, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::NextButtonContainer' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, PolicyContentTextBlock) == 0x0002D8, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::PolicyContentTextBlock' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, PolicyScrollBox) == 0x0002E0, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::PolicyScrollBox' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, ToSHeaderBox) == 0x0002E8, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::ToSHeaderBox' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, OnCancelRegistration) == 0x0002F0, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::OnCancelRegistration' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, FCTColor) == 0x000300, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::FCTColor' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, OnVerificationEmailSent) == 0x000310, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::OnVerificationEmailSent' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, Documents) == 0x000320, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::Documents' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, Headers) == 0x000330, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::Headers' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, Page) == 0x000340, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::Page' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, OnSetupVersusEvilLogin) == 0x000348, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::OnSetupVersusEvilLogin' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, StartSCreen) == 0x000358, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::StartSCreen' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, DebugMode) == 0x000360, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::DebugMode' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, GamepadCurrentScrollSpeed) == 0x000364, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::GamepadCurrentScrollSpeed' has a wrong offset!");
static_assert(offsetof(UBP_VersusEvilPolicyAcceptanceWidget_C, GamepadScrollSpeedFriction) == 0x000368, "Member 'UBP_VersusEvilPolicyAcceptanceWidget_C::GamepadScrollSpeedFriction' has a wrong offset!");

}

