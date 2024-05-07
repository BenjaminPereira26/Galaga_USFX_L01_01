// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ISetObstaculos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISetObstaculos() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UISetObstaculos_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UISetObstaculos();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UISetObstaculos::StaticRegisterNativesUISetObstaculos()
	{
	}
	UClass* Z_Construct_UClass_UISetObstaculos_NoRegister()
	{
		return UISetObstaculos::StaticClass();
	}
	struct Z_Construct_UClass_UISetObstaculos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISetObstaculos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISetObstaculos_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ISetObstaculos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISetObstaculos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IISetObstaculos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UISetObstaculos_Statics::ClassParams = {
		&UISetObstaculos::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UISetObstaculos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISetObstaculos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISetObstaculos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UISetObstaculos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UISetObstaculos, 818739851);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UISetObstaculos>()
	{
		return UISetObstaculos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UISetObstaculos(Z_Construct_UClass_UISetObstaculos, &UISetObstaculos::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UISetObstaculos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISetObstaculos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
