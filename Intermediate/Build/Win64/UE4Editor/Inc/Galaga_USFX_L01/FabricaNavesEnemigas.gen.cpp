// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/FabricaNavesEnemigas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaNavesEnemigas() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFabricaNavesEnemigas_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFabricaNavesEnemigas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AFabricaNavesEnemigas::StaticRegisterNativesAFabricaNavesEnemigas()
	{
	}
	UClass* Z_Construct_UClass_AFabricaNavesEnemigas_NoRegister()
	{
		return AFabricaNavesEnemigas::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaNavesEnemigas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaNavesEnemigas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaNavesEnemigas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaNavesEnemigas.h" },
		{ "ModuleRelativePath", "FabricaNavesEnemigas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaNavesEnemigas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaNavesEnemigas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaNavesEnemigas_Statics::ClassParams = {
		&AFabricaNavesEnemigas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaNavesEnemigas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaNavesEnemigas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaNavesEnemigas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaNavesEnemigas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaNavesEnemigas, 3736439690);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AFabricaNavesEnemigas>()
	{
		return AFabricaNavesEnemigas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaNavesEnemigas(Z_Construct_UClass_AFabricaNavesEnemigas, &AFabricaNavesEnemigas::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AFabricaNavesEnemigas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaNavesEnemigas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
