// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElectronicNodes/Public/ElectronicNodesSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronicNodesSettings() {}
// Cross Module References
	ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_ESelectionRule();
	UPackage* Z_Construct_UPackage__Script_ElectronicNodes();
	ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule();
	ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EWirePriority();
	ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EWireAlignment();
	ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EWireStyle();
	ELECTRONICNODES_API UClass* Z_Construct_UClass_UElectronicNodesSettings_NoRegister();
	ELECTRONICNODES_API UClass* Z_Construct_UClass_UElectronicNodesSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
	static UEnum* ESelectionRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_ESelectionRule, Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("ESelectionRule"));
		}
		return Singleton;
	}
	template<> ELECTRONICNODES_API UEnum* StaticEnum<ESelectionRule>()
	{
		return ESelectionRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESelectionRule(ESelectionRule_StaticEnum, TEXT("/Script/ElectronicNodes"), TEXT("ESelectionRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Hash() { return 3885790224U; }
	UEnum* Z_Construct_UEnum_ElectronicNodes_ESelectionRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElectronicNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESelectionRule"), 0, Get_Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESelectionRule::Near", (int64)ESelectionRule::Near },
				{ "ESelectionRule::Far", (int64)ESelectionRule::Far },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Far.Name", "ESelectionRule::Far" },
				{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
				{ "Near.Name", "ESelectionRule::Near" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
				nullptr,
				"ESelectionRule",
				"ESelectionRule",
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
	static UEnum* EBubbleDisplayRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule, Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EBubbleDisplayRule"));
		}
		return Singleton;
	}
	template<> ELECTRONICNODES_API UEnum* StaticEnum<EBubbleDisplayRule>()
	{
		return EBubbleDisplayRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBubbleDisplayRule(EBubbleDisplayRule_StaticEnum, TEXT("/Script/ElectronicNodes"), TEXT("EBubbleDisplayRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Hash() { return 1872947699U; }
	UEnum* Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElectronicNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBubbleDisplayRule"), 0, Get_Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBubbleDisplayRule::Always", (int64)EBubbleDisplayRule::Always },
				{ "EBubbleDisplayRule::DisplayOnSelection", (int64)EBubbleDisplayRule::DisplayOnSelection },
				{ "EBubbleDisplayRule::MoveOnSelection", (int64)EBubbleDisplayRule::MoveOnSelection },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "EBubbleDisplayRule::Always" },
				{ "BlueprintType", "true" },
				{ "DisplayOnSelection.Name", "EBubbleDisplayRule::DisplayOnSelection" },
				{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
				{ "MoveOnSelection.Name", "EBubbleDisplayRule::MoveOnSelection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
				nullptr,
				"EBubbleDisplayRule",
				"EBubbleDisplayRule",
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
	static UEnum* EWirePriority_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EWirePriority, Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EWirePriority"));
		}
		return Singleton;
	}
	template<> ELECTRONICNODES_API UEnum* StaticEnum<EWirePriority>()
	{
		return EWirePriority_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWirePriority(EWirePriority_StaticEnum, TEXT("/Script/ElectronicNodes"), TEXT("EWirePriority"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElectronicNodes_EWirePriority_Hash() { return 1648211472U; }
	UEnum* Z_Construct_UEnum_ElectronicNodes_EWirePriority()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElectronicNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWirePriority"), 0, Get_Z_Construct_UEnum_ElectronicNodes_EWirePriority_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWirePriority::None", (int64)EWirePriority::None },
				{ "EWirePriority::Node", (int64)EWirePriority::Node },
				{ "EWirePriority::Pin", (int64)EWirePriority::Pin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
				{ "Node.Name", "EWirePriority::Node" },
				{ "None.Name", "EWirePriority::None" },
				{ "Pin.Name", "EWirePriority::Pin" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
				nullptr,
				"EWirePriority",
				"EWirePriority",
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
	static UEnum* EWireAlignment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EWireAlignment, Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EWireAlignment"));
		}
		return Singleton;
	}
	template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireAlignment>()
	{
		return EWireAlignment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWireAlignment(EWireAlignment_StaticEnum, TEXT("/Script/ElectronicNodes"), TEXT("EWireAlignment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Hash() { return 2316297542U; }
	UEnum* Z_Construct_UEnum_ElectronicNodes_EWireAlignment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElectronicNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWireAlignment"), 0, Get_Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWireAlignment::Right", (int64)EWireAlignment::Right },
				{ "EWireAlignment::Left", (int64)EWireAlignment::Left },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.Name", "EWireAlignment::Left" },
				{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
				{ "Right.Name", "EWireAlignment::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
				nullptr,
				"EWireAlignment",
				"EWireAlignment",
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
	static UEnum* EWireStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EWireStyle, Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EWireStyle"));
		}
		return Singleton;
	}
	template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireStyle>()
	{
		return EWireStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWireStyle(EWireStyle_StaticEnum, TEXT("/Script/ElectronicNodes"), TEXT("EWireStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElectronicNodes_EWireStyle_Hash() { return 2367150431U; }
	UEnum* Z_Construct_UEnum_ElectronicNodes_EWireStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElectronicNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWireStyle"), 0, Get_Z_Construct_UEnum_ElectronicNodes_EWireStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWireStyle::Default", (int64)EWireStyle::Default },
				{ "EWireStyle::Manhattan", (int64)EWireStyle::Manhattan },
				{ "EWireStyle::Subway", (int64)EWireStyle::Subway },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "EWireStyle::Default" },
				{ "Manhattan.Name", "EWireStyle::Manhattan" },
				{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
				{ "Subway.Name", "EWireStyle::Subway" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
				nullptr,
				"EWireStyle",
				"EWireStyle",
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
	void UElectronicNodesSettings::StaticRegisterNativesUElectronicNodesSettings()
	{
	}
	UClass* Z_Construct_UClass_UElectronicNodesSettings_NoRegister()
	{
		return UElectronicNodesSettings::StaticClass();
	}
	struct Z_Construct_UClass_UElectronicNodesSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BubbleSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BubbleSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BubbleSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BubbleSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BubbleSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BubbleSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BubbleZoomThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BubbleZoomThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SelectionRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BubbleDisplayRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BubbleDisplayRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BubbleDisplayRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceDrawBubbles_MetaData[];
#endif
		static void NewProp_ForceDrawBubbles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceDrawBubbles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonMergeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RibbonMergeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RibbonOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateRibbon_MetaData[];
#endif
		static void NewProp_ActivateRibbon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActivateRibbon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WirePriorityForExec_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WirePriorityForExec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WirePriorityForExec_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireAlignmentForExec_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WireAlignmentForExec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WireAlignmentForExec_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireStyleForExec_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WireStyleForExec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WireStyleForExec_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverwriteExecWireStyle_MetaData[];
#endif
		static void NewProp_OverwriteExecWireStyle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverwriteExecWireStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixZoomDisplacement_MetaData[];
#endif
		static void NewProp_FixZoomDisplacement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FixZoomDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisablePinOffset_MetaData[];
#endif
		static void NewProp_DisablePinOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisablePinOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_HorizontalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WireThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RoundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WirePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WirePriority;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WirePriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WireAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WireAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WireStyle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WireStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateOnAnimation_MetaData[];
#endif
		static void NewProp_ActivateOnAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActivateOnAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateOnMaterial_MetaData[];
#endif
		static void NewProp_ActivateOnMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActivateOnMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateOnBlueprint_MetaData[];
#endif
		static void NewProp_ActivateOnBlueprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActivateOnBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterActivate_MetaData[];
#endif
		static void NewProp_MasterActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MasterActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElectronicNodesSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ElectronicNodes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Electronic Nodes Plugin" },
		{ "IncludePath", "ElectronicNodesSettings.h" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/* Space between bubbles on the wires. Default: 20.0 */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Space between bubbles on the wires. Default: 20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace = { "BubbleSpace", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSpace), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Speed of bubbles on the wires. Default: 4.0 */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Speed of bubbles on the wires. Default: 4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed = { "BubbleSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSpeed), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/* Size of bubbles on the wires. Default: 2.0 */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Size of bubbles on the wires. Default: 2.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize = { "BubbleSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSize), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleZoomThreshold_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMax", "7" },
		{ "ClampMin", "-12" },
		{ "Comment", "/* Disable bubbles above a certain zoom level. Default: -2 */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Disable bubbles above a certain zoom level. Default: -2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleZoomThreshold = { "BubbleZoomThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleZoomThreshold), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleZoomThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleZoomThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "Comment", "/* If selection only consider close nodes (near) or every related nodes (far). Default: Near */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "If selection only consider close nodes (near) or every related nodes (far). Default: Near" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule = { "SelectionRule", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, SelectionRule), Z_Construct_UEnum_ElectronicNodes_ESelectionRule, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "Comment", "/* Display rules to show/move bubbles only near selected nodes. Default: Always */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Display rules to show/move bubbles only near selected nodes. Default: Always" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule = { "BubbleDisplayRule", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleDisplayRule), Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "Comment", "/* Show moving bubbles on the wires. Default: false */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Show moving bubbles on the wires. Default: false" },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->ForceDrawBubbles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles = { "ForceDrawBubbles", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
		{ "Comment", "/* Offset of wires when merge into ribbon. Default: 20 */" },
		{ "EditCondition", "ActivateRibbon" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Offset of wires when merge into ribbon. Default: 20" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset = { "RibbonMergeOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, RibbonMergeOffset), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
		{ "Comment", "/* Offset between ribbon wires. Default: 4 */" },
		{ "EditCondition", "ActivateRibbon" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Offset between ribbon wires. Default: 4" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset = { "RibbonOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, RibbonOffset), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
		{ "Comment", "/* Activate ribbon cables for overlapping wires. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate ribbon cables for overlapping wires." },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->ActivateRibbon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon = { "ActivateRibbon", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec_MetaData[] = {
		{ "Category", "Exec Wire Style" },
		{ "Comment", "/* Specify wire alignment priority (when a Node is connected to a Pin) for exe wires. Default: node. */" },
		{ "EditCondition", "OverwriteExecWireStyle" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Specify wire alignment priority (when a Node is connected to a Pin) for exe wires. Default: node." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec = { "WirePriorityForExec", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, WirePriorityForExec), Z_Construct_UEnum_ElectronicNodes_EWirePriority, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec_MetaData[] = {
		{ "Category", "Exec Wire Style" },
		{ "Comment", "/* Specify wire alignment for exe wires. Default: right. */" },
		{ "EditCondition", "OverwriteExecWireStyle" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Specify wire alignment for exe wires. Default: right." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec = { "WireAlignmentForExec", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireAlignmentForExec), Z_Construct_UEnum_ElectronicNodes_EWireAlignment, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_MetaData[] = {
		{ "Category", "Exec Wire Style" },
		{ "Comment", "/* Specific wire style for exec wires. Default: Manhattan */" },
		{ "EditCondition", "OverwriteExecWireStyle" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Specific wire style for exec wires. Default: Manhattan" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec = { "WireStyleForExec", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireStyleForExec), Z_Construct_UEnum_ElectronicNodes_EWireStyle, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle_MetaData[] = {
		{ "Category", "Exec Wire Style" },
		{ "Comment", "/* Use a specific draw style for exec wires. Default: false */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Use a specific draw style for exec wires. Default: false" },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->OverwriteExecWireStyle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle = { "OverwriteExecWireStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Fix default zoomed-out wire displacement. Default: true */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Fix default zoomed-out wire displacement. Default: true" },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->FixZoomDisplacement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement = { "FixZoomDisplacement", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Disable the offset for pins. Default: false */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Disable the offset for pins. Default: false" },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->DisablePinOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset = { "DisablePinOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Horizontal offset of wires from nodes. Default: 16 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Horizontal offset of wires from nodes. Default: 16" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset = { "HorizontalOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, HorizontalOffset), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireThickness_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Thickness of the wire (mutltiplier). Default: 1 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Thickness of the wire (mutltiplier). Default: 1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireThickness = { "WireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireThickness), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Round radius of the wires. Default: 10 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Round radius of the wires. Default: 10" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius = { "RoundRadius", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, RoundRadius), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Specify wire alignment priority (when a Node is connected to a Pin). Default: none. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Specify wire alignment priority (when a Node is connected to a Pin). Default: none." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority = { "WirePriority", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, WirePriority), Z_Construct_UEnum_ElectronicNodes_EWirePriority, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Specify wire alignment. Default: right. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Specify wire alignment. Default: right." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment = { "WireAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireAlignment), Z_Construct_UEnum_ElectronicNodes_EWireAlignment, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Wire style of graph. \"Manhattan\" is for 90deg angles, \"Subway\" is for 45deg angles. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Wire style of graph. \"Manhattan\" is for 90deg angles, \"Subway\" is for 45deg angles." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle = { "WireStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireStyle), Z_Construct_UEnum_ElectronicNodes_EWireStyle, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Activate Electronic Nodes on Animation graphs. Default: true */" },
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on Animation graphs. Default: true" },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->ActivateOnAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation = { "ActivateOnAnimation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Activate Electronic Nodes on Material graphs. Default: true */" },
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on Material graphs. Default: true" },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->ActivateOnMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial = { "ActivateOnMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Activate Electronic Nodes on Blueprint graphs. Default: true */" },
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on Blueprint graphs. Default: true" },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->ActivateOnBlueprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint = { "ActivateOnBlueprint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Activate or desactivate the whole plugin. Default: true */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate or desactivate the whole plugin. Default: true" },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->MasterActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate = { "MasterActivate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleZoomThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElectronicNodesSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElectronicNodesSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElectronicNodesSettings_Statics::ClassParams = {
		&UElectronicNodesSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElectronicNodesSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElectronicNodesSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElectronicNodesSettings, 2230320088);
	template<> ELECTRONICNODES_API UClass* StaticClass<UElectronicNodesSettings>()
	{
		return UElectronicNodesSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElectronicNodesSettings(Z_Construct_UClass_UElectronicNodesSettings, &UElectronicNodesSettings::StaticClass, TEXT("/Script/ElectronicNodes"), TEXT("UElectronicNodesSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElectronicNodesSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
