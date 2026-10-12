// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/NBGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNBGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBGameModeBase();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_numberbaseball();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ANBGameModeBase **********************************************************
void ANBGameModeBase::StaticRegisterNativesANBGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ANBGameModeBase;
UClass* ANBGameModeBase::GetPrivateStaticClass()
{
	using TClass = ANBGameModeBase;
	if (!Z_Registration_Info_UClass_ANBGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NBGameModeBase"),
			Z_Registration_Info_UClass_ANBGameModeBase.InnerSingleton,
			StaticRegisterNativesANBGameModeBase,
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
	return Z_Registration_Info_UClass_ANBGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ANBGameModeBase_NoRegister()
{
	return ANBGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ANBGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/NBGameModeBase.h" },
		{ "ModuleRelativePath", "Game/NBGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANBGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANBGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_numberbaseball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANBGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANBGameModeBase_Statics::ClassParams = {
	&ANBGameModeBase::StaticClass,
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANBGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANBGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANBGameModeBase()
{
	if (!Z_Registration_Info_UClass_ANBGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANBGameModeBase.OuterSingleton, Z_Construct_UClass_ANBGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANBGameModeBase.OuterSingleton;
}
ANBGameModeBase::ANBGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANBGameModeBase);
ANBGameModeBase::~ANBGameModeBase() {}
// ********** End Class ANBGameModeBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameModeBase_h__Script_numberbaseball_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANBGameModeBase, ANBGameModeBase::StaticClass, TEXT("ANBGameModeBase"), &Z_Registration_Info_UClass_ANBGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANBGameModeBase), 35768935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameModeBase_h__Script_numberbaseball_797415906(TEXT("/Script/numberbaseball"),
	Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameModeBase_h__Script_numberbaseball_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameModeBase_h__Script_numberbaseball_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
