// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Climb/Public/ClimbObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbObject() {}
// Cross Module References
	CLIMB_API UClass* Z_Construct_UClass_UClimbObject_NoRegister();
	CLIMB_API UClass* Z_Construct_UClass_UClimbObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Climb();
// End Cross Module References
	void UClimbObject::StaticRegisterNativesUClimbObject()
	{
	}
	UClass* Z_Construct_UClass_UClimbObject_NoRegister()
	{
		return UClimbObject::StaticClass();
	}
	struct Z_Construct_UClass_UClimbObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClimbObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Climb,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClimbObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClimbObject.h" },
		{ "ModuleRelativePath", "Public/ClimbObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClimbObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClimbObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClimbObject_Statics::ClassParams = {
		&UClimbObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UClimbObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClimbObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClimbObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClimbObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClimbObject, 3283963101);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClimbObject(Z_Construct_UClass_UClimbObject, &UClimbObject::StaticClass, TEXT("/Script/Climb"), TEXT("UClimbObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClimbObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
