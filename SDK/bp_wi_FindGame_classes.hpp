#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_wi_FindGame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SCT_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass bp_wi_FindGame.bp_wi_FindGame_C
// 0x00F8 (0x0358 - 0x0260)
class Ubp_wi_FindGame_C final : public UMatchmakingLobbyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class Ubp_wi_EnterAvatarName_C*               bp_wi_EnterAvatarName;                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuButton*                            But_DiscordImage;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          EditableText_142;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFooter_WI_C*                           Footer_WI;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_DCLink;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Headline;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_MatchCodeNote;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ThisIsAnAlpha;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextMessage_MatchMakerStatus;                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                              Throbber_MatchmakerSearching;                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBeginMatchMakingClicked;                         // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancelMatchMakingClicked;                        // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   FindGameButton;                                    // 0x02E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkAudioEvent*                          FindGameBegin;                                     // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          FindGameCancel;                                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnStartMatchmaking;                                // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnStopMatchmaking;                                 // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFailMatchmaking;                                 // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsMatchmaking;                                     // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Initialized;                                       // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33A[0x6];                                      // 0x033A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           Ak;                                                // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ServerName;                                        // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void OnBeginMatchMakingClicked__DelegateSignature();
	void OnCancelMatchMakingClicked__DelegateSignature();
	void OnStartMatchmaking__DelegateSignature();
	void OnStopMatchmaking__DelegateSignature();
	void OnFailMatchmaking__DelegateSignature();
	void ExecuteUbergraph_bp_wi_FindGame(int32 EntryPoint);
	void BndEvt__EditableText_142_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
	void OnDSNotif(const struct FAccelByteModelsDsNotice& Notification);
	void BndEvt__EditableTextBoxReadWriteMatchCode_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void Set_Matchmaking_State(bool InProgress, const class FString& Message);
	void BndEvt__But_DiscordImage_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__But_DiscordImage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__But_DiscordImage_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__But_Discord_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void OnCancelMatchMakingClicked_Event();
	void OnBeginMatchMakingClicked_Event();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Footer_WI_K2Node_ComponentBoundEvent_2_OnFooterMainButtonPressed__DelegateSignature();
	void Set_Matchmaking_Message(const class FString& Message);
	void UpdateIsMatchmaking(bool InProgress, const class FString& StatusMessage);
	void SetStartMatchmakingUI();
	void SetCancelMatchmakingUI();
	void SetJoiningMatchUI();

	void GetABGameMode1(class FString* GameMode) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bp_wi_FindGame_C">();
	}
	static class Ubp_wi_FindGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ubp_wi_FindGame_C>();
	}
};
static_assert(alignof(Ubp_wi_FindGame_C) == 0x000008, "Wrong alignment on Ubp_wi_FindGame_C");
static_assert(sizeof(Ubp_wi_FindGame_C) == 0x000358, "Wrong size on Ubp_wi_FindGame_C");
static_assert(offsetof(Ubp_wi_FindGame_C, UberGraphFrame) == 0x000260, "Member 'Ubp_wi_FindGame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, bp_wi_EnterAvatarName) == 0x000268, "Member 'Ubp_wi_FindGame_C::bp_wi_EnterAvatarName' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, But_DiscordImage) == 0x000270, "Member 'Ubp_wi_FindGame_C::But_DiscordImage' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, EditableText_142) == 0x000278, "Member 'Ubp_wi_FindGame_C::EditableText_142' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, Footer_WI) == 0x000280, "Member 'Ubp_wi_FindGame_C::Footer_WI' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, Text_DCLink) == 0x000288, "Member 'Ubp_wi_FindGame_C::Text_DCLink' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, Text_Headline) == 0x000290, "Member 'Ubp_wi_FindGame_C::Text_Headline' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, Text_MatchCodeNote) == 0x000298, "Member 'Ubp_wi_FindGame_C::Text_MatchCodeNote' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, Text_ThisIsAnAlpha) == 0x0002A0, "Member 'Ubp_wi_FindGame_C::Text_ThisIsAnAlpha' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, TextBlock_1) == 0x0002A8, "Member 'Ubp_wi_FindGame_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, TextMessage_MatchMakerStatus) == 0x0002B0, "Member 'Ubp_wi_FindGame_C::TextMessage_MatchMakerStatus' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, Throbber_MatchmakerSearching) == 0x0002B8, "Member 'Ubp_wi_FindGame_C::Throbber_MatchmakerSearching' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, OnBeginMatchMakingClicked) == 0x0002C0, "Member 'Ubp_wi_FindGame_C::OnBeginMatchMakingClicked' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, OnCancelMatchMakingClicked) == 0x0002D0, "Member 'Ubp_wi_FindGame_C::OnCancelMatchMakingClicked' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, FindGameButton) == 0x0002E0, "Member 'Ubp_wi_FindGame_C::FindGameButton' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, FindGameBegin) == 0x0002F8, "Member 'Ubp_wi_FindGame_C::FindGameBegin' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, FindGameCancel) == 0x000300, "Member 'Ubp_wi_FindGame_C::FindGameCancel' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, OnStartMatchmaking) == 0x000308, "Member 'Ubp_wi_FindGame_C::OnStartMatchmaking' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, OnStopMatchmaking) == 0x000318, "Member 'Ubp_wi_FindGame_C::OnStopMatchmaking' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, OnFailMatchmaking) == 0x000328, "Member 'Ubp_wi_FindGame_C::OnFailMatchmaking' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, IsMatchmaking) == 0x000338, "Member 'Ubp_wi_FindGame_C::IsMatchmaking' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, Initialized) == 0x000339, "Member 'Ubp_wi_FindGame_C::Initialized' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, Ak) == 0x000340, "Member 'Ubp_wi_FindGame_C::Ak' has a wrong offset!");
static_assert(offsetof(Ubp_wi_FindGame_C, ServerName) == 0x000348, "Member 'Ubp_wi_FindGame_C::ServerName' has a wrong offset!");

}

