#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_AAS

#include "Basic.hpp"

#include "BPFL_AAS_classes.hpp"
#include "BPFL_AAS_parameters.hpp"


namespace SDK
{

// Function BPFL_AAS.BPFL_AAS_C.Clamp Vector
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Min                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBPFL_AAS_C::Clamp_Vector(const struct FVector& Value, const struct FVector& Min, const struct FVector& Max, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "Clamp Vector");

	Params::BPFL_AAS_C_Clamp_Vector Parms{};

	Parms.Value = std::move(Value);
	Parms.Min = std::move(Min);
	Parms.Max = std::move(Max);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPFL_AAS.BPFL_AAS_C.Make Randomized Asteroid Transform
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRandomStream                    Random_Stream                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_AAS_AsteroidDefaults     Asteroid_Defaults                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_AAS_Parameters           Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)

void UBPFL_AAS_C::Make_Randomized_Asteroid_Transform(struct FRandomStream& Random_Stream, const struct FVector& Location, const struct FStruct_AAS_AsteroidDefaults& Asteroid_Defaults, const struct FStruct_AAS_Parameters& Parameters, class UObject* __WorldContext, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "Make Randomized Asteroid Transform");

	Params::BPFL_AAS_C_Make_Randomized_Asteroid_Transform Parms{};

	Parms.Random_Stream = std::move(Random_Stream);
	Parms.Location = std::move(Location);
	Parms.Asteroid_Defaults = std::move(Asteroid_Defaults);
	Parms.Parameters = std::move(Parameters);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Random_Stream = std::move(Parms.Random_Stream);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}


// Function BPFL_AAS.BPFL_AAS_C.Random Rotator in Range from Stream
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         Min                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRandomStream                    Stream                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator UBPFL_AAS_C::Random_Rotator_in_Range_from_Stream(const struct FRotator& Min, const struct FRotator& Max, struct FRandomStream& Stream, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "Random Rotator in Range from Stream");

	Params::BPFL_AAS_C_Random_Rotator_in_Range_from_Stream Parms{};

	Parms.Min = std::move(Min);
	Parms.Max = std::move(Max);
	Parms.Stream = std::move(Stream);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Stream = std::move(Parms.Stream);

	return Parms.ReturnValue;
}


// Function BPFL_AAS.BPFL_AAS_C.Rotator + Rotator
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         Rotator_A                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         Rotator_B                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator UBPFL_AAS_C::Rotator_Plus_Rotator(const struct FRotator& Rotator_A, const struct FRotator& Rotator_B, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "Rotator + Rotator");

	Params::BPFL_AAS_C_Rotator_Plus_Rotator Parms{};

	Parms.Rotator_A = std::move(Rotator_A);
	Parms.Rotator_B = std::move(Rotator_B);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPFL_AAS.BPFL_AAS_C.Random Vector in Range from Stream
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Min                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream                    Stream                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBPFL_AAS_C::Random_Vector_in_Range_from_Stream(const struct FVector& Min, const struct FVector& Max, struct FRandomStream& Stream, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "Random Vector in Range from Stream");

	Params::BPFL_AAS_C_Random_Vector_in_Range_from_Stream Parms{};

	Parms.Min = std::move(Min);
	Parms.Max = std::move(Max);
	Parms.Stream = std::move(Stream);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Stream = std::move(Parms.Stream);

	return Parms.ReturnValue;
}


// Function BPFL_AAS.BPFL_AAS_C.Calculate Orbit Position
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Center                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Angle_in_Orbit                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Orbit_X_Width                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Orbit_Y_Length                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          New_Location                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AAS_C::Calculate_Orbit_Position(const struct FVector& Center, const struct FRotator& Direction, float Angle_in_Orbit, float Orbit_X_Width, float Orbit_Y_Length, class UObject* __WorldContext, struct FVector* New_Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "Calculate Orbit Position");

	Params::BPFL_AAS_C_Calculate_Orbit_Position Parms{};

	Parms.Center = std::move(Center);
	Parms.Direction = std::move(Direction);
	Parms.Angle_in_Orbit = Angle_in_Orbit;
	Parms.Orbit_X_Width = Orbit_X_Width;
	Parms.Orbit_Y_Length = Orbit_Y_Length;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (New_Location != nullptr)
		*New_Location = std::move(Parms.New_Location);
}


