#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LockCameraRotationEffect

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LockCameraRotationEffect.LockCameraRotationEffect_C
// 0x0000 (0x07B8 - 0x07B8)
class ULockCameraRotationEffect_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LockCameraRotationEffect_C">();
	}
	static class ULockCameraRotationEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULockCameraRotationEffect_C>();
	}
};
static_assert(alignof(ULockCameraRotationEffect_C) == 0x000008, "Wrong alignment on ULockCameraRotationEffect_C");
static_assert(sizeof(ULockCameraRotationEffect_C) == 0x0007B8, "Wrong size on ULockCameraRotationEffect_C");

}
