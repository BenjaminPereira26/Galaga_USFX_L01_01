// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/FNEKamikaze.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFNEKamikaze() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFNEKamikaze_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFNEKamikaze();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFabricaNavesEnemigas();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AFNEKamikaze::StaticRegisterNativesAFNEKamikaze()
	{
	}
	UClass* Z_Construct_UClass_AFNEKamikaze_NoRegister()
	{
		return AFNEKamikaze::StaticClass();
	}
	struct Z_Construct_UClass_AFNEKamikaze_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFNEKamikaze_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaNavesEnemigas,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFNEKamikaze_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FNEKamikaze.h" },
		{ "ModuleRelativePath", "FNEKamikaze.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFNEKamikaze_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFNEKamikaze>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFNEKamikaze_Statics::ClassParams = {
		&AFNEKamikaze::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFNEKamikaze_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFNEKamikaze_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFNEKamikaze()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFNEKamikaze_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFNEKamikaze, 1008880559);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AFNEKamikaze>()
	{
		return AFNEKamikaze::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFNEKamikaze(Z_Construct_UClass_AFNEKamikaze, &AFNEKamikaze::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AFNEKamikaze"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFNEKamikaze);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
