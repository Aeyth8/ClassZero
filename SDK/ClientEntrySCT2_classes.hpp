#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClientEntrySCT2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ClientEntrySCT2.ClientEntrySCT2_C
// 0x0058 (0x0280 - 0x0228)
class AClientEntrySCT2_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class FString, class ATrophyBaseBP_C*>   AchievementTrophies;                               // 0x0230(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ClientEntrySCT2(int32 EntryPoint);
	void DebugUnblock(const class FString& UserId);
	void DebugBlock(const class FString& UserId);
	void OnSuccess_71E7415D4C11B897C1F1B78E521FE2E7(int32 Code, const class FString& Message);
	void OnFailure_71E7415D4C11B897C1F1B78E521FE2E7(int32 Code, const class FString& Message);
	void OnResponseSuccess_71E7415D4C11B897C1F1B78E521FE2E7(int32 Code, const class FString& Message);
	void OnSuccess_CCE6E8A6409BB694F55B209F152FB424(int32 Code, const class FString& Message);
	void OnFailure_CCE6E8A6409BB694F55B209F152FB424(int32 Code, const class FString& Message);
	void OnResponseSuccess_CCE6E8A6409BB694F55B209F152FB424(int32 Code, const class FString& Message);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClientEntrySCT2_C">();
	}
	static class AClientEntrySCT2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AClientEntrySCT2_C>();
	}
};
static_assert(alignof(AClientEntrySCT2_C) == 0x000008, "Wrong alignment on AClientEntrySCT2_C");
static_assert(sizeof(AClientEntrySCT2_C) == 0x000280, "Wrong size on AClientEntrySCT2_C");
static_assert(offsetof(AClientEntrySCT2_C, UberGraphFrame) == 0x000228, "Member 'AClientEntrySCT2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AClientEntrySCT2_C, AchievementTrophies) == 0x000230, "Member 'AClientEntrySCT2_C::AchievementTrophies' has a wrong offset!");

}

