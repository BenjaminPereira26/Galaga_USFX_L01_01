// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/FNECaza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFNECaza() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFNECaza_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFNECaza();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFabricaNavesEnemigas();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AFNECaza::StaticRegisterNativesAFNECaza()
	{
	}
	UClass* Z_Construct_UClass_AFNECaza_NoRegister()
	{
		return AFNECaza::StaticClass();
	}
	struct Z_Construct_UClass_AFNECaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFNECaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaNavesEnemigas,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFNECaza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FNECaza.h" },
		{ "ModuleRelativePath", "FNECaza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFNECaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFNECaza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFNECaza_Statics::ClassParams = {
		&AFNECaza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFNECaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFNECaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFNECaza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFNECaza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFNECaza, 3601062453);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AFNECaza>()
	{
		return AFNECaza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFNECaza(Z_Construct_UClass_AFNECaza, &AFNECaza::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AFNECaza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFNECaza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
