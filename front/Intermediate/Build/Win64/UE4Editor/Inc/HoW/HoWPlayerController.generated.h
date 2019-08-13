// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOW_HoWPlayerController_generated_h
#error "HoWPlayerController.generated.h already included, missing '#pragma once' in HoWPlayerController.h"
#endif
#define HOW_HoWPlayerController_generated_h

#define HoW_Source_HoW_HoWPlayerController_h_12_RPC_WRAPPERS
#define HoW_Source_HoW_HoWPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define HoW_Source_HoW_HoWPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHoWPlayerController(); \
	friend struct Z_Construct_UClass_AHoWPlayerController_Statics; \
public: \
	DECLARE_CLASS(AHoWPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoW"), NO_API) \
	DECLARE_SERIALIZER(AHoWPlayerController)


#define HoW_Source_HoW_HoWPlayerController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHoWPlayerController(); \
	friend struct Z_Construct_UClass_AHoWPlayerController_Statics; \
public: \
	DECLARE_CLASS(AHoWPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoW"), NO_API) \
	DECLARE_SERIALIZER(AHoWPlayerController)


#define HoW_Source_HoW_HoWPlayerController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHoWPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHoWPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoWPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoWPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHoWPlayerController(AHoWPlayerController&&); \
	NO_API AHoWPlayerController(const AHoWPlayerController&); \
public:


#define HoW_Source_HoW_HoWPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHoWPlayerController(AHoWPlayerController&&); \
	NO_API AHoWPlayerController(const AHoWPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoWPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoWPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHoWPlayerController)


#define HoW_Source_HoW_HoWPlayerController_h_12_PRIVATE_PROPERTY_OFFSET
#define HoW_Source_HoW_HoWPlayerController_h_9_PROLOG
#define HoW_Source_HoW_HoWPlayerController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HoW_Source_HoW_HoWPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	HoW_Source_HoW_HoWPlayerController_h_12_RPC_WRAPPERS \
	HoW_Source_HoW_HoWPlayerController_h_12_INCLASS \
	HoW_Source_HoW_HoWPlayerController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HoW_Source_HoW_HoWPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HoW_Source_HoW_HoWPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	HoW_Source_HoW_HoWPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HoW_Source_HoW_HoWPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	HoW_Source_HoW_HoWPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOW_API UClass* StaticClass<class AHoWPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HoW_Source_HoW_HoWPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
