// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/SuscriptorPrueba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuscriptorPrueba() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ASuscriptorPrueba_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ASuscriptorPrueba();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ARecord_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UISuscriptor_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UITransformar_NoRegister();
// End Cross Module References
	void ASuscriptorPrueba::StaticRegisterNativesASuscriptorPrueba()
	{
	}
	UClass* Z_Construct_UClass_ASuscriptorPrueba_NoRegister()
	{
		return ASuscriptorPrueba::StaticClass();
	}
	struct Z_Construct_UClass_ASuscriptorPrueba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Record_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Record;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuscriptorPrueba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuscriptorPrueba_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SuscriptorPrueba.h" },
		{ "ModuleRelativePath", "SuscriptorPrueba.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuscriptorPrueba_Statics::NewProp_Record_MetaData[] = {
		{ "Category", "Subscriptor" },
		{ "ModuleRelativePath", "SuscriptorPrueba.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuscriptorPrueba_Statics::NewProp_Record = { "Record", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuscriptorPrueba, Record), Z_Construct_UClass_ARecord_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASuscriptorPrueba_Statics::NewProp_Record_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuscriptorPrueba_Statics::NewProp_Record_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASuscriptorPrueba_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuscriptorPrueba_Statics::NewProp_Record,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASuscriptorPrueba_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UISuscriptor_NoRegister, (int32)VTABLE_OFFSET(ASuscriptorPrueba, IISuscriptor), false },
			{ Z_Construct_UClass_UITransformar_NoRegister, (int32)VTABLE_OFFSET(ASuscriptorPrueba, IITransformar), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuscriptorPrueba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuscriptorPrueba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASuscriptorPrueba_Statics::ClassParams = {
		&ASuscriptorPrueba::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASuscriptorPrueba_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASuscriptorPrueba_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASuscriptorPrueba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuscriptorPrueba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuscriptorPrueba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASuscriptorPrueba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASuscriptorPrueba, 1790392795);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ASuscriptorPrueba>()
	{
		return ASuscriptorPrueba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASuscriptorPrueba(Z_Construct_UClass_ASuscriptorPrueba, &ASuscriptorPrueba::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ASuscriptorPrueba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuscriptorPrueba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
