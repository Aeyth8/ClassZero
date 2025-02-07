#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DrowningGE

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DrowningGE.DrowningGE_C
// 0x0000 (0x07B8 - 0x07B8)
class UDrowningGE_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DrowningGE_C">();
	}
	static class UDrowningGE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDrowningGE_C>();
	}
};
static_assert(alignof(UDrowningGE_C) == 0x000008, "Wrong alignment on UDrowningGE_C");
static_assert(sizeof(UDrowningGE_C) == 0x0007B8, "Wrong size on UDrowningGE_C");

}

