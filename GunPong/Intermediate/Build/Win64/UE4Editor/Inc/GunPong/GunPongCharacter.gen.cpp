// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunPong/GunPongCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunPongCharacter() {}
// Cross Module References
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongCharacter_NoRegister();
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GunPong();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongProjectile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGunPongCharacter::execSpawnProjectile)
	{
		P_GET_STRUCT(FRotator,Z_Param_ClickDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile_Implementation(Z_Param_ClickDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGunPongCharacter::execStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGunPongCharacter::execStartFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFire();
		P_NATIVE_END;
	}
	static FName NAME_AGunPongCharacter_SpawnProjectile = FName(TEXT("SpawnProjectile"));
	void AGunPongCharacter::SpawnProjectile(FRotator ClickDirection)
	{
		GunPongCharacter_eventSpawnProjectile_Parms Parms;
		Parms.ClickDirection=ClickDirection;
		ProcessEvent(FindFunctionChecked(NAME_AGunPongCharacter_SpawnProjectile),&Parms);
	}
	void AGunPongCharacter::StaticRegisterNativesAGunPongCharacter()
	{
		UClass* Class = AGunPongCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &AGunPongCharacter::execSpawnProjectile },
			{ "StartFire", &AGunPongCharacter::execStartFire },
			{ "StopFire", &AGunPongCharacter::execStopFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClickDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile_Statics::NewProp_ClickDirection = { "ClickDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunPongCharacter_eventSpawnProjectile_Parms, ClickDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile_Statics::NewProp_ClickDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Server function for spawning projectiles.*/" },
		{ "ModuleRelativePath", "GunPongCharacter.h" },
		{ "ToolTip", "Server function for spawning projectiles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunPongCharacter, nullptr, "SpawnProjectile", nullptr, nullptr, sizeof(GunPongCharacter_eventSpawnProjectile_Parms), Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGunPongCharacter_StartFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunPongCharacter_StartFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Function for beginning weapon fire.*/" },
		{ "ModuleRelativePath", "GunPongCharacter.h" },
		{ "ToolTip", "Function for beginning weapon fire." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunPongCharacter_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunPongCharacter, nullptr, "StartFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunPongCharacter_StartFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunPongCharacter_StartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunPongCharacter_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunPongCharacter_StartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGunPongCharacter_StopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunPongCharacter_StopFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Function for ending weapon fire. Once this is called, the player can use StartFire again.*/" },
		{ "ModuleRelativePath", "GunPongCharacter.h" },
		{ "ToolTip", "Function for ending weapon fire. Once this is called, the player can use StartFire again." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunPongCharacter_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunPongCharacter, nullptr, "StopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunPongCharacter_StopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunPongCharacter_StopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunPongCharacter_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunPongCharacter_StopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGunPongCharacter_NoRegister()
	{
		return AGunPongCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGunPongCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_AGunPongCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GunPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGunPongCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGunPongCharacter_SpawnProjectile, "SpawnProjectile" }, // 1382173790
		{ &Z_Construct_UFunction_AGunPongCharacter_StartFire, "StartFire" }, // 1088234772
		{ &Z_Construct_UFunction_AGunPongCharacter_StopFire, "StopFire" }, // 3296816097
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GunPongCharacter.h" },
		{ "ModuleRelativePath", "GunPongCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** The camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GunPongCharacter.h" },
		{ "ToolTip", "The camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/* The speed our ship moves around the level */" },
		{ "ModuleRelativePath", "GunPongCharacter.h" },
		{ "ToolTip", "The speed our ship moves around the level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongCharacter, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "GunPongCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Gameplay|Projectile" },
		{ "ModuleRelativePath", "GunPongCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongCharacter, ProjectileClass), Z_Construct_UClass_AGunPongProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Delay between shots in seconds. Used to control fire rate for our test projectile, but also to prevent an overflow of server functions from binding SpawnProjectile directly to input.*/" },
		{ "ModuleRelativePath", "GunPongCharacter.h" },
		{ "ToolTip", "Delay between shots in seconds. Used to control fire rate for our test projectile, but also to prevent an overflow of server functions from binding SpawnProjectile directly to input." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongCharacter, FireRate), METADATA_PARAMS(Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_FireRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunPongCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongCharacter_Statics::NewProp_FireRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunPongCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunPongCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunPongCharacter_Statics::ClassParams = {
		&AGunPongCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGunPongCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGunPongCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunPongCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunPongCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunPongCharacter, 253404685);
	template<> GUNPONG_API UClass* StaticClass<AGunPongCharacter>()
	{
		return AGunPongCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunPongCharacter(Z_Construct_UClass_AGunPongCharacter, &AGunPongCharacter::StaticClass, TEXT("/Script/GunPong"), TEXT("AGunPongCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunPongCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
