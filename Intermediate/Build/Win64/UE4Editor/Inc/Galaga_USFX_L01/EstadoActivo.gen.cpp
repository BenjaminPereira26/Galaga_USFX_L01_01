// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstadoActivo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoActivo() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoActivo_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoActivo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaKamikaze_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstadoNE_NoRegister();
// End Cross Module References
	void AEstadoActivo::StaticRegisterNativesAEstadoActivo()
	{
	}
	UClass* Z_Construct_UClass_AEstadoActivo_NoRegister()
	{
		return AEstadoActivo::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoActivo_Statics
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
	UObject* (*const Z_Construct_UClass_AEstadoActivo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoActivo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoActivo.h" },
		{ "ModuleRelativePath", "EstadoActivo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoActivo_Statics::NewProp_NEKamikaze_MetaData[] = {
		{ "ModuleRelativePath", "EstadoActivo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstadoActivo_Statics::NewProp_NEKamikaze = { "NEKamikaze", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstadoActivo, NEKamikaze), Z_Construct_UClass_ANaveEnemigaKamikaze_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstadoActivo_Statics::NewProp_NEKamikaze_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoActivo_Statics::NewProp_NEKamikaze_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstadoActivo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstadoActivo_Statics::NewProp_NEKamikaze,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoActivo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstadoNE_NoRegister, (int32)VTABLE_OFFSET(AEstadoActivo, IIEstadoNE), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoActivo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoActivo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoActivo_Statics::ClassParams = {
		&AEstadoActivo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstadoActivo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoActivo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoActivo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoActivo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoActivo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoActivo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoActivo, 4082740909);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstadoActivo>()
	{
		return AEstadoActivo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoActivo(Z_Construct_UClass_AEstadoActivo, &AEstadoActivo::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AEstadoActivo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoActivo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
