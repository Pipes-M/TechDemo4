// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECHDEMO4PROJ_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define TECHDEMO4PROJ_PlayerCharacter_generated_h

#define TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_SPARSE_DATA
#define TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_RPC_WRAPPERS
#define TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechDemo4proj"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TechDemo4proj"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(APlayerCharacter, FireSound); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlayerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APlayerCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__PersonJump() { return STRUCT_OFFSET(APlayerCharacter, PersonJump); }


#define TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_11_PROLOG
#define TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_SPARSE_DATA \
	TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_RPC_WRAPPERS \
	TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_INCLASS \
	TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_SPARSE_DATA \
	TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECHDEMO4PROJ_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TechDemo4proj_Source_TechDemo4proj_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
