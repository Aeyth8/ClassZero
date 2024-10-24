#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayNow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PlayNow.BP_PlayNow_C
// 0x0090 (0x02F0 - 0x0260)
class UBP_PlayNow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                 Image;                                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_75;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuButton*                            MenuButton_CreatePrivateLobby;                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuButton*                            MenuButton_CreatePublicLobby;                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuButton*                            MenuButton_FindGame;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuButton*                            MenuButton_FriendsOnly;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuButton*                            MenuButton_ReturnToMainMenu;                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_FindGame;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFindGameClicked;                                 // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCreatePublicLobby;                               // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCreatePrivateLobby;                              // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReturnToMainMenu;                                // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SteamLobbyType;                                    // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnFindGameClicked__DelegateSignature();
	void OnCreatePublicLobby__DelegateSignature();
	void OnCreatePrivateLobby__DelegateSignature();
	void OnReturnToMainMenu__DelegateSignature();
	void ExecuteUbergraph_BP_PlayNow(int32 EntryPoint);
	void BndEvt__MenuButton_Options_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MenuButton_PlayNow_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MenuButton_HowToWin_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MenuButton_Quit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnSuccess_889631B9406BC6636B58768ADAA27FB7();
	void OnFail_889631B9406BC6636B58768ADAA27FB7();
	void OnSuccess_3D8EA13741AC235B7DAC3AAA0BAA31FE();
	void OnFail_3D8EA13741AC235B7DAC3AAA0BAA31FE();
	void OnSuccess_313A7C4E4DB4E349E07AE1B5612C6013();
	void OnFail_313A7C4E4DB4E349E07AE1B5612C6013();
	void OnSuccess_E69A53A34422BB4C494858A2DD16959D();
	void OnFail_E69A53A34422BB4C494858A2DD16959D();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayNow_C">();
	}
	static class UBP_PlayNow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayNow_C>();
	}
};
static_assert(alignof(UBP_PlayNow_C) == 0x000008, "Wrong alignment on UBP_PlayNow_C");
static_assert(sizeof(UBP_PlayNow_C) == 0x0002F0, "Wrong size on UBP_PlayNow_C");
static_assert(offsetof(UBP_PlayNow_C, UberGraphFrame) == 0x000260, "Member 'UBP_PlayNow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, Image) == 0x000268, "Member 'UBP_PlayNow_C::Image' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, Image_75) == 0x000270, "Member 'UBP_PlayNow_C::Image_75' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, MenuButton_CreatePrivateLobby) == 0x000278, "Member 'UBP_PlayNow_C::MenuButton_CreatePrivateLobby' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, MenuButton_CreatePublicLobby) == 0x000280, "Member 'UBP_PlayNow_C::MenuButton_CreatePublicLobby' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, MenuButton_FindGame) == 0x000288, "Member 'UBP_PlayNow_C::MenuButton_FindGame' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, MenuButton_FriendsOnly) == 0x000290, "Member 'UBP_PlayNow_C::MenuButton_FriendsOnly' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, MenuButton_ReturnToMainMenu) == 0x000298, "Member 'UBP_PlayNow_C::MenuButton_ReturnToMainMenu' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, Text_FindGame) == 0x0002A0, "Member 'UBP_PlayNow_C::Text_FindGame' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, OnFindGameClicked) == 0x0002A8, "Member 'UBP_PlayNow_C::OnFindGameClicked' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, OnCreatePublicLobby) == 0x0002B8, "Member 'UBP_PlayNow_C::OnCreatePublicLobby' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, OnCreatePrivateLobby) == 0x0002C8, "Member 'UBP_PlayNow_C::OnCreatePrivateLobby' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, OnReturnToMainMenu) == 0x0002D8, "Member 'UBP_PlayNow_C::OnReturnToMainMenu' has a wrong offset!");
static_assert(offsetof(UBP_PlayNow_C, SteamLobbyType) == 0x0002E8, "Member 'UBP_PlayNow_C::SteamLobbyType' has a wrong offset!");

}

