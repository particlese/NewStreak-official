// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SettingFunctionality/Public/SettingFunctionalityBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingFunctionalityBPLibrary() {}
// Cross Module References
	SETTINGFUNCTIONALITY_API UClass* Z_Construct_UClass_USettingFunctionalityBPLibrary_NoRegister();
	SETTINGFUNCTIONALITY_API UClass* Z_Construct_UClass_USettingFunctionalityBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SettingFunctionality();
	SETTINGFUNCTIONALITY_API UFunction* Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale();
// End Cross Module References
	void USettingFunctionalityBPLibrary::StaticRegisterNativesUSettingFunctionalityBPLibrary()
	{
		UClass* Class = USettingFunctionalityBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeApplicationUIScale", &USettingFunctionalityBPLibrary::execChangeApplicationUIScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale_Statics
	{
		struct SettingFunctionalityBPLibrary_eventChangeApplicationUIScale_Parms
		{
			float newScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale_Statics::NewProp_newScale = { UE4CodeGen_Private::EPropertyClass::Float, "newScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SettingFunctionalityBPLibrary_eventChangeApplicationUIScale_Parms, newScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale_Statics::NewProp_newScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu System|UI" },
		{ "DisplayName", "Changes application UI scale" },
		{ "Keywords", "Menu System UI Scale" },
		{ "ModuleRelativePath", "Public/SettingFunctionalityBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingFunctionalityBPLibrary, "ChangeApplicationUIScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SettingFunctionalityBPLibrary_eventChangeApplicationUIScale_Parms), Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USettingFunctionalityBPLibrary_NoRegister()
	{
		return USettingFunctionalityBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USettingFunctionalityBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingFunctionalityBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SettingFunctionality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingFunctionalityBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingFunctionalityBPLibrary_ChangeApplicationUIScale, "ChangeApplicationUIScale" }, // 536003202
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingFunctionalityBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SettingFunctionalityBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SettingFunctionalityBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingFunctionalityBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingFunctionalityBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USettingFunctionalityBPLibrary_Statics::ClassParams = {
		&USettingFunctionalityBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USettingFunctionalityBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USettingFunctionalityBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingFunctionalityBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USettingFunctionalityBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USettingFunctionalityBPLibrary, 749044490);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USettingFunctionalityBPLibrary(Z_Construct_UClass_USettingFunctionalityBPLibrary, &USettingFunctionalityBPLibrary::StaticClass, TEXT("/Script/SettingFunctionality"), TEXT("USettingFunctionalityBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingFunctionalityBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif