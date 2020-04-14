// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTE_PorteHUD_generated_h
#error "PorteHUD.generated.h already included, missing '#pragma once' in PorteHUD.h"
#endif
#define PORTE_PorteHUD_generated_h

#define Porte_Source_Porte_PorteHUD_h_12_RPC_WRAPPERS
#define Porte_Source_Porte_PorteHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Porte_Source_Porte_PorteHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPorteHUD(); \
	friend struct Z_Construct_UClass_APorteHUD_Statics; \
public: \
	DECLARE_CLASS(APorteHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Porte"), NO_API) \
	DECLARE_SERIALIZER(APorteHUD)


#define Porte_Source_Porte_PorteHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPorteHUD(); \
	friend struct Z_Construct_UClass_APorteHUD_Statics; \
public: \
	DECLARE_CLASS(APorteHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Porte"), NO_API) \
	DECLARE_SERIALIZER(APorteHUD)


#define Porte_Source_Porte_PorteHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APorteHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APorteHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APorteHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APorteHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APorteHUD(APorteHUD&&); \
	NO_API APorteHUD(const APorteHUD&); \
public:


#define Porte_Source_Porte_PorteHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APorteHUD(APorteHUD&&); \
	NO_API APorteHUD(const APorteHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APorteHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APorteHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APorteHUD)


#define Porte_Source_Porte_PorteHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define Porte_Source_Porte_PorteHUD_h_9_PROLOG
#define Porte_Source_Porte_PorteHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Porte_Source_Porte_PorteHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Porte_Source_Porte_PorteHUD_h_12_RPC_WRAPPERS \
	Porte_Source_Porte_PorteHUD_h_12_INCLASS \
	Porte_Source_Porte_PorteHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Porte_Source_Porte_PorteHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Porte_Source_Porte_PorteHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Porte_Source_Porte_PorteHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Porte_Source_Porte_PorteHUD_h_12_INCLASS_NO_PURE_DECLS \
	Porte_Source_Porte_PorteHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTE_API UClass* StaticClass<class APorteHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Porte_Source_Porte_PorteHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
