// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ConcretoBuilderNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcretoBuilderNodriza() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConcretoBuilderNodriza_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConcretoBuilderNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConcretoNodriza_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIBuilderNodriza_NoRegister();
// End Cross Module References
	void AConcretoBuilderNodriza::StaticRegisterNativesAConcretoBuilderNodriza()
	{
	}
	UClass* Z_Construct_UClass_AConcretoBuilderNodriza_NoRegister()
	{
		return AConcretoBuilderNodriza::StaticClass();
	}
	struct Z_Construct_UClass_AConcretoBuilderNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodriza_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nodriza;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcretoBuilderNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcretoBuilderNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcretoBuilderNodriza.h" },
		{ "ModuleRelativePath", "ConcretoBuilderNodriza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcretoBuilderNodriza_Statics::NewProp_Nodriza_MetaData[] = {
		{ "Category", "Nodriza" },
		{ "ModuleRelativePath", "ConcretoBuilderNodriza.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConcretoBuilderNodriza_Statics::NewProp_Nodriza = { "Nodriza", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConcretoBuilderNodriza, Nodriza), Z_Construct_UClass_AConcretoNodriza_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcretoBuilderNodriza_Statics::NewProp_Nodriza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoBuilderNodriza_Statics::NewProp_Nodriza_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConcretoBuilderNodriza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcretoBuilderNodriza_Statics::NewProp_Nodriza,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConcretoBuilderNodriza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBuilderNodriza_NoRegister, (int32)VTABLE_OFFSET(AConcretoBuilderNodriza, IIBuilderNodriza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcretoBuilderNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcretoBuilderNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConcretoBuilderNodriza_Statics::ClassParams = {
		&AConcretoBuilderNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConcretoBuilderNodriza_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoBuilderNodriza_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConcretoBuilderNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoBuilderNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConcretoBuilderNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConcretoBuilderNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConcretoBuilderNodriza, 2910286406);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AConcretoBuilderNodriza>()
	{
		return AConcretoBuilderNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConcretoBuilderNodriza(Z_Construct_UClass_AConcretoBuilderNodriza, &AConcretoBuilderNodriza::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AConcretoBuilderNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcretoBuilderNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
