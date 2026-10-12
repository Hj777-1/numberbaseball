// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/NBPlayerController.h"

#ifdef NUMBERBASEBALL_NBPlayerController_generated_h
#error "NBPlayerController.generated.h already included, missing '#pragma once' in NBPlayerController.h"
#endif
#define NUMBERBASEBALL_NBPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANBPlayerController ******************************************************
#define FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerController_h_17_CALLBACK_WRAPPERS
NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPlayerController_NoRegister();

#define FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANBPlayerController(); \
	friend struct Z_Construct_UClass_ANBPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NUMBERBASEBALL_API UClass* Z_Construct_UClass_ANBPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ANBPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/numberbaseball"), Z_Construct_UClass_ANBPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ANBPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANBPlayerController(ANBPlayerController&&) = delete; \
	ANBPlayerController(const ANBPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANBPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANBPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANBPlayerController) \
	NO_API virtual ~ANBPlayerController();


#define FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerController_h_14_PROLOG
#define FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerController_h_17_CALLBACK_WRAPPERS \
	FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANBPlayerController;

// ********** End Class ANBPlayerController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_numberbaseball_Source_numberbaseball_Player_NBPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
