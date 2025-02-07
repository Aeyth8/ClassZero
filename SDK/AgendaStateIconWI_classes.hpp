#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AgendaStateIconWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AgendaStateIconWI.AgendaStateIconWI_C
// 0x0010 (0x0270 - 0x0260)
class UAgendaStateIconWI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                 Icon;                                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AgendaStateIconWI(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetState(EAgendaObjectState State);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AgendaStateIconWI_C">();
	}
	static class UAgendaStateIconWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAgendaStateIconWI_C>();
	}
};
static_assert(alignof(UAgendaStateIconWI_C) == 0x000008, "Wrong alignment on UAgendaStateIconWI_C");
static_assert(sizeof(UAgendaStateIconWI_C) == 0x000270, "Wrong size on UAgendaStateIconWI_C");
static_assert(offsetof(UAgendaStateIconWI_C, UberGraphFrame) == 0x000260, "Member 'UAgendaStateIconWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAgendaStateIconWI_C, Icon) == 0x000268, "Member 'UAgendaStateIconWI_C::Icon' has a wrong offset!");

}

