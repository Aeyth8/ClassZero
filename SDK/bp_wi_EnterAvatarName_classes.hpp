#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_wi_EnterAvatarName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass bp_wi_EnterAvatarName.bp_wi_EnterAvatarName_C
// 0x01D8 (0x0438 - 0x0260)
class Ubp_wi_EnterAvatarName_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                CancelButton;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ConfirmNameButton;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ConfirmNameWidget;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBoxReadWritePlayerName;                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               EnterNameText;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MenuSwitcher;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageText;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NewDisplayNameText;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                NoButton;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                RandomNameButton;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                RandomNameButton_1;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                YesButton;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBackClicked;                                     // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         MaxAvatarNameLength;                               // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBeginMatchMakingClicked;                         // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancelMatchMakingClicked;                        // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsMatchmaking;                                     // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   FindGameButton;                                    // 0x0318(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkAudioEvent*                          FindGameBegin;                                     // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         BadWordKeys;                                       // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         FirstNames;                                        // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         LastNames;                                         // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkAudioEvent*                          FindGameCancel;                                    // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnStartMatchmaking;                                // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnStopMatchmaking;                                 // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFailMatchmaking;                                 // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Initialized;                                       // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         WhiteListedWordKeys;                               // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnDisplayNameSuccess;                              // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancelChangeName;                                // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 MessageString;                                     // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class FString, class FString>            ErrorMessages;                                     // 0x03E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnBackClicked__DelegateSignature();
	void OnBeginMatchMakingClicked__DelegateSignature();
	void OnCancelMatchMakingClicked__DelegateSignature();
	void OnStartMatchmaking__DelegateSignature();
	void OnStopMatchmaking__DelegateSignature();
	void OnFailMatchmaking__DelegateSignature();
	void OnDisplayNameSuccess__DelegateSignature();
	void OnCancelChangeName__DelegateSignature();
	void ExecuteUbergraph_bp_wi_EnterAvatarName(int32 EntryPoint);
	void BndEvt__ConfirmNameButton_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__NoButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ConfirmNameButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_949_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__EditableTextBoxReadWritePlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__EditableTextBoxReadWritePlayerName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void OnSuccess_B9F626224C0D1011DAFF8BAA42CA13CC(const struct FPagedPublicUsersInfo& UsersInfo);
	void OnFail_B9F626224C0D1011DAFF8BAA42CA13CC(int32 Code, const class FString& Message);
	void OnSuccess_8E4A45944872F3D4D039229CA7DCE030(const struct FAccountUserData& Result, const class FString& Message, int32 Code);
	void OnError_8E4A45944872F3D4D039229CA7DCE030(const class FString& Message, int32 Code);
	void SanitizeAvatarName(const class FText& NewName, bool* Sanitized, class FText* CleanName);
	void FilterBadWords(const class FText& InText, bool* ContainsBadWord);
	void GenerateRandomName(class FString* GetRandomName);
	void GetStringtable();
	void SetAvatarName(const class FString& AvatarNameLocal);
	class FString GetAvatarName();
	void SetRandomAvatarName();
	void Name_Is_Available(TArray<struct FPublicUserInfo>& Array, bool* NameAvailable);

	bool IsAvatarNameEmpty() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bp_wi_EnterAvatarName_C">();
	}
	static class Ubp_wi_EnterAvatarName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ubp_wi_EnterAvatarName_C>();
	}
};
static_assert(alignof(Ubp_wi_EnterAvatarName_C) == 0x000008, "Wrong alignment on Ubp_wi_EnterAvatarName_C");
static_assert(sizeof(Ubp_wi_EnterAvatarName_C) == 0x000438, "Wrong size on Ubp_wi_EnterAvatarName_C");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, UberGraphFrame) == 0x000260, "Member 'Ubp_wi_EnterAvatarName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, CancelButton) == 0x000268, "Member 'Ubp_wi_EnterAvatarName_C::CancelButton' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, ConfirmNameButton) == 0x000270, "Member 'Ubp_wi_EnterAvatarName_C::ConfirmNameButton' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, ConfirmNameWidget) == 0x000278, "Member 'Ubp_wi_EnterAvatarName_C::ConfirmNameWidget' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, EditableTextBoxReadWritePlayerName) == 0x000280, "Member 'Ubp_wi_EnterAvatarName_C::EditableTextBoxReadWritePlayerName' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, EnterNameText) == 0x000288, "Member 'Ubp_wi_EnterAvatarName_C::EnterNameText' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, Image) == 0x000290, "Member 'Ubp_wi_EnterAvatarName_C::Image' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, Image_103) == 0x000298, "Member 'Ubp_wi_EnterAvatarName_C::Image_103' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, MenuSwitcher) == 0x0002A0, "Member 'Ubp_wi_EnterAvatarName_C::MenuSwitcher' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, MessageText) == 0x0002A8, "Member 'Ubp_wi_EnterAvatarName_C::MessageText' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, NewDisplayNameText) == 0x0002B0, "Member 'Ubp_wi_EnterAvatarName_C::NewDisplayNameText' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, NoButton) == 0x0002B8, "Member 'Ubp_wi_EnterAvatarName_C::NoButton' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, RandomNameButton) == 0x0002C0, "Member 'Ubp_wi_EnterAvatarName_C::RandomNameButton' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, RandomNameButton_1) == 0x0002C8, "Member 'Ubp_wi_EnterAvatarName_C::RandomNameButton_1' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, YesButton) == 0x0002D0, "Member 'Ubp_wi_EnterAvatarName_C::YesButton' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, OnBackClicked) == 0x0002D8, "Member 'Ubp_wi_EnterAvatarName_C::OnBackClicked' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, MaxAvatarNameLength) == 0x0002E8, "Member 'Ubp_wi_EnterAvatarName_C::MaxAvatarNameLength' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, OnBeginMatchMakingClicked) == 0x0002F0, "Member 'Ubp_wi_EnterAvatarName_C::OnBeginMatchMakingClicked' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, OnCancelMatchMakingClicked) == 0x000300, "Member 'Ubp_wi_EnterAvatarName_C::OnCancelMatchMakingClicked' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, IsMatchmaking) == 0x000310, "Member 'Ubp_wi_EnterAvatarName_C::IsMatchmaking' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, FindGameButton) == 0x000318, "Member 'Ubp_wi_EnterAvatarName_C::FindGameButton' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, FindGameBegin) == 0x000330, "Member 'Ubp_wi_EnterAvatarName_C::FindGameBegin' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, BadWordKeys) == 0x000338, "Member 'Ubp_wi_EnterAvatarName_C::BadWordKeys' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, FirstNames) == 0x000348, "Member 'Ubp_wi_EnterAvatarName_C::FirstNames' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, LastNames) == 0x000358, "Member 'Ubp_wi_EnterAvatarName_C::LastNames' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, FindGameCancel) == 0x000368, "Member 'Ubp_wi_EnterAvatarName_C::FindGameCancel' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, OnStartMatchmaking) == 0x000370, "Member 'Ubp_wi_EnterAvatarName_C::OnStartMatchmaking' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, OnStopMatchmaking) == 0x000380, "Member 'Ubp_wi_EnterAvatarName_C::OnStopMatchmaking' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, OnFailMatchmaking) == 0x000390, "Member 'Ubp_wi_EnterAvatarName_C::OnFailMatchmaking' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, Initialized) == 0x0003A0, "Member 'Ubp_wi_EnterAvatarName_C::Initialized' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, WhiteListedWordKeys) == 0x0003A8, "Member 'Ubp_wi_EnterAvatarName_C::WhiteListedWordKeys' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, OnDisplayNameSuccess) == 0x0003B8, "Member 'Ubp_wi_EnterAvatarName_C::OnDisplayNameSuccess' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, OnCancelChangeName) == 0x0003C8, "Member 'Ubp_wi_EnterAvatarName_C::OnCancelChangeName' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, MessageString) == 0x0003D8, "Member 'Ubp_wi_EnterAvatarName_C::MessageString' has a wrong offset!");
static_assert(offsetof(Ubp_wi_EnterAvatarName_C, ErrorMessages) == 0x0003E8, "Member 'Ubp_wi_EnterAvatarName_C::ErrorMessages' has a wrong offset!");

}

