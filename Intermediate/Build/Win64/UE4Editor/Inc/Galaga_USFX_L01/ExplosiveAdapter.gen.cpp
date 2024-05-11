// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ExplosiveAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosiveAdapter() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AExplosiveAdapter_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AExplosiveAdapter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ABalaCanion_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIExplosiveShot_NoRegister();
// End Cross Module References
	void AExplosiveAdapter::StaticRegisterNativesAExplosiveAdapter()
	{
	}
	UClass* Z_Construct_UClass_AExplosiveAdapter_NoRegister()
	{
		return AExplosiveAdapter::StaticClass();
	}
	struct Z_Construct_UClass_AExplosiveAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosiveAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExplosiveAdapter.h" },
		{ "ModuleRelativePath", "ExplosiveAdapter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosiveAdapter_Statics::NewProp_BC_MetaData[] = {
		{ "Category", "Explosive Adapter" },
		{ "Comment", "//llamamos untero a la clase estranjera\n" },
		{ "ModuleRelativePath", "ExplosiveAdapter.h" },
		{ "ToolTip", "llamamos untero a la clase estranjera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveAdapter_Statics::NewProp_BC = { "BC", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExplosiveAdapter, BC), Z_Construct_UClass_ABalaCanion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExplosiveAdapter_Statics::NewProp_BC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveAdapter_Statics::NewProp_BC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosiveAdapter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveAdapter_Statics::NewProp_BC,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AExplosiveAdapter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIExplosiveShot_NoRegister, (int32)VTABLE_OFFSET(AExplosiveAdapter, IIExplosiveShot), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosiveAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveAdapter_Statics::ClassParams = {
		&AExplosiveAdapter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AExplosiveAdapter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveAdapter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosiveAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosiveAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExplosiveAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExplosiveAdapter, 1647225155);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AExplosiveAdapter>()
	{
		return AExplosiveAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExplosiveAdapter(Z_Construct_UClass_AExplosiveAdapter, &AExplosiveAdapter::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AExplosiveAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosiveAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
