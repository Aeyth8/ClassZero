#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AccelBytePartyUserCard

#include "Basic.hpp"

#include "SCT_structs.hpp"
#include "AccelByteUe4Sdk_structs.hpp"


namespace SDK::Params
{

// Function BP_AccelBytePartyUserCard.BP_AccelBytePartyUserCard_C.ExecuteUbergraph_BP_AccelBytePartyUserCard
// 0x02D8 (0x02D8 - 0x0000)
struct BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFCTPublicPlayerData                   K2Node_CustomEvent_Payload;                        // 0x0008(0x0028)()
	int32                                         K2Node_CustomEvent_Code_3;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Message_3;                      // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFCTPublicPlayerData& Payload, int32 Code, const class FString& Message)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 Temp_string_Variable;                              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFCTPublicPlayerData                   Temp_struct_Variable;                              // 0x0070(0x0028)()
	TDelegate<void(int32 Code, const class FString& Message)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_Code_2;                         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Message_2;                      // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSimpleUserData                        K2Node_CustomEvent_UserData;                       // 0x00C0(0x0040)()
	TDelegate<void(const struct FSimpleUserData& UserData)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	struct FSimpleUserData                        Temp_struct_Variable_1;                            // 0x0110(0x0040)()
	TDelegate<void(const struct FFCTPlatformPlayerInfo& PlatformInfo, int32 Code, const class FString& Message)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	struct FFCTPlatformPlayerInfo                 K2Node_CustomEvent_PlatformInfo_1;                 // 0x0160(0x0020)()
	int32                                         K2Node_CustomEvent_Code_1;                         // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Message_1;                      // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFCTPlatformPlayerInfo                 K2Node_CustomEvent_PlatformInfo;                   // 0x0198(0x0020)()
	int32                                         K2Node_CustomEvent_Code;                           // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BC[0x4];                                      // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Message;                        // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFCTPlatformPlayerInfo& PlatformInfo, int32 Code, const class FString& Message)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x01D0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 Temp_string_Variable_1;                            // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F4[0x4];                                      // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFCTPlatformPlayerInfo                 Temp_struct_Variable_2;                            // 0x01F8(0x0020)()
	int32                                         Temp_int_Variable_2;                               // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21C[0x4];                                      // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0220(0x0018)()
	int32                                         K2Node_CustomEvent_Code_4;                         // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Message_4;                      // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_UserId;                         // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_UserName;                       // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsPartyLeader;                  // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPlayerProfileMainMenu_BP_C*>    CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0278(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPlayerProfileMainMenu_BP_C*            CallFunc_Array_Get_Item;                           // 0x0288(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FindLevelFromXP_Level;                    // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FindLevelFromXP_PercentageIntoLevel;      // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Code, const class FString& Message)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x02A0(0x0010)(ZeroConstructor, NoDestructor)
	class UFCTAccelByteCloudPublicProfileCallbackProxy* CallFunc_GetUserCloudPublicProfile_ReturnValue;    // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFCTGetUserPlatformInfoCallbackProxy*   CallFunc_GetUserPlatformInfo_ReturnValue;          // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFCTAccelByteGetUserUtils*              CallFunc_GetUserInfo_ReturnValue;                  // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard) == 0x000008, "Wrong alignment on BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard");
static_assert(sizeof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard) == 0x0002D8, "Wrong size on BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, EntryPoint) == 0x000000, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_Payload) == 0x000008, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_Code_3) == 0x000030, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_Code_3' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_Message_3) == 0x000038, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_Message_3' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, Temp_string_Variable) == 0x000058, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, Temp_int_Variable) == 0x000068, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, Temp_struct_Variable) == 0x000070, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CreateDelegate_OutputDelegate_1) == 0x000098, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_Code_2) == 0x0000A8, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_Code_2' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_Message_2) == 0x0000B0, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_Message_2' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_UserData) == 0x0000C0, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_UserData' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CreateDelegate_OutputDelegate_2) == 0x000100, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, Temp_struct_Variable_1) == 0x000110, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CreateDelegate_OutputDelegate_3) == 0x000150, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_PlatformInfo_1) == 0x000160, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_PlatformInfo_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_Code_1) == 0x000180, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_Code_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_Message_1) == 0x000188, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_Message_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_PlatformInfo) == 0x000198, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_PlatformInfo' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_Code) == 0x0001B8, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_Code' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_Message) == 0x0001C0, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001D0, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, Temp_string_Variable_1) == 0x0001E0, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, Temp_int_Variable_1) == 0x0001F0, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, Temp_struct_Variable_2) == 0x0001F8, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, Temp_int_Variable_2) == 0x000218, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_Conv_IntToText_ReturnValue) == 0x000220, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_Code_4) == 0x000238, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_Code_4' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_Message_4) == 0x000240, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_Message_4' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_UserId) == 0x000250, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_UserId' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_UserName) == 0x000260, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_UserName' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CustomEvent_IsPartyLeader) == 0x000270, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CustomEvent_IsPartyLeader' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000278, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_Array_Get_Item) == 0x000288, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000290, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_FindLevelFromXP_Level) == 0x000294, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_FindLevelFromXP_Level' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_FindLevelFromXP_PercentageIntoLevel) == 0x000298, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_FindLevelFromXP_PercentageIntoLevel' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_Add_IntInt_ReturnValue) == 0x00029C, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, K2Node_CreateDelegate_OutputDelegate_5) == 0x0002A0, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_GetUserCloudPublicProfile_ReturnValue) == 0x0002B0, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_GetUserCloudPublicProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_IsValid_ReturnValue) == 0x0002B8, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_GetUserPlatformInfo_ReturnValue) == 0x0002C0, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_GetUserPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_GetUserInfo_ReturnValue) == 0x0002C8, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_GetUserInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_IsValid_ReturnValue_1) == 0x0002D0, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard, CallFunc_IsValid_ReturnValue_2) == 0x0002D1, "Member 'BP_AccelBytePartyUserCard_C_ExecuteUbergraph_BP_AccelBytePartyUserCard::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_AccelBytePartyUserCard.BP_AccelBytePartyUserCard_C.Initialize
// 0x0028 (0x0028 - 0x0000)
struct BP_AccelBytePartyUserCard_C_Initialize final
{
public:
	class FString                                 UserId_0;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Username;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsPartyLeader;                                     // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AccelBytePartyUserCard_C_Initialize) == 0x000008, "Wrong alignment on BP_AccelBytePartyUserCard_C_Initialize");
static_assert(sizeof(BP_AccelBytePartyUserCard_C_Initialize) == 0x000028, "Wrong size on BP_AccelBytePartyUserCard_C_Initialize");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_Initialize, UserId_0) == 0x000000, "Member 'BP_AccelBytePartyUserCard_C_Initialize::UserId_0' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_Initialize, Username) == 0x000010, "Member 'BP_AccelBytePartyUserCard_C_Initialize::Username' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_Initialize, IsPartyLeader) == 0x000020, "Member 'BP_AccelBytePartyUserCard_C_Initialize::IsPartyLeader' has a wrong offset!");

