#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FocusHandlerWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FCT_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FocusHandlerWI.FocusHandlerWI_C
// 0x0010 (0x0270 - 0x0260)
class UFocusHandlerWI_C final : public UMenuFocusWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidget*                                OnFocusLostWidgetToFocus;                          // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FocusHandlerWI(int32 EntryPoint);
	void Destruct();
	void GamepadNavigation();
	void OnInitialized();
	class UWidget* GetLastFocusedWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FocusHandlerWI_C">();
	}
	static class UFocusHandlerWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFocusHandlerWI_C>();
	}
};
static_assert(alignof(UFocusHandlerWI_C) == 0x000008, "Wrong alignment on UFocusHandlerWI_C");
static_assert(sizeof(UFocusHandlerWI_C) == 0x000270, "Wrong size on UFocusHandlerWI_C");
static_assert(offsetof(UFocusHandlerWI_C, UberGraphFrame) == 0x000260, "Member 'UFocusHandlerWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFocusHandlerWI_C, OnFocusLostWidgetToFocus) == 0x000268, "Member 'UFocusHandlerWI_C::OnFocusLostWidgetToFocus' has a wrong offset!");

}
