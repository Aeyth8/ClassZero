#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VivoxActivityWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VivoxActivityWI.VivoxActivityWI_C
// 0x0050 (0x02B0 - 0x0260)
class UVivoxActivityWI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Speaker;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Speaker_Muted;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASCTPlayerState*                        PlayerState;                                       // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 IsMuted;                                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 IsNotTalking;                                      // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_VOIPIcon;                           // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Muted;                                          // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 IsTalking;                                         // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VivoxActivityWI(int32 EntryPoint);
	void Construct();
	void OnTalking(bool Is_Talking, bool Is_Local);
	void OnToggleMute(bool IsMuted_0);
	void Voice_Inactive();
	void Voice_Active();
	void SetUpVivoxTalkerBindings(class ASCTPlayerState* PlayerState_0);
	bool IsMutedByLocalPlayer();
	bool IsOwnerWidgetEntry();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VivoxActivityWI_C">();
	}
	static class UVivoxActivityWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVivoxActivityWI_C>();
	}
};
static_assert(alignof(UVivoxActivityWI_C) == 0x000008, "Wrong alignment on UVivoxActivityWI_C");
static_assert(sizeof(UVivoxActivityWI_C) == 0x0002B0, "Wrong size on UVivoxActivityWI_C");
static_assert(offsetof(UVivoxActivityWI_C, UberGraphFrame) == 0x000260, "Member 'UVivoxActivityWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVivoxActivityWI_C, FadeIn) == 0x000268, "Member 'UVivoxActivityWI_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UVivoxActivityWI_C, Image_Speaker) == 0x000270, "Member 'UVivoxActivityWI_C::Image_Speaker' has a wrong offset!");
static_assert(offsetof(UVivoxActivityWI_C, Image_Speaker_Muted) == 0x000278, "Member 'UVivoxActivityWI_C::Image_Speaker_Muted' has a wrong offset!");
static_assert(offsetof(UVivoxActivityWI_C, PlayerState) == 0x000280, "Member 'UVivoxActivityWI_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UVivoxActivityWI_C, IsMuted) == 0x000288, "Member 'UVivoxActivityWI_C::IsMuted' has a wrong offset!");
static_assert(offsetof(UVivoxActivityWI_C, IsNotTalking) == 0x000290, "Member 'UVivoxActivityWI_C::IsNotTalking' has a wrong offset!");
static_assert(offsetof(UVivoxActivityWI_C, WidgetSwitcher_VOIPIcon) == 0x000298, "Member 'UVivoxActivityWI_C::WidgetSwitcher_VOIPIcon' has a wrong offset!");
static_assert(offsetof(UVivoxActivityWI_C, Is_Muted) == 0x0002A0, "Member 'UVivoxActivityWI_C::Is_Muted' has a wrong offset!");
static_assert(offsetof(UVivoxActivityWI_C, IsTalking) == 0x0002A8, "Member 'UVivoxActivityWI_C::IsTalking' has a wrong offset!");

}
