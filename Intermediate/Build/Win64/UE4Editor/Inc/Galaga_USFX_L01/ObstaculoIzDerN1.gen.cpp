// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ObstaculoIzDerN1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoIzDerN1() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AObstaculoIzDerN1_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AObstaculoIzDerN1();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AObstaculos();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AObstaculoIzDerN1::StaticRegisterNativesAObstaculoIzDerN1()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoIzDerN1_NoRegister()
	{
		return AObstaculoIzDerN1::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoIzDerN1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoIzDerN1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculos,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoIzDerN1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObstaculoIzDerN1.h" },
		{ "ModuleRelativePath", "ObstaculoIzDerN1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoIzDerN1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoIzDerN1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoIzDerN1_Statics::ClassParams = {
		&AObstaculoIzDerN1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoIzDerN1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoIzDerN1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoIzDerN1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoIzDerN1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoIzDerN1, 2502499516);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AObstaculoIzDerN1>()
	{
		return AObstaculoIzDerN1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoIzDerN1(Z_Construct_UClass_AObstaculoIzDerN1, &AObstaculoIzDerN1::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AObstaculoIzDerN1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoIzDerN1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
