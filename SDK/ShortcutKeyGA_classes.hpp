#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShortcutKeyGA

#include "Basic.hpp"

#include "SCT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShortcutKeyGA.ShortcutKeyGA_C
// 0x0000 (0x0440 - 0x0440)
class UShortcutKeyGA_C final : public UItem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutKeyGA_C">();
	}
	static class UShortcutKeyGA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutKeyGA_C>();
	}
};
static_assert(alignof(UShortcutKeyGA_C) == 0x000008, "Wrong alignment on UShortcutKeyGA_C");
static_assert(sizeof(UShortcutKeyGA_C) == 0x000440, "Wrong size on UShortcutKeyGA_C");

}
