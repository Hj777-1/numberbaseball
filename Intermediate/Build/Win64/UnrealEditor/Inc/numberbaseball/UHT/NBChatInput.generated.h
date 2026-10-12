// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/NBChatInput.h"

#ifdef NUMBERBASEBALL_NBChatInput_generated_h
#error "NBChatInput.generated.h already included, missing '#pragma once' in NBChatInput.h"
#endif
#define NUMBERBASEBALL_NBChatInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNBChatInput *************************************************************
#define FID_UE5_numberbaseball_Source_numberbaseball_UI_NBChatInput_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


NUMBERBASEBALL_API UClass* Z_Construct_UClass_UNBChatInput_NoRegister();

#define FID_UE5_numberbaseball_Source_numberbaseball_UI_NBChatInput_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNBChatInput(); \
	friend struct Z_Construct_UClass_UNBChatInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NUMBERBASEBALL_API UClass* Z_Construct_UClass_UNBChatInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UNBChatInput, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/numberbaseball"), Z_Construct_UClass_UNBChatInput_NoRegister) \
	DECLARE_SERIALIZER(UNBChatInput)


#define FID_UE5_numberbaseball_Source_numberbaseball_UI_NBChatInput_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNBChatInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNBChatInput(UNBChatInput&&) = delete; \
	UNBChatInput(const UNBChatInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNBChatInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNBChatInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNBChatInput) \
	NO_API virtual ~UNBChatInput();


#define FID_UE5_numberbaseball_Source_numberbaseball_UI_NBChatInput_h_15_PROLOG
#define FID_UE5_numberbaseball_Source_numberbaseball_UI_NBChatInput_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_numberbaseball_Source_numberbaseball_UI_NBChatInput_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_numberbaseball_Source_numberbaseball_UI_NBChatInput_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE5_numberbaseball_Source_numberbaseball_UI_NBChatInput_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNBChatInput;

// ********** End Class UNBChatInput ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_numberbaseball_Source_numberbaseball_UI_NBChatInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
