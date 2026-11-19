// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSnapshotLibrary.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/PoseSnapshot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodePoseSnapshotLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UClass* Z_Construct_UClass_UPoseSnapshotLibrary(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshotReference(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UClass* Z_Construct_UClass_UPoseSnapshotLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FPoseSnapshotReference ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPoseSnapshotReference_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPoseSnapshotReference>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPoseSnapshotReference); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPoseSnapshotReference constinit property declarations ************
// ********** End ScriptStruct FPoseSnapshotReference constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSnapshotReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FPoseSnapshotReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FPoseSnapshotReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"PoseSnapshotReference",
	nullptr,
	0,
	DataSizeOf<FPoseSnapshotReference>(),
	alignof(FPoseSnapshotReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPoseSnapshotReference;
UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshotReference(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPoseSnapshotReference.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPoseSnapshotReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSnapshotReference, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("PoseSnapshotReference"));
		}
		return Z_Registration_Info_UScriptStruct_FPoseSnapshotReference.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPoseSnapshotReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPoseSnapshotReference.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPoseSnapshotReference.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPoseSnapshotReference **********************************************

// ********** Begin Class UPoseSnapshotLibrary Function ConvertToPoseSnapshot **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot_Statics
struct UHT_STATICS
{
	struct PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms
	{
		FAnimNodeReference Node;
		EAnimNodeReferenceConversionResult Result;
		FPoseSnapshotReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Pose Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get a Pose Snapshot context from an anim node context. */" },
#endif
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a Pose Snapshot context from an anim node context." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertToPoseSnapshot constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertToPoseSnapshot constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertToPoseSnapshot Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 057d4e63a7b5325ff925745416b0d3eaca5c4fda
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 739a89dd3fd29559110908d9a3c20210f67e84f9
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPoseSnapshotReference, METADATA_PARAMS(0, nullptr) }; // f5dd798593eeaa6964f61773241d5f0b2177b8b6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConvertToPoseSnapshot Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPoseSnapshotLibrary, nullptr, "ConvertToPoseSnapshot", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::PoseSnapshotLibrary_eventConvertToPoseSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPoseSnapshotLibrary::execConvertToPoseSnapshot)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPoseSnapshotReference*)Z_Param__Result=UPoseSnapshotLibrary::ConvertToPoseSnapshot(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class UPoseSnapshotLibrary Function ConvertToPoseSnapshot ************************

// ********** Begin Class UPoseSnapshotLibrary Function DrawSkeletonFromPoseSnapshot ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot_Statics
struct UHT_STATICS
{
	struct PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms
	{
		const UObject* WorldContextObject;
		const UAnimInstance* AnimInstance;
		FPoseSnapshot PoseSnapshot;
		TArray<FName> LimbsName;
		FName RootBoneName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Pose Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Draw pose from PoseSnapshot by using points and lines*/" },
#endif
		{ "CPP_Default_RootBoneName", "Root" },
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draw pose from PoseSnapshot by using points and lines" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseSnapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DrawSkeletonFromPoseSnapshot constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseSnapshot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LimbsName_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LimbsName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBoneName;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DrawSkeletonFromPoseSnapshot constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DrawSkeletonFromPoseSnapshot Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PoseSnapshot = { "PoseSnapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms, PoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseSnapshot_MetaData), NewProp_PoseSnapshot_MetaData) }; // 3b66250c9a6099038296dd7af856b7325fb50a6f
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LimbsName_Inner = { "LimbsName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LimbsName = { "LimbsName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms, LimbsName), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RootBoneName = { "RootBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms, RootBoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PoseSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LimbsName_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LimbsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RootBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DrawSkeletonFromPoseSnapshot Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPoseSnapshotLibrary, nullptr, "DrawSkeletonFromPoseSnapshot", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::PoseSnapshotLibrary_eventDrawSkeletonFromPoseSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPoseSnapshotLibrary::execDrawSkeletonFromPoseSnapshot)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
	P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_PoseSnapshot);
	P_GET_TARRAY(FName,Z_Param_LimbsName);
	P_GET_PROPERTY(FNameProperty,Z_Param_RootBoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPoseSnapshotLibrary::DrawSkeletonFromPoseSnapshot(Z_Param_WorldContextObject,Z_Param_AnimInstance,Z_Param_Out_PoseSnapshot,Z_Param_LimbsName,Z_Param_RootBoneName);
	P_NATIVE_END;
}
// ********** End Class UPoseSnapshotLibrary Function DrawSkeletonFromPoseSnapshot *****************

