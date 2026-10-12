// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/NBPlayerState.h"

#ifdef NUMBERBASEBALL_NBPlayerState_generated_h
#error "NBPlayerState.generated.h already included, missing '#pragma once' in NBPlayerState.h"
#endif
#define NUMBERBASEBALL_NBPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANBPlayerState ***********************************************************
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPlayerState_NoRegister();

#define FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBPlayerState(); \
	friend struct Z_Construct_UClass_ANBPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(ANBPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/numberbaseball"), Z_Construct_UClass_ANBPlayerState_NoRegister) \
	DECLARE_SERIALIZER(ANBPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNameString=NETFIELD_REP_START, \
		CurrentGuessCount, \
		MaxGuessCount, \
		NETFIELD_REP_END=MaxGuessCount	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANBPlayerState(ANBPlayerState&&) = delete; \
	ANBPlayerState(const ANBPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBPlayerState) \
	NO_API virtual ~ANBPlayerState();


#define FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerState_h_12_PROLOG
#define FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANBPlayerState;

// ********** End Class ANBPlayerState *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
