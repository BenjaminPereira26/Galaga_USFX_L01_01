// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/FNEEspia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFNEEspia() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFNEEspia_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFNEEspia();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFabricaNavesEnemigas();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AFNEEspia::StaticRegisterNativesAFNEEspia()
	{
	}
	UClass* Z_Construct_UClass_AFNEEspia_NoRegister()
	{
		return AFNEEspia::StaticClass();
	}
	struct Z_Construct_UClass_AFNEEspia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFNEEspia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaNavesEnemigas,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFNEEspia_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FNEEspia.h" },
		{ "ModuleRelativePath", "FNEEspia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFNEEspia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFNEEspia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFNEEspia_Statics::ClassParams = {
		&AFNEEspia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFNEEspia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFNEEspia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFNEEspia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFNEEspia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFNEEspia, 2006204268);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AFNEEspia>()
	{
		return AFNEEspia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFNEEspia(Z_Construct_UClass_AFNEEspia, &AFNEEspia::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AFNEEspia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFNEEspia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
