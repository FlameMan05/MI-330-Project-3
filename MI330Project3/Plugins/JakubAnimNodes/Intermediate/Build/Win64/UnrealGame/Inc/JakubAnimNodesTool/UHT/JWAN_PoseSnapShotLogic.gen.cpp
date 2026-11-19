// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JWAN_PoseSnapShotLogic.h"
#include "Animation/AnimNodeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeJWAN_PoseSnapShotLogic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FJWAN_PoseSnapShotLogic *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FJWAN_PoseSnapShotLogic>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FJWAN_PoseSnapShotLogic); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input pose link\n" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input pose link" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[] = {
		{ "Category", "Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This information is currently not using */" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This information is currently not using" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveBonesNameToPose_MetaData[] = {
		{ "Category", "Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Chech this if you want to node save in PoseSnapshot bones name. Without this Eveluate saving only bone transforms */" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chech this if you want to node save in PoseSnapshot bones name. Without this Eveluate saving only bone transforms" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FJWAN_PoseSnapShotLogic constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
	static void NewProp_SaveBonesNameToPose_SetBit(void* Obj)
	{
		((FJWAN_PoseSnapShotLogic*)Obj)->SaveBonesNameToPose = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveBonesNameToPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FJWAN_PoseSnapShotLogic constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJWAN_PoseSnapShotLogic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FJWAN_PoseSnapShotLogic>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FJWAN_PoseSnapShotLogic cannot be polymorphic unless super FAnimNode_Base is polymorphic");

// ********** Begin ScriptStruct FJWAN_PoseSnapShotLogic Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_PoseSnapShotLogic, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePose_MetaData), NewProp_SourcePose_MetaData) }; // a0dc9905954a797009d1d7096d7718f4e2f30e58
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_PoseSnapShotLogic, SnapshotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotName_MetaData), NewProp_SnapshotName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_SaveBonesNameToPose = { "SaveBonesNameToPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FJWAN_PoseSnapShotLogic), &UHT_STATICS::NewProp_SaveBonesNameToPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveBonesNameToPose_MetaData), NewProp_SaveBonesNameToPose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapshotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SaveBonesNameToPose,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FJWAN_PoseSnapShotLogic Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"JWAN_PoseSnapShotLogic",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FJWAN_PoseSnapShotLogic>(),
	alignof(FJWAN_PoseSnapShotLogic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJWAN_PoseSnapShotLogic;
UScriptStruct* Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FJWAN_PoseSnapShotLogic.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FJWAN_PoseSnapShotLogic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("JWAN_PoseSnapShotLogic"));
		}
		return Z_Registration_Info_UScriptStruct_FJWAN_PoseSnapShotLogic.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FJWAN_PoseSnapShotLogic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJWAN_PoseSnapShotLogic.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FJWAN_PoseSnapShotLogic.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FJWAN_PoseSnapShotLogic *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_PoseSnapShotLogic_h__Script_JakubAnimNodesTool_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic, Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewStructOps, TEXT("JWAN_PoseSnapShotLogic"),&Z_Registration_Info_UScriptStruct_FJWAN_PoseSnapShotLogic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJWAN_PoseSnapShotLogic), 2687995085U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_PoseSnapShotLogic_h__Script_JakubAnimNodesTool_42a801a9b6a21254869d87f7c49c507f1c4de74e{
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
