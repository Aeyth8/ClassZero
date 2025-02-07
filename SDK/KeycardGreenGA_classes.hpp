#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeycardGreenGA

#include "Basic.hpp"

#include "KeycardGA_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass KeycardGreenGA.KeycardGreenGA_C
// 0x0000 (0x0448 - 0x0448)
class UKeycardGreenGA_C final : public UKeycardGA_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeycardGreenGA_C">();
	}
	static class UKeycardGreenGA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeycardGreenGA_C>();
	}
};
static_assert(alignof(UKeycardGreenGA_C) == 0x000008, "Wrong alignment on UKeycardGreenGA_C");
static_assert(sizeof(UKeycardGreenGA_C) == 0x000448, "Wrong size on UKeycardGreenGA_C");

}

