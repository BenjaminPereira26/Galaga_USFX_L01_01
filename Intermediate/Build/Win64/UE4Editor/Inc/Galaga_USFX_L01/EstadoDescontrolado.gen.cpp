// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstadoDescontrolado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoDescontrolado() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoDescontrolado_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoDescontrolado();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaKamikaze_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstadoNE_NoRegister();
// End Cross Module References
	void AEstadoDescontrolado::StaticRegisterNativesAEstadoDescontrolado()
	{
	}
	UClass* Z_Construct_UClass_AEstadoDescontrolado_NoRegister()
	{
		return AEstadoDescontrolado::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoDescontrolado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NEKamikaze_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NEKamikaze;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoDescontrolado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoDescontrolado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoDescontrolado.h" },
		{ "ModuleRelativePath", "EstadoDescontrolado.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoDescontrolado_Statics::NewProp_NEKamikaze_MetaData[] = {
		{ "ModuleRelativePath", "EstadoDescontrolado.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstadoDescontrolado_Statics::NewProp_NEKamikaze = { "NEKamikaze", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstadoDescontrolado, NEKamikaze), Z_Construct_UClass_ANaveEnemigaKamikaze_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstadoDescontrolado_Statics::NewProp_NEKamikaze_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoDescontrolado_Statics::NewProp_NEKamikaze_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstadoDescontrolado_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstadoDescontrolado_Statics::NewProp_NEKamikaze,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoDescontrolado_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstadoNE_NoRegister, (int32)VTABLE_OFFSET(AEstadoDescontrolado, IIEstadoNE), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoDescontrolado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoDescontrolado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoDescontrolado_Statics::ClassParams = {
		&AEstadoDescontrolado::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstadoDescontrolado_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoDescontrolado_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoDescontrolado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoDescontrolado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoDescontrolado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoDescontrolado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoDescontrolado, 230178620);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstadoDescontrolado>()
	{
		return AEstadoDescontrolado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoDescontrolado(Z_Construct_UClass_AEstadoDescontrolado, &AEstadoDescontrolado::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AEstadoDescontrolado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoDescontrolado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