// Function BP_AccelBytePartyUserCard.BP_AccelBytePartyUserCard_C.OnSuccess_8C88B5DD48589BED33D195A600A62014
// 0x0038 (0x0038 - 0x0000)
struct BP_AccelBytePartyUserCard_C_OnSuccess_8C88B5DD48589BED33D195A600A62014 final
{
public:
	struct FFCTPlatformPlayerInfo                 PlatformInfo;                                      // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Code;                                              // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Message;                                           // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AccelBytePartyUserCard_C_OnSuccess_8C88B5DD48589BED33D195A600A62014) == 0x000008, "Wrong alignment on BP_AccelBytePartyUserCard_C_OnSuccess_8C88B5DD48589BED33D195A600A62014");
static_assert(sizeof(BP_AccelBytePartyUserCard_C_OnSuccess_8C88B5DD48589BED33D195A600A62014) == 0x000038, "Wrong size on BP_AccelBytePartyUserCard_C_OnSuccess_8C88B5DD48589BED33D195A600A62014");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnSuccess_8C88B5DD48589BED33D195A600A62014, PlatformInfo) == 0x000000, "Member 'BP_AccelBytePartyUserCard_C_OnSuccess_8C88B5DD48589BED33D195A600A62014::PlatformInfo' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnSuccess_8C88B5DD48589BED33D195A600A62014, Code) == 0x000020, "Member 'BP_AccelBytePartyUserCard_C_OnSuccess_8C88B5DD48589BED33D195A600A62014::Code' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnSuccess_8C88B5DD48589BED33D195A600A62014, Message) == 0x000028, "Member 'BP_AccelBytePartyUserCard_C_OnSuccess_8C88B5DD48589BED33D195A600A62014::Message' has a wrong offset!");

