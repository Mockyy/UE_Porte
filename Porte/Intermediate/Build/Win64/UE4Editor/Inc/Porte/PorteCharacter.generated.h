// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTE_PorteCharacter_generated_h
#error "PorteCharacter.generated.h already included, missing '#pragma once' in PorteCharacter.h"
#endif
#define PORTE_PorteCharacter_generated_h

#define Porte_Source_Porte_PorteCharacter_h_14_RPC_WRAPPERS
#define Porte_Source_Porte_PorteCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Porte_Source_Porte_PorteCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPorteCharacter(); \
	friend struct Z_Construct_UClass_APorteCharacter_Statics; \
public: \
	DECLARE_CLASS(APorteCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Porte"), NO_API) \
	DECLARE_SERIALIZER(APorteCharacter)


#define Porte_Source_Porte_PorteCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPorteCharacter(); \
	friend struct Z_Construct_UClass_APorteCharacter_Statics; \
public: \
	DECLARE_CLASS(APorteCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Porte"), NO_API) \
	DECLARE_SERIALIZER(APorteCharacter)


#define Porte_Source_Porte_PorteCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APorteCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APorteCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APorteCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APorteCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APorteCharacter(APorteCharacter&&); \
	NO_API APorteCharacter(const APorteCharacter&); \
public:


#define Porte_Source_Porte_PorteCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APorteCharacter(APorteCharacter&&); \
	NO_API APorteCharacter(const APorteCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APorteCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APorteCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APorteCharacter)


#define Porte_Source_Porte_PorteCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(APorteCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(APorteCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(APorteCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(APorteCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(APorteCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(APorteCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(APorteCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(APorteCharacter, L_MotionController); }


#define Porte_Source_Porte_PorteCharacter_h_11_PROLOG
#define Porte_Source_Porte_PorteCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Porte_Source_Porte_PorteCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Porte_Source_Porte_PorteCharacter_h_14_RPC_WRAPPERS \
	Porte_Source_Porte_PorteCharacter_h_14_INCLASS \
	Porte_Source_Porte_PorteCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Porte_Source_Porte_PorteCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Porte_Source_Porte_PorteCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Porte_Source_Porte_PorteCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Porte_Source_Porte_PorteCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Porte_Source_Porte_PorteCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTE_API UClass* StaticClass<class APorteCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Porte_Source_Porte_PorteCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
