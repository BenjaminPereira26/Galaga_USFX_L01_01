// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/IngenieroObstaculos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIngenieroObstaculos() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AIngenieroObstaculos_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AIngenieroObstaculos();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AIngenieroObstaculos::StaticRegisterNativesAIngenieroObstaculos()
	{
	}
	UClass* Z_Construct_UClass_AIngenieroObstaculos_NoRegister()
	{
		return AIngenieroObstaculos::StaticClass();
	}
	struct Z_Construct_UClass_AIngenieroObstaculos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIngenieroObstaculos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIngenieroObstaculos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IngenieroObstaculos.h" },
		{ "ModuleRelativePath", "IngenieroObstaculos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIngenieroObstaculos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIngenieroObstaculos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIngenieroObstaculos_Statics::ClassParams = {
		&AIngenieroObstaculos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AIngenieroObstaculos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIngenieroObstaculos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIngenieroObstaculos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIngenieroObstaculos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIngenieroObstaculos, 1226754131);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AIngenieroObstaculos>()
	{
		return AIngenieroObstaculos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIngenieroObstaculos(Z_Construct_UClass_AIngenieroObstaculos, &AIngenieroObstaculos::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AIngenieroObstaculos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIngenieroObstaculos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
