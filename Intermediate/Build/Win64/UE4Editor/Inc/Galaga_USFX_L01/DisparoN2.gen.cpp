// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/DisparoN2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisparoN2() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ADisparoN2_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ADisparoN2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AAyudantePawn_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstrategias_NoRegister();
// End Cross Module References
	void ADisparoN2::StaticRegisterNativesADisparoN2()
	{
	}
	UClass* Z_Construct_UClass_ADisparoN2_NoRegister()
	{
		return ADisparoN2::StaticClass();
	}
	struct Z_Construct_UClass_ADisparoN2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ayudante_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ayudante;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisparoN2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparoN2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisparoN2.h" },
		{ "ModuleRelativePath", "DisparoN2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparoN2_Statics::NewProp_Ayudante_MetaData[] = {
		{ "ModuleRelativePath", "DisparoN2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADisparoN2_Statics::NewProp_Ayudante = { "Ayudante", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisparoN2, Ayudante), Z_Construct_UClass_AAyudantePawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisparoN2_Statics::NewProp_Ayudante_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoN2_Statics::NewProp_Ayudante_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADisparoN2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisparoN2_Statics::NewProp_Ayudante,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADisparoN2_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstrategias_NoRegister, (int32)VTABLE_OFFSET(ADisparoN2, IIEstrategias), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisparoN2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisparoN2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADisparoN2_Statics::ClassParams = {
		&ADisparoN2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADisparoN2_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoN2_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADisparoN2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoN2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisparoN2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADisparoN2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADisparoN2, 4273875003);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ADisparoN2>()
	{
		return ADisparoN2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADisparoN2(Z_Construct_UClass_ADisparoN2, &ADisparoN2::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ADisparoN2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisparoN2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
