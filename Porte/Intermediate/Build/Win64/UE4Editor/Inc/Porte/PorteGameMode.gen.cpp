// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Porte/PorteGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePorteGameMode() {}
// Cross Module References
	PORTE_API UClass* Z_Construct_UClass_APorteGameMode_NoRegister();
	PORTE_API UClass* Z_Construct_UClass_APorteGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Porte();
// End Cross Module References
	void APorteGameMode::StaticRegisterNativesAPorteGameMode()
	{
	}
	UClass* Z_Construct_UClass_APorteGameMode_NoRegister()
	{
		return APorteGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APorteGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APorteGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Porte,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APorteGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PorteGameMode.h" },
		{ "ModuleRelativePath", "PorteGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APorteGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APorteGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APorteGameMode_Statics::ClassParams = {
		&APorteGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_APorteGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APorteGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APorteGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APorteGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APorteGameMode, 1913767570);
	template<> PORTE_API UClass* StaticClass<APorteGameMode>()
	{
		return APorteGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APorteGameMode(Z_Construct_UClass_APorteGameMode, &APorteGameMode::StaticClass, TEXT("/Script/Porte"), TEXT("APorteGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APorteGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
