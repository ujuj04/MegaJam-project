// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DARKERNODES_DarkerNodesSettings_generated_h
#error "DarkerNodesSettings.generated.h already included, missing '#pragma once' in DarkerNodesSettings.h"
#endif
#define DARKERNODES_DarkerNodesSettings_generated_h

#define HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_SPARSE_DATA
#define HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_RPC_WRAPPERS
#define HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDarkerNodesSettings(); \
	friend struct Z_Construct_UClass_UDarkerNodesSettings_Statics; \
public: \
	DECLARE_CLASS(UDarkerNodesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DarkerNodes"), NO_API) \
	DECLARE_SERIALIZER(UDarkerNodesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUDarkerNodesSettings(); \
	friend struct Z_Construct_UClass_UDarkerNodesSettings_Statics; \
public: \
	DECLARE_CLASS(UDarkerNodesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DarkerNodes"), NO_API) \
	DECLARE_SERIALIZER(UDarkerNodesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDarkerNodesSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDarkerNodesSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDarkerNodesSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDarkerNodesSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDarkerNodesSettings(UDarkerNodesSettings&&); \
	NO_API UDarkerNodesSettings(const UDarkerNodesSettings&); \
public:


#define HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDarkerNodesSettings(UDarkerNodesSettings&&); \
	NO_API UDarkerNodesSettings(const UDarkerNodesSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDarkerNodesSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDarkerNodesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDarkerNodesSettings)


#define HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_72_PROLOG
#define HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_SPARSE_DATA \
	HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_RPC_WRAPPERS \
	HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_INCLASS \
	HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_SPARSE_DATA \
	HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARKERNODES_API UClass* StaticClass<class UDarkerNodesSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h


#define FOREACH_ENUM_EBLUEPRINTVARNODESTYLE(op) \
	op(EBlueprintVarNodeStyle::Solid) \
	op(EBlueprintVarNodeStyle::DarkGlass) \
	op(EBlueprintVarNodeStyle::LightGlass) 

enum class EBlueprintVarNodeStyle : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeStyle>();

#define FOREACH_ENUM_EBLUEPRINTVARNODELINE(op) \
	op(EBlueprintVarNodeLine::Thin) \
	op(EBlueprintVarNodeLine::Thick) 

enum class EBlueprintVarNodeLine : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeLine>();

#define FOREACH_ENUM_EBUTTONPADDING(op) \
	op(EButtonPadding::Small) \
	op(EButtonPadding::Normal) \
	op(EButtonPadding::Big) 

enum class EButtonPadding : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EButtonPadding>();

#define FOREACH_ENUM_EPRIMARYCOLOR(op) \
	op(EPrimaryColor::White) \
	op(EPrimaryColor::Orange) \
	op(EPrimaryColor::Cyan) \
	op(EPrimaryColor::Red) \
	op(EPrimaryColor::Purple) \
	op(EPrimaryColor::Green) 

enum class EPrimaryColor : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EPrimaryColor>();

#define FOREACH_ENUM_ETHEMETEMPERATURE(op) \
	op(EThemeTemperature::Cooler) \
	op(EThemeTemperature::Cool) \
	op(EThemeTemperature::Normal) \
	op(EThemeTemperature::Warm) \
	op(EThemeTemperature::Warmer) 

enum class EThemeTemperature : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EThemeTemperature>();

#define FOREACH_ENUM_ETHEMELIGHT(op) \
	op(EThemeLight::Light) \
	op(EThemeLight::Dark) \
	op(EThemeLight::Darker) \
	op(EThemeLight::Darkest) 

enum class EThemeLight : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EThemeLight>();

#define FOREACH_ENUM_EHEADERSTYLE(op) \
	op(EHeaderStyle::Gradient) \
	op(EHeaderStyle::Plain) \
	op(EHeaderStyle::Outline) 

enum class EHeaderStyle : uint8;
template<> DARKERNODES_API UEnum* StaticEnum<EHeaderStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
