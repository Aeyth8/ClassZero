#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CamShake_Emergency

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CamShake_Emergency.CamShake_Emergency_C
// 0x0000 (0x0180 - 0x0180)
class UCamShake_Emergency_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CamShake_Emergency_C">();
	}
	static class UCamShake_Emergency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCamShake_Emergency_C>();
	}
};
static_assert(alignof(UCamShake_Emergency_C) == 0x000010, "Wrong alignment on UCamShake_Emergency_C");
static_assert(sizeof(UCamShake_Emergency_C) == 0x000180, "Wrong size on UCamShake_Emergency_C");

}

