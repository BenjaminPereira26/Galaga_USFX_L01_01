// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Barreras.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarreras() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UBarreras_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UBarreras();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UBarreras::StaticRegisterNativesUBarreras()
	{
	}
	UClass* Z_Construct_UClass_UBarreras_NoRegister()
	{
		return UBarreras::StaticClass();
	}
	struct Z_Construct_UClass_UBarreras_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBarreras_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBarreras_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Barreras.h" },
		{ "ModuleRelativePath", "Barreras.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBarreras_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBarreras>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBarreras_Statics::ClassParams = {
		&UBarreras::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBarreras_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBarreras_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBarreras()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBarreras_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBarreras, 1273564419);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UBarreras>()
	{
		return UBarreras::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBarreras(Z_Construct_UClass_UBarreras, &UBarreras::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UBarreras"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBarreras);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