// Function BP_AccelBytePartyUserCard.BP_AccelBytePartyUserCard_C.OnError_8C88B5DD48589BED33D195A600A62014
// 0x0038 (0x0038 - 0x0000)
struct BP_AccelBytePartyUserCard_C_OnError_8C88B5DD48589BED33D195A600A62014 final
{
public:
	struct FFCTPlatformPlayerInfo                 PlatformInfo;                                      // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Code;                                              // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Message;                                           // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AccelBytePartyUserCard_C_OnError_8C88B5DD48589BED33D195A600A62014) == 0x000008, "Wrong alignment on BP_AccelBytePartyUserCard_C_OnError_8C88B5DD48589BED33D195A600A62014");
static_assert(sizeof(BP_AccelBytePartyUserCard_C_OnError_8C88B5DD48589BED33D195A600A62014) == 0x000038, "Wrong size on BP_AccelBytePartyUserCard_C_OnError_8C88B5DD48589BED33D195A600A62014");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnError_8C88B5DD48589BED33D195A600A62014, PlatformInfo) == 0x000000, "Member 'BP_AccelBytePartyUserCard_C_OnError_8C88B5DD48589BED33D195A600A62014::PlatformInfo' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnError_8C88B5DD48589BED33D195A600A62014, Code) == 0x000020, "Member 'BP_AccelBytePartyUserCard_C_OnError_8C88B5DD48589BED33D195A600A62014::Code' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnError_8C88B5DD48589BED33D195A600A62014, Message) == 0x000028, "Member 'BP_AccelBytePartyUserCard_C_OnError_8C88B5DD48589BED33D195A600A62014::Message' has a wrong offset!");

// Function BP_AccelBytePartyUserCard.BP_AccelBytePartyUserCard_C.OnSuccess_B24BA4A448AF67C9DD5A93B60FC04454
// 0x0040 (0x0040 - 0x0000)
struct BP_AccelBytePartyUserCard_C_OnSuccess_B24BA4A448AF67C9DD5A93B60FC04454 final
{
public:
	struct FSimpleUserData                        UserData;                                          // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_AccelBytePartyUserCard_C_OnSuccess_B24BA4A448AF67C9DD5A93B60FC04454) == 0x000008, "Wrong alignment on BP_AccelBytePartyUserCard_C_OnSuccess_B24BA4A448AF67C9DD5A93B60FC04454");
static_assert(sizeof(BP_AccelBytePartyUserCard_C_OnSuccess_B24BA4A448AF67C9DD5A93B60FC04454) == 0x000040, "Wrong size on BP_AccelBytePartyUserCard_C_OnSuccess_B24BA4A448AF67C9DD5A93B60FC04454");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnSuccess_B24BA4A448AF67C9DD5A93B60FC04454, UserData) == 0x000000, "Member 'BP_AccelBytePartyUserCard_C_OnSuccess_B24BA4A448AF67C9DD5A93B60FC04454::UserData' has a wrong offset!");

// Function BP_AccelBytePartyUserCard.BP_AccelBytePartyUserCard_C.OnFail_B24BA4A448AF67C9DD5A93B60FC04454
// 0x0018 (0x0018 - 0x0000)
struct BP_AccelBytePartyUserCard_C_OnFail_B24BA4A448AF67C9DD5A93B60FC04454 final
{
public:
	int32                                         Code;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Message;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AccelBytePartyUserCard_C_OnFail_B24BA4A448AF67C9DD5A93B60FC04454) == 0x000008, "Wrong alignment on BP_AccelBytePartyUserCard_C_OnFail_B24BA4A448AF67C9DD5A93B60FC04454");
