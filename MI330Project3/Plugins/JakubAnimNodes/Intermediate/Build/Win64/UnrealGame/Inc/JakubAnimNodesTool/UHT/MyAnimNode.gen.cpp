// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyAnimNode.h"
#include "Animation/AnimData/BoneMaskFilter.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMyAnimNode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlendProfile(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBone(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UEnum* Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ELayeredBlendMode *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode_Statics
template<> JAKUBANIMNODESTOOL_NON_ATTRIBUTED_API UEnum* StaticEnum<ELayeredBlendMode>()
{
	return Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlendMask.Name", "ELayeredBlendMode::BlendMask" },
		{ "BranchFilter.Name", "ELayeredBlendMode::BranchFilter" },
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELayeredBlendMode::BranchFilter", (int64)ELayeredBlendMode::BranchFilter },
		{ "ELayeredBlendMode::BlendMask", (int64)ELayeredBlendMode::BlendMask },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	"ELayeredBlendMode",
	"ELayeredBlendMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELayeredBlendMode;
UEnum* Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELayeredBlendMode.OuterSingleton)
		{
			ZRIE_ELayeredBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("ELayeredBlendMode"));
		}
		return ZRIE_ELayeredBlendMode.OuterSingleton;
	}
	if (!ZRIE_ELayeredBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELayeredBlendMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELayeredBlendMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELayeredBlendMode ***********************************************************

// ********** Begin ScriptStruct FAnimNode_LayeredBone *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAnimNode_LayeredBone>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAnimNode_LayeredBone); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Layered blend (per bone); has dynamic number of blendposes that can blend per different bone sets\n" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Layered blend (per bone); has dynamic number of blendposes that can blend per different bone sets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The source pose */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The source pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendPoses_MetaData[] = {
		{ "Category", "Links" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Each layer's blended pose */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Each layer's blended pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to use branch filters or a blend mask to specify an input pose per-bone influence */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use branch filters or a blend mask to specify an input pose per-bone influence" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMasks_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The blend masks to use for our layer inputs. Allows the use of per-bone alphas.\n\x09 * Blend masks are used when BlendMode is BlendMask.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The blend masks to use for our layer inputs. Allows the use of per-bone alphas.\nBlend masks are used when BlendMode is BlendMask." },
#endif
		{ "UseAsBlendMask", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerSetup_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Configuration for the parts of the skeleton to blend for each layer. Allows\n\x09 * certain parts of the tree to be blended out or omitted from the pose.\n\x09 * LayerSetup is used when BlendMode is BranchFilter.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration for the parts of the skeleton to blend for each layer. Allows\ncertain parts of the tree to be blended out or omitted from the pose.\nLayerSetup is used when BlendMode is BranchFilter." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeights_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The weights of each layer */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The weights of each layer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceRotationBlend_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to blend bone rotations in mesh space or in local space */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to blend bone rotations in mesh space or in local space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceScaleBlend_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to blend bone scales in mesh space or in local space */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to blend bone scales in mesh space or in local space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveBlendOption_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How to blend the layers together */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to blend the layers together" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlendRootMotionBasedOnRootBone_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to incorporate the per-bone blend weight of the root bone when lending root motion */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to incorporate the per-bone blend weight of the root bone when lending root motion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 */" },
#endif
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max LOD that this node is allowed to run\nFor example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\nwhen the component LOD becomes 3, it will stop update/evaluate\ncurrently transition would be issue and that has to be re-visited" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlendWeights_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Per-bone weights for the skeleton. Serialized as these are only relative to the skeleton, but can potentially\n// be regenerated at runtime if the GUIDs dont match\n" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-bone weights for the skeleton. Serialized as these are only relative to the skeleton, but can potentially\nbe regenerated at runtime if the GUIDs dont match" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Guids for skeleton used to determine whether the PerBoneBlendWeights need rebuilding\n" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guids for skeleton used to determine whether the PerBoneBlendWeights need rebuilding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Guid for virtual bones used to determine whether the PerBoneBlendWeights need rebuilding\n" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guid for virtual bones used to determine whether the PerBoneBlendWeights need rebuilding" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAnimNode_LayeredBone constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendPoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendPoses;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendMasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendMasks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerSetup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerSetup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendWeights;
	static void NewProp_bMeshSpaceRotationBlend_SetBit(void* Obj)
	{
		((FAnimNode_LayeredBone*)Obj)->bMeshSpaceRotationBlend = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceRotationBlend;
	static void NewProp_bMeshSpaceScaleBlend_SetBit(void* Obj)
	{
		((FAnimNode_LayeredBone*)Obj)->bMeshSpaceScaleBlend = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceScaleBlend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveBlendOption;
	static void NewProp_bBlendRootMotionBasedOnRootBone_SetBit(void* Obj)
	{
		((FAnimNode_LayeredBone*)Obj)->bBlendRootMotionBasedOnRootBone = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendRootMotionBasedOnRootBone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerBoneBlendWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerBoneBlendWeights;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualBoneGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAnimNode_LayeredBone constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LayeredBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FAnimNode_LayeredBone>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_LayeredBone cannot be polymorphic unless super FAnimNode_Base is polymorphic");

// ********** Begin ScriptStruct FAnimNode_LayeredBone Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePose_MetaData), NewProp_BasePose_MetaData) }; // a0dc9905954a797009d1d7096d7718f4e2f30e58
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BlendPoses_Inner = { "BlendPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(0, nullptr) }; // a0dc9905954a797009d1d7096d7718f4e2f30e58
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlendPoses = { "BlendPoses", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, BlendPoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendPoses_MetaData), NewProp_BlendPoses_MetaData) }; // a0dc9905954a797009d1d7096d7718f4e2f30e58
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, BlendMode), Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // c01b3573bedbd0bbd2b78c91b104f84ee70b2d40
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BlendMasks_Inner = { "BlendMasks", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlendProfile, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlendMasks = { "BlendMasks", nullptr, (EPropertyFlags)0x0114000000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, BlendMasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMasks_MetaData), NewProp_BlendMasks_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LayerSetup_Inner = { "LayerSetup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LayerSetup = { "LayerSetup", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, LayerSetup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerSetup_MetaData), NewProp_LayerSetup_MetaData) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BlendWeights_Inner = { "BlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlendWeights = { "BlendWeights", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, BlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendWeights_MetaData), NewProp_BlendWeights_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMeshSpaceRotationBlend = { "bMeshSpaceRotationBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_LayeredBone), &UHT_STATICS::NewProp_bMeshSpaceRotationBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshSpaceRotationBlend_MetaData), NewProp_bMeshSpaceRotationBlend_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMeshSpaceScaleBlend = { "bMeshSpaceScaleBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_LayeredBone), &UHT_STATICS::NewProp_bMeshSpaceScaleBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshSpaceScaleBlend_MetaData), NewProp_bMeshSpaceScaleBlend_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CurveBlendOption = { "CurveBlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, CurveBlendOption), Z_Construct_UEnum_Engine_ECurveBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveBlendOption_MetaData), NewProp_CurveBlendOption_MetaData) }; // bb9943409d048f354856fc7e45c1f7c0cec586db
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBlendRootMotionBasedOnRootBone = { "bBlendRootMotionBasedOnRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_LayeredBone), &UHT_STATICS::NewProp_bBlendRootMotionBasedOnRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlendRootMotionBasedOnRootBone_MetaData), NewProp_bBlendRootMotionBasedOnRootBone_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, LODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODThreshold_MetaData), NewProp_LODThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PerBoneBlendWeights_Inner = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(0, nullptr) }; // 0026f79596ec97cbeb6fe8584ab476fb387a7bee
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PerBoneBlendWeights = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, PerBoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerBoneBlendWeights_MetaData), NewProp_PerBoneBlendWeights_MetaData) }; // 0026f79596ec97cbeb6fe8584ab476fb387a7bee
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SkeletonGuid = { "SkeletonGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, SkeletonGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonGuid_MetaData), NewProp_SkeletonGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_VirtualBoneGuid = { "VirtualBoneGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, VirtualBoneGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualBoneGuid_MetaData), NewProp_VirtualBoneGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BasePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendPoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendPoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendMasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendMasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerSetup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMeshSpaceRotationBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMeshSpaceScaleBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveBlendOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBlendRootMotionBasedOnRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LODThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerBoneBlendWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerBoneBlendWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletonGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VirtualBoneGuid,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAnimNode_LayeredBone Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_LayeredBone",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAnimNode_LayeredBone>(),
	alignof(FAnimNode_LayeredBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBone;
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBone(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBone.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LayeredBone, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("AnimNode_LayeredBone"));
		}
		return Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBone.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBone.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBone.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAnimNode_LayeredBone ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h__Script_JakubAnimNodesTool_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode, TEXT("ELayeredBlendMode"), &ZRIE_ELayeredBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3223008627U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAnimNode_LayeredBone, Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewStructOps, TEXT("AnimNode_LayeredBone"),&Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LayeredBone), 1971179529U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h__Script_JakubAnimNodesTool_485e8d44fca18141ef41f7c6e0be940d55c3c9f8{
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
