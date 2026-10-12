// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/NBGameStateBase.h"

#ifdef NUMBERBASEBALL_NBGameStateBase_generated_h
#error "NBGameStateBase.generated.h already included, missing '#pragma once' in NBGameStateBase.h"
#endif
#define NUMBERBASEBALL_NBGameStateBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANBGameStateBase *********************************************************
#define FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h_15_CALLBACK_WRAPPERS
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBGameStateBase_NoRegister();

#define FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBGameStateBase(); \
	friend struct Z_Construct_UClass_ANBGameStateBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBGameStateBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ANBGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/numberbaseball"), Z_Construct_UClass_ANBGameStateBase_NoRegister) \
	DECLARE_SERIALIZER(ANBGameStateBase)


#define FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANBGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANBGameStateBase(ANBGameStateBase&&) = delete; \
	ANBGameStateBase(const ANBGameStateBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANBGameStateBase) \
	NO_API virtual ~ANBGameStateBase();


#define FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h_12_PROLOG
#define FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h_15_CALLBACK_WRAPPERS \
	FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANBGameStateBase;

// ********** End Class ANBGameStateBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_numberbaseball_Source_numberbaseball_Game_NBGameStateBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
