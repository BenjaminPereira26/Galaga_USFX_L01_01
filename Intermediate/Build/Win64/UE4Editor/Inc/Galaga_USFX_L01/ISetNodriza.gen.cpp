// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ISetNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISetNodriza() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UISetNodriza_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UISetNodriza();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UISetNodriza::StaticRegisterNativesUISetNodriza()
	{
	}
	UClass* Z_Construct_UClass_UISetNodriza_NoRegister()
	{
		return UISetNodriza::StaticClass();
	}
	struct Z_Construct_UClass_UISetNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISetNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISetNodriza_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ISetNodriza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISetNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IISetNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UISetNodriza_Statics::ClassParams = {
		&UISetNodriza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UISetNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISetNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISetNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UISetNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UISetNodriza, 131631950);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UISetNodriza>()
	{
		return UISetNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UISetNodriza(Z_Construct_UClass_UISetNodriza, &UISetNodriza::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UISetNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISetNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