// Function BPFL_AAS.BPFL_AAS_C.Get In Orbit Rotation of Location
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotator                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_AAS_C::Get_In_Orbit_Rotation_of_Location(const struct FVector& Location, const struct FTransform& Transform, class UObject* __WorldContext, struct FRotator* Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "Get In Orbit Rotation of Location");

	Params::BPFL_AAS_C_Get_In_Orbit_Rotation_of_Location Parms{};

	Parms.Location = std::move(Location);
	Parms.Transform = std::move(Transform);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Rotator != nullptr)
		*Rotator = std::move(Parms.Rotator);
}


// Function BPFL_AAS.BPFL_AAS_C.VectorToRotator
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Vector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotator                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_AAS_C::VectorToRotator(const struct FVector& Vector, class UObject* __WorldContext, struct FRotator* Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "VectorToRotator");

	Params::BPFL_AAS_C_VectorToRotator Parms{};

	Parms.Vector = std::move(Vector);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Rotator != nullptr)
		*Rotator = std::move(Parms.Rotator);
}


// Function BPFL_AAS.BPFL_AAS_C.Max (Vector)
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Vector_A                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Vector_B                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBPFL_AAS_C::Max__Vector_(const struct FVector& Vector_A, const struct FVector& Vector_B, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "Max (Vector)");

	Params::BPFL_AAS_C_Max__Vector_ Parms{};

	Parms.Vector_A = std::move(Vector_A);
	Parms.Vector_B = std::move(Vector_B);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPFL_AAS.BPFL_AAS_C.AddTransform
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       Transform_A                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FTransform                       Transform_B                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       New_Transform                                          (Parm, OutParm, IsPlainOldData, NoDestructor)

void UBPFL_AAS_C::AddTransform(const struct FTransform& Transform_A, const struct FTransform& Transform_B, class UObject* __WorldContext, struct FTransform* New_Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "AddTransform");

	Params::BPFL_AAS_C_AddTransform Parms{};

	Parms.Transform_A = std::move(Transform_A);
	Parms.Transform_B = std::move(Transform_B);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (New_Transform != nullptr)
		*New_Transform = std::move(Parms.New_Transform);
}


// Function BPFL_AAS.BPFL_AAS_C.GetSinNoiseValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AAS_C::GetSinNoiseValue(const struct FVector& Location, const struct FVector& Parameters, class UObject* __WorldContext, float* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "GetSinNoiseValue");

	Params::BPFL_AAS_C_GetSinNoiseValue Parms{};

	Parms.Location = std::move(Location);
	Parms.Parameters = std::move(Parameters);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BPFL_AAS.BPFL_AAS_C.GetSimpleNoiseValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AAS_C::GetSimpleNoiseValue(const struct FVector& Location, const struct FVector& Parameters, class UObject* __WorldContext, float* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "GetSimpleNoiseValue");

	Params::BPFL_AAS_C_GetSimpleNoiseValue Parms{};

	Parms.Location = std::move(Location);
	Parms.Parameters = std::move(Parameters);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BPFL_AAS.BPFL_AAS_C.MapThreshold
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Threshold                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBPFL_AAS_C::MapThreshold(float Value, float Threshold, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "MapThreshold");

	Params::BPFL_AAS_C_MapThreshold Parms{};

	Parms.Value = Value;
	Parms.Threshold = Threshold;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPFL_AAS.BPFL_AAS_C.AsteroidScaleShrinking
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OriginalScale                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Threshold                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Strength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Shrinked_Scale                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AAS_C::AsteroidScaleShrinking(float Value, const struct FVector& OriginalScale, float Threshold, float Strength, class UObject* __WorldContext, struct FVector* Shrinked_Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "AsteroidScaleShrinking");

	Params::BPFL_AAS_C_AsteroidScaleShrinking Parms{};

	Parms.Value = Value;
	Parms.OriginalScale = std::move(OriginalScale);
	Parms.Threshold = Threshold;
	Parms.Strength = Strength;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Shrinked_Scale != nullptr)
		*Shrinked_Scale = std::move(Parms.Shrinked_Scale);
}


