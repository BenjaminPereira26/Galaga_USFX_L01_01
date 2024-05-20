// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/CanionBala.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanionBala() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACanionBala_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACanionBala();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AMainCanion();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ACanionBala::StaticRegisterNativesACanionBala()
	{
	}
	UClass* Z_Construct_UClass_ACanionBala_NoRegister()
	{
		return ACanionBala::StaticClass();
	}
	struct Z_Construct_UClass_ACanionBala_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACanionBala_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMainCanion,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACanionBala_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CanionBala.h" },
		{ "ModuleRelativePath", "CanionBala.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACanionBala_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACanionBala>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACanionBala_Statics::ClassParams = {
		&ACanionBala::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACanionBala_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACanionBala_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACanionBala()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACanionBala_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACanionBala, 615760493);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ACanionBala>()
	{
		return ACanionBala::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACanionBala(Z_Construct_UClass_ACanionBala, &ACanionBala::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ACanionBala"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACanionBala);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
