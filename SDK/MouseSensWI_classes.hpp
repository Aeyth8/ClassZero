#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MouseSensWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MouseSensWI.MouseSensWI_C
// 0x0020 (0x0280 - 0x0260)
class UMouseSensWI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USliderWI_C*                            SliderWI;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Ubp_SpecialOptionsSave_C*               Save;                                              // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MouseSensToSet;                                    // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MouseSensWI(int32 EntryPoint);
	void OnInitialLoadComplete();
	void BndEvt__SliderWI_K2Node_ComponentBoundEvent_0_OnRelease__DelegateSignature(float Value);
	void Construct();
	void Set_Look_Rate();
	void SetRateForAxis(class FName KeyMapping_Axis_Name, const struct FKey& KeyMapping_Key, bool InvertValue);
	void SetAxisSensitivity(float Sensitivity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MouseSensWI_C">();
	}
	static class UMouseSensWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMouseSensWI_C>();
	}
};
static_assert(alignof(UMouseSensWI_C) == 0x000008, "Wrong alignment on UMouseSensWI_C");
static_assert(sizeof(UMouseSensWI_C) == 0x000280, "Wrong size on UMouseSensWI_C");
static_assert(offsetof(UMouseSensWI_C, UberGraphFrame) == 0x000260, "Member 'UMouseSensWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMouseSensWI_C, SliderWI) == 0x000268, "Member 'UMouseSensWI_C::SliderWI' has a wrong offset!");
static_assert(offsetof(UMouseSensWI_C, Save) == 0x000270, "Member 'UMouseSensWI_C::Save' has a wrong offset!");
static_assert(offsetof(UMouseSensWI_C, MouseSensToSet) == 0x000278, "Member 'UMouseSensWI_C::MouseSensToSet' has a wrong offset!");

}
