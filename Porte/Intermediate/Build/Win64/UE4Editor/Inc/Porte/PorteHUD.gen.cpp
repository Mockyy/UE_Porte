// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Porte/PorteHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePorteHUD() {}
// Cross Module References
	PORTE_API UClass* Z_Construct_UClass_APorteHUD_NoRegister();
	PORTE_API UClass* Z_Construct_UClass_APorteHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Porte();
// End Cross Module References
	void APorteHUD::StaticRegisterNativesAPorteHUD()
	{
	}
	UClass* Z_Construct_UClass_APorteHUD_NoRegister()
	{
		return APorteHUD::StaticClass();
	}
	struct Z_Construct_UClass_APorteHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APorteHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Porte,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APorteHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PorteHUD.h" },
		{ "ModuleRelativePath", "PorteHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APorteHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APorteHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APorteHUD_Statics::ClassParams = {
		&APorteHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APorteHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APorteHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APorteHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APorteHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APorteHUD, 774975443);
	template<> PORTE_API UClass* StaticClass<APorteHUD>()
	{
		return APorteHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APorteHUD(Z_Construct_UClass_APorteHUD, &APorteHUD::StaticClass, TEXT("/Script/Porte"), TEXT("APorteHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APorteHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
