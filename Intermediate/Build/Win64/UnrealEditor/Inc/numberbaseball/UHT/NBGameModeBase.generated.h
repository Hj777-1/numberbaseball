// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/NBGameModeBase.h"

#ifdef NUMBERBASEBALL_NBGameModeBase_generated_h
#error "NBGameModeBase.generated.h already included, missing '#pragma once' in NBGameModeBase.h"
#endif
#define NUMBERBASEBALL_NBGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANBGameModeBase **********************************************************
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBGameModeBase_NoRegister();

#define FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBGameModeBase(); \
	friend struct Z_Construct_UClass_ANBGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ANBGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/numberbaseball"), Z_Construct_UClass_ANBGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(ANBGameModeBase)


#define FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANBGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANBGameModeBase(ANBGameModeBase&&) = delete; \
	ANBGameModeBase(const ANBGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANBGameModeBase) \
	NO_API virtual ~ANBGameModeBase();


#define FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameModeBase_h_15_PROLOG
#define FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameModeBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANBGameModeBase;

// ********** End Class ANBGameModeBase ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
