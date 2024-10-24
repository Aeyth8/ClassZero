#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_UtilityMenuWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CM_UtilityMenuWI.CM_UtilityMenuWI_C
// 0x0138 (0x0398 - 0x0260)
class UCM_UtilityMenuWI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                 ConsoleHamburgerIcon;                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConsoleHamburgerIcon_1;                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConsoleHamburgerIcon_2;                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleIconMainMenuWI_C*               ConsoleIconMainMenuWI;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleIconMainMenuWI_C*               ConsoleIconMainMenuWI_1;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleIconMainMenuWI_C*               ConsoleIconMainMenuWI_2;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleIconMainMenuWI_C*               ConsoleIconMainMenuWISelect;                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConsoleIconMainMenuWI_C*               ConsoleIconMainMenuWITopFace;                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConsoleInviteDialogIcon;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConsoleInviteDialogIcon_1;                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConsoleInviteDialogIcon_2;                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ConsoleMenuPlaystation;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ConsoleMenuWinGDK;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ConsoleMenuXbox;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConsoleSocialIcon;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConsoleSocialIcon_1;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConsoleSocialIcon_2;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConsoleTopFaceButtonIcon;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                FriendsButtonPC;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                GDKSettingsButton;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                GDKSocialButton;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                GDKSystemButton;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_92;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_207;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlaystationTouchPadIcon;                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PS4OptionsIcon;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SettingsButtonPC;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_33;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOpenFriends;                                     // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnOpenSettings;                                    // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnShowSystemInvite;                                // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnOpenFriends__DelegateSignature();
	void OnOpenSettings__DelegateSignature();
	void OnShowSystemInvite__DelegateSignature();
	void ExecuteUbergraph_CM_UtilityMenuWI(int32 EntryPoint);
	void BndEvt__CM_UtilityMenuWI_GDKSocialButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__CM_UtilityMenuWI_GDKSettingsButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__CM_UtilityMenuWI_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CM_UtilityMenuWI_SettingsButtonPC_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__CM_UtilityMenuWI_FriendsButtonPC_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void SetConsoleInviteButtonActive(bool Active);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CM_UtilityMenuWI_C">();
	}
	static class UCM_UtilityMenuWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCM_UtilityMenuWI_C>();
	}
};
static_assert(alignof(UCM_UtilityMenuWI_C) == 0x000008, "Wrong alignment on UCM_UtilityMenuWI_C");
static_assert(sizeof(UCM_UtilityMenuWI_C) == 0x000398, "Wrong size on UCM_UtilityMenuWI_C");
static_assert(offsetof(UCM_UtilityMenuWI_C, UberGraphFrame) == 0x000260, "Member 'UCM_UtilityMenuWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleHamburgerIcon) == 0x000268, "Member 'UCM_UtilityMenuWI_C::ConsoleHamburgerIcon' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleHamburgerIcon_1) == 0x000270, "Member 'UCM_UtilityMenuWI_C::ConsoleHamburgerIcon_1' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleHamburgerIcon_2) == 0x000278, "Member 'UCM_UtilityMenuWI_C::ConsoleHamburgerIcon_2' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleIconMainMenuWI) == 0x000280, "Member 'UCM_UtilityMenuWI_C::ConsoleIconMainMenuWI' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleIconMainMenuWI_1) == 0x000288, "Member 'UCM_UtilityMenuWI_C::ConsoleIconMainMenuWI_1' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleIconMainMenuWI_2) == 0x000290, "Member 'UCM_UtilityMenuWI_C::ConsoleIconMainMenuWI_2' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleIconMainMenuWISelect) == 0x000298, "Member 'UCM_UtilityMenuWI_C::ConsoleIconMainMenuWISelect' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleIconMainMenuWITopFace) == 0x0002A0, "Member 'UCM_UtilityMenuWI_C::ConsoleIconMainMenuWITopFace' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleInviteDialogIcon) == 0x0002A8, "Member 'UCM_UtilityMenuWI_C::ConsoleInviteDialogIcon' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleInviteDialogIcon_1) == 0x0002B0, "Member 'UCM_UtilityMenuWI_C::ConsoleInviteDialogIcon_1' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleInviteDialogIcon_2) == 0x0002B8, "Member 'UCM_UtilityMenuWI_C::ConsoleInviteDialogIcon_2' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleMenuPlaystation) == 0x0002C0, "Member 'UCM_UtilityMenuWI_C::ConsoleMenuPlaystation' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleMenuWinGDK) == 0x0002C8, "Member 'UCM_UtilityMenuWI_C::ConsoleMenuWinGDK' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleMenuXbox) == 0x0002D0, "Member 'UCM_UtilityMenuWI_C::ConsoleMenuXbox' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleSocialIcon) == 0x0002D8, "Member 'UCM_UtilityMenuWI_C::ConsoleSocialIcon' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleSocialIcon_1) == 0x0002E0, "Member 'UCM_UtilityMenuWI_C::ConsoleSocialIcon_1' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleSocialIcon_2) == 0x0002E8, "Member 'UCM_UtilityMenuWI_C::ConsoleSocialIcon_2' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, ConsoleTopFaceButtonIcon) == 0x0002F0, "Member 'UCM_UtilityMenuWI_C::ConsoleTopFaceButtonIcon' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, FriendsButtonPC) == 0x0002F8, "Member 'UCM_UtilityMenuWI_C::FriendsButtonPC' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, GDKSettingsButton) == 0x000300, "Member 'UCM_UtilityMenuWI_C::GDKSettingsButton' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, GDKSocialButton) == 0x000308, "Member 'UCM_UtilityMenuWI_C::GDKSocialButton' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, GDKSystemButton) == 0x000310, "Member 'UCM_UtilityMenuWI_C::GDKSystemButton' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, Image) == 0x000318, "Member 'UCM_UtilityMenuWI_C::Image' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, Image_1) == 0x000320, "Member 'UCM_UtilityMenuWI_C::Image_1' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, Image_2) == 0x000328, "Member 'UCM_UtilityMenuWI_C::Image_2' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, Image_3) == 0x000330, "Member 'UCM_UtilityMenuWI_C::Image_3' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, Image_92) == 0x000338, "Member 'UCM_UtilityMenuWI_C::Image_92' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, Image_207) == 0x000340, "Member 'UCM_UtilityMenuWI_C::Image_207' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, PlaystationTouchPadIcon) == 0x000348, "Member 'UCM_UtilityMenuWI_C::PlaystationTouchPadIcon' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, PS4OptionsIcon) == 0x000350, "Member 'UCM_UtilityMenuWI_C::PS4OptionsIcon' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, SettingsButtonPC) == 0x000358, "Member 'UCM_UtilityMenuWI_C::SettingsButtonPC' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, WidgetSwitcher_33) == 0x000360, "Member 'UCM_UtilityMenuWI_C::WidgetSwitcher_33' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, OnOpenFriends) == 0x000368, "Member 'UCM_UtilityMenuWI_C::OnOpenFriends' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, OnOpenSettings) == 0x000378, "Member 'UCM_UtilityMenuWI_C::OnOpenSettings' has a wrong offset!");
static_assert(offsetof(UCM_UtilityMenuWI_C, OnShowSystemInvite) == 0x000388, "Member 'UCM_UtilityMenuWI_C::OnShowSystemInvite' has a wrong offset!");

}

