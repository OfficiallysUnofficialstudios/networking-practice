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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AGunPongController::execOnRep_ClickLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ClickLocation();
		P_NATIVE_END;
	}
	void AGunPongController::StaticRegisterNativesAGunPongController()
	{
		UClass* Class = AGunPongController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ClickLocation", &AGunPongController::execOnRep_ClickLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGunPongController_OnRep_ClickLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunPongController_OnRep_ClickLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GunPongController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunPongController_OnRep_ClickLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunPongController, nullptr, "OnRep_ClickLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunPongController_OnRep_ClickLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunPongController_OnRep_ClickLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunPongController_OnRep_ClickLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunPongController_OnRep_ClickLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGunPongController_NoRegister()
	{
		return AGunPongController::StaticClass();
	}
	struct Z_Construct_UClass_AGunPongController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClickLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunPongController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GunPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGunPongController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGunPongController_OnRep_ClickLocation, "OnRep_ClickLocation" }, // 728643210
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GunPongController.h" },
		{ "ModuleRelativePath", "GunPongController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongController_Statics::NewProp_ClickLocation_MetaData[] = {
		{ "ModuleRelativePath", "GunPongController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGunPongController_Statics::NewProp_ClickLocation = { "ClickLocation", "OnRep_ClickLocation", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongController, ClickLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGunPongController_Statics::NewProp_ClickLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongController_Statics::NewProp_ClickLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunPongController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongController_Statics::NewProp_ClickLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunPongController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunPongController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunPongController_Statics::ClassParams = {
		&AGunPongController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGunPongController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongController_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AGunPongController, 2748945415);
	template<> GUNPONG_API UClass* StaticClass<AGunPongController>()
	{
		return AGunPongController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunPongController(Z_Construct_UClass_AGunPongController, &AGunPongController::StaticClass, TEXT("/Script/GunPong"), TEXT("AGunPongController"), false, nullptr, nullptr, nullptr);

	void AGunPongController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ClickLocation(TEXT("ClickLocation"));

		const bool bIsValid = true
			&& Name_ClickLocation == ClassReps[(int32)ENetFields_Private::ClickLocation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGunPongController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunPongController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
