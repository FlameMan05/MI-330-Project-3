// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JWAN_ModifyLayeringLogic.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/InputScaleBias.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeJWAN_ModifyLayeringLogic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyLayering(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UEnum* Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UEnum* Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FLayeringCurvesData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EModifyLayeringApplyMode **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics
template<> JAKUBANIMNODESTOOL_NON_ATTRIBUTED_API UEnum* StaticEnum<EModifyLayeringApplyMode>()
{
	return Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Add.Name", "EModifyLayeringApplyMode::Add" },
		{ "Blend.Name", "EModifyLayeringApplyMode::Blend" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "RemapCurve.Name", "EModifyLayeringApplyMode::RemapCurve" },
		{ "Scale.Name", "EModifyLayeringApplyMode::Scale" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModifyLayeringApplyMode::Blend", (int64)EModifyLayeringApplyMode::Blend },
		{ "EModifyLayeringApplyMode::Add", (int64)EModifyLayeringApplyMode::Add },
		{ "EModifyLayeringApplyMode::Scale", (int64)EModifyLayeringApplyMode::Scale },
		{ "EModifyLayeringApplyMode::RemapCurve", (int64)EModifyLayeringApplyMode::RemapCurve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	"EModifyLayeringApplyMode",
	"EModifyLayeringApplyMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EModifyLayeringApplyMode;
UEnum* Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EModifyLayeringApplyMode.OuterSingleton)
		{
			ZRIE_EModifyLayeringApplyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("EModifyLayeringApplyMode"));
		}
		return ZRIE_EModifyLayeringApplyMode.OuterSingleton;
	}
	if (!ZRIE_EModifyLayeringApplyMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EModifyLayeringApplyMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EModifyLayeringApplyMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EModifyLayeringApplyMode ****************************************************

// ********** Begin Enum ELayeringCurvesName *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics
template<> JAKUBANIMNODESTOOL_NON_ATTRIBUTED_API UEnum* StaticEnum<ELayeringCurvesName>()
{
	return Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Enable_HandIK_L.Name", "ELayeringCurvesName::Enable_HandIK_L" },
		{ "Enable_HandIK_R.Name", "ELayeringCurvesName::Enable_HandIK_R" },
		{ "Enable_SpineRotation.Name", "ELayeringCurvesName::Enable_SpineRotation" },
		{ "Layering_Arm_L.Name", "ELayeringCurvesName::Layering_Arm_L" },
		{ "Layering_Arm_L_Add.Name", "ELayeringCurvesName::Layering_Arm_L_Add" },
		{ "Layering_Arm_L_LS.Name", "ELayeringCurvesName::Layering_Arm_L_LS" },
		{ "Layering_Arm_R.Name", "ELayeringCurvesName::Layering_Arm_R" },
		{ "Layering_Arm_R_Add.Name", "ELayeringCurvesName::Layering_Arm_R_Add" },
		{ "Layering_Arm_R_LS.Name", "ELayeringCurvesName::Layering_Arm_R_LS" },
		{ "Layering_Hand_L.Name", "ELayeringCurvesName::Layering_Hand_L" },
		{ "Layering_Hand_R.Name", "ELayeringCurvesName::Layering_Hand_R" },
		{ "Layering_Head.Name", "ELayeringCurvesName::Layering_Head" },
		{ "Layering_Head_Add.Name", "ELayeringCurvesName::Layering_Head_Add" },
		{ "Layering_Legs.Name", "ELayeringCurvesName::Layering_Legs" },
		{ "Layering_Pelvis.Name", "ELayeringCurvesName::Layering_Pelvis" },
		{ "Layering_Spine.Name", "ELayeringCurvesName::Layering_Spine" },
		{ "Layering_Spine_Add.Name", "ELayeringCurvesName::Layering_Spine_Add" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELayeringCurvesName::Layering_Legs", (int64)ELayeringCurvesName::Layering_Legs },
		{ "ELayeringCurvesName::Layering_Pelvis", (int64)ELayeringCurvesName::Layering_Pelvis },
		{ "ELayeringCurvesName::Layering_Spine", (int64)ELayeringCurvesName::Layering_Spine },
		{ "ELayeringCurvesName::Layering_Spine_Add", (int64)ELayeringCurvesName::Layering_Spine_Add },
		{ "ELayeringCurvesName::Layering_Arm_L", (int64)ELayeringCurvesName::Layering_Arm_L },
		{ "ELayeringCurvesName::Layering_Arm_L_Add", (int64)ELayeringCurvesName::Layering_Arm_L_Add },
		{ "ELayeringCurvesName::Layering_Arm_L_LS", (int64)ELayeringCurvesName::Layering_Arm_L_LS },
		{ "ELayeringCurvesName::Layering_Hand_L", (int64)ELayeringCurvesName::Layering_Hand_L },
		{ "ELayeringCurvesName::Layering_Arm_R", (int64)ELayeringCurvesName::Layering_Arm_R },
		{ "ELayeringCurvesName::Layering_Arm_R_Add", (int64)ELayeringCurvesName::Layering_Arm_R_Add },
		{ "ELayeringCurvesName::Layering_Arm_R_LS", (int64)ELayeringCurvesName::Layering_Arm_R_LS },
		{ "ELayeringCurvesName::Layering_Hand_R", (int64)ELayeringCurvesName::Layering_Hand_R },
		{ "ELayeringCurvesName::Layering_Head", (int64)ELayeringCurvesName::Layering_Head },
		{ "ELayeringCurvesName::Layering_Head_Add", (int64)ELayeringCurvesName::Layering_Head_Add },
		{ "ELayeringCurvesName::Enable_HandIK_L", (int64)ELayeringCurvesName::Enable_HandIK_L },
		{ "ELayeringCurvesName::Enable_HandIK_R", (int64)ELayeringCurvesName::Enable_HandIK_R },
		{ "ELayeringCurvesName::Enable_SpineRotation", (int64)ELayeringCurvesName::Enable_SpineRotation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	"ELayeringCurvesName",
	"ELayeringCurvesName",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELayeringCurvesName;
UEnum* Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELayeringCurvesName.OuterSingleton)
		{
			ZRIE_ELayeringCurvesName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("ELayeringCurvesName"));
		}
		return ZRIE_ELayeringCurvesName.OuterSingleton;
	}
	if (!ZRIE_ELayeringCurvesName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELayeringCurvesName.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELayeringCurvesName.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELayeringCurvesName *********************************************************

// ********** Begin ScriptStruct FLayeringCurvesData ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FLayeringCurvesData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FLayeringCurvesData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLayeringCurvesData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[] = {
		{ "Category", "LayeringCurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "LayeringCurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "LayeringCurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLayeringCurvesData constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveName_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLayeringCurvesData constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeringCurvesData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FLayeringCurvesData Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CurveName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeringCurvesData, CurveName), Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveName_MetaData), NewProp_CurveName_MetaData) }; // 60061e8627733f297e5cbedbed654496b3279a27
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeringCurvesData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeringCurvesData, BlendMode), Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 15ca770c87790344441cbce5c002585f73080c8a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveName_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FLayeringCurvesData Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	&NewStructOps,
	"LayeringCurvesData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FLayeringCurvesData>(),
	alignof(FLayeringCurvesData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLayeringCurvesData;
UScriptStruct* Z_Construct_UScriptStruct_FLayeringCurvesData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FLayeringCurvesData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FLayeringCurvesData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeringCurvesData, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("LayeringCurvesData"));
		}
		return Z_Registration_Info_UScriptStruct_FLayeringCurvesData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FLayeringCurvesData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLayeringCurvesData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLayeringCurvesData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FLayeringCurvesData *************************************************

// ********** Begin ScriptStruct FAnimNode_ModifyLayering ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAnimNode_ModifyLayering>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAnimNode_ModifyLayering); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Easy way to modify curve values on a pose */" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Easy way to modify curve values on a pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvesStructure_MetaData[] = {
		{ "Category", "ModifyLayering" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyMode_MetaData[] = {
		{ "Category", "ModifyLayering" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "AlphaSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//From TwoWayBlend\n" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "From TwoWayBlend" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAnimNode_ModifyLayering constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurvesStructure_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvesStructure;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAnimNode_ModifyLayering constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyLayering>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAnimNode_ModifyLayering>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ModifyLayering cannot be polymorphic unless super FAnimNode_Base is polymorphic");

// ********** Begin ScriptStruct FAnimNode_ModifyLayering Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePose_MetaData), NewProp_SourcePose_MetaData) }; // a0dc9905954a797009d1d7096d7718f4e2f30e58
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CurvesStructure_Inner = { "CurvesStructure", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLayeringCurvesData, METADATA_PARAMS(0, nullptr) }; // 5163d668723c66516fa09922264f974d4c89afc2
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CurvesStructure = { "CurvesStructure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, CurvesStructure), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvesStructure_MetaData), NewProp_CurvesStructure_MetaData) }; // 5163d668723c66516fa09922264f974d4c89afc2
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ApplyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ApplyMode = { "ApplyMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, ApplyMode), Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyMode_MetaData), NewProp_ApplyMode_MetaData) }; // 15ca770c87790344441cbce5c002585f73080c8a
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaInputType_MetaData), NewProp_AlphaInputType_MetaData) }; // 495386acf881be42a0efddad74b7a35ced4d4031
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData), NewProp_AlphaScaleBias_MetaData) }; // e8819e78c8b12fb5d9eb5ce7604d324dee610d7f
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaCurveName_MetaData), NewProp_AlphaCurveName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBiasClamp_MetaData), NewProp_AlphaScaleBiasClamp_MetaData) }; // e58aefd12823708a6dc11392bb65e66a46b22d1a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurvesStructure_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurvesStructure,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ApplyMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ApplyMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlphaInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlphaInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlphaScaleBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlphaCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlphaScaleBiasClamp,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAnimNode_ModifyLayering Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_ModifyLayering",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAnimNode_ModifyLayering>(),
	alignof(FAnimNode_ModifyLayering),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAnimNode_ModifyLayering;
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyLayering(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAnimNode_ModifyLayering.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAnimNode_ModifyLayering.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("AnimNode_ModifyLayering"));
		}
		return Z_Registration_Info_UScriptStruct_FAnimNode_ModifyLayering.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAnimNode_ModifyLayering.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAnimNode_ModifyLayering.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAnimNode_ModifyLayering.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAnimNode_ModifyLayering ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h__Script_JakubAnimNodesTool_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode, TEXT("EModifyLayeringApplyMode"), &ZRIE_EModifyLayeringApplyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 365590284U) },
		{ Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName, TEXT("ELayeringCurvesName"), &ZRIE_ELayeringCurvesName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1611013766U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FLayeringCurvesData, Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewStructOps, TEXT("LayeringCurvesData"),&Z_Registration_Info_UScriptStruct_FLayeringCurvesData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeringCurvesData), 1365497448U) },
		{ Z_Construct_UScriptStruct_FAnimNode_ModifyLayering, Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewStructOps, TEXT("AnimNode_ModifyLayering"),&Z_Registration_Info_UScriptStruct_FAnimNode_ModifyLayering, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ModifyLayering), 253046320U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h__Script_JakubAnimNodesTool_8dc3cc3d183d179f0b4116fe24ec05d5132d5a67{
	TEXT("/Script/JakubAnimNodesTool"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
