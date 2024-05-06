// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Chasis.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChasis() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AChasis_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AChasis();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AChasis::StaticRegisterNativesAChasis()
	{
	}
	UClass* Z_Construct_UClass_AChasis_NoRegister()
	{
		return AChasis::StaticClass();
	}
	struct Z_Construct_UClass_AChasis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaChasis_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaChasis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChasis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChasis_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chasis.h" },
		{ "ModuleRelativePath", "Chasis.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChasis_Statics::NewProp_mallaChasis_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Chasis.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChasis_Statics::NewProp_mallaChasis = { "mallaChasis", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChasis, mallaChasis), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChasis_Statics::NewProp_mallaChasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChasis_Statics::NewProp_mallaChasis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChasis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChasis_Statics::NewProp_mallaChasis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChasis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChasis>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChasis_Statics::ClassParams = {
		&AChasis::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChasis_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChasis_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChasis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChasis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChasis()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChasis_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChasis, 174209574);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AChasis>()
	{
		return AChasis::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChasis(Z_Construct_UClass_AChasis, &AChasis::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AChasis"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChasis);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
