// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunPong/GunPongGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunPongGameMode() {}
// Cross Module References
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongGameMode_NoRegister();
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GunPong();
// End Cross Module References
	void AGunPongGameMode::StaticRegisterNativesAGunPongGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGunPongGameMode_NoRegister()
	{
		return AGunPongGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGunPongGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunPongGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GunPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GunPongGameMode.h" },
		{ "ModuleRelativePath", "GunPongGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunPongGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunPongGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunPongGameMode_Statics::ClassParams = {
		&AGunPongGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGunPongGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunPongGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunPongGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunPongGameMode, 1016586517);
	template<> GUNPONG_API UClass* StaticClass<AGunPongGameMode>()
	{
		return AGunPongGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunPongGameMode(Z_Construct_UClass_AGunPongGameMode, &AGunPongGameMode::StaticClass, TEXT("/Script/GunPong"), TEXT("AGunPongGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunPongGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
