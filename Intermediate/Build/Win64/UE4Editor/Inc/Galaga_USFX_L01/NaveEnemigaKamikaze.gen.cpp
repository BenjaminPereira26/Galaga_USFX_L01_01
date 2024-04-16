// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaKamikaze.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaKamikaze() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaKamikaze_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaKamikaze();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AMyAgujeroNegro_NoRegister();
// End Cross Module References
	void ANaveEnemigaKamikaze::StaticRegisterNativesANaveEnemigaKamikaze()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaKamikaze_NoRegister()
	{
		return ANaveEnemigaKamikaze::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaKamikaze_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjetoQueSemueve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjetoQueSemueve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaKamikaze.h" },
		{ "ModuleRelativePath", "NaveEnemigaKamikaze.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::NewProp_ObjetoQueSemueve_MetaData[] = {
		{ "Category", "NaveEnemigaKamikaze" },
		{ "ModuleRelativePath", "NaveEnemigaKamikaze.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::NewProp_ObjetoQueSemueve = { "ObjetoQueSemueve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigaKamikaze, ObjetoQueSemueve), Z_Construct_UClass_AMyAgujeroNegro_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::NewProp_ObjetoQueSemueve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::NewProp_ObjetoQueSemueve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::NewProp_ObjetoQueSemueve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaKamikaze>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::ClassParams = {
		&ANaveEnemigaKamikaze::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaKamikaze()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaKamikaze_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaKamikaze, 802433377);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaKamikaze>()
	{
		return ANaveEnemigaKamikaze::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaKamikaze(Z_Construct_UClass_ANaveEnemigaKamikaze, &ANaveEnemigaKamikaze::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveEnemigaKamikaze"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaKamikaze);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
