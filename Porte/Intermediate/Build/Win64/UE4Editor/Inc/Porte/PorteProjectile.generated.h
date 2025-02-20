// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PORTE_PorteProjectile_generated_h
#error "PorteProjectile.generated.h already included, missing '#pragma once' in PorteProjectile.h"
#endif
#define PORTE_PorteProjectile_generated_h

#define Porte_Source_Porte_PorteProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Porte_Source_Porte_PorteProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Porte_Source_Porte_PorteProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPorteProjectile(); \
	friend struct Z_Construct_UClass_APorteProjectile_Statics; \
public: \
	DECLARE_CLASS(APorteProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Porte"), NO_API) \
	DECLARE_SERIALIZER(APorteProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Porte_Source_Porte_PorteProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPorteProjectile(); \
	friend struct Z_Construct_UClass_APorteProjectile_Statics; \
public: \
	DECLARE_CLASS(APorteProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Porte"), NO_API) \
	DECLARE_SERIALIZER(APorteProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Porte_Source_Porte_PorteProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APorteProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APorteProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APorteProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APorteProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APorteProjectile(APorteProjectile&&); \
	NO_API APorteProjectile(const APorteProjectile&); \
public:


#define Porte_Source_Porte_PorteProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APorteProjectile(APorteProjectile&&); \
	NO_API APorteProjectile(const APorteProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APorteProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APorteProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APorteProjectile)


#define Porte_Source_Porte_PorteProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APorteProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APorteProjectile, ProjectileMovement); }


#define Porte_Source_Porte_PorteProjectile_h_9_PROLOG
#define Porte_Source_Porte_PorteProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Porte_Source_Porte_PorteProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Porte_Source_Porte_PorteProjectile_h_12_RPC_WRAPPERS \
	Porte_Source_Porte_PorteProjectile_h_12_INCLASS \
	Porte_Source_Porte_PorteProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Porte_Source_Porte_PorteProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Porte_Source_Porte_PorteProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Porte_Source_Porte_PorteProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Porte_Source_Porte_PorteProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Porte_Source_Porte_PorteProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTE_API UClass* StaticClass<class APorteProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Porte_Source_Porte_PorteProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
