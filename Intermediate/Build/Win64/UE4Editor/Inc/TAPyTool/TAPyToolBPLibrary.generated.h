// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TAPYTOOL_TAPyToolBPLibrary_generated_h
#error "TAPyToolBPLibrary.generated.h already included, missing '#pragma once' in TAPyToolBPLibrary.h"
#endif
#define TAPYTOOL_TAPyToolBPLibrary_generated_h

#define PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_SPARSE_DATA
#define PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExcuteCommand); \
	DECLARE_FUNCTION(execTAPyToolSampleFunction);


#define PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExcuteCommand); \
	DECLARE_FUNCTION(execTAPyToolSampleFunction);


#define PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTAPyToolBPLibrary(); \
	friend struct Z_Construct_UClass_UTAPyToolBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTAPyToolBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TAPyTool"), NO_API) \
	DECLARE_SERIALIZER(UTAPyToolBPLibrary)


#define PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUTAPyToolBPLibrary(); \
	friend struct Z_Construct_UClass_UTAPyToolBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTAPyToolBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TAPyTool"), NO_API) \
	DECLARE_SERIALIZER(UTAPyToolBPLibrary)


#define PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTAPyToolBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTAPyToolBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTAPyToolBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTAPyToolBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTAPyToolBPLibrary(UTAPyToolBPLibrary&&); \
	NO_API UTAPyToolBPLibrary(const UTAPyToolBPLibrary&); \
public:


#define PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTAPyToolBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTAPyToolBPLibrary(UTAPyToolBPLibrary&&); \
	NO_API UTAPyToolBPLibrary(const UTAPyToolBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTAPyToolBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTAPyToolBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTAPyToolBPLibrary)


#define PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_25_PROLOG
#define PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_SPARSE_DATA \
	PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_RPC_WRAPPERS \
	PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_INCLASS \
	PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_SPARSE_DATA \
	PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TAPyToolBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAPYTOOL_API UClass* StaticClass<class UTAPyToolBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PythonPlugin_Plugins_TAPyTool_Source_TAPyTool_Public_TAPyToolBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
