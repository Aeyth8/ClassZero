#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_wi_VotingBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "SlateCore_structs.hpp"
#include "E_AirLockVotes_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass bp_wi_VotingBox.bp_wi_VotingBox_C
// 0x01A8 (0x0408 - 0x0260)
class Ubp_wi_VotingBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       Blink_YesOrNo;                                     // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Blink;                                             // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_52;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Lower;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Showing;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_VotingOptionContainer;               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_AirLock;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Background;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_BG;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Circle;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Circle_Base;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Line1;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Line2;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Line3;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Line4;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Line5;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Line6;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Log;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_LowerBar;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_ShowingBackground;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Stage_1;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Stage_2;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Stage_3;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_TopLine;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_UpperBar;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OptionsBox;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_CharacterName;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Description;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Headline;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ObsoleteYesOrNo;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_State;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Time;                                         // 0x0360(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_TimeRemaining;                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnVoteCast;                                        // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                          PopUpSound;                                        // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_AirLockVotes                                Latest_E_AirLockVotes;                             // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            StageActive;                                       // 0x0390(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            StageInactive;                                     // 0x03B8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         LogNumber;                                         // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4[0x4];                                      // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   SurvivalTime;                                      // 0x03E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           CountdownTimer;                                    // 0x0400(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void OnVoteCast__DelegateSignature(int32 VotingOptionIndex);
	void ExecuteUbergraph_bp_wi_VotingBox(int32 EntryPoint);
	void State_Shut_Down_Cain_();
	void Anim_Blink_Description();
	void CountTime();
	void HandleSubVotingButtonClicked(int32 VotingOptionIndex);
	void Set_Stage(int32 Stage);
	void State_Who_Should_Die(const bool Only_One_Should_Die);
	void Sate_Do_You_Trust_Everyone();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Set_Revealing_Log_State();
	void State_Which_Log_To_See();
	void SetHeadline(const class FText& New_Headline);
	void Update(const class FString& New_Headline, const TArray<class FName>& New_Voting_Entries, bool Play_Pop_Up_Sound, E_AirLockVotes E_AirLockVotes, const TArray<class UTextureRenderTarget2D*>& PlayerImages, bool OneShouldDie);
	void CleanVoteEntries();
	void PlayPopUpSound();
	class FText Get_Time_Text();
	void SetCharacterNameBasedOnCainwoodCharWidget();
	void StartCountdown(float CountdownTime);
	void Countdown();
	void StopCountdown();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bp_wi_VotingBox_C">();
	}
	static class Ubp_wi_VotingBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ubp_wi_VotingBox_C>();
	}
};
static_assert(alignof(Ubp_wi_VotingBox_C) == 0x000008, "Wrong alignment on Ubp_wi_VotingBox_C");
static_assert(sizeof(Ubp_wi_VotingBox_C) == 0x000408, "Wrong size on Ubp_wi_VotingBox_C");
static_assert(offsetof(Ubp_wi_VotingBox_C, UberGraphFrame) == 0x000260, "Member 'Ubp_wi_VotingBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Blink_YesOrNo) == 0x000268, "Member 'Ubp_wi_VotingBox_C::Blink_YesOrNo' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Blink) == 0x000270, "Member 'Ubp_wi_VotingBox_C::Blink' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Border_52) == 0x000278, "Member 'Ubp_wi_VotingBox_C::Border_52' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Canvas_Lower) == 0x000280, "Member 'Ubp_wi_VotingBox_C::Canvas_Lower' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Canvas_Showing) == 0x000288, "Member 'Ubp_wi_VotingBox_C::Canvas_Showing' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, HorizontalBox_VotingOptionContainer) == 0x000290, "Member 'Ubp_wi_VotingBox_C::HorizontalBox_VotingOptionContainer' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_AirLock) == 0x000298, "Member 'Ubp_wi_VotingBox_C::Img_AirLock' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Background) == 0x0002A0, "Member 'Ubp_wi_VotingBox_C::Img_Background' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_BG) == 0x0002A8, "Member 'Ubp_wi_VotingBox_C::Img_BG' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Circle) == 0x0002B0, "Member 'Ubp_wi_VotingBox_C::Img_Circle' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Circle_Base) == 0x0002B8, "Member 'Ubp_wi_VotingBox_C::Img_Circle_Base' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Line1) == 0x0002C0, "Member 'Ubp_wi_VotingBox_C::Img_Line1' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Line2) == 0x0002C8, "Member 'Ubp_wi_VotingBox_C::Img_Line2' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Line3) == 0x0002D0, "Member 'Ubp_wi_VotingBox_C::Img_Line3' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Line4) == 0x0002D8, "Member 'Ubp_wi_VotingBox_C::Img_Line4' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Line5) == 0x0002E0, "Member 'Ubp_wi_VotingBox_C::Img_Line5' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Line6) == 0x0002E8, "Member 'Ubp_wi_VotingBox_C::Img_Line6' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Log) == 0x0002F0, "Member 'Ubp_wi_VotingBox_C::Img_Log' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_LowerBar) == 0x0002F8, "Member 'Ubp_wi_VotingBox_C::Img_LowerBar' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_ShowingBackground) == 0x000300, "Member 'Ubp_wi_VotingBox_C::Img_ShowingBackground' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Stage_1) == 0x000308, "Member 'Ubp_wi_VotingBox_C::Img_Stage_1' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Stage_2) == 0x000310, "Member 'Ubp_wi_VotingBox_C::Img_Stage_2' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_Stage_3) == 0x000318, "Member 'Ubp_wi_VotingBox_C::Img_Stage_3' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_TopLine) == 0x000320, "Member 'Ubp_wi_VotingBox_C::Img_TopLine' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Img_UpperBar) == 0x000328, "Member 'Ubp_wi_VotingBox_C::Img_UpperBar' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, OptionsBox) == 0x000330, "Member 'Ubp_wi_VotingBox_C::OptionsBox' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Text_CharacterName) == 0x000338, "Member 'Ubp_wi_VotingBox_C::Text_CharacterName' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Text_Description) == 0x000340, "Member 'Ubp_wi_VotingBox_C::Text_Description' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Text_Headline) == 0x000348, "Member 'Ubp_wi_VotingBox_C::Text_Headline' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Text_ObsoleteYesOrNo) == 0x000350, "Member 'Ubp_wi_VotingBox_C::Text_ObsoleteYesOrNo' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Text_State) == 0x000358, "Member 'Ubp_wi_VotingBox_C::Text_State' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Text_Time) == 0x000360, "Member 'Ubp_wi_VotingBox_C::Text_Time' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Text_TimeRemaining) == 0x000368, "Member 'Ubp_wi_VotingBox_C::Text_TimeRemaining' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, OnVoteCast) == 0x000370, "Member 'Ubp_wi_VotingBox_C::OnVoteCast' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, PopUpSound) == 0x000380, "Member 'Ubp_wi_VotingBox_C::PopUpSound' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, Latest_E_AirLockVotes) == 0x000388, "Member 'Ubp_wi_VotingBox_C::Latest_E_AirLockVotes' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, StageActive) == 0x000390, "Member 'Ubp_wi_VotingBox_C::StageActive' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, StageInactive) == 0x0003B8, "Member 'Ubp_wi_VotingBox_C::StageInactive' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, LogNumber) == 0x0003E0, "Member 'Ubp_wi_VotingBox_C::LogNumber' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, SurvivalTime) == 0x0003E8, "Member 'Ubp_wi_VotingBox_C::SurvivalTime' has a wrong offset!");
static_assert(offsetof(Ubp_wi_VotingBox_C, CountdownTimer) == 0x000400, "Member 'Ubp_wi_VotingBox_C::CountdownTimer' has a wrong offset!");

}
