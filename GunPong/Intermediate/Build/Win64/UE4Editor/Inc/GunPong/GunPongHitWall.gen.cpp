// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunPong/GunPongHitWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunPongHitWall() {}
// Cross Module References
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongHitWall_NoRegister();
	GUNPONG_API UClass* Z_Construct_UClass_AGunPongHitWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GunPong();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGunPongHitWall::execUpdateHits)
	{
		P_GET_OBJECT(AActor,Z_Param_CollidedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHits(Z_Param_CollidedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGunPongHitWall::execResetHits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHits();
		P_NATIVE_END;
	}
	void AGunPongHitWall::StaticRegisterNativesAGunPongHitWall()
	{
		UClass* Class = AGunPongHitWall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetHits", &AGunPongHitWall::execResetHits },
			{ "UpdateHits", &AGunPongHitWall::execUpdateHits },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGunPongHitWall_ResetHits_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunPongHitWall_ResetHits_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Resets hits (and maybe other things later)\n" },
		{ "ModuleRelativePath", "GunPongHitWall.h" },
		{ "ToolTip", "Resets hits (and maybe other things later)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunPongHitWall_ResetHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunPongHitWall, nullptr, "ResetHits", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunPongHitWall_ResetHits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunPongHitWall_ResetHits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunPongHitWall_ResetHits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunPongHitWall_ResetHits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGunPongHitWall_UpdateHits_Statics
	{
		struct GunPongHitWall_eventUpdateHits_Parms
		{
			AActor* CollidedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollidedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGunPongHitWall_UpdateHits_Statics::NewProp_CollidedActor = { "CollidedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunPongHitWall_eventUpdateHits_Parms, CollidedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunPongHitWall_UpdateHits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunPongHitWall_UpdateHits_Statics::NewProp_CollidedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunPongHitWall_UpdateHits_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Increases the hits when ball hits wall\n" },
		{ "ModuleRelativePath", "GunPongHitWall.h" },
		{ "ToolTip", "Increases the hits when ball hits wall" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunPongHitWall_UpdateHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunPongHitWall, nullptr, "UpdateHits", nullptr, nullptr, sizeof(GunPongHitWall_eventUpdateHits_Parms), Z_Construct_UFunction_AGunPongHitWall_UpdateHits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunPongHitWall_UpdateHits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunPongHitWall_UpdateHits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunPongHitWall_UpdateHits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunPongHitWall_UpdateHits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunPongHitWall_UpdateHits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGunPongHitWall_NoRegister()
	{
		return AGunPongHitWall::StaticClass();
	}
	struct Z_Construct_UClass_AGunPongHitWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumHits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunPongHitWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GunPong,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGunPongHitWall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGunPongHitWall_ResetHits, "ResetHits" }, // 390769916
		{ &Z_Construct_UFunction_AGunPongHitWall_UpdateHits, "UpdateHits" }, // 1565979109
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongHitWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GunPongHitWall.h" },
		{ "ModuleRelativePath", "GunPongHitWall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunPongHitWall_Statics::NewProp_NumHits_MetaData[] = {
		{ "Category", "GunPongHitWall" },
		{ "Comment", "// Number of hits\n" },
		{ "ModuleRelativePath", "GunPongHitWall.h" },
		{ "ToolTip", "Number of hits" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGunPongHitWall_Statics::NewProp_NumHits = { "NumHits", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunPongHitWall, NumHits), METADATA_PARAMS(Z_Construct_UClass_AGunPongHitWall_Statics::NewProp_NumHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongHitWall_Statics::NewProp_NumHits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunPongHitWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunPongHitWall_Statics::NewProp_NumHits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunPongHitWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunPongHitWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunPongHitWall_Statics::ClassParams = {
		&AGunPongHitWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGunPongHitWall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongHitWall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGunPongHitWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunPongHitWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunPongHitWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunPongHitWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunPongHitWall, 2309572090);
	template<> GUNPONG_API UClass* StaticClass<AGunPongHitWall>()
	{
		return AGunPongHitWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunPongHitWall(Z_Construct_UClass_AGunPongHitWall, &AGunPongHitWall::StaticClass, TEXT("/Script/GunPong"), TEXT("AGunPongHitWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunPongHitWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
