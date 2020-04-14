// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef PORTE_CGrabber_generated_h
#error "CGrabber.generated.h already included, missing '#pragma once' in CGrabber.h"
#endif
#define PORTE_CGrabber_generated_h

#define Porte_Source_Porte_Public_CGrabber_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFirstPhysicsBodyInReach) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->GetFirstPhysicsBodyInReach(); \
		P_NATIVE_END; \
	}


#define Porte_Source_Porte_Public_CGrabber_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFirstPhysicsBodyInReach) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->GetFirstPhysicsBodyInReach(); \
		P_NATIVE_END; \
	}


#define Porte_Source_Porte_Public_CGrabber_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCGrabber(); \
	friend struct Z_Construct_UClass_UCGrabber_Statics; \
public: \
	DECLARE_CLASS(UCGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Porte"), NO_API) \
	DECLARE_SERIALIZER(UCGrabber)


#define Porte_Source_Porte_Public_CGrabber_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCGrabber(); \
	friend struct Z_Construct_UClass_UCGrabber_Statics; \
public: \
	DECLARE_CLASS(UCGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Porte"), NO_API) \
	DECLARE_SERIALIZER(UCGrabber)


#define Porte_Source_Porte_Public_CGrabber_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCGrabber(UCGrabber&&); \
	NO_API UCGrabber(const UCGrabber&); \
public:


#define Porte_Source_Porte_Public_CGrabber_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCGrabber(UCGrabber&&); \
	NO_API UCGrabber(const UCGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCGrabber)


#define Porte_Source_Porte_Public_CGrabber_h_14_PRIVATE_PROPERTY_OFFSET
#define Porte_Source_Porte_Public_CGrabber_h_11_PROLOG
#define Porte_Source_Porte_Public_CGrabber_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Porte_Source_Porte_Public_CGrabber_h_14_PRIVATE_PROPERTY_OFFSET \
	Porte_Source_Porte_Public_CGrabber_h_14_RPC_WRAPPERS \
	Porte_Source_Porte_Public_CGrabber_h_14_INCLASS \
	Porte_Source_Porte_Public_CGrabber_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Porte_Source_Porte_Public_CGrabber_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Porte_Source_Porte_Public_CGrabber_h_14_PRIVATE_PROPERTY_OFFSET \
	Porte_Source_Porte_Public_CGrabber_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Porte_Source_Porte_Public_CGrabber_h_14_INCLASS_NO_PURE_DECLS \
	Porte_Source_Porte_Public_CGrabber_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTE_API UClass* StaticClass<class UCGrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Porte_Source_Porte_Public_CGrabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
