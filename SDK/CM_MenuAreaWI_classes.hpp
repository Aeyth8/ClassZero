#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_MenuAreaWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CM_MenuAreaWI.CM_MenuAreaWI_C
// 0x0008 (0x0268 - 0x0260)
class UCM_MenuAreaWI_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_CM_MenuAreaWI(int32 EntryPoint);
	void Set_As_Inactive();
	void Set_As_Active();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CM_MenuAreaWI_C">();
	}
	static class UCM_MenuAreaWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCM_MenuAreaWI_C>();
	}
};
static_assert(alignof(UCM_MenuAreaWI_C) == 0x000008, "Wrong alignment on UCM_MenuAreaWI_C");
static_assert(sizeof(UCM_MenuAreaWI_C) == 0x000268, "Wrong size on UCM_MenuAreaWI_C");
static_assert(offsetof(UCM_MenuAreaWI_C, UberGraphFrame) == 0x000260, "Member 'UCM_MenuAreaWI_C::UberGraphFrame' has a wrong offset!");

}
