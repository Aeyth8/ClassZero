#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AgendaHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AgendaHUD.AgendaHUD_C
// 0x0038 (0x0298 - 0x0260)
class UAgendaHUD_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           AgendaHudCanvas;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         Description;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         Progression;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Sep;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AgendaHUD(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UpdateDescription(const class FString& Value);
	void UpdateProgression(const class FString& Value);
	void Initialize();
	void Bind_To_Events();

	void GetPlayerState(class ASCTPlayerState_MatchBP_C** AsSCTPlayer_State_Match_BP) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AgendaHUD_C">();
	}
	static class UAgendaHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAgendaHUD_C>();
	}
};
static_assert(alignof(UAgendaHUD_C) == 0x000008, "Wrong alignment on UAgendaHUD_C");
static_assert(sizeof(UAgendaHUD_C) == 0x000298, "Wrong size on UAgendaHUD_C");
static_assert(offsetof(UAgendaHUD_C, UberGraphFrame) == 0x000260, "Member 'UAgendaHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAgendaHUD_C, FadeIn) == 0x000268, "Member 'UAgendaHUD_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UAgendaHUD_C, AgendaHudCanvas) == 0x000270, "Member 'UAgendaHUD_C::AgendaHudCanvas' has a wrong offset!");
static_assert(offsetof(UAgendaHUD_C, BG) == 0x000278, "Member 'UAgendaHUD_C::BG' has a wrong offset!");
static_assert(offsetof(UAgendaHUD_C, Description) == 0x000280, "Member 'UAgendaHUD_C::Description' has a wrong offset!");
static_assert(offsetof(UAgendaHUD_C, Progression) == 0x000288, "Member 'UAgendaHUD_C::Progression' has a wrong offset!");
static_assert(offsetof(UAgendaHUD_C, Sep) == 0x000290, "Member 'UAgendaHUD_C::Sep' has a wrong offset!");

}

