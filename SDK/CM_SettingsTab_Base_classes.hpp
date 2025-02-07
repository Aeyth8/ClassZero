#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_SettingsTab_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CM_SettingsTab_Base.CM_SettingsTab_Base_C
// 0x0008 (0x0268 - 0x0260)
class UCM_SettingsTab_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_CM_SettingsTab_Base(int32 EntryPoint);
	void ActivateWidget();
	void OnInitialLoadComplete();
	void Set_Gamepad_Focus();
	void Update_Values();
	void Construct();
	void DeactivateWidget();
	void GetSpecialOptions(class Ubp_SpecialOptionsSave_C** SpecialOptions);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CM_SettingsTab_Base_C">();
	}
	static class UCM_SettingsTab_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCM_SettingsTab_Base_C>();
	}
};
static_assert(alignof(UCM_SettingsTab_Base_C) == 0x000008, "Wrong alignment on UCM_SettingsTab_Base_C");
static_assert(sizeof(UCM_SettingsTab_Base_C) == 0x000268, "Wrong size on UCM_SettingsTab_Base_C");
static_assert(offsetof(UCM_SettingsTab_Base_C, UberGraphFrame) == 0x000260, "Member 'UCM_SettingsTab_Base_C::UberGraphFrame' has a wrong offset!");

}

