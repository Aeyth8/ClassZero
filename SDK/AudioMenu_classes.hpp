#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioMenu

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AudioMenu.AudioMenu_C
// 0x0010 (0x0230 - 0x0220)
class AAudioMenu_C final : public AActor
{
public:
	class UAkComponent*                           Ak;                                                // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AudioMenu_C">();
	}
	static class AAudioMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAudioMenu_C>();
	}
};
static_assert(alignof(AAudioMenu_C) == 0x000008, "Wrong alignment on AAudioMenu_C");
static_assert(sizeof(AAudioMenu_C) == 0x000230, "Wrong size on AAudioMenu_C");
static_assert(offsetof(AAudioMenu_C, Ak) == 0x000220, "Member 'AAudioMenu_C::Ak' has a wrong offset!");
static_assert(offsetof(AAudioMenu_C, DefaultSceneRoot) == 0x000228, "Member 'AAudioMenu_C::DefaultSceneRoot' has a wrong offset!");

}
