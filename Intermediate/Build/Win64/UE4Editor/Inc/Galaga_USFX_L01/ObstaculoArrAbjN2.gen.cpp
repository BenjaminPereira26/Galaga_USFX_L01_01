// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ObstaculoArrAbjN2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoArrAbjN2() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AObstaculoArrAbjN2_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AObstaculoArrAbjN2();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AObstaculos();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AObstaculoArrAbjN2::StaticRegisterNativesAObstaculoArrAbjN2()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoArrAbjN2_NoRegister()
	{
		return AObstaculoArrAbjN2::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoArrAbjN2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoArrAbjN2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculos,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoArrAbjN2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObstaculoArrAbjN2.h" },
		{ "ModuleRelativePath", "ObstaculoArrAbjN2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoArrAbjN2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoArrAbjN2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoArrAbjN2_Statics::ClassParams = {
		&AObstaculoArrAbjN2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoArrAbjN2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoArrAbjN2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoArrAbjN2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoArrAbjN2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoArrAbjN2, 2530944755);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AObstaculoArrAbjN2>()
	{
		return AObstaculoArrAbjN2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoArrAbjN2(Z_Construct_UClass_AObstaculoArrAbjN2, &AObstaculoArrAbjN2::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AObstaculoArrAbjN2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoArrAbjN2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
