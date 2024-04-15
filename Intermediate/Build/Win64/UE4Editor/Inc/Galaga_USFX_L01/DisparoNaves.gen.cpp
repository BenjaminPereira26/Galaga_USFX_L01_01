// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/DisparoNaves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisparoNaves() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ADisparoNaves_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ADisparoNaves();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ADisparoNaves::StaticRegisterNativesADisparoNaves()
	{
	}
	UClass* Z_Construct_UClass_ADisparoNaves_NoRegister()
	{
		return ADisparoNaves::StaticClass();
	}
	struct Z_Construct_UClass_ADisparoNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisparoNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparoNaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisparoNaves.h" },
		{ "ModuleRelativePath", "DisparoNaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisparoNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisparoNaves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADisparoNaves_Statics::ClassParams = {
		&ADisparoNaves::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADisparoNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisparoNaves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADisparoNaves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADisparoNaves, 4253474565);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ADisparoNaves>()
	{
		return ADisparoNaves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADisparoNaves(Z_Construct_UClass_ADisparoNaves, &ADisparoNaves::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ADisparoNaves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisparoNaves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
