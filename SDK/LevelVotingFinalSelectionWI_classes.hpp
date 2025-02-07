#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelVotingFinalSelectionWI

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SCT_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LevelVotingFinalSelectionWI.LevelVotingFinalSelectionWI_C
// 0x00B8 (0x0318 - 0x0260)
class ULevelVotingFinalSelectionWI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       ShowAnimation;                                     // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BackgroundSwitcher;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderBackground;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LevelImage;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              LevelImageRoot;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LoadingBackground;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           LoadingImageRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                              LoadingThrobber;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootCanvas;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextOfLevel;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TravellingToText;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSelectedLevelData                     Data;                                              // 0x02C0(0x0058)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_LevelVotingFinalSelectionWI(int32 EntryPoint);
	void Countdown_To_Travel();
	void Initialize();
	void OnLoaded_D737E7284F946167D2484F9039DB5007(class UObject* Loaded);
	void Set_Level_Background();
	void Set_Level_Loading();
	void UpdateCountdownText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LevelVotingFinalSelectionWI_C">();
	}
	static class ULevelVotingFinalSelectionWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelVotingFinalSelectionWI_C>();
	}
};
static_assert(alignof(ULevelVotingFinalSelectionWI_C) == 0x000008, "Wrong alignment on ULevelVotingFinalSelectionWI_C");
static_assert(sizeof(ULevelVotingFinalSelectionWI_C) == 0x000318, "Wrong size on ULevelVotingFinalSelectionWI_C");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, UberGraphFrame) == 0x000260, "Member 'ULevelVotingFinalSelectionWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, ShowAnimation) == 0x000268, "Member 'ULevelVotingFinalSelectionWI_C::ShowAnimation' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, BackgroundSwitcher) == 0x000270, "Member 'ULevelVotingFinalSelectionWI_C::BackgroundSwitcher' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, HeaderBackground) == 0x000278, "Member 'ULevelVotingFinalSelectionWI_C::HeaderBackground' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, LevelImage) == 0x000280, "Member 'ULevelVotingFinalSelectionWI_C::LevelImage' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, LevelImageRoot) == 0x000288, "Member 'ULevelVotingFinalSelectionWI_C::LevelImageRoot' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, LoadingBackground) == 0x000290, "Member 'ULevelVotingFinalSelectionWI_C::LoadingBackground' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, LoadingImageRoot) == 0x000298, "Member 'ULevelVotingFinalSelectionWI_C::LoadingImageRoot' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, LoadingThrobber) == 0x0002A0, "Member 'ULevelVotingFinalSelectionWI_C::LoadingThrobber' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, RootCanvas) == 0x0002A8, "Member 'ULevelVotingFinalSelectionWI_C::RootCanvas' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, TextOfLevel) == 0x0002B0, "Member 'ULevelVotingFinalSelectionWI_C::TextOfLevel' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, TravellingToText) == 0x0002B8, "Member 'ULevelVotingFinalSelectionWI_C::TravellingToText' has a wrong offset!");
static_assert(offsetof(ULevelVotingFinalSelectionWI_C, Data) == 0x0002C0, "Member 'ULevelVotingFinalSelectionWI_C::Data' has a wrong offset!");

}

