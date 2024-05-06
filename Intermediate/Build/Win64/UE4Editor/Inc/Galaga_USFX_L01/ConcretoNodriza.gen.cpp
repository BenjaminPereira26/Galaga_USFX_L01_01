// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ConcretoNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcretoNodriza() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConcretoNodriza_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConcretoNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UISetNodriza_NoRegister();
// End Cross Module References
	void AConcretoNodriza::StaticRegisterNativesAConcretoNodriza()
	{
	}
	UClass* Z_Construct_UClass_AConcretoNodriza_NoRegister()
	{
		return AConcretoNodriza::StaticClass();
	}
	struct Z_Construct_UClass_AConcretoNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcretoNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcretoNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcretoNodriza.h" },
		{ "ModuleRelativePath", "ConcretoNodriza.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConcretoNodriza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UISetNodriza_NoRegister, (int32)VTABLE_OFFSET(AConcretoNodriza, IISetNodriza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcretoNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcretoNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConcretoNodriza_Statics::ClassParams = {
		&AConcretoNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConcretoNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConcretoNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConcretoNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConcretoNodriza, 174575473);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AConcretoNodriza>()
	{
		return AConcretoNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConcretoNodriza(Z_Construct_UClass_AConcretoNodriza, &AConcretoNodriza::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AConcretoNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcretoNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
