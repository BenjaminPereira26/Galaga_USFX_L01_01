// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ConcretoBuilderObstaculos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcretoBuilderObstaculos() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConcretoBuilderObstaculos_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConcretoBuilderObstaculos();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConcretoObstaculos_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIBuilderObstaculos_NoRegister();
// End Cross Module References
	void AConcretoBuilderObstaculos::StaticRegisterNativesAConcretoBuilderObstaculos()
	{
	}
	UClass* Z_Construct_UClass_AConcretoBuilderObstaculos_NoRegister()
	{
		return AConcretoBuilderObstaculos::StaticClass();
	}
	struct Z_Construct_UClass_AConcretoBuilderObstaculos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Obstaculo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obstaculo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcretoBuilderObstaculos.h" },
		{ "ModuleRelativePath", "ConcretoBuilderObstaculos.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::NewProp_Obstaculo_MetaData[] = {
		{ "Category", "Obstaculos" },
		{ "ModuleRelativePath", "ConcretoBuilderObstaculos.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::NewProp_Obstaculo = { "Obstaculo", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConcretoBuilderObstaculos, Obstaculo), Z_Construct_UClass_AConcretoObstaculos_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::NewProp_Obstaculo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::NewProp_Obstaculo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::NewProp_Obstaculo,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBuilderObstaculos_NoRegister, (int32)VTABLE_OFFSET(AConcretoBuilderObstaculos, IIBuilderObstaculos), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcretoBuilderObstaculos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::ClassParams = {
		&AConcretoBuilderObstaculos::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConcretoBuilderObstaculos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConcretoBuilderObstaculos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConcretoBuilderObstaculos, 400567014);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AConcretoBuilderObstaculos>()
	{
		return AConcretoBuilderObstaculos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConcretoBuilderObstaculos(Z_Construct_UClass_AConcretoBuilderObstaculos, &AConcretoBuilderObstaculos::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AConcretoBuilderObstaculos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcretoBuilderObstaculos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
