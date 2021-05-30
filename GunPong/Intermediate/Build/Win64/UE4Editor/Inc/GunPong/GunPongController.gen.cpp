// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunPong/GunPongController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunPongController() {}
// Cross Module References
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongController_NoRegister();
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GunPong();
// End Cross Module References
	void AGunPongController::StaticRegisterNativesAGunPongController()
	{
	}
	UClass* Z_Construct_UClass_AGunPongController_NoRegister()
	{
		return AGunPongController::StaticClass();
	}
	struct Z_Construct_UClass_AGunPongController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunPongController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GunPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GunPongController.h" },
		{ "ModuleRelativePath", "GunPongController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunPongController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunPongController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunPongController_Statics::ClassParams = {
		&AGunPongController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGunPongController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunPongController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunPongController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunPongController, 444895041);
	template<> GUNPONG_API UClass* StaticClass<AGunPongController>()
	{
		return AGunPongController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunPongController(Z_Construct_UClass_AGunPongController, &AGunPongController::StaticClass, TEXT("/Script/GunPong"), TEXT("AGunPongController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunPongController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
