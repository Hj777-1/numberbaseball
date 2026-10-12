// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/NBPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNBPawn() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPawn();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_numberbaseball();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ANBPawn ******************************************************************
void ANBPawn::StaticRegisterNativesANBPawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ANBPawn;
UClass* ANBPawn::GetPrivateStaticClass()
{
	using TClass = ANBPawn;
	if (!Z_Registration_Info_UClass_ANBPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NBPawn"),
			Z_Registration_Info_UClass_ANBPawn.InnerSingleton,
			StaticRegisterNativesANBPawn,
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
	return Z_Registration_Info_UClass_ANBPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ANBPawn_NoRegister()
{
	return ANBPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ANBPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/NBPawn.h" },
		{ "ModuleRelativePath", "Player/NBPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_numberbaseball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBPawn_Statics::ClassParams = {
	&ANBPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBPawn()
{
	if (!Z_Registration_Info_UClass_ANBPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBPawn.OuterSingleton, Z_Construct_UClass_ANBPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBPawn.OuterSingleton;
}
ANBPawn::ANBPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBPawn);
ANBPawn::~ANBPawn() {}
// ********** End Class ANBPawn ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPawn_h__Script_numberbaseball_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBPawn, ANBPawn::StaticClass, TEXT("ANBPawn"), &Z_Registration_Info_UClass_ANBPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBPawn), 3358510875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPawn_h__Script_numberbaseball_1815223975(TEXT("/Script/numberbaseball"),
	Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPawn_h__Script_numberbaseball_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPawn_h__Script_numberbaseball_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
