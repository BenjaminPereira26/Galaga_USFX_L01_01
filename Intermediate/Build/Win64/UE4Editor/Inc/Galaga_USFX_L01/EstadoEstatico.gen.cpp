// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstadoEstatico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoEstatico() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoEstatico_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoEstatico();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AEstadoEstatico::StaticRegisterNativesAEstadoEstatico()
	{
	}
	UClass* Z_Construct_UClass_AEstadoEstatico_NoRegister()
	{
		return AEstadoEstatico::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoEstatico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoEstatico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoEstatico_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoEstatico.h" },
		{ "ModuleRelativePath", "EstadoEstatico.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoEstatico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoEstatico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoEstatico_Statics::ClassParams = {
		&AEstadoEstatico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoEstatico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoEstatico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoEstatico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoEstatico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoEstatico, 28484109);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstadoEstatico>()
	{
		return AEstadoEstatico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoEstatico(Z_Construct_UClass_AEstadoEstatico, &AEstadoEstatico::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AEstadoEstatico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoEstatico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
