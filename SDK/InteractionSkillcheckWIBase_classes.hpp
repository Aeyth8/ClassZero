#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractionSkillcheckWIBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InteractionSkillcheckWIBase.InteractionSkillcheckWIBase_C
// 0x0178 (0x0430 - 0x02B8)
class UInteractionSkillcheckWIBase_C : public USkillcheckWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SequenceComplete;                                  // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HitTarget;                                         // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Complete;                                          // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ArrowHit5;                                         // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ArrowHit4;                                         // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Percent5;                                          // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Percent4;                                          // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ArrowHit3;                                         // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ArrowHit2;                                         // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ArrowHit1;                                         // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Percent3;                                          // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Percent2;                                          // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Percent1;                                          // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow1;                                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow2;                                            // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow3;                                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow4;                                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow5;                                            // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonImage;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UControllerIconHelperWI_C*              ControllerIconHelperWI;                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FailMarker;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              GamepadBox;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KeyboardText;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Prog_Counter1;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Prog_Counter2;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Prog_Counter3;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Prog_Counter4;                                     // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Prog_Counter5;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Prog_Target;                                       // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopLine;                                           // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         BarToCheck;                                        // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Stopped;                                           // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BD[0x3];                                      // 0x03BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ArrowCount;                                        // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OneShot;                                           // 0x03C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_3C5[0x3];                                      // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinChecksPerSequence;                              // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxChecksPerSequence;                              // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinHitPercent;                                     // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHitPercent;                                     // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoveSpeed;                                         // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinSpawnInterval;                                  // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxSpawnInterval;                                  // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChecksInSequence;                                  // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowPress;                                        // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFailed;                                          // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnOneShotCompleted;                                // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSequenceComplete;                                // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHitOne;                                          // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnFailed__DelegateSignature();
	void OnOneShotCompleted__DelegateSignature();
	void OnSequenceComplete__DelegateSignature();
	void OnHitOne__DelegateSignature();
	void ExecuteUbergraph_InteractionSkillcheckWIBase(int32 EntryPoint);
	void Animation_1_Finished();
	void Animation_2_Finished();
	void Animation_3_Finished();
	void Animation_4_Finished();
	void Animation_5_Finished();
	void Animation_Complete_Finished();
	void Destruct();
	void BndEvt__InteractionSkillcheckWIBase_ControllerIconHelperWI_K2Node_ComponentBoundEvent_3_OnShowControllerKeyText__DelegateSignature(const class FText& Text);
	void BndEvt__InteractionSkillcheckWIBase_ControllerIconHelperWI_K2Node_ComponentBoundEvent_2_OnShowControllerKeyIcon__DelegateSignature(class UTexture2D* Icon);
	void BndEvt__InteractionSkillcheckWIBase_ControllerIconHelperWI_K2Node_ComponentBoundEvent_1_OnShowControllerKeyIcon__DelegateSignature(class UTexture2D* Icon);
	void BndEvt__InteractionSkillcheckWIBase_ControllerIconHelperWI_K2Node_ComponentBoundEvent_0_OnResetControllerKey__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StartSkillcheck();
	void Close_Appear_Gate();
	void Open_Appear_Gate();
	void Audio_Stop_Hacking();
	void Audio_Hold_Hacking();
	void Force_Fail();
	void Audio_Stop_All();
	void Start_Spawn_Timer();
	void Audio_Round_Complete();
	void PreConstruct(bool IsDesignTime);
	void Fail_Sequence();
	void Completed();
	void Start_Arrow();
	void Stop_Animation_Timer();
	void Audio_Arrow_Appear();
	void Audio_Complete();
	void Audio_Fail();
	void Audio_Restart();
	void Audio_Hit_One();
	void Stop_And_Restart_Sequence();
	void Restart_Sequence();
	void Check_Percentage();
	void Construct();
	void Finished_8E7888464A09C5464ECA7A87D038F025();
	void SetArrowLocation(class UWidget* Arrow, class UProgressBar* ProgressBar);
	bool WithinRange(class UProgressBar* ProgressBar);
	void StopPercentAnimations();
	void PausePercentAnimAndPlayArrowHitAnim();
	void SetVisualRepresentationOfTargetArea();
	void SetTargetPositionAndSize(float TargetPosition, float TargetSize);
	void UpdateLocationOfArrowImages();
	void InitialAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InteractionSkillcheckWIBase_C">();
	}
	static class UInteractionSkillcheckWIBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractionSkillcheckWIBase_C>();
	}
};
static_assert(alignof(UInteractionSkillcheckWIBase_C) == 0x000008, "Wrong alignment on UInteractionSkillcheckWIBase_C");
static_assert(sizeof(UInteractionSkillcheckWIBase_C) == 0x000430, "Wrong size on UInteractionSkillcheckWIBase_C");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, UberGraphFrame) == 0x0002B8, "Member 'UInteractionSkillcheckWIBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, SequenceComplete) == 0x0002C0, "Member 'UInteractionSkillcheckWIBase_C::SequenceComplete' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, HitTarget) == 0x0002C8, "Member 'UInteractionSkillcheckWIBase_C::HitTarget' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Complete) == 0x0002D0, "Member 'UInteractionSkillcheckWIBase_C::Complete' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, ArrowHit5) == 0x0002D8, "Member 'UInteractionSkillcheckWIBase_C::ArrowHit5' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, ArrowHit4) == 0x0002E0, "Member 'UInteractionSkillcheckWIBase_C::ArrowHit4' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Percent5) == 0x0002E8, "Member 'UInteractionSkillcheckWIBase_C::Percent5' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Percent4) == 0x0002F0, "Member 'UInteractionSkillcheckWIBase_C::Percent4' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, ArrowHit3) == 0x0002F8, "Member 'UInteractionSkillcheckWIBase_C::ArrowHit3' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, ArrowHit2) == 0x000300, "Member 'UInteractionSkillcheckWIBase_C::ArrowHit2' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, ArrowHit1) == 0x000308, "Member 'UInteractionSkillcheckWIBase_C::ArrowHit1' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Percent3) == 0x000310, "Member 'UInteractionSkillcheckWIBase_C::Percent3' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Percent2) == 0x000318, "Member 'UInteractionSkillcheckWIBase_C::Percent2' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Percent1) == 0x000320, "Member 'UInteractionSkillcheckWIBase_C::Percent1' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Arrow1) == 0x000328, "Member 'UInteractionSkillcheckWIBase_C::Arrow1' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Arrow2) == 0x000330, "Member 'UInteractionSkillcheckWIBase_C::Arrow2' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Arrow3) == 0x000338, "Member 'UInteractionSkillcheckWIBase_C::Arrow3' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Arrow4) == 0x000340, "Member 'UInteractionSkillcheckWIBase_C::Arrow4' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Arrow5) == 0x000348, "Member 'UInteractionSkillcheckWIBase_C::Arrow5' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, BG) == 0x000350, "Member 'UInteractionSkillcheckWIBase_C::BG' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, ButtonImage) == 0x000358, "Member 'UInteractionSkillcheckWIBase_C::ButtonImage' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, ControllerIconHelperWI) == 0x000360, "Member 'UInteractionSkillcheckWIBase_C::ControllerIconHelperWI' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, FailMarker) == 0x000368, "Member 'UInteractionSkillcheckWIBase_C::FailMarker' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, GamepadBox) == 0x000370, "Member 'UInteractionSkillcheckWIBase_C::GamepadBox' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, KeyboardText) == 0x000378, "Member 'UInteractionSkillcheckWIBase_C::KeyboardText' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Prog_Counter1) == 0x000380, "Member 'UInteractionSkillcheckWIBase_C::Prog_Counter1' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Prog_Counter2) == 0x000388, "Member 'UInteractionSkillcheckWIBase_C::Prog_Counter2' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Prog_Counter3) == 0x000390, "Member 'UInteractionSkillcheckWIBase_C::Prog_Counter3' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Prog_Counter4) == 0x000398, "Member 'UInteractionSkillcheckWIBase_C::Prog_Counter4' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Prog_Counter5) == 0x0003A0, "Member 'UInteractionSkillcheckWIBase_C::Prog_Counter5' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Prog_Target) == 0x0003A8, "Member 'UInteractionSkillcheckWIBase_C::Prog_Target' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, TopLine) == 0x0003B0, "Member 'UInteractionSkillcheckWIBase_C::TopLine' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, BarToCheck) == 0x0003B8, "Member 'UInteractionSkillcheckWIBase_C::BarToCheck' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, Stopped) == 0x0003BC, "Member 'UInteractionSkillcheckWIBase_C::Stopped' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, ArrowCount) == 0x0003C0, "Member 'UInteractionSkillcheckWIBase_C::ArrowCount' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, OneShot) == 0x0003C4, "Member 'UInteractionSkillcheckWIBase_C::OneShot' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, MinChecksPerSequence) == 0x0003C8, "Member 'UInteractionSkillcheckWIBase_C::MinChecksPerSequence' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, MaxChecksPerSequence) == 0x0003CC, "Member 'UInteractionSkillcheckWIBase_C::MaxChecksPerSequence' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, MinHitPercent) == 0x0003D0, "Member 'UInteractionSkillcheckWIBase_C::MinHitPercent' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, MaxHitPercent) == 0x0003D4, "Member 'UInteractionSkillcheckWIBase_C::MaxHitPercent' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, MoveSpeed) == 0x0003D8, "Member 'UInteractionSkillcheckWIBase_C::MoveSpeed' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, MinSpawnInterval) == 0x0003DC, "Member 'UInteractionSkillcheckWIBase_C::MinSpawnInterval' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, MaxSpawnInterval) == 0x0003E0, "Member 'UInteractionSkillcheckWIBase_C::MaxSpawnInterval' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, ChecksInSequence) == 0x0003E4, "Member 'UInteractionSkillcheckWIBase_C::ChecksInSequence' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, AllowPress) == 0x0003E8, "Member 'UInteractionSkillcheckWIBase_C::AllowPress' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, OnFailed) == 0x0003F0, "Member 'UInteractionSkillcheckWIBase_C::OnFailed' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, OnOneShotCompleted) == 0x000400, "Member 'UInteractionSkillcheckWIBase_C::OnOneShotCompleted' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, OnSequenceComplete) == 0x000410, "Member 'UInteractionSkillcheckWIBase_C::OnSequenceComplete' has a wrong offset!");
static_assert(offsetof(UInteractionSkillcheckWIBase_C, OnHitOne) == 0x000420, "Member 'UInteractionSkillcheckWIBase_C::OnHitOne' has a wrong offset!");

}
