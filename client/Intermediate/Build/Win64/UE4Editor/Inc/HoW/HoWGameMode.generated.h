// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOW_HoWGameMode_generated_h
#error "HoWGameMode.generated.h already included, missing '#pragma once' in HoWGameMode.h"
#endif
#define HOW_HoWGameMode_generated_h

#define HoW_Source_HoW_HoWGameMode_h_12_RPC_WRAPPERS
#define HoW_Source_HoW_HoWGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define HoW_Source_HoW_HoWGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHoWGameMode(); \
	friend struct Z_Construct_UClass_AHoWGameMode_Statics; \
public: \
	DECLARE_CLASS(AHoWGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/HoW"), HOW_API) \
	DECLARE_SERIALIZER(AHoWGameMode)


#define HoW_Source_HoW_HoWGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHoWGameMode(); \
	friend struct Z_Construct_UClass_AHoWGameMode_Statics; \
public: \
	DECLARE_CLASS(AHoWGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/HoW"), HOW_API) \
	DECLARE_SERIALIZER(AHoWGameMode)


#define HoW_Source_HoW_HoWGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOW_API AHoWGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHoWGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOW_API, AHoWGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoWGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOW_API AHoWGameMode(AHoWGameMode&&); \
	HOW_API AHoWGameMode(const AHoWGameMode&); \
public:


#define HoW_Source_HoW_HoWGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOW_API AHoWGameMode(AHoWGameMode&&); \
	HOW_API AHoWGameMode(const AHoWGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOW_API, AHoWGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoWGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHoWGameMode)


#define HoW_Source_HoW_HoWGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define HoW_Source_HoW_HoWGameMode_h_9_PROLOG
#define HoW_Source_HoW_HoWGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HoW_Source_HoW_HoWGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	HoW_Source_HoW_HoWGameMode_h_12_RPC_WRAPPERS \
	HoW_Source_HoW_HoWGameMode_h_12_INCLASS \
	HoW_Source_HoW_HoWGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HoW_Source_HoW_HoWGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HoW_Source_HoW_HoWGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	HoW_Source_HoW_HoWGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HoW_Source_HoW_HoWGameMode_h_12_INCLASS_NO_PURE_DECLS \
	HoW_Source_HoW_HoWGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOW_API UClass* StaticClass<class AHoWGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HoW_Source_HoW_HoWGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
