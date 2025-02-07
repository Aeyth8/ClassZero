#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PassengerLog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_PassengerLog.WI_PassengerLog_C
// 0x00C8 (0x0328 - 0x0260)
class UWI_PassengerLog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       Show;                                              // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAndHide;                                       // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BottomFrame;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Holder;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PassengerLine;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PassengerLine2;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PassengerLockFrame;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PassengerLogBackground;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Name1;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Name2;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Name3;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Name4;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Statement;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Statement;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 PlayerName1;                                       // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 PlayerName2;                                       // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 PlayerName3;                                       // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 PlayerName4;                                       // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CollectedLog;                                      // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WI_PassengerLog(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_PassengerLog_C">();
	}
	static class UWI_PassengerLog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_PassengerLog_C>();
	}
};
static_assert(alignof(UWI_PassengerLog_C) == 0x000008, "Wrong alignment on UWI_PassengerLog_C");
static_assert(sizeof(UWI_PassengerLog_C) == 0x000328, "Wrong size on UWI_PassengerLog_C");
static_assert(offsetof(UWI_PassengerLog_C, UberGraphFrame) == 0x000260, "Member 'UWI_PassengerLog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, Show) == 0x000268, "Member 'UWI_PassengerLog_C::Show' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, ShowAndHide) == 0x000270, "Member 'UWI_PassengerLog_C::ShowAndHide' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, BottomFrame) == 0x000278, "Member 'UWI_PassengerLog_C::BottomFrame' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, Canvas_Holder) == 0x000280, "Member 'UWI_PassengerLog_C::Canvas_Holder' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, PassengerLine) == 0x000288, "Member 'UWI_PassengerLog_C::PassengerLine' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, PassengerLine2) == 0x000290, "Member 'UWI_PassengerLog_C::PassengerLine2' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, PassengerLockFrame) == 0x000298, "Member 'UWI_PassengerLog_C::PassengerLockFrame' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, PassengerLogBackground) == 0x0002A0, "Member 'UWI_PassengerLog_C::PassengerLogBackground' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, Text_Name1) == 0x0002A8, "Member 'UWI_PassengerLog_C::Text_Name1' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, Text_Name2) == 0x0002B0, "Member 'UWI_PassengerLog_C::Text_Name2' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, Text_Name3) == 0x0002B8, "Member 'UWI_PassengerLog_C::Text_Name3' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, Text_Name4) == 0x0002C0, "Member 'UWI_PassengerLog_C::Text_Name4' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, Text_Statement) == 0x0002C8, "Member 'UWI_PassengerLog_C::Text_Statement' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, Statement) == 0x0002D0, "Member 'UWI_PassengerLog_C::Statement' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, PlayerName1) == 0x0002E0, "Member 'UWI_PassengerLog_C::PlayerName1' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, PlayerName2) == 0x0002F0, "Member 'UWI_PassengerLog_C::PlayerName2' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, PlayerName3) == 0x000300, "Member 'UWI_PassengerLog_C::PlayerName3' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, PlayerName4) == 0x000310, "Member 'UWI_PassengerLog_C::PlayerName4' has a wrong offset!");
static_assert(offsetof(UWI_PassengerLog_C, CollectedLog) == 0x000320, "Member 'UWI_PassengerLog_C::CollectedLog' has a wrong offset!");

}

