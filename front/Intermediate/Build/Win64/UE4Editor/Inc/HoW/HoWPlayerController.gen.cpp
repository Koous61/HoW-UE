// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoW/HoWPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoWPlayerController() {}
// Cross Module References
	HOW_API UClass* Z_Construct_UClass_AHoWPlayerController_NoRegister();
	HOW_API UClass* Z_Construct_UClass_AHoWPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_HoW();
// End Cross Module References
	void AHoWPlayerController::StaticRegisterNativesAHoWPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AHoWPlayerController_NoRegister()
	{
		return AHoWPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AHoWPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoWPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_HoW,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoWPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HoWPlayerController.h" },
		{ "ModuleRelativePath", "HoWPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoWPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoWPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHoWPlayerController_Statics::ClassParams = {
		&AHoWPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHoWPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHoWPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHoWPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHoWPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHoWPlayerController, 1602915861);
	template<> HOW_API UClass* StaticClass<AHoWPlayerController>()
	{
		return AHoWPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHoWPlayerController(Z_Construct_UClass_AHoWPlayerController, &AHoWPlayerController::StaticClass, TEXT("/Script/HoW"), TEXT("AHoWPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoWPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
