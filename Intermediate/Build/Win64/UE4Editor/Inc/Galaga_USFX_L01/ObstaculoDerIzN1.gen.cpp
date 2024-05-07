// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ObstaculoDerIzN1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoDerIzN1() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AObstaculoDerIzN1_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AObstaculoDerIzN1();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AObstaculos();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AObstaculoDerIzN1::StaticRegisterNativesAObstaculoDerIzN1()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoDerIzN1_NoRegister()
	{
		return AObstaculoDerIzN1::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoDerIzN1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoDerIzN1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculos,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoDerIzN1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObstaculoDerIzN1.h" },
		{ "ModuleRelativePath", "ObstaculoDerIzN1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoDerIzN1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoDerIzN1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoDerIzN1_Statics::ClassParams = {
		&AObstaculoDerIzN1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoDerIzN1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoDerIzN1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoDerIzN1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoDerIzN1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoDerIzN1, 4012140982);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AObstaculoDerIzN1>()
	{
		return AObstaculoDerIzN1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoDerIzN1(Z_Construct_UClass_AObstaculoDerIzN1, &AObstaculoDerIzN1::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AObstaculoDerIzN1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoDerIzN1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
