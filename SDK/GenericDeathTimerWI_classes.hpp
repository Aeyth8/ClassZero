#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericDeathTimerWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GenericDeathTimerWI.GenericDeathTimerWI_C
// 0x0040 (0x02A0 - 0x0260)
class UGenericDeathTimerWI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             ActionText;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundImage;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_318;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           InteractProgressBar;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          InProgress;                                        // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeStart;                                         // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GenericDeathTimerWI(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1();
	void Construct();
	void ProgressStop();
	void PreConstruct(bool IsDesignTime);
	void StartProgress(float Duration_0, const class FString& OptionalDescriptor, const class FText& Text);
	void CalculateProgress();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GenericDeathTimerWI_C">();
	}
	static class UGenericDeathTimerWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenericDeathTimerWI_C>();
	}
};
static_assert(alignof(UGenericDeathTimerWI_C) == 0x000008, "Wrong alignment on UGenericDeathTimerWI_C");
static_assert(sizeof(UGenericDeathTimerWI_C) == 0x0002A0, "Wrong size on UGenericDeathTimerWI_C");
static_assert(offsetof(UGenericDeathTimerWI_C, UberGraphFrame) == 0x000260, "Member 'UGenericDeathTimerWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGenericDeathTimerWI_C, FadeIn) == 0x000268, "Member 'UGenericDeathTimerWI_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UGenericDeathTimerWI_C, ActionText) == 0x000270, "Member 'UGenericDeathTimerWI_C::ActionText' has a wrong offset!");
static_assert(offsetof(UGenericDeathTimerWI_C, BackgroundImage) == 0x000278, "Member 'UGenericDeathTimerWI_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UGenericDeathTimerWI_C, Image_318) == 0x000280, "Member 'UGenericDeathTimerWI_C::Image_318' has a wrong offset!");
static_assert(offsetof(UGenericDeathTimerWI_C, InteractProgressBar) == 0x000288, "Member 'UGenericDeathTimerWI_C::InteractProgressBar' has a wrong offset!");
static_assert(offsetof(UGenericDeathTimerWI_C, InProgress) == 0x000290, "Member 'UGenericDeathTimerWI_C::InProgress' has a wrong offset!");
static_assert(offsetof(UGenericDeathTimerWI_C, TimeStart) == 0x000294, "Member 'UGenericDeathTimerWI_C::TimeStart' has a wrong offset!");
static_assert(offsetof(UGenericDeathTimerWI_C, Duration) == 0x000298, "Member 'UGenericDeathTimerWI_C::Duration' has a wrong offset!");

}

