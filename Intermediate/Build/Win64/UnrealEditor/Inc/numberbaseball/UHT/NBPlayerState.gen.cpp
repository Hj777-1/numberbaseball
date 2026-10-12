// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/NBPlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNBPlayerState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPlayerState();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_numberbaseball();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ANBPlayerState ***********************************************************
void ANBPlayerState::StaticRegisterNativesANBPlayerState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ANBPlayerState;
UClass* ANBPlayerState::GetPrivateStaticClass()
{
	using TClass = ANBPlayerState;
	if (!Z_Registration_Info_UClass_ANBPlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NBPlayerState"),
			Z_Registration_Info_UClass_ANBPlayerState.InnerSingleton,
			StaticRegisterNativesANBPlayerState,
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
	return Z_Registration_Info_UClass_ANBPlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_ANBPlayerState_NoRegister()
{
	return ANBPlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ANBPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/NBPlayerState.h" },
		{ "ModuleRelativePath", "Player/NBPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameString_MetaData[] = {
		{ "ModuleRelativePath", "Player/NBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGuessCount_MetaData[] = {
		{ "ModuleRelativePath", "Player/NBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGuessCount_MetaData[] = {
		{ "ModuleRelativePath", "Player/NBPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNameString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGuessCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGuessCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANBPlayerState_Statics::NewProp_PlayerNameString = { "PlayerNameString", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBPlayerState, PlayerNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNameString_MetaData), NewProp_PlayerNameString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANBPlayerState_Statics::NewProp_CurrentGuessCount = { "CurrentGuessCount", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBPlayerState, CurrentGuessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGuessCount_MetaData), NewProp_CurrentGuessCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANBPlayerState_Statics::NewProp_MaxGuessCount = { "MaxGuessCount", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANBPlayerState, MaxGuessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGuessCount_MetaData), NewProp_MaxGuessCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANBPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBPlayerState_Statics::NewProp_PlayerNameString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBPlayerState_Statics::NewProp_CurrentGuessCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANBPlayerState_Statics::NewProp_MaxGuessCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANBPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_numberbaseball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBPlayerState_Statics::ClassParams = {
	&ANBPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANBPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBPlayerState()
{
	if (!Z_Registration_Info_UClass_ANBPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBPlayerState.OuterSingleton, Z_Construct_UClass_ANBPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBPlayerState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ANBPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_PlayerNameString(TEXT("PlayerNameString"));
	static FName Name_CurrentGuessCount(TEXT("CurrentGuessCount"));
	static FName Name_MaxGuessCount(TEXT("MaxGuessCount"));
	const bool bIsValid = true
		&& Name_PlayerNameString == ClassReps[(int32)ENetFields_Private::PlayerNameString].Property->GetFName()
		&& Name_CurrentGuessCount == ClassReps[(int32)ENetFields_Private::CurrentGuessCount].Property->GetFName()
		&& Name_MaxGuessCount == ClassReps[(int32)ENetFields_Private::MaxGuessCount].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANBPlayerState"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBPlayerState);
ANBPlayerState::~ANBPlayerState() {}
// ********** End Class ANBPlayerState *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerState_h__Script_numberbaseball_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBPlayerState, ANBPlayerState::StaticClass, TEXT("ANBPlayerState"), &Z_Registration_Info_UClass_ANBPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBPlayerState), 4009736438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerState_h__Script_numberbaseball_2058397928(TEXT("/Script/numberbaseball"),
	Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerState_h__Script_numberbaseball_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerState_h__Script_numberbaseball_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
