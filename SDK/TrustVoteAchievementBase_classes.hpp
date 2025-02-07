#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TrustVoteAchievementBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TrustVoteAchievementBase.TrustVoteAchievementBase_C
// 0x0010 (0x0050 - 0x0040)
class UTrustVoteAchievementBase_C : public UAchievementObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAgendaGenericEvent*                    OnMatchEnded;                                      // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TrustVoteAchievementBase(int32 EntryPoint);
	void K2_Initialize();
	void QueryAchievementProgress();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TrustVoteAchievementBase_C">();
	}
	static class UTrustVoteAchievementBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTrustVoteAchievementBase_C>();
	}
};
static_assert(alignof(UTrustVoteAchievementBase_C) == 0x000008, "Wrong alignment on UTrustVoteAchievementBase_C");
static_assert(sizeof(UTrustVoteAchievementBase_C) == 0x000050, "Wrong size on UTrustVoteAchievementBase_C");
static_assert(offsetof(UTrustVoteAchievementBase_C, UberGraphFrame) == 0x000040, "Member 'UTrustVoteAchievementBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTrustVoteAchievementBase_C, OnMatchEnded) == 0x000048, "Member 'UTrustVoteAchievementBase_C::OnMatchEnded' has a wrong offset!");

}

