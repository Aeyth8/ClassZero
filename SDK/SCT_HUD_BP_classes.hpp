#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCT_HUD_BP

#include "Basic.hpp"

#include "SCT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SCT_HUD_BP.SCT_HUD_BP_C
// 0x0008 (0x0360 - 0x0358)
class ASCT_HUD_BP_C final : public ASCT_HUD
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SCT_HUD_BP_C">();
	}
	static class ASCT_HUD_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASCT_HUD_BP_C>();
	}
};
static_assert(alignof(ASCT_HUD_BP_C) == 0x000008, "Wrong alignment on ASCT_HUD_BP_C");
static_assert(sizeof(ASCT_HUD_BP_C) == 0x000360, "Wrong size on ASCT_HUD_BP_C");
static_assert(offsetof(ASCT_HUD_BP_C, DefaultSceneRoot) == 0x000358, "Member 'ASCT_HUD_BP_C::DefaultSceneRoot' has a wrong offset!");

}
