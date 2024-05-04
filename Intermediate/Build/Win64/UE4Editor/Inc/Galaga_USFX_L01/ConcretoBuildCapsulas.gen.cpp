// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ConcretoBuildCapsulas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcretoBuildCapsulas() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConcretoBuildCapsulas_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AConcretoBuildCapsulas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APacketeCapsulasEnergia_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIBuildPacketeCapsulas_NoRegister();
// End Cross Module References
	void AConcretoBuildCapsulas::StaticRegisterNativesAConcretoBuildCapsulas()
	{
	}
	UClass* Z_Construct_UClass_AConcretoBuildCapsulas_NoRegister()
	{
		return AConcretoBuildCapsulas::StaticClass();
	}
	struct Z_Construct_UClass_AConcretoBuildCapsulas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaqueteEnergia_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaqueteEnergia;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcretoBuildCapsulas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcretoBuildCapsulas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcretoBuildCapsulas.h" },
		{ "ModuleRelativePath", "ConcretoBuildCapsulas.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcretoBuildCapsulas_Statics::NewProp_PaqueteEnergia_MetaData[] = {
		{ "Category", "PaquetesEnergia" },
		{ "ModuleRelativePath", "ConcretoBuildCapsulas.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConcretoBuildCapsulas_Statics::NewProp_PaqueteEnergia = { "PaqueteEnergia", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConcretoBuildCapsulas, PaqueteEnergia), Z_Construct_UClass_APacketeCapsulasEnergia_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcretoBuildCapsulas_Statics::NewProp_PaqueteEnergia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoBuildCapsulas_Statics::NewProp_PaqueteEnergia_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConcretoBuildCapsulas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcretoBuildCapsulas_Statics::NewProp_PaqueteEnergia,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConcretoBuildCapsulas_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBuildPacketeCapsulas_NoRegister, (int32)VTABLE_OFFSET(AConcretoBuildCapsulas, IIBuildPacketeCapsulas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcretoBuildCapsulas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcretoBuildCapsulas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConcretoBuildCapsulas_Statics::ClassParams = {
		&AConcretoBuildCapsulas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConcretoBuildCapsulas_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoBuildCapsulas_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConcretoBuildCapsulas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConcretoBuildCapsulas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConcretoBuildCapsulas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConcretoBuildCapsulas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConcretoBuildCapsulas, 752263000);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AConcretoBuildCapsulas>()
	{
		return AConcretoBuildCapsulas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConcretoBuildCapsulas(Z_Construct_UClass_AConcretoBuildCapsulas, &AConcretoBuildCapsulas::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AConcretoBuildCapsulas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcretoBuildCapsulas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
