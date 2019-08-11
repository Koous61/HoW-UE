// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOW_HoWCharacter_generated_h
#error "HoWCharacter.generated.h already included, missing '#pragma once' in HoWCharacter.h"
#endif
#define HOW_HoWCharacter_generated_h

#define HoW_Source_HoW_HoWCharacter_h_12_RPC_WRAPPERS
#define HoW_Source_HoW_HoWCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define HoW_Source_HoW_HoWCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHoWCharacter(); \
	friend struct Z_Construct_UClass_AHoWCharacter_Statics; \
public: \
	DECLARE_CLASS(AHoWCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoW"), NO_API) \
	DECLARE_SERIALIZER(AHoWCharacter)


#define HoW_Source_HoW_HoWCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHoWCharacter(); \
	friend struct Z_Construct_UClass_AHoWCharacter_Statics; \
public: \
	DECLARE_CLASS(AHoWCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoW"), NO_API) \
	DECLARE_SERIALIZER(AHoWCharacter)


#define HoW_Source_HoW_HoWCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHoWCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHoWCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoWCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoWCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHoWCharacter(AHoWCharacter&&); \
	NO_API AHoWCharacter(const AHoWCharacter&); \
public:


#define HoW_Source_HoW_HoWCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHoWCharacter(AHoWCharacter&&); \
	NO_API AHoWCharacter(const AHoWCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoWCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoWCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHoWCharacter)


#define HoW_Source_HoW_HoWCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AHoWCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AHoWCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AHoWCharacter, CursorToWorld); }


#define HoW_Source_HoW_HoWCharacter_h_9_PROLOG
#define HoW_Source_HoW_HoWCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HoW_Source_HoW_HoWCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HoW_Source_HoW_HoWCharacter_h_12_RPC_WRAPPERS \
	HoW_Source_HoW_HoWCharacter_h_12_INCLASS \
	HoW_Source_HoW_HoWCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HoW_Source_HoW_HoWCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HoW_Source_HoW_HoWCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HoW_Source_HoW_HoWCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HoW_Source_HoW_HoWCharacter_h_12_INCLASS_NO_PURE_DECLS \
	HoW_Source_HoW_HoWCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOW_API UClass* StaticClass<class AHoWCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HoW_Source_HoW_HoWCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
