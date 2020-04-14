// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Porte/Public/CGrabber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGrabber() {}
// Cross Module References
	PORTE_API UClass* Z_Construct_UClass_UCGrabber_NoRegister();
	PORTE_API UClass* Z_Construct_UClass_UCGrabber();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Porte();
	PORTE_API UFunction* Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	void UCGrabber::StaticRegisterNativesUCGrabber()
	{
		UClass* Class = UCGrabber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFirstPhysicsBodyInReach", &UCGrabber::execGetFirstPhysicsBodyInReach },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach_Statics
	{
		struct CGrabber_eventGetFirstPhysicsBodyInReach_Parms
		{
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CGrabber_eventGetFirstPhysicsBodyInReach_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hit Component" },
		{ "ModuleRelativePath", "Public/CGrabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCGrabber, nullptr, "GetFirstPhysicsBodyInReach", sizeof(CGrabber_eventGetFirstPhysicsBodyInReach_Parms), Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCGrabber_NoRegister()
	{
		return UCGrabber::StaticClass();
	}
	struct Z_Construct_UClass_UCGrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fReach;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCGrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Porte,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCGrabber_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCGrabber_GetFirstPhysicsBodyInReach, "GetFirstPhysicsBodyInReach" }, // 634093446
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCGrabber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CGrabber.h" },
		{ "ModuleRelativePath", "Public/CGrabber.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCGrabber_Statics::NewProp_fReach_MetaData[] = {
		{ "Category", "CGrabber" },
		{ "ModuleRelativePath", "Public/CGrabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCGrabber_Statics::NewProp_fReach = { "fReach", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCGrabber, fReach), METADATA_PARAMS(Z_Construct_UClass_UCGrabber_Statics::NewProp_fReach_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCGrabber_Statics::NewProp_fReach_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCGrabber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCGrabber_Statics::NewProp_fReach,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCGrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCGrabber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCGrabber_Statics::ClassParams = {
		&UCGrabber::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCGrabber_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCGrabber_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCGrabber_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCGrabber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCGrabber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCGrabber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCGrabber, 1865955190);
	template<> PORTE_API UClass* StaticClass<UCGrabber>()
	{
		return UCGrabber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCGrabber(Z_Construct_UClass_UCGrabber, &UCGrabber::StaticClass, TEXT("/Script/Porte"), TEXT("UCGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCGrabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
