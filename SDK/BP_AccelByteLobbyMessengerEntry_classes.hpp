#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AccelByteLobbyMessengerEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_AccelByteLobbyMessengerEntry.BP_AccelByteLobbyMessengerEntry_C
// 0x0048 (0x02A8 - 0x0260)
class UBP_AccelByteLobbyMessengerEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                 Image_5;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0270(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_39;                                      // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 UserNameString;                                    // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 BodyString;                                        // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Send;                                              // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_BP_AccelByteLobbyMessengerEntry(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AccelByteLobbyMessengerEntry_C">();
	}
	static class UBP_AccelByteLobbyMessengerEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AccelByteLobbyMessengerEntry_C>();
	}
};
static_assert(alignof(UBP_AccelByteLobbyMessengerEntry_C) == 0x000008, "Wrong alignment on UBP_AccelByteLobbyMessengerEntry_C");
static_assert(sizeof(UBP_AccelByteLobbyMessengerEntry_C) == 0x0002A8, "Wrong size on UBP_AccelByteLobbyMessengerEntry_C");
static_assert(offsetof(UBP_AccelByteLobbyMessengerEntry_C, UberGraphFrame) == 0x000260, "Member 'UBP_AccelByteLobbyMessengerEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteLobbyMessengerEntry_C, Image_5) == 0x000268, "Member 'UBP_AccelByteLobbyMessengerEntry_C::Image_5' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteLobbyMessengerEntry_C, TextBlock_1) == 0x000270, "Member 'UBP_AccelByteLobbyMessengerEntry_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteLobbyMessengerEntry_C, TextBlock_39) == 0x000278, "Member 'UBP_AccelByteLobbyMessengerEntry_C::TextBlock_39' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteLobbyMessengerEntry_C, UserNameString) == 0x000280, "Member 'UBP_AccelByteLobbyMessengerEntry_C::UserNameString' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteLobbyMessengerEntry_C, BodyString) == 0x000290, "Member 'UBP_AccelByteLobbyMessengerEntry_C::BodyString' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteLobbyMessengerEntry_C, Send) == 0x0002A0, "Member 'UBP_AccelByteLobbyMessengerEntry_C::Send' has a wrong offset!");

}
