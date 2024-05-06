// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/IBuilderNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBuilderNodriza() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIBuilderNodriza_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIBuilderNodriza();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UIBuilderNodriza::StaticRegisterNativesUIBuilderNodriza()
	{
	}
	UClass* Z_Construct_UClass_UIBuilderNodriza_NoRegister()
	{
		return UIBuilderNodriza::StaticClass();
	}
	struct Z_Construct_UClass_UIBuilderNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIBuilderNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIBuilderNodriza_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IBuilderNodriza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIBuilderNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIBuilderNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIBuilderNodriza_Statics::ClassParams = {
		&UIBuilderNodriza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIBuilderNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIBuilderNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIBuilderNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIBuilderNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIBuilderNodriza, 1918899015);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UIBuilderNodriza>()
	{
		return UIBuilderNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIBuilderNodriza(Z_Construct_UClass_UIBuilderNodriza, &UIBuilderNodriza::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UIBuilderNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIBuilderNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
