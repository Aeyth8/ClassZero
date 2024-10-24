#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_Extinguishable

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "ExtinguisherTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_Extinguishable.I_Extinguishable_C
// 0x0000 (0x0028 - 0x0028)
class II_Extinguishable_C final : public IInterface
{
public:
	void HitByExtinguisher(class ACharacter* Character, float Damage, ExtinguisherTypes Extinguisher_Type, bool* Void);
	void HitByFire(bool* Void);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_Extinguishable_C">();
	}
	static class II_Extinguishable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_Extinguishable_C>();
	}
};
static_assert(alignof(II_Extinguishable_C) == 0x000008, "Wrong alignment on II_Extinguishable_C");
static_assert(sizeof(II_Extinguishable_C) == 0x000028, "Wrong size on II_Extinguishable_C");

}

