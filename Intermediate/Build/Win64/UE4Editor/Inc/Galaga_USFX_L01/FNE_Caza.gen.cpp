// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/FNE_Caza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFNE_Caza() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFNE_Caza_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFNE_Caza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AFNE_Caza::StaticRegisterNativesAFNE_Caza()
	{
	}
	UClass* Z_Construct_UClass_AFNE_Caza_NoRegister()
	{
		return AFNE_Caza::StaticClass();
	}
	struct Z_Construct_UClass_AFNE_Caza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFNE_Caza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFNE_Caza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FNE_Caza.h" },
		{ "ModuleRelativePath", "FNE_Caza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFNE_Caza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFNE_Caza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFNE_Caza_Statics::ClassParams = {
		&AFNE_Caza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFNE_Caza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFNE_Caza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFNE_Caza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFNE_Caza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFNE_Caza, 2211261);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AFNE_Caza>()
	{
		return AFNE_Caza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFNE_Caza(Z_Construct_UClass_AFNE_Caza, &AFNE_Caza::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AFNE_Caza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFNE_Caza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
