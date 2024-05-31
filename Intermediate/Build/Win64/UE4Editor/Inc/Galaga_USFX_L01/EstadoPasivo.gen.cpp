// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstadoPasivo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoPasivo() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoPasivo_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoPasivo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaKamikaze_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstadoNE_NoRegister();
// End Cross Module References
	void AEstadoPasivo::StaticRegisterNativesAEstadoPasivo()
	{
	}
	UClass* Z_Construct_UClass_AEstadoPasivo_NoRegister()
	{
		return AEstadoPasivo::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoPasivo_Statics
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
	UObject* (*const Z_Construct_UClass_AEstadoPasivo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoPasivo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoPasivo.h" },
		{ "ModuleRelativePath", "EstadoPasivo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoPasivo_Statics::NewProp_NEKamikaze_MetaData[] = {
		{ "ModuleRelativePath", "EstadoPasivo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstadoPasivo_Statics::NewProp_NEKamikaze = { "NEKamikaze", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstadoPasivo, NEKamikaze), Z_Construct_UClass_ANaveEnemigaKamikaze_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstadoPasivo_Statics::NewProp_NEKamikaze_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoPasivo_Statics::NewProp_NEKamikaze_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstadoPasivo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstadoPasivo_Statics::NewProp_NEKamikaze,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoPasivo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstadoNE_NoRegister, (int32)VTABLE_OFFSET(AEstadoPasivo, IIEstadoNE), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoPasivo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoPasivo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoPasivo_Statics::ClassParams = {
		&AEstadoPasivo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstadoPasivo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoPasivo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoPasivo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoPasivo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoPasivo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoPasivo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoPasivo, 3358413009);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstadoPasivo>()
	{
		return AEstadoPasivo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoPasivo(Z_Construct_UClass_AEstadoPasivo, &AEstadoPasivo::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AEstadoPasivo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoPasivo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
