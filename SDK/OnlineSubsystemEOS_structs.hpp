#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemEOS

#include "Basic.hpp"


namespace SDK
{

// Enum OnlineSubsystemEOS.EEOSUserInterface_SwitchToEASAccount_Choice
// NumValues: 0x0004
enum class EEOSUserInterface_SwitchToEASAccount_Choice : uint8
{
	SwitchToThisAccount                      = 0,
	LinkADifferentAccount                    = 1,
	CancelLinking                            = 2,
	EEOSUserInterface_SwitchToEASAccount_MAX = 3,
};

// Enum OnlineSubsystemEOS.EEOSNetworkingStack
// NumValues: 0x0004
enum class EEOSNetworkingStack : uint8
{
	Default                                  = 0,
	Legacy                                   = 1,
	Full                                     = 2,
	EEOSNetworkingStack_MAX                  = 3,
};

// Enum OnlineSubsystemEOS.EEOSApiVersion
// NumValues: 0x0005
enum class EEOSApiVersion : uint8
{
	V2021_01_22                              = 0,
	V2020_12_09                              = 1,
	V2020_12_02                              = 2,
	V2020_12_01                              = 3,
	EEOSApiVersion_MAX                       = 4,
};

// Enum OnlineSubsystemEOS.EPresenceAdvertisementType
// NumValues: 0x0004
enum class EPresenceAdvertisementType : uint8
{
	None                                     = 0,
	Party                                    = 1,
	Session                                  = 2,
	EPresenceAdvertisementType_MAX           = 3,
};

// Enum OnlineSubsystemEOS.EAuthenticationBehaviour
// NumValues: 0x0004
enum class EAuthenticationBehaviour : uint8
{
	NoEAS                                    = 0,
	EASOptional                              = 1,
	EASRequired                              = 2,
	EAuthenticationBehaviour_MAX             = 3,
};

// ScriptStruct OnlineSubsystemEOS.EOSUserInterface_CandidateEOSAccount
// 0x00B0 (0x00B0 - 0x0000)
struct FEOSUserInterface_CandidateEOSAccount final
{
public:
	class FText                                   DisplayName;                                       // 0x0000(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_18[0x98];                                      // 0x0018(0x0098)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FEOSUserInterface_CandidateEOSAccount) == 0x000008, "Wrong alignment on FEOSUserInterface_CandidateEOSAccount");
static_assert(sizeof(FEOSUserInterface_CandidateEOSAccount) == 0x0000B0, "Wrong size on FEOSUserInterface_CandidateEOSAccount");
static_assert(offsetof(FEOSUserInterface_CandidateEOSAccount, DisplayName) == 0x000000, "Member 'FEOSUserInterface_CandidateEOSAccount::DisplayName' has a wrong offset!");

}
