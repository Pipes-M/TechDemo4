// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TechDemo4proj/TechDemo4projGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTechDemo4projGameModeBase() {}
// Cross Module References
	TECHDEMO4PROJ_API UClass* Z_Construct_UClass_ATechDemo4projGameModeBase_NoRegister();
	TECHDEMO4PROJ_API UClass* Z_Construct_UClass_ATechDemo4projGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TechDemo4proj();
// End Cross Module References
	void ATechDemo4projGameModeBase::StaticRegisterNativesATechDemo4projGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATechDemo4projGameModeBase_NoRegister()
	{
		return ATechDemo4projGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATechDemo4projGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATechDemo4projGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TechDemo4proj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATechDemo4projGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TechDemo4projGameModeBase.h" },
		{ "ModuleRelativePath", "TechDemo4projGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATechDemo4projGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATechDemo4projGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATechDemo4projGameModeBase_Statics::ClassParams = {
		&ATechDemo4projGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATechDemo4projGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATechDemo4projGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATechDemo4projGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATechDemo4projGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATechDemo4projGameModeBase, 1203056810);
	template<> TECHDEMO4PROJ_API UClass* StaticClass<ATechDemo4projGameModeBase>()
	{
		return ATechDemo4projGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATechDemo4projGameModeBase(Z_Construct_UClass_ATechDemo4projGameModeBase, &ATechDemo4projGameModeBase::StaticClass, TEXT("/Script/TechDemo4proj"), TEXT("ATechDemo4projGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATechDemo4projGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
