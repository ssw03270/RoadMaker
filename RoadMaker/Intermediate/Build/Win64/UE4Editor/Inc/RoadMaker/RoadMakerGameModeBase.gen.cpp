// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadMaker/RoadMakerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadMakerGameModeBase() {}
// Cross Module References
	ROADMAKER_API UClass* Z_Construct_UClass_ARoadMakerGameModeBase_NoRegister();
	ROADMAKER_API UClass* Z_Construct_UClass_ARoadMakerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RoadMaker();
// End Cross Module References
	void ARoadMakerGameModeBase::StaticRegisterNativesARoadMakerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARoadMakerGameModeBase_NoRegister()
	{
		return ARoadMakerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARoadMakerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoadMakerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RoadMaker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoadMakerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RoadMakerGameModeBase.h" },
		{ "ModuleRelativePath", "RoadMakerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoadMakerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoadMakerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoadMakerGameModeBase_Statics::ClassParams = {
		&ARoadMakerGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARoadMakerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoadMakerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoadMakerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoadMakerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoadMakerGameModeBase, 137047505);
	template<> ROADMAKER_API UClass* StaticClass<ARoadMakerGameModeBase>()
	{
		return ARoadMakerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoadMakerGameModeBase(Z_Construct_UClass_ARoadMakerGameModeBase, &ARoadMakerGameModeBase::StaticClass, TEXT("/Script/RoadMaker"), TEXT("ARoadMakerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoadMakerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
