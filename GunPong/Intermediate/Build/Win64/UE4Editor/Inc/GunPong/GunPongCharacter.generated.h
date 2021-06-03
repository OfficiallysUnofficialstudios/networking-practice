// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef GUNPONG_GunPongCharacter_generated_h
#error "GunPongCharacter.generated.h already included, missing '#pragma once' in GunPongCharacter.h"
#endif
#define GUNPONG_GunPongCharacter_generated_h

#define GunPong_Source_GunPong_GunPongCharacter_h_12_SPARSE_DATA
#define GunPong_Source_GunPong_GunPongCharacter_h_12_RPC_WRAPPERS \
	virtual void SpawnProjectile_Implementation(FRotator ClickDirection); \
 \
	DECLARE_FUNCTION(execSpawnProjectile); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire);


#define GunPong_Source_GunPong_GunPongCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnProjectile_Implementation(FRotator ClickDirection); \
 \
	DECLARE_FUNCTION(execSpawnProjectile); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire);


#define GunPong_Source_GunPong_GunPongCharacter_h_12_EVENT_PARMS \
	struct GunPongCharacter_eventSpawnProjectile_Parms \
	{ \
		FRotator ClickDirection; \
	};


#define GunPong_Source_GunPong_GunPongCharacter_h_12_CALLBACK_WRAPPERS
#define GunPong_Source_GunPong_GunPongCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunPongCharacter(); \
	friend struct Z_Construct_UClass_AGunPongCharacter_Statics; \
public: \
	DECLARE_CLASS(AGunPongCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunPong"), NO_API) \
	DECLARE_SERIALIZER(AGunPongCharacter)


#define GunPong_Source_GunPong_GunPongCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGunPongCharacter(); \
	friend struct Z_Construct_UClass_AGunPongCharacter_Statics; \
public: \
	DECLARE_CLASS(AGunPongCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunPong"), NO_API) \
	DECLARE_SERIALIZER(AGunPongCharacter)


#define GunPong_Source_GunPong_GunPongCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGunPongCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGunPongCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunPongCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunPongCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunPongCharacter(AGunPongCharacter&&); \
	NO_API AGunPongCharacter(const AGunPongCharacter&); \
public:


#define GunPong_Source_GunPong_GunPongCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunPongCharacter(AGunPongCharacter&&); \
	NO_API AGunPongCharacter(const AGunPongCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunPongCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunPongCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunPongCharacter)


#define GunPong_Source_GunPong_GunPongCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AGunPongCharacter, CameraComponent); }


#define GunPong_Source_GunPong_GunPongCharacter_h_9_PROLOG \
	GunPong_Source_GunPong_GunPongCharacter_h_12_EVENT_PARMS


#define GunPong_Source_GunPong_GunPongCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunPong_Source_GunPong_GunPongCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GunPong_Source_GunPong_GunPongCharacter_h_12_SPARSE_DATA \
	GunPong_Source_GunPong_GunPongCharacter_h_12_RPC_WRAPPERS \
	GunPong_Source_GunPong_GunPongCharacter_h_12_CALLBACK_WRAPPERS \
	GunPong_Source_GunPong_GunPongCharacter_h_12_INCLASS \
	GunPong_Source_GunPong_GunPongCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GunPong_Source_GunPong_GunPongCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunPong_Source_GunPong_GunPongCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GunPong_Source_GunPong_GunPongCharacter_h_12_SPARSE_DATA \
	GunPong_Source_GunPong_GunPongCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GunPong_Source_GunPong_GunPongCharacter_h_12_CALLBACK_WRAPPERS \
	GunPong_Source_GunPong_GunPongCharacter_h_12_INCLASS_NO_PURE_DECLS \
	GunPong_Source_GunPong_GunPongCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNPONG_API UClass* StaticClass<class AGunPongCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GunPong_Source_GunPong_GunPongCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
