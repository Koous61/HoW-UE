// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoW/HoWGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoWGameMode() {}
// Cross Module References
	HOW_API UClass* Z_Construct_UClass_AHoWGameMode_NoRegister();
	HOW_API UClass* Z_Construct_UClass_AHoWGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HoW();
// End Cross Module References
	void AHoWGameMode::StaticRegisterNativesAHoWGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHoWGameMode_NoRegister()
	{
		return AHoWGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHoWGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoWGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HoW,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoWGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HoWGameMode.h" },
		{ "ModuleRelativePath", "HoWGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoWGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoWGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHoWGameMode_Statics::ClassParams = {
		&AHoWGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AHoWGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHoWGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHoWGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHoWGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHoWGameMode, 4212005194);
	template<> HOW_API UClass* StaticClass<AHoWGameMode>()
	{
		return AHoWGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHoWGameMode(Z_Construct_UClass_AHoWGameMode, &AHoWGameMode::StaticClass, TEXT("/Script/HoW"), TEXT("AHoWGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoWGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
