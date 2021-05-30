// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunPong/GunPongPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunPongPawn() {}
// Cross Module References
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongPawn_NoRegister();
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GunPong();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongProjectile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGunPongPawn::execSpawnProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGunPongPawn::execStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGunPongPawn::execStartFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFire();
		P_NATIVE_END;
	}
	static FName NAME_AGunPongPawn_SpawnProjectile = FName(TEXT("SpawnProjectile"));
	void AGunPongPawn::SpawnProjectile()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGunPongPawn_SpawnProjectile),NULL);
	}
	void AGunPongPawn::StaticRegisterNativesAGunPongPawn()
	{
		UClass* Class = AGunPongPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &AGunPongPawn::execSpawnProjectile },
			{ "StartFire", &AGunPongPawn::execStartFire },
			{ "StopFire", &AGunPongPawn::execStopFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGunPongPawn_SpawnProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunPongPawn_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Server function for spawning projectiles.*/" },
		{ "ModuleRelativePath", "GunPongPawn.h" },
		{ "ToolTip", "Server function for spawning projectiles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunPongPawn_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunPongPawn, nullptr, "SpawnProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunPongPawn_SpawnProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunPongPawn_SpawnProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunPongPawn_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunPongPawn_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGunPongPawn_StartFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunPongPawn_StartFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Function for beginning weapon fire.*/" },
		{ "ModuleRelativePath", "GunPongPawn.h" },
		{ "ToolTip", "Function for beginning weapon fire." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunPongPawn_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunPongPawn, nullptr, "StartFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunPongPawn_StartFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunPongPawn_StartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunPongPawn_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunPongPawn_StartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGunPongPawn_StopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunPongPawn_StopFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Function for ending weapon fire. Once this is called, the player can use StartFire again.*/" },
		{ "ModuleRelativePath", "GunPongPawn.h" },
		{ "ToolTip", "Function for ending weapon fire. Once this is called, the player can use StartFire again." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunPongPawn_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunPongPawn, nullptr, "StopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunPongPawn_StopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunPongPawn_StopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunPongPawn_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunPongPawn_StopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGunPongPawn_NoRegister()
	{
		return AGunPongPawn::StaticClass();
	}
	struct Z_Construct_UClass_AGunPongPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunPongPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GunPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGunPongPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGunPongPawn_SpawnProjectile, "SpawnProjectile" }, // 572287154
		{ &Z_Construct_UFunction_AGunPongPawn_StartFire, "StartFire" }, // 2038221399
		{ &Z_Construct_UFunction_AGunPongPawn_StopFire, "StopFire" }, // 34211248
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GunPongPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GunPongPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongPawn_Statics::NewProp_ShipMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "Comment", "/* The mesh component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GunPongPawn.h" },
		{ "ToolTip", "The mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunPongPawn_Statics::NewProp_ShipMeshComponent = { "ShipMeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongPawn, ShipMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_ShipMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_ShipMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** The camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GunPongPawn.h" },
		{ "ToolTip", "The camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunPongPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongPawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* The speed our ship moves around the level */" },
		{ "ModuleRelativePath", "GunPongPawn.h" },
		{ "ToolTip", "The speed our ship moves around the level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunPongPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongPawn, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongPawn_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "GunPongPawn.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunPongPawn_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongPawn, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongPawn_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Gameplay|Projectile" },
		{ "Comment", "// End Actor Interface\n" },
		{ "ModuleRelativePath", "GunPongPawn.h" },
		{ "ToolTip", "End Actor Interface" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGunPongPawn_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongPawn, ProjectileClass), Z_Construct_UClass_AGunPongProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongPawn_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Delay between shots in seconds. Used to control fire rate for our test projectile, but also to prevent an overflow of server functions from binding SpawnProjectile directly to input.*/" },
		{ "ModuleRelativePath", "GunPongPawn.h" },
		{ "ToolTip", "Delay between shots in seconds. Used to control fire rate for our test projectile, but also to prevent an overflow of server functions from binding SpawnProjectile directly to input." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunPongPawn_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongPawn, FireRate), METADATA_PARAMS(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongPawn_Statics::NewProp_FireRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunPongPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongPawn_Statics::NewProp_ShipMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongPawn_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongPawn_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongPawn_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongPawn_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongPawn_Statics::NewProp_FireRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunPongPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunPongPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunPongPawn_Statics::ClassParams = {
		&AGunPongPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGunPongPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongPawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGunPongPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunPongPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunPongPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunPongPawn, 3228343642);
	template<> GUNPONG_API UClass* StaticClass<AGunPongPawn>()
	{
		return AGunPongPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunPongPawn(Z_Construct_UClass_AGunPongPawn, &AGunPongPawn::StaticClass, TEXT("/Script/GunPong"), TEXT("AGunPongPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunPongPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
