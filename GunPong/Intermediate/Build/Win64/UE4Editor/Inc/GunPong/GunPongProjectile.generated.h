// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GUNPONG_GunPongProjectile_generated_h
#error "GunPongProjectile.generated.h already included, missing '#pragma once' in GunPongProjectile.h"
#endif
#define GUNPONG_GunPongProjectile_generated_h

#define GunPong_Source_GunPong_GunPongProjectile_h_15_SPARSE_DATA
#define GunPong_Source_GunPong_GunPongProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GunPong_Source_GunPong_GunPongProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GunPong_Source_GunPong_GunPongProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunPongProjectile(); \
	friend struct Z_Construct_UClass_AGunPongProjectile_Statics; \
public: \
	DECLARE_CLASS(AGunPongProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunPong"), NO_API) \
	DECLARE_SERIALIZER(AGunPongProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GunPong_Source_GunPong_GunPongProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGunPongProjectile(); \
	friend struct Z_Construct_UClass_AGunPongProjectile_Statics; \
public: \
	DECLARE_CLASS(AGunPongProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunPong"), NO_API) \
	DECLARE_SERIALIZER(AGunPongProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GunPong_Source_GunPong_GunPongProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGunPongProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGunPongProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunPongProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunPongProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunPongProjectile(AGunPongProjectile&&); \
	NO_API AGunPongProjectile(const AGunPongProjectile&); \
public:


#define GunPong_Source_GunPong_GunPongProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunPongProjectile(AGunPongProjectile&&); \
	NO_API AGunPongProjectile(const AGunPongProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunPongProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunPongProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunPongProjectile)


#define GunPong_Source_GunPong_GunPongProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGunPongProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGunPongProjectile, ProjectileMovement); }


#define GunPong_Source_GunPong_GunPongProjectile_h_12_PROLOG
#define GunPong_Source_GunPong_GunPongProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunPong_Source_GunPong_GunPongProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GunPong_Source_GunPong_GunPongProjectile_h_15_SPARSE_DATA \
	GunPong_Source_GunPong_GunPongProjectile_h_15_RPC_WRAPPERS \
	GunPong_Source_GunPong_GunPongProjectile_h_15_INCLASS \
	GunPong_Source_GunPong_GunPongProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GunPong_Source_GunPong_GunPongProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunPong_Source_GunPong_GunPongProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GunPong_Source_GunPong_GunPongProjectile_h_15_SPARSE_DATA \
	GunPong_Source_GunPong_GunPongProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GunPong_Source_GunPong_GunPongProjectile_h_15_INCLASS_NO_PURE_DECLS \
	GunPong_Source_GunPong_GunPongProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNPONG_API UClass* StaticClass<class AGunPongProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GunPong_Source_GunPong_GunPongProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
