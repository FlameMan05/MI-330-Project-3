// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JWAN_CurveSmootherLogic.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/InputScaleBias.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeJWAN_CurveSmootherLogic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CurveSmoother(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FCurveSmootherSetting(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FCurveSmootherSetting *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCurveSmootherSetting>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCurveSmootherSetting); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCurveName_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseConstantInterp_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReducePeakChange_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakSpeedThreshold_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeakInterpSpeed_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpingTime_MetaData[] = {
		{ "Category", "CurveSmootherSetting" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCurveSmootherSetting constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetCurveName;
	static void NewProp_UseConstantInterp_SetBit(void* Obj)
	{
		((FCurveSmootherSetting*)Obj)->UseConstantInterp = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseConstantInterp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static void NewProp_ReducePeakChange_SetBit(void* Obj)
	{
		((FCurveSmootherSetting*)Obj)->ReducePeakChange = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReducePeakChange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeakSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeakInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCurveSmootherSetting constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveSmootherSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCurveSmootherSetting Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_TargetCurveName = { "TargetCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSmootherSetting, TargetCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCurveName_MetaData), NewProp_TargetCurveName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_UseConstantInterp = { "UseConstantInterp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FCurveSmootherSetting), &UHT_STATICS::NewProp_UseConstantInterp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseConstantInterp_MetaData), NewProp_UseConstantInterp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSmootherSetting, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReducePeakChange = { "ReducePeakChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FCurveSmootherSetting), &UHT_STATICS::NewProp_ReducePeakChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReducePeakChange_MetaData), NewProp_ReducePeakChange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PeakSpeedThreshold = { "PeakSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSmootherSetting, PeakSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakSpeedThreshold_MetaData), NewProp_PeakSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PeakInterpSpeed = { "PeakInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSmootherSetting, PeakInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeakInterpSpeed_MetaData), NewProp_PeakInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InterpingTime = { "InterpingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSmootherSetting, InterpingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpingTime_MetaData), NewProp_InterpingTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UseConstantInterp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReducePeakChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PeakSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PeakInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InterpingTime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCurveSmootherSetting Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	&NewStructOps,
	"CurveSmootherSetting",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCurveSmootherSetting>(),
	alignof(FCurveSmootherSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCurveSmootherSetting;
UScriptStruct* Z_Construct_UScriptStruct_FCurveSmootherSetting(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCurveSmootherSetting.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCurveSmootherSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveSmootherSetting, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("CurveSmootherSetting"));
		}
		return Z_Registration_Info_UScriptStruct_FCurveSmootherSetting.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCurveSmootherSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCurveSmootherSetting.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCurveSmootherSetting.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCurveSmootherSetting ***********************************************

// ********** Begin ScriptStruct FAnimNode_CurveSmoother *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAnimNode_CurveSmoother>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAnimNode_CurveSmoother); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingData_MetaData[] = {
		{ "Category", "SmoothingSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Configure Smoothing */" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configure Smoothing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_CurveSmootherLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAnimNode_CurveSmoother constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothingData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SmoothingData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAnimNode_CurveSmoother constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CurveSmoother>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAnimNode_CurveSmoother>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_CurveSmoother cannot be polymorphic unless super FAnimNode_Base is polymorphic");

// ********** Begin ScriptStruct FAnimNode_CurveSmoother Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePose_MetaData), NewProp_SourcePose_MetaData) }; // a0dc9905954a797009d1d7096d7718f4e2f30e58
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SmoothingData_Inner = { "SmoothingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCurveSmootherSetting, METADATA_PARAMS(0, nullptr) }; // a8d98ebf9d61958e0f9c82271a2f5eb013811a1a
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SmoothingData = { "SmoothingData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, SmoothingData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingData_MetaData), NewProp_SmoothingData_MetaData) }; // a8d98ebf9d61958e0f9c82271a2f5eb013811a1a
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaInputType_MetaData), NewProp_AlphaInputType_MetaData) }; // 495386acf881be42a0efddad74b7a35ced4d4031
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData), NewProp_AlphaScaleBias_MetaData) }; // e8819e78c8b12fb5d9eb5ce7604d324dee610d7f
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, AlphaCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaCurveName_MetaData), NewProp_AlphaCurveName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_CurveSmoother, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBiasClamp_MetaData), NewProp_AlphaScaleBiasClamp_MetaData) }; // e58aefd12823708a6dc11392bb65e66a46b22d1a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SmoothingData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SmoothingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlphaInputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlphaInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlphaScaleBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlphaCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AlphaScaleBiasClamp,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAnimNode_CurveSmoother Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_CurveSmoother",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAnimNode_CurveSmoother>(),
	alignof(FAnimNode_CurveSmoother),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAnimNode_CurveSmoother;
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CurveSmoother(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAnimNode_CurveSmoother.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAnimNode_CurveSmoother.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CurveSmoother, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("AnimNode_CurveSmoother"));
		}
		return Z_Registration_Info_UScriptStruct_FAnimNode_CurveSmoother.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAnimNode_CurveSmoother.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAnimNode_CurveSmoother.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAnimNode_CurveSmoother.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAnimNode_CurveSmoother *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_CurveSmootherLogic_h__Script_JakubAnimNodesTool_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FCurveSmootherSetting, Z_Construct_UScriptStruct_FCurveSmootherSetting_Statics::NewStructOps, TEXT("CurveSmootherSetting"),&Z_Registration_Info_UScriptStruct_FCurveSmootherSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveSmootherSetting), 2832830143U) },
		{ Z_Construct_UScriptStruct_FAnimNode_CurveSmoother, Z_Construct_UScriptStruct_FAnimNode_CurveSmoother_Statics::NewStructOps, TEXT("AnimNode_CurveSmoother"),&Z_Registration_Info_UScriptStruct_FAnimNode_CurveSmoother, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CurveSmoother), 3758374295U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_CurveSmootherLogic_h__Script_JakubAnimNodesTool_13ee2e933fcb3141916dd7da6bd4034f970238a4{
	TEXT("/Script/JakubAnimNodesTool"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
