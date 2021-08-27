// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkerNodes/Public/DarkerNodesSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarkerNodesSettings() {}
// Cross Module References
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle();
	UPackage* Z_Construct_UPackage__Script_DarkerNodes();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EButtonPadding();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EPrimaryColor();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EThemeTemperature();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EThemeLight();
	DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EHeaderStyle();
	DARKERNODES_API UClass* Z_Construct_UClass_UDarkerNodesSettings_NoRegister();
	DARKERNODES_API UClass* Z_Construct_UClass_UDarkerNodesSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EBlueprintVarNodeStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EBlueprintVarNodeStyle"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeStyle>()
	{
		return EBlueprintVarNodeStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintVarNodeStyle(EBlueprintVarNodeStyle_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EBlueprintVarNodeStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle_Hash() { return 1666060232U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintVarNodeStyle"), 0, Get_Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintVarNodeStyle::Solid", (int64)EBlueprintVarNodeStyle::Solid },
				{ "EBlueprintVarNodeStyle::DarkGlass", (int64)EBlueprintVarNodeStyle::DarkGlass },
				{ "EBlueprintVarNodeStyle::LightGlass", (int64)EBlueprintVarNodeStyle::LightGlass },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DarkGlass.Name", "EBlueprintVarNodeStyle::DarkGlass" },
				{ "LightGlass.Name", "EBlueprintVarNodeStyle::LightGlass" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Solid.Name", "EBlueprintVarNodeStyle::Solid" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EBlueprintVarNodeStyle",
				"EBlueprintVarNodeStyle",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBlueprintVarNodeLine_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EBlueprintVarNodeLine"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeLine>()
	{
		return EBlueprintVarNodeLine_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintVarNodeLine(EBlueprintVarNodeLine_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EBlueprintVarNodeLine"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine_Hash() { return 2658729350U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintVarNodeLine"), 0, Get_Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintVarNodeLine::Thin", (int64)EBlueprintVarNodeLine::Thin },
				{ "EBlueprintVarNodeLine::Thick", (int64)EBlueprintVarNodeLine::Thick },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Thick.Name", "EBlueprintVarNodeLine::Thick" },
				{ "Thin.Name", "EBlueprintVarNodeLine::Thin" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EBlueprintVarNodeLine",
				"EBlueprintVarNodeLine",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EButtonPadding_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EButtonPadding, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EButtonPadding"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EButtonPadding>()
	{
		return EButtonPadding_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EButtonPadding(EButtonPadding_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EButtonPadding"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EButtonPadding_Hash() { return 2094865306U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EButtonPadding()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EButtonPadding"), 0, Get_Z_Construct_UEnum_DarkerNodes_EButtonPadding_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EButtonPadding::Small", (int64)EButtonPadding::Small },
				{ "EButtonPadding::Normal", (int64)EButtonPadding::Normal },
				{ "EButtonPadding::Big", (int64)EButtonPadding::Big },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Big.Name", "EButtonPadding::Big" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Normal.Name", "EButtonPadding::Normal" },
				{ "Small.Name", "EButtonPadding::Small" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EButtonPadding",
				"EButtonPadding",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPrimaryColor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EPrimaryColor, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EPrimaryColor"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EPrimaryColor>()
	{
		return EPrimaryColor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPrimaryColor(EPrimaryColor_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EPrimaryColor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EPrimaryColor_Hash() { return 3559104244U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EPrimaryColor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPrimaryColor"), 0, Get_Z_Construct_UEnum_DarkerNodes_EPrimaryColor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPrimaryColor::White", (int64)EPrimaryColor::White },
				{ "EPrimaryColor::Orange", (int64)EPrimaryColor::Orange },
				{ "EPrimaryColor::Cyan", (int64)EPrimaryColor::Cyan },
				{ "EPrimaryColor::Red", (int64)EPrimaryColor::Red },
				{ "EPrimaryColor::Purple", (int64)EPrimaryColor::Purple },
				{ "EPrimaryColor::Green", (int64)EPrimaryColor::Green },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cyan.Name", "EPrimaryColor::Cyan" },
				{ "Green.Name", "EPrimaryColor::Green" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Orange.Name", "EPrimaryColor::Orange" },
				{ "Purple.Name", "EPrimaryColor::Purple" },
				{ "Red.Name", "EPrimaryColor::Red" },
				{ "White.Name", "EPrimaryColor::White" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EPrimaryColor",
				"EPrimaryColor",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EThemeTemperature_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EThemeTemperature, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EThemeTemperature"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EThemeTemperature>()
	{
		return EThemeTemperature_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EThemeTemperature(EThemeTemperature_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EThemeTemperature"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EThemeTemperature_Hash() { return 3145118960U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EThemeTemperature()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EThemeTemperature"), 0, Get_Z_Construct_UEnum_DarkerNodes_EThemeTemperature_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EThemeTemperature::Cooler", (int64)EThemeTemperature::Cooler },
				{ "EThemeTemperature::Cool", (int64)EThemeTemperature::Cool },
				{ "EThemeTemperature::Normal", (int64)EThemeTemperature::Normal },
				{ "EThemeTemperature::Warm", (int64)EThemeTemperature::Warm },
				{ "EThemeTemperature::Warmer", (int64)EThemeTemperature::Warmer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cool.Name", "EThemeTemperature::Cool" },
				{ "Cooler.Name", "EThemeTemperature::Cooler" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Normal.Name", "EThemeTemperature::Normal" },
				{ "Warm.Name", "EThemeTemperature::Warm" },
				{ "Warmer.Name", "EThemeTemperature::Warmer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EThemeTemperature",
				"EThemeTemperature",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EThemeLight_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EThemeLight, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EThemeLight"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EThemeLight>()
	{
		return EThemeLight_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EThemeLight(EThemeLight_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EThemeLight"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EThemeLight_Hash() { return 1800473318U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EThemeLight()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EThemeLight"), 0, Get_Z_Construct_UEnum_DarkerNodes_EThemeLight_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EThemeLight::Light", (int64)EThemeLight::Light },
				{ "EThemeLight::Dark", (int64)EThemeLight::Dark },
				{ "EThemeLight::Darker", (int64)EThemeLight::Darker },
				{ "EThemeLight::Darkest", (int64)EThemeLight::Darkest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dark.Name", "EThemeLight::Dark" },
				{ "Darker.Name", "EThemeLight::Darker" },
				{ "Darkest.Name", "EThemeLight::Darkest" },
				{ "Light.DisplayName", "Light (experimental, don't use it)" },
				{ "Light.Name", "EThemeLight::Light" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EThemeLight",
				"EThemeLight",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHeaderStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EHeaderStyle, Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EHeaderStyle"));
		}
		return Singleton;
	}
	template<> DARKERNODES_API UEnum* StaticEnum<EHeaderStyle>()
	{
		return EHeaderStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHeaderStyle(EHeaderStyle_StaticEnum, TEXT("/Script/DarkerNodes"), TEXT("EHeaderStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DarkerNodes_EHeaderStyle_Hash() { return 2942859694U; }
	UEnum* Z_Construct_UEnum_DarkerNodes_EHeaderStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DarkerNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHeaderStyle"), 0, Get_Z_Construct_UEnum_DarkerNodes_EHeaderStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHeaderStyle::Gradient", (int64)EHeaderStyle::Gradient },
				{ "EHeaderStyle::Plain", (int64)EHeaderStyle::Plain },
				{ "EHeaderStyle::Outline", (int64)EHeaderStyle::Outline },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Gradient.Name", "EHeaderStyle::Gradient" },
				{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
				{ "Outline.Name", "EHeaderStyle::Outline" },
				{ "Plain.Name", "EHeaderStyle::Plain" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
				nullptr,
				"EHeaderStyle",
				"EHeaderStyle",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UDarkerNodesSettings::StaticRegisterNativesUDarkerNodesSettings()
	{
	}
	UClass* Z_Construct_UClass_UDarkerNodesSettings_NoRegister()
	{
		return UDarkerNodesSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDarkerNodesSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTextureResources_MetaData[];
#endif
		static void NewProp_ReloadTextureResources_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReloadTextureResources;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonDanger_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonDanger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonWarning_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonWarning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPrimary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPrimary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseButtonColorCustomization_MetaData[];
#endif
		static void NewProp_UseButtonColorCustomization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseButtonColorCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPrimaryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomPrimaryColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseColorCustomization_MetaData[];
#endif
		static void NewProp_UseColorCustomization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseColorCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreyLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreyLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreyBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreyBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreyDark_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GreyDark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseGreyCustomization_MetaData[];
#endif
		static void NewProp_UseGreyCustomization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseGreyCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomIcons_MetaData[];
#endif
		static void NewProp_UseCustomIcons_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomIcons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableOriginAxis_MetaData[];
#endif
		static void NewProp_DisableOriginAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableOriginAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseBlueprintGrid_MetaData[];
#endif
		static void NewProp_UseBlueprintGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseBlueprintGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintVarNodeStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlueprintVarNodeStyle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlueprintVarNodeStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintVarNodeLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlueprintVarNodeLine;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlueprintVarNodeLine_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateBlueprintTheme_MetaData[];
#endif
		static void NewProp_ActivateBlueprintTheme_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActivateBlueprintTheme;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonPadding;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonPadding_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrimaryColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimaryColor_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeTemperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThemeTemperature;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThemeTemperature_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThemeLight;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThemeLight_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadDefaultStyle_MetaData[];
#endif
		static void NewProp_ReloadDefaultStyle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReloadDefaultStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterActivate_MetaData[];
#endif
		static void NewProp_MasterActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MasterActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDarkerNodesSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DarkerNodes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Darker Nodes Plugin" },
		{ "IncludePath", "DarkerNodesSettings.h" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Force texture resources reload. */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Force texture resources reload." },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->ReloadTextureResources = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources = { "ReloadTextureResources", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonDanger_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Color for danger buttons. Default: RGB(178,0,0) */" },
		{ "EditCondition", "UseButtonColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for danger buttons. Default: RGB(178,0,0)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonDanger = { "ButtonDanger", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonDanger), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonDanger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonDanger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonWarning_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Color for warning buttons. Default: RGB(223,179,0) */" },
		{ "EditCondition", "UseButtonColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for warning buttons. Default: RGB(223,179,0)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonWarning = { "ButtonWarning", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonWarning), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonWarning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonInfo_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Color for info buttons. Default: RGB(0,96,178) */" },
		{ "EditCondition", "UseButtonColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for info buttons. Default: RGB(0,96,178)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonInfo = { "ButtonInfo", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonInfo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonSuccess_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Color for success buttons. Default: RGB(58,161,17) */" },
		{ "EditCondition", "UseButtonColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for success buttons. Default: RGB(58,161,17)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonSuccess = { "ButtonSuccess", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonSuccess), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPrimary_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Color for primary buttons. Default: RGB(0,96,178) */" },
		{ "EditCondition", "UseButtonColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for primary buttons. Default: RGB(0,96,178)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPrimary = { "ButtonPrimary", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonPrimary), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPrimary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPrimary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Customize the colors more in-depth. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Customize the colors more in-depth. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseButtonColorCustomization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization = { "UseButtonColorCustomization", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Text color of the theme. Default: RGB(200,200,200) */" },
		{ "EditCondition", "UseColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Text color of the theme. Default: RGB(200,200,200)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_CustomPrimaryColor_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Hover color on dark background. Default: RGB(229,110,23) */" },
		{ "EditCondition", "UseColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Hover color on dark background. Default: RGB(229,110,23)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_CustomPrimaryColor = { "CustomPrimaryColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, CustomPrimaryColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_CustomPrimaryColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_CustomPrimaryColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Customize the colors more in-depth. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Customize the colors more in-depth. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseColorCustomization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization = { "UseColorCustomization", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyLight_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Light background of the theme. Default: RGB(80,80,80) */" },
		{ "EditCondition", "UseGreyCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Light background of the theme. Default: RGB(80,80,80)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyLight = { "GreyLight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, GreyLight), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyBase_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Base background of the theme. Default: RGB(40,40,40) */" },
		{ "EditCondition", "UseGreyCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Base background of the theme. Default: RGB(40,40,40)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyBase = { "GreyBase", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, GreyBase), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyDark_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Dark background of the theme. Default: RGB(20,20,20) */" },
		{ "EditCondition", "UseGreyCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Dark background of the theme. Default: RGB(20,20,20)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyDark = { "GreyDark", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, GreyDark), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyDark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyDark_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* Customize the backgrounds more in-depth. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Customize the backgrounds more in-depth. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseGreyCustomization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization = { "UseGreyCustomization", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/* Use the thin icons of Darker Nodes. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use the thin icons of Darker Nodes. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseCustomIcons = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons = { "UseCustomIcons", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableOriginAxis_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Hide the origin axis. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Hide the origin axis. Default: false" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableOriginAxis_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->DisableOriginAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableOriginAxis = { "DisableOriginAxis", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableOriginAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableOriginAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableOriginAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintGrid_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Display a grid in the Blueprint graphs. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Display a grid in the Blueprint graphs. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintGrid_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->UseBlueprintGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintGrid = { "UseBlueprintGrid", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Style of the VarNode style. Default: solid */" },
		{ "EditCondition", "ActivateBlueprintTheme" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Style of the VarNode style. Default: solid" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle = { "BlueprintVarNodeStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintVarNodeStyle), Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Style of the VarNode top line. Default: thin */" },
		{ "EditCondition", "ActivateBlueprintTheme" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Style of the VarNode top line. Default: thin" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine = { "BlueprintVarNodeLine", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintVarNodeLine), Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Activate or deactivate the blueprint theme. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Activate or deactivate the blueprint theme. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->ActivateBlueprintTheme = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme = { "ActivateBlueprintTheme", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/* Change the padding of buttons and text fields. Default: normal */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Change the padding of buttons and text fields. Default: normal" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding = { "ButtonPadding", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ButtonPadding), Z_Construct_UEnum_DarkerNodes_EButtonPadding, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/* Variations of the primary color. Default: orange */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Variations of the primary color. Default: orange" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor = { "PrimaryColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, PrimaryColor), Z_Construct_UEnum_DarkerNodes_EPrimaryColor, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/* Variations of the grey background (making it more orange or cyan). Default: normal */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Variations of the grey background (making it more orange or cyan). Default: normal" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature = { "ThemeTemperature", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ThemeTemperature), Z_Construct_UEnum_DarkerNodes_EThemeTemperature, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/* Variations of the grey background (making it lighter or darker). Default: darker */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Variations of the grey background (making it lighter or darker). Default: darker" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight = { "ThemeLight", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDarkerNodesSettings, ThemeLight), Z_Construct_UEnum_DarkerNodes_EThemeLight, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Reload the default style. */" },
		{ "EditCondition", "!MasterActivate" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Reload the default style." },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->ReloadDefaultStyle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle = { "ReloadDefaultStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Activate or deactivate the whole plugin. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Activate or deactivate the whole plugin. Default: true" },
	};
#endif
	void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_SetBit(void* Obj)
	{
		((UDarkerNodesSettings*)Obj)->MasterActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate = { "MasterActivate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDarkerNodesSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonDanger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonWarning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPrimary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseButtonColorCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_CustomPrimaryColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GreyDark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGreyCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomIcons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableOriginAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ButtonPadding_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PrimaryColor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeTemperature_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLight_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDarkerNodesSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDarkerNodesSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDarkerNodesSettings_Statics::ClassParams = {
		&UDarkerNodesSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDarkerNodesSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDarkerNodesSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDarkerNodesSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDarkerNodesSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDarkerNodesSettings, 1749706902);
	template<> DARKERNODES_API UClass* StaticClass<UDarkerNodesSettings>()
	{
		return UDarkerNodesSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDarkerNodesSettings(Z_Construct_UClass_UDarkerNodesSettings, &UDarkerNodesSettings::StaticClass, TEXT("/Script/DarkerNodes"), TEXT("UDarkerNodesSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDarkerNodesSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