// Function BPFL_AAS.BPFL_AAS_C.Get All AAS System Actors
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_AAS_V2Base_C*>         System_Actors                                          (Parm, OutParm)

void UBPFL_AAS_C::Get_All_AAS_System_Actors(class UObject* __WorldContext, TArray<class ABP_AAS_V2Base_C*>* System_Actors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "Get All AAS System Actors");

	Params::BPFL_AAS_C_Get_All_AAS_System_Actors Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (System_Actors != nullptr)
		*System_Actors = std::move(Parms.System_Actors);
}


// Function BPFL_AAS.BPFL_AAS_C.Get All AAS Follower Components
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBPC_AAS_Follower_C*>      Follower_Components                                    (Parm, OutParm, ContainsInstancedReference)

void UBPFL_AAS_C::Get_All_AAS_Follower_Components(class UObject* __WorldContext, TArray<class UBPC_AAS_Follower_C*>* Follower_Components)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "Get All AAS Follower Components");

	Params::BPFL_AAS_C_Get_All_AAS_Follower_Components Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Follower_Components != nullptr)
		*Follower_Components = std::move(Parms.Follower_Components);
}


// Function BPFL_AAS.BPFL_AAS_C.AsteroidFloatMapper
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Threshold                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Strength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBPFL_AAS_C::AsteroidFloatMapper(float Value, float Threshold, float Strength, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "AsteroidFloatMapper");

	Params::BPFL_AAS_C_AsteroidFloatMapper Parms{};

	Parms.Value = Value;
	Parms.Threshold = Threshold;
	Parms.Strength = Strength;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPFL_AAS.BPFL_AAS_C.MapThresholdNew
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Threshold                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBPFL_AAS_C::MapThresholdNew(float Value, float Threshold, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "MapThresholdNew");

	Params::BPFL_AAS_C_MapThresholdNew Parms{};

	Parms.Value = Value;
	Parms.Threshold = Threshold;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPFL_AAS.BPFL_AAS_C.AsteroidScaleShrinkingNew
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OriginalScale                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Threshold                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Strength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Shrinked_Scale                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AAS_C::AsteroidScaleShrinkingNew(float Value, const struct FVector& OriginalScale, float Threshold, float Strength, class UObject* __WorldContext, struct FVector* Shrinked_Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "AsteroidScaleShrinkingNew");

	Params::BPFL_AAS_C_AsteroidScaleShrinkingNew Parms{};

	Parms.Value = Value;
	Parms.OriginalScale = std::move(OriginalScale);
	Parms.Threshold = Threshold;
	Parms.Strength = Strength;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Shrinked_Scale != nullptr)
		*Shrinked_Scale = std::move(Parms.Shrinked_Scale);
}


// Function BPFL_AAS.BPFL_AAS_C.GetModifierData
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_AAS_Modifier             AAS_Modifier                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream                    Generation_Stream                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FRandomStream                    Randomness_Stream                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Bool_Value                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Float_Value                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AAS_C::GetModifierData(struct FStruct_AAS_Modifier& AAS_Modifier, struct FRandomStream& Generation_Stream, struct FRandomStream& Randomness_Stream, float Value, class UObject* __WorldContext, bool* Valid, bool* Bool_Value, float* Float_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AAS_C", "GetModifierData");

	Params::BPFL_AAS_C_GetModifierData Parms{};

	Parms.AAS_Modifier = std::move(AAS_Modifier);
	Parms.Generation_Stream = std::move(Generation_Stream);
	Parms.Randomness_Stream = std::move(Randomness_Stream);
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	AAS_Modifier = std::move(Parms.AAS_Modifier);
	Generation_Stream = std::move(Parms.Generation_Stream);
	Randomness_Stream = std::move(Parms.Randomness_Stream);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	if (Bool_Value != nullptr)
		*Bool_Value = Parms.Bool_Value;

	if (Float_Value != nullptr)
		*Float_Value = Parms.Float_Value;
}

}