// ********** Begin Class UPoseSnapshotLibrary Function GetBoneParents *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents_Statics
struct UHT_STATICS
{
	struct PoseSnapshotLibrary_eventGetBoneParents_Parms
	{
		USkeletalMeshComponent* SkeletalMeshComponent;
		FName BoneName;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Return parents bones name from skeleton hierarchy*/" },
#endif
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return parents bones name from skeleton hierarchy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoneParents constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoneParents constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoneParents Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneParents_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneParents_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneParents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBoneParents Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPoseSnapshotLibrary, nullptr, "GetBoneParents", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::PoseSnapshotLibrary_eventGetBoneParents_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::PoseSnapshotLibrary_eventGetBoneParents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPoseSnapshotLibrary::execGetBoneParents)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UPoseSnapshotLibrary::GetBoneParents(Z_Param_SkeletalMeshComponent,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UPoseSnapshotLibrary Function GetBoneParents *******************************

// ********** Begin Class UPoseSnapshotLibrary Function GetBoneTransformFromPoseSnapshot ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot_Statics
struct UHT_STATICS
{
	struct PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms
	{
		FPoseSnapshot PoseSnapshot;
		FName BoneName;
		const UAnimInstance* AnimInstance;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Pose Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Return bone transform in component space*/" },
#endif
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return bone transform in component space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseSnapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoneTransformFromPoseSnapshot constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseSnapshot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoneTransformFromPoseSnapshot constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoneTransformFromPoseSnapshot Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PoseSnapshot = { "PoseSnapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms, PoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseSnapshot_MetaData), NewProp_PoseSnapshot_MetaData) }; // 3b66250c9a6099038296dd7af856b7325fb50a6f
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PoseSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBoneTransformFromPoseSnapshot Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPoseSnapshotLibrary, nullptr, "GetBoneTransformFromPoseSnapshot", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::PoseSnapshotLibrary_eventGetBoneTransformFromPoseSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPoseSnapshotLibrary::execGetBoneTransformFromPoseSnapshot)
{
	P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_PoseSnapshot);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UPoseSnapshotLibrary::GetBoneTransformFromPoseSnapshot(Z_Param_Out_PoseSnapshot,Z_Param_BoneName,Z_Param_AnimInstance);
	P_NATIVE_END;
}
// ********** End Class UPoseSnapshotLibrary Function GetBoneTransformFromPoseSnapshot *************

// ********** Begin Class UPoseSnapshotLibrary Function GetSavedPoseSnapshot ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot_Statics
struct UHT_STATICS
{
	struct PoseSnapshotLibrary_eventGetSavedPoseSnapshot_Parms
	{
		FPoseSnapshotReference PoseSnapshot;
		FPoseSnapshot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Pose Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the PoseSnapshot structure from PoseSnapshot saver. */" },
#endif
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the PoseSnapshot structure from PoseSnapshot saver." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseSnapshot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSavedPoseSnapshot constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseSnapshot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSavedPoseSnapshot constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSavedPoseSnapshot Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PoseSnapshot = { "PoseSnapshot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetSavedPoseSnapshot_Parms, PoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshotReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseSnapshot_MetaData), NewProp_PoseSnapshot_MetaData) }; // f5dd798593eeaa6964f61773241d5f0b2177b8b6
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSnapshotLibrary_eventGetSavedPoseSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(0, nullptr) }; // 3b66250c9a6099038296dd7af856b7325fb50a6f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PoseSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSavedPoseSnapshot Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPoseSnapshotLibrary, nullptr, "GetSavedPoseSnapshot", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::PoseSnapshotLibrary_eventGetSavedPoseSnapshot_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::PoseSnapshotLibrary_eventGetSavedPoseSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPoseSnapshotLibrary::execGetSavedPoseSnapshot)
{
	P_GET_STRUCT_REF(FPoseSnapshotReference,Z_Param_Out_PoseSnapshot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPoseSnapshot*)Z_Param__Result=UPoseSnapshotLibrary::GetSavedPoseSnapshot(Z_Param_Out_PoseSnapshot);
	P_NATIVE_END;
}
// ********** End Class UPoseSnapshotLibrary Function GetSavedPoseSnapshot *************************

// ********** Begin Class UPoseSnapshotLibrary *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UPoseSnapshotLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "PoseSnapshotLibrary.h" },
		{ "ModuleRelativePath", "Public/PoseSnapshotLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPoseSnapshotLibrary constinit property declarations *********************
// ********** End Class UPoseSnapshotLibrary constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConvertToPoseSnapshot"), .Pointer = &UPoseSnapshotLibrary::execConvertToPoseSnapshot },
		{ .NameUTF8 = UTF8TEXT("DrawSkeletonFromPoseSnapshot"), .Pointer = &UPoseSnapshotLibrary::execDrawSkeletonFromPoseSnapshot },
		{ .NameUTF8 = UTF8TEXT("GetBoneParents"), .Pointer = &UPoseSnapshotLibrary::execGetBoneParents },
		{ .NameUTF8 = UTF8TEXT("GetBoneTransformFromPoseSnapshot"), .Pointer = &UPoseSnapshotLibrary::execGetBoneTransformFromPoseSnapshot },
		{ .NameUTF8 = UTF8TEXT("GetSavedPoseSnapshot"), .Pointer = &UPoseSnapshotLibrary::execGetSavedPoseSnapshot },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoseSnapshotLibrary_ConvertToPoseSnapshot, "ConvertToPoseSnapshot" }, // 709b091fe1b7f2e9f4236ab246944199602615d1
		{ &Z_Construct_UFunction_UPoseSnapshotLibrary_DrawSkeletonFromPoseSnapshot, "DrawSkeletonFromPoseSnapshot" }, // 3f51153f84467f03ee2a9b7b6f930c8c34997edd
		{ &Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneParents, "GetBoneParents" }, // 18a5a133ef8df1ad554c8185684bfb48008c9916
		{ &Z_Construct_UFunction_UPoseSnapshotLibrary_GetBoneTransformFromPoseSnapshot, "GetBoneTransformFromPoseSnapshot" }, // 26c87ba65349d23db035ef54eb70074313232bbb
		{ &Z_Construct_UFunction_UPoseSnapshotLibrary_GetSavedPoseSnapshot, "GetSavedPoseSnapshot" }, // 2747e02d53894deebc4074fcfaa09eb4bef3edac
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSnapshotLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UPoseSnapshotLibrary,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UPoseSnapshotLibrary_StaticRegisterNativesUPoseSnapshotLibrary()
{
	UClass* Class = UPoseSnapshotLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPoseSnapshotLibrary;
UClass* Z_Construct_UClass_UPoseSnapshotLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UPoseSnapshotLibrary;
		if (!Z_Registration_Info_UClass_UPoseSnapshotLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("PoseSnapshotLibrary"),
				Z_Registration_Info_UClass_UPoseSnapshotLibrary.InnerSingleton,
				UPoseSnapshotLibrary_StaticRegisterNativesUPoseSnapshotLibrary,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UPoseSnapshotLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UPoseSnapshotLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSnapshotLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoseSnapshotLibrary.OuterSingleton;
}
#undef UHT_STATICS
UPoseSnapshotLibrary::UPoseSnapshotLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPoseSnapshotLibrary);
UPoseSnapshotLibrary::~UPoseSnapshotLibrary() {}
// ********** End Class UPoseSnapshotLibrary *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h__Script_JakubAnimNodesTool_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FPoseSnapshotReference, Z_Construct_UScriptStruct_FPoseSnapshotReference_Statics::NewStructOps, TEXT("PoseSnapshotReference"),&Z_Registration_Info_UScriptStruct_FPoseSnapshotReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSnapshotReference), 4124932485U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSnapshotLibrary, TEXT("UPoseSnapshotLibrary"), &Z_Registration_Info_UClass_UPoseSnapshotLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSnapshotLibrary), 272176592U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_PoseSnapshotLibrary_h__Script_JakubAnimNodesTool_099c049180d6bfd9b172dbaf06a76c7d346fc1bc{
	TEXT("/Script/JakubAnimNodesTool"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