static_assert(sizeof(BP_AccelBytePartyUserCard_C_OnFail_B24BA4A448AF67C9DD5A93B60FC04454) == 0x000018, "Wrong size on BP_AccelBytePartyUserCard_C_OnFail_B24BA4A448AF67C9DD5A93B60FC04454");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnFail_B24BA4A448AF67C9DD5A93B60FC04454, Code) == 0x000000, "Member 'BP_AccelBytePartyUserCard_C_OnFail_B24BA4A448AF67C9DD5A93B60FC04454::Code' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnFail_B24BA4A448AF67C9DD5A93B60FC04454, Message) == 0x000008, "Member 'BP_AccelBytePartyUserCard_C_OnFail_B24BA4A448AF67C9DD5A93B60FC04454::Message' has a wrong offset!");

// Function BP_AccelBytePartyUserCard.BP_AccelBytePartyUserCard_C.OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD
// 0x0040 (0x0040 - 0x0000)
struct BP_AccelBytePartyUserCard_C_OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD final
{
public:
	struct FFCTPublicPlayerData                   Payload;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Code;                                              // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Message;                                           // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AccelBytePartyUserCard_C_OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD) == 0x000008, "Wrong alignment on BP_AccelBytePartyUserCard_C_OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD");
static_assert(sizeof(BP_AccelBytePartyUserCard_C_OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD) == 0x000040, "Wrong size on BP_AccelBytePartyUserCard_C_OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD, Payload) == 0x000000, "Member 'BP_AccelBytePartyUserCard_C_OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD::Payload' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD, Code) == 0x000028, "Member 'BP_AccelBytePartyUserCard_C_OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD::Code' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD, Message) == 0x000030, "Member 'BP_AccelBytePartyUserCard_C_OnSuccess_5D1EFB1E4BAE81E5010024AE230E13AD::Message' has a wrong offset!");

// Function BP_AccelBytePartyUserCard.BP_AccelBytePartyUserCard_C.OnError_5D1EFB1E4BAE81E5010024AE230E13AD
// 0x0018 (0x0018 - 0x0000)
struct BP_AccelBytePartyUserCard_C_OnError_5D1EFB1E4BAE81E5010024AE230E13AD final
{
public:
	int32                                         Code;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Message;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AccelBytePartyUserCard_C_OnError_5D1EFB1E4BAE81E5010024AE230E13AD) == 0x000008, "Wrong alignment on BP_AccelBytePartyUserCard_C_OnError_5D1EFB1E4BAE81E5010024AE230E13AD");
static_assert(sizeof(BP_AccelBytePartyUserCard_C_OnError_5D1EFB1E4BAE81E5010024AE230E13AD) == 0x000018, "Wrong size on BP_AccelBytePartyUserCard_C_OnError_5D1EFB1E4BAE81E5010024AE230E13AD");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnError_5D1EFB1E4BAE81E5010024AE230E13AD, Code) == 0x000000, "Member 'BP_AccelBytePartyUserCard_C_OnError_5D1EFB1E4BAE81E5010024AE230E13AD::Code' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_OnError_5D1EFB1E4BAE81E5010024AE230E13AD, Message) == 0x000008, "Member 'BP_AccelBytePartyUserCard_C_OnError_5D1EFB1E4BAE81E5010024AE230E13AD::Message' has a wrong offset!");

// Function BP_AccelBytePartyUserCard.BP_AccelBytePartyUserCard_C.SetPartyLeaderIconState
// 0x0018 (0x0018 - 0x0000)
struct BP_AccelBytePartyUserCard_C_SetPartyLeaderIconState final
{
public:
	class FString                                 LeaderId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AccelBytePartyUserCard_C_SetPartyLeaderIconState) == 0x000008, "Wrong alignment on BP_AccelBytePartyUserCard_C_SetPartyLeaderIconState");
static_assert(sizeof(BP_AccelBytePartyUserCard_C_SetPartyLeaderIconState) == 0x000018, "Wrong size on BP_AccelBytePartyUserCard_C_SetPartyLeaderIconState");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_SetPartyLeaderIconState, LeaderId) == 0x000000, "Member 'BP_AccelBytePartyUserCard_C_SetPartyLeaderIconState::LeaderId' has a wrong offset!");
static_assert(offsetof(BP_AccelBytePartyUserCard_C_SetPartyLeaderIconState, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000010, "Member 'BP_AccelBytePartyUserCard_C_SetPartyLeaderIconState::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

}
