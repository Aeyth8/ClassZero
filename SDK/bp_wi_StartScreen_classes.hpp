#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_wi_StartScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "E_StartScreenTabs_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass bp_wi_StartScreen.bp_wi_StartScreen_C
// 0x01F8 (0x0458 - 0x0260)
class Ubp_wi_StartScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       FadeInPlayImage;                                   // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInVideoCanvas;                                 // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               AchievementOverlay;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg_side;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 bg_vignette;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_AccelByteFriends_C*                 BP_AccelByteUserSearch;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_StatisticsAndAchievementView_C*     BP_StatisticsAndAchievementView;                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Ubp_wi_AccelByte_ProtoMinusFriends_C*   bp_wi_AccelByte_ProtoMinusFriends;                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                But_CloseVideo;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                But_PlayVideo;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_2;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CustomizationMenu_C*                CustomizeTAB;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusHandlerWI_C*                      FocusHandlerWI;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Ubp_wi_Home_C*                          HomeTAB;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_137;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_182;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_633;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_PlayPause;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           LobbyCanvas;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MainSwitcher;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Ubp_wi_Options_C*                       OptionsTAB;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadCompatibleButton_C*             PatchNotesButton1;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerProfileMainMenu_BP_C*            PlayerProfileMainMenu_BP;                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerProfileMenu_C*                PlayerProfileTab;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayNow_C*                          PlayNow_TAB;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Ubp_wi_PlayTutorial_C*                  PlayTutorialTAB;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_AccelByteLobby_C*                   SteamLobbyTAB;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ReadVersionID;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThankYouNoteWI_C*                      ThankYouNoteWI;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title;                                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           VideoPlayerCanvas;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_StartMenuTabs;                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UObject*>                        SessionBUttonList;                                 // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AAudioMenu_C*                           AudioPlayer;                                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                           MediaPlayer;                                       // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           MenuSound;                                         // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RulesButtonClicked;                                // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_399[0x7];                                      // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            NewVar_0;                                          // 0x03A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ShowPatchNotes;                                    // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C9[0x7];                                      // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChangeTab;                                       // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          FriendsListTransitioning;                          // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E1[0x7];                                      // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           FriendsListToggleTimerHandle;                      // 0x03E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnToggleFriendsList;                               // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           FriendsListTimeoutTimerHandle;                     // 0x0400(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_AccelBytePartyMemberList_C*         FriendLobbyList;                                   // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             CreateLobbyList;                                   // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                         SteamLobbyType;                                    // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Currentinfinitycoins;                              // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_422[0x6];                                      // 0x0422(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFCTAchievement*>                AllAchievements;                                   // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFCTAchievement*>                UnlockedAchievements;                              // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          NewLaunch;                                         // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AccelBytePreloaderWidget_C*         Preloader;                                         // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnChangeTab__DelegateSignature(E_StartScreenTabs Tab);
	void OnToggleFriendsList__DelegateSignature();
	void CreateLobbyList__DelegateSignature();
	void ExecuteUbergraph_bp_wi_StartScreen(int32 EntryPoint);
	void OnEndReached_Event_0();
	void Close_Video();
	void Set_Focus_To_Menu();
	void OnInitialLoadComplete();
	void BndEvt__OptionsTAB_K2Node_ComponentBoundEvent_10_OnPlatformFriendsImported__DelegateSignature();
	void BndEvt__PlayerProfileTab_K2Node_ComponentBoundEvent_4_OnRefreshLevel__DelegateSignature();
	void CustomEvent_0();
	void OnSetupVersusEvilLogin();
	void BndEvt__PlayerProfileTab_K2Node_ComponentBoundEvent_26_OnRefreshDisplayName__DelegateSignature();
	void OnAccelByteLogin();
	void ClientLoggedIn();
	void OnCreatePrivateLobby();
	void OnCreatePublicLobby();
	void OnSendToFriendLobby();
	void BndEvt__OptionsTAB_K2Node_ComponentBoundEvent_14_OnOptionsOpenVERegisterDialog__DelegateSignature(const struct FAccountUserData& UserData);
	void BndEvt__PatchNotesButton1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__PlayerProfileTab_K2Node_ComponentBoundEvent_23_OnGoToMainMenu__DelegateSignature();
	void BndEvt__HomeTAB_K2Node_ComponentBoundEvent_19_OnPlayerProfileClicked__DelegateSignature();
	void BndEvt__BP_StatisticsAndAchievementView_K2Node_ComponentBoundEvent_18_OnExitAchievements__DelegateSignature();
	void BndEvt__HomeTAB_K2Node_ComponentBoundEvent_17_OnAchievementsClicked__DelegateSignature(const struct FFCTAchievementList& AchievementList);
	void BndEvt__PlayNow_TAB_K2Node_ComponentBoundEvent_27_OnCreatePrivateLobby__DelegateSignature();
	void BndEvt__SteamLobbyTAB_K2Node_ComponentBoundEvent_24_On_Customize__DelegateSignature();
	void BndEvt__PlayNow_TAB_K2Node_ComponentBoundEvent_22_OnCreatePublicLobby__DelegateSignature();
	void BndEvt__PlayNow_TAB_K2Node_ComponentBoundEvent_21_OnReturnToMainMenu__DelegateSignature();
	void BndEvt__PlayNow_TAB_K2Node_ComponentBoundEvent_20_OnFindGameClicked__DelegateSignature();
	void BndEvt__HomeTAB_K2Node_ComponentBoundEvent_16_OnCustomizationClicked__DelegateSignature();
	void BndEvt__Button_213_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void Set_Video_Play_Img_Invisible();
	void Set_Video_Play_Img_Visible();
	void BndEvt__But_PlayVideo_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__But_PlayVideo_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void Play_Video();
	void Stop_Video();
	void BndEvt__HomeTAB_K2Node_ComponentBoundEvent_8_OnRulesClicked__DelegateSignature();
	void VideoFinished();
	void BndEvt__HomeUC_K2Node_ComponentBoundEvent_0_OnPlayTutorialClicked__DelegateSignature();
	void BndEvt__bp_wi_Home_K2Node_ComponentBoundEvent_9_OnOptionsClicked__DelegateSignature();
	void BndEvt__bp_wi_Home_K2Node_ComponentBoundEvent_7_OnQuitGameClicked__DelegateSignature();
	void BndEvt__bp_wi_Home_K2Node_ComponentBoundEvent_6_OnFindGameClicked__DelegateSignature();
	void BndEvt__bp_wi_PlayTutorial_K2Node_ComponentBoundEvent_5_OnBackClicked__DelegateSignature();
	void SetVersionIDField();
	void Construct();
	void OnSuccess_B9378A8D465E7856DB1468AF0328F6B6();
	void OnFail_B9378A8D465E7856DB1468AF0328F6B6();
	void OnSuccess_BC8B9EB046D73BDD4E89D1AB1DD3B036(int32 Code, const class FString& Message);
	void OnFail_BC8B9EB046D73BDD4E89D1AB1DD3B036(int32 Code, const class FString& Message);
	void OnSuccess_4E4E84904AFA203F82FB62A5B8EECCB9(class APlayerController* PlayerController);
	void OnFailure_4E4E84904AFA203F82FB62A5B8EECCB9(class APlayerController* PlayerController);
	void OnSuccess_5B9E82434AB6E4FD69FEDDBFFF5C834D(class APlayerController* PlayerController);
	void OnFailure_5B9E82434AB6E4FD69FEDDBFFF5C834D(class APlayerController* PlayerController);
	void OnSuccess_8DA8E58E4E7AA20B298D798AE3D41F57();
	void OnFail_8DA8E58E4E7AA20B298D798AE3D41F57();
	void OnSuccess_DCA1EC5848BFB8053C6282BF41E26E35(const struct FAccelByteModelsInfoPartyResponse& PartyInfo);
	void OnFail_DCA1EC5848BFB8053C6282BF41E26E35();
	void OnComplete_5E60BF2C47B2B8A1DD4F7DBA96C922DD(class APlayerController* PlayerController);
	void OnSuccess_C876F6BF495BBB91FB6E659D00D7ABBC(const struct FVersusEvilDocumentsPayload& Payload, const class FString& Result, int32 Code);
	void OnError_C876F6BF495BBB91FB6E659D00D7ABBC(const class FString& Result, int32 Code);
	void OnSuccess_7D17B19F44E1D15E139FDFA27ACD31C5(const struct FAccountUserData& Result, const class FString& Message, int32 Code);
	void OnError_7D17B19F44E1D15E139FDFA27ACD31C5(const class FString& Message, int32 Code);
	void OnSuccess_C359F8744FAE62FC3F13DC94DE8CD946();
	void OnFail_C359F8744FAE62FC3F13DC94DE8CD946();
	void OnSuccess_D3F6D49E4112613F53D8AE84834C9AF6();
	void OnFail_D3F6D49E4112613F53D8AE84834C9AF6();
	void OnSuccess_4E4E84904AFA203F82FB62A5A43AFC3A(class APlayerController* PlayerController);
	void OnFailure_4E4E84904AFA203F82FB62A5A43AFC3A(class APlayerController* PlayerController);
	void OnSuccess_4E4E84904AFA203F82FB62A56480695F(class APlayerController* PlayerController);
	void OnFailure_4E4E84904AFA203F82FB62A56480695F(class APlayerController* PlayerController);
	void OnSuccess_5B9E82434AB6E4FD69FEDDBF2A481E6F(class APlayerController* PlayerController);
	void OnFailure_5B9E82434AB6E4FD69FEDDBF2A481E6F(class APlayerController* PlayerController);
	void OnComplete_5E60BF2C47B2B8A1DD4F7DBAD8DCC7D5(class APlayerController* PlayerController);
	void OnSuccess_5B9E82434AB6E4FD69FEDDBF233226AB(class APlayerController* PlayerController);
	void OnFailure_5B9E82434AB6E4FD69FEDDBF233226AB(class APlayerController* PlayerController);
	void OnSuccess_1247F6854987FC4EEA1727B975A0D876(const struct FAccelByteModelsPartyJoinResponse& PartyInfo);
	void OnFail_1247F6854987FC4EEA1727B975A0D876(const struct FAccelByteModelsPartyJoinResponse& PartyInfo);
	void OnFailPartyFull_1247F6854987FC4EEA1727B975A0D876(const struct FAccelByteModelsPartyJoinResponse& PartyInfo);
	void OnFailCrossplayRestricted_1247F6854987FC4EEA1727B975A0D876(const struct FAccelByteModelsPartyJoinResponse& PartyInfo);
	void OnSuccess_9C2F286A4FA09DA761B30184773C0B55();
	void OnFail_9C2F286A4FA09DA761B30184773C0B55();
	void OnSuccess_1247F6854987FC4EEA1727B9A9CE7D90(const struct FAccelByteModelsPartyJoinResponse& PartyInfo);
	void OnFail_1247F6854987FC4EEA1727B9A9CE7D90(const struct FAccelByteModelsPartyJoinResponse& PartyInfo);
	void OnFailPartyFull_1247F6854987FC4EEA1727B9A9CE7D90(const struct FAccelByteModelsPartyJoinResponse& PartyInfo);
	void OnFailCrossplayRestricted_1247F6854987FC4EEA1727B9A9CE7D90(const struct FAccelByteModelsPartyJoinResponse& PartyInfo);
	void OnSuccess_9C2F286A4FA09DA761B30184AB52AEB3();
	void OnFail_9C2F286A4FA09DA761B30184AB52AEB3();
	void OnComplete_5E60BF2C47B2B8A1DD4F7DBA4AA7873B(class APlayerController* PlayerController);
	void ChangeTAB(E_StartScreenTabs Start_Screen_Tab_State);
	void Initialize_Guest_Lobby();
	void SetupVersusEvilLogin(const struct FAccountUserData& UserData);
	void ShowThankYouNote();
	void RemoveLoadingSpinners();
	void SetPlatformRenderingDisabled(bool RenderingDisabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bp_wi_StartScreen_C">();
	}
	static class Ubp_wi_StartScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ubp_wi_StartScreen_C>();
	}
};
static_assert(alignof(Ubp_wi_StartScreen_C) == 0x000008, "Wrong alignment on Ubp_wi_StartScreen_C");
static_assert(sizeof(Ubp_wi_StartScreen_C) == 0x000458, "Wrong size on Ubp_wi_StartScreen_C");
static_assert(offsetof(Ubp_wi_StartScreen_C, UberGraphFrame) == 0x000260, "Member 'Ubp_wi_StartScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, FadeInPlayImage) == 0x000268, "Member 'Ubp_wi_StartScreen_C::FadeInPlayImage' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, FadeInVideoCanvas) == 0x000270, "Member 'Ubp_wi_StartScreen_C::FadeInVideoCanvas' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, AchievementOverlay) == 0x000278, "Member 'Ubp_wi_StartScreen_C::AchievementOverlay' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, Background) == 0x000280, "Member 'Ubp_wi_StartScreen_C::Background' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, bg_side) == 0x000288, "Member 'Ubp_wi_StartScreen_C::bg_side' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, bg_vignette) == 0x000290, "Member 'Ubp_wi_StartScreen_C::bg_vignette' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, BP_AccelByteUserSearch) == 0x000298, "Member 'Ubp_wi_StartScreen_C::BP_AccelByteUserSearch' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, BP_StatisticsAndAchievementView) == 0x0002A0, "Member 'Ubp_wi_StartScreen_C::BP_StatisticsAndAchievementView' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, bp_wi_AccelByte_ProtoMinusFriends) == 0x0002A8, "Member 'Ubp_wi_StartScreen_C::bp_wi_AccelByte_ProtoMinusFriends' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, But_CloseVideo) == 0x0002B0, "Member 'Ubp_wi_StartScreen_C::But_CloseVideo' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, But_PlayVideo) == 0x0002B8, "Member 'Ubp_wi_StartScreen_C::But_PlayVideo' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, CanvasPanel_2) == 0x0002C0, "Member 'Ubp_wi_StartScreen_C::CanvasPanel_2' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, CustomizeTAB) == 0x0002C8, "Member 'Ubp_wi_StartScreen_C::CustomizeTAB' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, FocusHandlerWI) == 0x0002D0, "Member 'Ubp_wi_StartScreen_C::FocusHandlerWI' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, HomeTAB) == 0x0002D8, "Member 'Ubp_wi_StartScreen_C::HomeTAB' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, Image_137) == 0x0002E0, "Member 'Ubp_wi_StartScreen_C::Image_137' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, Image_182) == 0x0002E8, "Member 'Ubp_wi_StartScreen_C::Image_182' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, Image_633) == 0x0002F0, "Member 'Ubp_wi_StartScreen_C::Image_633' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, Img_PlayPause) == 0x0002F8, "Member 'Ubp_wi_StartScreen_C::Img_PlayPause' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, LobbyCanvas) == 0x000300, "Member 'Ubp_wi_StartScreen_C::LobbyCanvas' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, MainSwitcher) == 0x000308, "Member 'Ubp_wi_StartScreen_C::MainSwitcher' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, OptionsTAB) == 0x000310, "Member 'Ubp_wi_StartScreen_C::OptionsTAB' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, PatchNotesButton1) == 0x000318, "Member 'Ubp_wi_StartScreen_C::PatchNotesButton1' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, PlayerProfileMainMenu_BP) == 0x000320, "Member 'Ubp_wi_StartScreen_C::PlayerProfileMainMenu_BP' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, PlayerProfileTab) == 0x000328, "Member 'Ubp_wi_StartScreen_C::PlayerProfileTab' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, PlayNow_TAB) == 0x000330, "Member 'Ubp_wi_StartScreen_C::PlayNow_TAB' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, PlayTutorialTAB) == 0x000338, "Member 'Ubp_wi_StartScreen_C::PlayTutorialTAB' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, SteamLobbyTAB) == 0x000340, "Member 'Ubp_wi_StartScreen_C::SteamLobbyTAB' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, Text_ReadVersionID) == 0x000348, "Member 'Ubp_wi_StartScreen_C::Text_ReadVersionID' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, ThankYouNoteWI) == 0x000350, "Member 'Ubp_wi_StartScreen_C::ThankYouNoteWI' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, Title) == 0x000358, "Member 'Ubp_wi_StartScreen_C::Title' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, VideoPlayerCanvas) == 0x000360, "Member 'Ubp_wi_StartScreen_C::VideoPlayerCanvas' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, WidgetSwitcher_StartMenuTabs) == 0x000368, "Member 'Ubp_wi_StartScreen_C::WidgetSwitcher_StartMenuTabs' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, SessionBUttonList) == 0x000370, "Member 'Ubp_wi_StartScreen_C::SessionBUttonList' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, AudioPlayer) == 0x000380, "Member 'Ubp_wi_StartScreen_C::AudioPlayer' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, MediaPlayer) == 0x000388, "Member 'Ubp_wi_StartScreen_C::MediaPlayer' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, MenuSound) == 0x000390, "Member 'Ubp_wi_StartScreen_C::MenuSound' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, RulesButtonClicked) == 0x000398, "Member 'Ubp_wi_StartScreen_C::RulesButtonClicked' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, NewVar_0) == 0x0003A0, "Member 'Ubp_wi_StartScreen_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, ShowPatchNotes) == 0x0003C8, "Member 'Ubp_wi_StartScreen_C::ShowPatchNotes' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, OnChangeTab) == 0x0003D0, "Member 'Ubp_wi_StartScreen_C::OnChangeTab' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, FriendsListTransitioning) == 0x0003E0, "Member 'Ubp_wi_StartScreen_C::FriendsListTransitioning' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, FriendsListToggleTimerHandle) == 0x0003E8, "Member 'Ubp_wi_StartScreen_C::FriendsListToggleTimerHandle' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, OnToggleFriendsList) == 0x0003F0, "Member 'Ubp_wi_StartScreen_C::OnToggleFriendsList' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, FriendsListTimeoutTimerHandle) == 0x000400, "Member 'Ubp_wi_StartScreen_C::FriendsListTimeoutTimerHandle' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, FriendLobbyList) == 0x000408, "Member 'Ubp_wi_StartScreen_C::FriendLobbyList' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, CreateLobbyList) == 0x000410, "Member 'Ubp_wi_StartScreen_C::CreateLobbyList' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, SteamLobbyType) == 0x000420, "Member 'Ubp_wi_StartScreen_C::SteamLobbyType' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, Currentinfinitycoins) == 0x000421, "Member 'Ubp_wi_StartScreen_C::Currentinfinitycoins' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, AllAchievements) == 0x000428, "Member 'Ubp_wi_StartScreen_C::AllAchievements' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, UnlockedAchievements) == 0x000438, "Member 'Ubp_wi_StartScreen_C::UnlockedAchievements' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, NewLaunch) == 0x000448, "Member 'Ubp_wi_StartScreen_C::NewLaunch' has a wrong offset!");
static_assert(offsetof(Ubp_wi_StartScreen_C, Preloader) == 0x000450, "Member 'Ubp_wi_StartScreen_C::Preloader' has a wrong offset!");

}
