// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTE_PorteGameMode_generated_h
#error "PorteGameMode.generated.h already included, missing '#pragma once' in PorteGameMode.h"
#endif
#define PORTE_PorteGameMode_generated_h

#define Porte_Source_Porte_PorteGameMode_h_12_RPC_WRAPPERS
#define Porte_Source_Porte_PorteGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Porte_Source_Porte_PorteGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPorteGameMode(); \
	friend struct Z_Construct_UClass_APorteGameMode_Statics; \
public: \
	DECLARE_CLASS(APorteGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Porte"), PORTE_API) \
	DECLARE_SERIALIZER(APorteGameMode)


#define Porte_Source_Porte_PorteGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPorteGameMode(); \
	friend struct Z_Construct_UClass_APorteGameMode_Statics; \
public: \
	DECLARE_CLASS(APorteGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Porte"), PORTE_API) \
	DECLARE_SERIALIZER(APorteGameMode)


#define Porte_Source_Porte_PorteGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PORTE_API APorteGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APorteGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PORTE_API, APorteGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APorteGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PORTE_API APorteGameMode(APorteGameMode&&); \
	PORTE_API APorteGameMode(const APorteGameMode&); \
public:


#define Porte_Source_Porte_PorteGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PORTE_API APorteGameMode(APorteGameMode&&); \
	PORTE_API APorteGameMode(const APorteGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PORTE_API, APorteGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APorteGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APorteGameMode)


#define Porte_Source_Porte_PorteGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Porte_Source_Porte_PorteGameMode_h_9_PROLOG
#define Porte_Source_Porte_PorteGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Porte_Source_Porte_PorteGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Porte_Source_Porte_PorteGameMode_h_12_RPC_WRAPPERS \
	Porte_Source_Porte_PorteGameMode_h_12_INCLASS \
	Porte_Source_Porte_PorteGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Porte_Source_Porte_PorteGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Porte_Source_Porte_PorteGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Porte_Source_Porte_PorteGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Porte_Source_Porte_PorteGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Porte_Source_Porte_PorteGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTE_API UClass* StaticClass<class APorteGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Porte_Source_Porte_PorteGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
