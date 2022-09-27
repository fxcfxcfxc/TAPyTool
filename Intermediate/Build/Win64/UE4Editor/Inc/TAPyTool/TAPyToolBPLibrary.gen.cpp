// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TAPyTool/Public/TAPyToolBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTAPyToolBPLibrary() {}
// Cross Module References
	TAPYTOOL_API UClass* Z_Construct_UClass_UTAPyToolBPLibrary_NoRegister();
	TAPYTOOL_API UClass* Z_Construct_UClass_UTAPyToolBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TAPyTool();
// End Cross Module References
	DEFINE_FUNCTION(UTAPyToolBPLibrary::execExcuteCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConsoleCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTAPyToolBPLibrary::ExcuteCommand(Z_Param_ConsoleCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTAPyToolBPLibrary::execTAPyToolSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UTAPyToolBPLibrary::TAPyToolSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UTAPyToolBPLibrary::StaticRegisterNativesUTAPyToolBPLibrary()
	{
		UClass* Class = UTAPyToolBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExcuteCommand", &UTAPyToolBPLibrary::execExcuteCommand },
			{ "TAPyToolSampleFunction", &UTAPyToolBPLibrary::execTAPyToolSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand_Statics
	{
		struct TAPyToolBPLibrary_eventExcuteCommand_Parms
		{
			FString ConsoleCommand;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConsoleCommand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand_Statics::NewProp_ConsoleCommand = { "ConsoleCommand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TAPyToolBPLibrary_eventExcuteCommand_Parms, ConsoleCommand), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand_Statics::NewProp_ConsoleCommand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Execute Sample function" },
		{ "ModuleRelativePath", "Public/TAPyToolBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTAPyToolBPLibrary, nullptr, "ExcuteCommand", nullptr, nullptr, sizeof(TAPyToolBPLibrary_eventExcuteCommand_Parms), Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics
	{
		struct TAPyToolBPLibrary_eventTAPyToolSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TAPyToolBPLibrary_eventTAPyToolSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TAPyToolBPLibrary_eventTAPyToolSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "TAPyToolTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "TAPyTool sample test testing" },
		{ "ModuleRelativePath", "Public/TAPyToolBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTAPyToolBPLibrary, nullptr, "TAPyToolSampleFunction", nullptr, nullptr, sizeof(TAPyToolBPLibrary_eventTAPyToolSampleFunction_Parms), Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTAPyToolBPLibrary_NoRegister()
	{
		return UTAPyToolBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTAPyToolBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTAPyToolBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TAPyTool,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTAPyToolBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTAPyToolBPLibrary_ExcuteCommand, "ExcuteCommand" }, // 458314023
		{ &Z_Construct_UFunction_UTAPyToolBPLibrary_TAPyToolSampleFunction, "TAPyToolSampleFunction" }, // 1059654306
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTAPyToolBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "TAPyToolBPLibrary.h" },
		{ "ModuleRelativePath", "Public/TAPyToolBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTAPyToolBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTAPyToolBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTAPyToolBPLibrary_Statics::ClassParams = {
		&UTAPyToolBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTAPyToolBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTAPyToolBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTAPyToolBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTAPyToolBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTAPyToolBPLibrary, 3174951384);
	template<> TAPYTOOL_API UClass* StaticClass<UTAPyToolBPLibrary>()
	{
		return UTAPyToolBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTAPyToolBPLibrary(Z_Construct_UClass_UTAPyToolBPLibrary, &UTAPyToolBPLibrary::StaticClass, TEXT("/Script/TAPyTool"), TEXT("UTAPyToolBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTAPyToolBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
