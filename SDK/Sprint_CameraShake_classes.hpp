#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sprint_CameraShake

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Sprint_CameraShake.Sprint_CameraShake_C
// 0x0000 (0x0180 - 0x0180)
class USprint_CameraShake_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sprint_CameraShake_C">();
	}
	static class USprint_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USprint_CameraShake_C>();
	}
};
static_assert(alignof(USprint_CameraShake_C) == 0x000010, "Wrong alignment on USprint_CameraShake_C");
static_assert(sizeof(USprint_CameraShake_C) == 0x000180, "Wrong size on USprint_CameraShake_C");

}

