#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WI_KarmaScoreTest

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_WI_KarmaScoreTest.BP_WI_KarmaScoreTest_C.ExecuteUbergraph_BP_WI_KarmaScoreTest
// 0x00C8 (0x00C8 - 0x0000)
struct BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CurrentKarma_1;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Code_1;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Message_1;                      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 CurrentKarma, int32 Code, const class FString& Message)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_CurrentKarma;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Code;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_Message;                        // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 CurrentKarma, int32 Code, const class FString& Message)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 Temp_string_Variable;                              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00A0(0x0018)()
	class UFCTAccelByteKarmaStat*                 CallFunc_GetCurrentKarma_ReturnValue;              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest) == 0x000008, "Wrong alignment on BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest");
static_assert(sizeof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest) == 0x0000C8, "Wrong size on BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, EntryPoint) == 0x000000, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, K2Node_CustomEvent_CurrentKarma_1) == 0x000004, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::K2Node_CustomEvent_CurrentKarma_1' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, K2Node_CustomEvent_Code_1) == 0x000008, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::K2Node_CustomEvent_Code_1' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, K2Node_CustomEvent_Message_1) == 0x000010, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::K2Node_CustomEvent_Message_1' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, K2Node_CustomEvent_CurrentKarma) == 0x000030, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::K2Node_CustomEvent_CurrentKarma' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, K2Node_CustomEvent_Code) == 0x000034, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::K2Node_CustomEvent_Code' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, K2Node_CustomEvent_Message) == 0x000038, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, K2Node_CreateDelegate_OutputDelegate_1) == 0x000048, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, Temp_string_Variable) == 0x000058, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, Temp_int_Variable) == 0x000068, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, Temp_int_Variable_1) == 0x000080, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, CallFunc_Conv_IntToText_ReturnValue) == 0x0000A0, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, CallFunc_GetCurrentKarma_ReturnValue) == 0x0000B8, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::CallFunc_GetCurrentKarma_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_WI_KarmaScoreTest.BP_WI_KarmaScoreTest_C.OnSuccess_ED2387DE46E803F30FF010B4A832CEF9
// 0x0018 (0x0018 - 0x0000)
struct BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9 final
{
public:
	int32                                         CurrentKarma;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Code;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Message;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9) == 0x000008, "Wrong alignment on BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9");
static_assert(sizeof(BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9) == 0x000018, "Wrong size on BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9, CurrentKarma) == 0x000000, "Member 'BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9::CurrentKarma' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9, Code) == 0x000004, "Member 'BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9::Code' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9, Message) == 0x000008, "Member 'BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9::Message' has a wrong offset!");

// Function BP_WI_KarmaScoreTest.BP_WI_KarmaScoreTest_C.OnError_ED2387DE46E803F30FF010B4A832CEF9
// 0x0018 (0x0018 - 0x0000)
struct BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9 final
{
public:
	int32                                         CurrentKarma;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Code;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Message;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9) == 0x000008, "Wrong alignment on BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9");
static_assert(sizeof(BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9) == 0x000018, "Wrong size on BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9, CurrentKarma) == 0x000000, "Member 'BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9::CurrentKarma' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9, Code) == 0x000004, "Member 'BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9::Code' has a wrong offset!");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9, Message) == 0x000008, "Member 'BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9::Message' has a wrong offset!");

// Function BP_WI_KarmaScoreTest.BP_WI_KarmaScoreTest_C.GetText_0
// 0x0018 (0x0018 - 0x0000)
struct BP_WI_KarmaScoreTest_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(BP_WI_KarmaScoreTest_C_GetText_0) == 0x000008, "Wrong alignment on BP_WI_KarmaScoreTest_C_GetText_0");
static_assert(sizeof(BP_WI_KarmaScoreTest_C_GetText_0) == 0x000018, "Wrong size on BP_WI_KarmaScoreTest_C_GetText_0");
static_assert(offsetof(BP_WI_KarmaScoreTest_C_GetText_0, ReturnValue) == 0x000000, "Member 'BP_WI_KarmaScoreTest_C_GetText_0::ReturnValue' has a wrong offset!");

}

