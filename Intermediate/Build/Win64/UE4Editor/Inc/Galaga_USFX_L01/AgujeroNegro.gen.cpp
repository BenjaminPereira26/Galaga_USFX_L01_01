// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/AgujeroNegro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgujeroNegro() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AAgujeroNegro_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AAgujeroNegro();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AAgujeroNegro::StaticRegisterNativesAAgujeroNegro()
	{
	}
	UClass* Z_Construct_UClass_AAgujeroNegro_NoRegister()
	{
		return AAgujeroNegro::StaticClass();
	}
	struct Z_Construct_UClass_AAgujeroNegro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaAgujero_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaAgujero;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgujeroNegro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgujeroNegro_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AgujeroNegro.h" },
		{ "ModuleRelativePath", "AgujeroNegro.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgujeroNegro_Statics::NewProp_mallaAgujero_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AgujeroNegro.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgujeroNegro_Statics::NewProp_mallaAgujero = { "mallaAgujero", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAgujeroNegro, mallaAgujero), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAgujeroNegro_Statics::NewProp_mallaAgujero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAgujeroNegro_Statics::NewProp_mallaAgujero_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAgujeroNegro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgujeroNegro_Statics::NewProp_mallaAgujero,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgujeroNegro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgujeroNegro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAgujeroNegro_Statics::ClassParams = {
		&AAgujeroNegro::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAgujeroNegro_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAgujeroNegro_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAgujeroNegro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAgujeroNegro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAgujeroNegro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAgujeroNegro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgujeroNegro, 657167699);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AAgujeroNegro>()
	{
		return AAgujeroNegro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAgujeroNegro(Z_Construct_UClass_AAgujeroNegro, &AAgujeroNegro::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AAgujeroNegro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgujeroNegro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
