// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Indian_Tales/Indian_TalesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndian_TalesGameModeBase() {}
// Cross Module References
	INDIAN_TALES_API UClass* Z_Construct_UClass_AIndian_TalesGameModeBase_NoRegister();
	INDIAN_TALES_API UClass* Z_Construct_UClass_AIndian_TalesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Indian_Tales();
// End Cross Module References
	void AIndian_TalesGameModeBase::StaticRegisterNativesAIndian_TalesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AIndian_TalesGameModeBase_NoRegister()
	{
		return AIndian_TalesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AIndian_TalesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIndian_TalesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Indian_Tales,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIndian_TalesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Indian_TalesGameModeBase.h" },
		{ "ModuleRelativePath", "Indian_TalesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIndian_TalesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIndian_TalesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIndian_TalesGameModeBase_Statics::ClassParams = {
		&AIndian_TalesGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AIndian_TalesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIndian_TalesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIndian_TalesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIndian_TalesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIndian_TalesGameModeBase, 2239896692);
	template<> INDIAN_TALES_API UClass* StaticClass<AIndian_TalesGameModeBase>()
	{
		return AIndian_TalesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIndian_TalesGameModeBase(Z_Construct_UClass_AIndian_TalesGameModeBase, &AIndian_TalesGameModeBase::StaticClass, TEXT("/Script/Indian_Tales"), TEXT("AIndian_TalesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIndian_TalesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
