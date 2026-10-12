// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/NBGameStateBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNBGameStateBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBGameStateBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_numberbaseball();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ANBGameStateBase Function MulticastRPCBroadcastLoginMessage **************
struct NBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms
{
	FString InNameString;
};
static FName NAME_ANBGameStateBase_MulticastRPCBroadcastLoginMessage = FName(TEXT("MulticastRPCBroadcastLoginMessage"));
void ANBGameStateBase::MulticastRPCBroadcastLoginMessage(const FString& InNameString)
{
	NBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms Parms;
	Parms.InNameString=InNameString;
	UFunction* Func = FindFunctionChecked(NAME_ANBGameStateBase_MulticastRPCBroadcastLoginMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/NBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InNameString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InNameString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString = { "InNameString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms, InNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InNameString_MetaData), NewProp_InNameString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_InNameString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ANBGameStateBase, nullptr, "MulticastRPCBroadcastLoginMessage", Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers), sizeof(NBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(NBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANBGameStateBase::execMulticastRPCBroadcastLoginMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InNameString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRPCBroadcastLoginMessage_Implementation(Z_Param_InNameString);
	P_NATIVE_END;
}
// ********** End Class ANBGameStateBase Function MulticastRPCBroadcastLoginMessage ****************

// ********** Begin Class ANBGameStateBase *********************************************************
void ANBGameStateBase::StaticRegisterNativesANBGameStateBase()
{
	UClass* Class = ANBGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastRPCBroadcastLoginMessage", &ANBGameStateBase::execMulticastRPCBroadcastLoginMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ANBGameStateBase;
UClass* ANBGameStateBase::GetPrivateStaticClass()
{
	using TClass = ANBGameStateBase;
	if (!Z_Registration_Info_UClass_ANBGameStateBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NBGameStateBase"),
			Z_Registration_Info_UClass_ANBGameStateBase.InnerSingleton,
			StaticRegisterNativesANBGameStateBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ANBGameStateBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ANBGameStateBase_NoRegister()
{
	return ANBGameStateBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ANBGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/NBGameStateBase.h" },
		{ "ModuleRelativePath", "Game/NBGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANBGameStateBase_MulticastRPCBroadcastLoginMessage, "MulticastRPCBroadcastLoginMessage" }, // 3195831358
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_numberbaseball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBGameStateBase_Statics::ClassParams = {
	&ANBGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBGameStateBase()
{
	if (!Z_Registration_Info_UClass_ANBGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBGameStateBase.OuterSingleton, Z_Construct_UClass_ANBGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBGameStateBase.OuterSingleton;
}
ANBGameStateBase::ANBGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBGameStateBase);
ANBGameStateBase::~ANBGameStateBase() {}
// ********** End Class ANBGameStateBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h__Script_numberbaseball_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBGameStateBase, ANBGameStateBase::StaticClass, TEXT("ANBGameStateBase"), &Z_Registration_Info_UClass_ANBGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBGameStateBase), 1817996505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h__Script_numberbaseball_2933700676(TEXT("/Script/numberbaseball"),
	Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h__Script_numberbaseball_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h__Script_numberbaseball_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
