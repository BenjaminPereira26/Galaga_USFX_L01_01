// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/IBuildPacketeCapsulas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBuildPacketeCapsulas() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIBuildPacketeCapsulas_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIBuildPacketeCapsulas();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UIBuildPacketeCapsulas::StaticRegisterNativesUIBuildPacketeCapsulas()
	{
	}
	UClass* Z_Construct_UClass_UIBuildPacketeCapsulas_NoRegister()
	{
		return UIBuildPacketeCapsulas::StaticClass();
	}
	struct Z_Construct_UClass_UIBuildPacketeCapsulas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIBuildPacketeCapsulas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIBuildPacketeCapsulas_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IBuildPacketeCapsulas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIBuildPacketeCapsulas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIBuildPacketeCapsulas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIBuildPacketeCapsulas_Statics::ClassParams = {
		&UIBuildPacketeCapsulas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIBuildPacketeCapsulas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIBuildPacketeCapsulas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIBuildPacketeCapsulas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIBuildPacketeCapsulas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIBuildPacketeCapsulas, 2871517647);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UIBuildPacketeCapsulas>()
	{
		return UIBuildPacketeCapsulas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIBuildPacketeCapsulas(Z_Construct_UClass_UIBuildPacketeCapsulas, &UIBuildPacketeCapsulas::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UIBuildPacketeCapsulas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIBuildPacketeCapsulas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
