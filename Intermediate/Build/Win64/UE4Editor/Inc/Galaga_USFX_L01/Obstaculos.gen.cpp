// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Obstaculos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculos() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AObstaculos_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AObstaculos();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AObstaculos::StaticRegisterNativesAObstaculos()
	{
	}
	UClass* Z_Construct_UClass_AObstaculos_NoRegister()
	{
		return AObstaculos::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaObstaculo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaObstaculo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstaculos.h" },
		{ "ModuleRelativePath", "Obstaculos.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculos_Statics::NewProp_mallaObstaculo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obstaculos.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstaculos_Statics::NewProp_mallaObstaculo = { "mallaObstaculo", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculos, mallaObstaculo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstaculos_Statics::NewProp_mallaObstaculo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculos_Statics::NewProp_mallaObstaculo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstaculos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculos_Statics::NewProp_mallaObstaculo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculos_Statics::ClassParams = {
		&AObstaculos::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstaculos_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculos_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculos, 3223909975);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AObstaculos>()
	{
		return AObstaculos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculos(Z_Construct_UClass_AObstaculos, &AObstaculos::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AObstaculos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
