#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VruumbaRaceWI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function VruumbaRaceWI.VruumbaRaceWI_C.ExecuteUbergraph_VruumbaRaceWI
// 0x0004 (0x0004 - 0x0000)
struct VruumbaRaceWI_C_ExecuteUbergraph_VruumbaRaceWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaRaceWI_C_ExecuteUbergraph_VruumbaRaceWI) == 0x000004, "Wrong alignment on VruumbaRaceWI_C_ExecuteUbergraph_VruumbaRaceWI");
static_assert(sizeof(VruumbaRaceWI_C_ExecuteUbergraph_VruumbaRaceWI) == 0x000004, "Wrong size on VruumbaRaceWI_C_ExecuteUbergraph_VruumbaRaceWI");
static_assert(offsetof(VruumbaRaceWI_C_ExecuteUbergraph_VruumbaRaceWI, EntryPoint) == 0x000000, "Member 'VruumbaRaceWI_C_ExecuteUbergraph_VruumbaRaceWI::EntryPoint' has a wrong offset!");

// Function VruumbaRaceWI.VruumbaRaceWI_C.Start timer
// 0x0018 (0x0018 - 0x0000)
struct VruumbaRaceWI_C_Start_timer final
{
public:
	class FText                                   RaceTime;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(VruumbaRaceWI_C_Start_timer) == 0x000008, "Wrong alignment on VruumbaRaceWI_C_Start_timer");
static_assert(sizeof(VruumbaRaceWI_C_Start_timer) == 0x000018, "Wrong size on VruumbaRaceWI_C_Start_timer");
static_assert(offsetof(VruumbaRaceWI_C_Start_timer, RaceTime) == 0x000000, "Member 'VruumbaRaceWI_C_Start_timer::RaceTime' has a wrong offset!");

// Function VruumbaRaceWI.VruumbaRaceWI_C.Player Best Time
// 0x0020 (0x0020 - 0x0000)
struct VruumbaRaceWI_C_Player_Best_Time final
{
public:
	class FText                                   PlayerBestTime;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaRaceWI_C_Player_Best_Time) == 0x000008, "Wrong alignment on VruumbaRaceWI_C_Player_Best_Time");
static_assert(sizeof(VruumbaRaceWI_C_Player_Best_Time) == 0x000020, "Wrong size on VruumbaRaceWI_C_Player_Best_Time");
static_assert(offsetof(VruumbaRaceWI_C_Player_Best_Time, PlayerBestTime) == 0x000000, "Member 'VruumbaRaceWI_C_Player_Best_Time::PlayerBestTime' has a wrong offset!");
static_assert(offsetof(VruumbaRaceWI_C_Player_Best_Time, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'VruumbaRaceWI_C_Player_Best_Time::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function VruumbaRaceWI.VruumbaRaceWI_C.NewHighestScore
// 0x0080 (0x0080 - 0x0000)
struct VruumbaRaceWI_C_NewHighestScore final
{
public:
	class FText                                   NewGlobalLead;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 RacerName;                                         // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                           RaceColor;                                         // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)(UObjectWrapper)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaRaceWI_C_NewHighestScore) == 0x000008, "Wrong alignment on VruumbaRaceWI_C_NewHighestScore");
static_assert(sizeof(VruumbaRaceWI_C_NewHighestScore) == 0x000080, "Wrong size on VruumbaRaceWI_C_NewHighestScore");
static_assert(offsetof(VruumbaRaceWI_C_NewHighestScore, NewGlobalLead) == 0x000000, "Member 'VruumbaRaceWI_C_NewHighestScore::NewGlobalLead' has a wrong offset!");
static_assert(offsetof(VruumbaRaceWI_C_NewHighestScore, RacerName) == 0x000018, "Member 'VruumbaRaceWI_C_NewHighestScore::RacerName' has a wrong offset!");
static_assert(offsetof(VruumbaRaceWI_C_NewHighestScore, RaceColor) == 0x000028, "Member 'VruumbaRaceWI_C_NewHighestScore::RaceColor' has a wrong offset!");
static_assert(offsetof(VruumbaRaceWI_C_NewHighestScore, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'VruumbaRaceWI_C_NewHighestScore::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(VruumbaRaceWI_C_NewHighestScore, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'VruumbaRaceWI_C_NewHighestScore::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaRaceWI_C_NewHighestScore, CallFunc_PlayAnimation_ReturnValue) == 0x000078, "Member 'VruumbaRaceWI_C_NewHighestScore::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

