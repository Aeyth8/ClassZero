#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WI_KarmaScoreTest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_WI_KarmaScoreTest.BP_WI_KarmaScoreTest_C
// 0x0028 (0x0288 - 0x0260)
class UBP_WI_KarmaScoreTest_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                             TextBlock_169;                                     // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0270(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_WI_KarmaScoreTest(int32 EntryPoint);
	void SetKarmaScoreText();
	void OnSuccess_ED2387DE46E803F30FF010B4A832CEF9(int32 CurrentKarma, int32 Code, const class FString& Message);
	void OnError_ED2387DE46E803F30FF010B4A832CEF9(int32 CurrentKarma, int32 Code, const class FString& Message);
	class FText GetText_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WI_KarmaScoreTest_C">();
	}
	static class UBP_WI_KarmaScoreTest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_WI_KarmaScoreTest_C>();
	}
};
static_assert(alignof(UBP_WI_KarmaScoreTest_C) == 0x000008, "Wrong alignment on UBP_WI_KarmaScoreTest_C");
static_assert(sizeof(UBP_WI_KarmaScoreTest_C) == 0x000288, "Wrong size on UBP_WI_KarmaScoreTest_C");
static_assert(offsetof(UBP_WI_KarmaScoreTest_C, UberGraphFrame) == 0x000260, "Member 'UBP_WI_KarmaScoreTest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_WI_KarmaScoreTest_C, TextBlock_169) == 0x000268, "Member 'UBP_WI_KarmaScoreTest_C::TextBlock_169' has a wrong offset!");
static_assert(offsetof(UBP_WI_KarmaScoreTest_C, Text) == 0x000270, "Member 'UBP_WI_KarmaScoreTest_C::Text' has a wrong offset!");

}
