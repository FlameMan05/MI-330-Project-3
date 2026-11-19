// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JWAN_LayerBlendingLogic.h"
#include "Animation/AnimData/BoneMaskFilter.h"
#include "Animation/AnimNodeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeJWAN_LayerBlendingLogic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FCurvesData(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic(ETypeConstructPhase);
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FSlotsName(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FCurvesData *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCurvesData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCurvesData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCurvesData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spine_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpineAdd_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadAdd_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Legs_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_LS_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_Add_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandL_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_LS_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_Add_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandR_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCurvesData constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Pelvis;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Spine;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpineAdd;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Head;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeadAdd;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Legs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL_LS;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL_Add;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HandL;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR_LS;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR_Add;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HandR;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCurvesData constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurvesData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCurvesData Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, Pelvis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pelvis_MetaData), NewProp_Pelvis_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Spine = { "Spine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, Spine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spine_MetaData), NewProp_Spine_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SpineAdd = { "SpineAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, SpineAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpineAdd_MetaData), NewProp_SpineAdd_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, Head), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Head_MetaData), NewProp_Head_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_HeadAdd = { "HeadAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, HeadAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadAdd_MetaData), NewProp_HeadAdd_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Legs = { "Legs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, Legs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Legs_MetaData), NewProp_Legs_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ArmL = { "ArmL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_MetaData), NewProp_ArmL_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ArmL_LS = { "ArmL_LS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmL_LS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_LS_MetaData), NewProp_ArmL_LS_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ArmL_Add = { "ArmL_Add", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmL_Add), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_Add_MetaData), NewProp_ArmL_Add_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_HandL = { "HandL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, HandL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandL_MetaData), NewProp_HandL_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ArmR = { "ArmR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_MetaData), NewProp_ArmR_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ArmR_LS = { "ArmR_LS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmR_LS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_LS_MetaData), NewProp_ArmR_LS_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ArmR_Add = { "ArmR_Add", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmR_Add), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_Add_MetaData), NewProp_ArmR_Add_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_HandR = { "HandR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, HandR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandR_MetaData), NewProp_HandR_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Pelvis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spine,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpineAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Head,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeadAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Legs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArmL,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArmL_LS,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArmL_Add,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandL,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArmR,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArmR_LS,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArmR_Add,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HandR,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCurvesData Property Definitions ************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	&NewStructOps,
	"CurvesData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCurvesData>(),
	alignof(FCurvesData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCurvesData;
UScriptStruct* Z_Construct_UScriptStruct_FCurvesData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCurvesData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCurvesData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurvesData, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("CurvesData"));
		}
		return Z_Registration_Info_UScriptStruct_FCurvesData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCurvesData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCurvesData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCurvesData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCurvesData *********************************************************

// ********** Begin ScriptStruct FSlotsName ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSlotsName_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSlotsName>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSlotsName); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Legs_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spine_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSlotsName constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Legs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Pelvis;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Spine;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Head;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Curves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSlotsName constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotsName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSlotsName Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Legs = { "Legs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, Legs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Legs_MetaData), NewProp_Legs_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, Pelvis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pelvis_MetaData), NewProp_Pelvis_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Spine = { "Spine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, Spine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spine_MetaData), NewProp_Spine_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, Head), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Head_MetaData), NewProp_Head_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ArmL = { "ArmL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, ArmL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_MetaData), NewProp_ArmL_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ArmR = { "ArmR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, ArmR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_MetaData), NewProp_ArmR_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, Curves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curves_MetaData), NewProp_Curves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Legs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Pelvis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spine,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Head,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArmL,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArmR,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Curves,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSlotsName Property Definitions *************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	&NewStructOps,
	"SlotsName",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSlotsName>(),
	alignof(FSlotsName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSlotsName;
UScriptStruct* Z_Construct_UScriptStruct_FSlotsName(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSlotsName.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSlotsName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotsName, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("SlotsName"));
		}
		return Z_Registration_Info_UScriptStruct_FSlotsName.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSlotsName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSlotsName.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSlotsName.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSlotsName **********************************************************

// ********** Begin ScriptStruct FJWAN_LayerBlendingLogic ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FJWAN_LayerBlendingLogic>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FJWAN_LayerBlendingLogic); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLayerInput_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayLayerInput_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePosesInput_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvesName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllSlotsName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_MS_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_MS_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterPelvis_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterSpine_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterHead_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterArmL_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterArmR_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterHandL_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterHandR_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterCurves_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FJWAN_LayerBlendingLogic constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLayerInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayLayerInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePosesInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurvesName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllSlotsName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmL_MS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmR_MS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterPelvis_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterPelvis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterSpine_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterSpine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterHead_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterHead;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterArmL_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterArmL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterArmR_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterArmR;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterHandL_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterHandL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterHandR_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterHandR;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FJWAN_LayerBlendingLogic constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJWAN_LayerBlendingLogic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
static_assert(std::is_polymorphic<FJWAN_LayerBlendingLogic>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FJWAN_LayerBlendingLogic cannot be polymorphic unless super FAnimNode_Base is polymorphic");

// ********** Begin ScriptStruct FJWAN_LayerBlendingLogic Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BaseLayerInput = { "BaseLayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BaseLayerInput), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLayerInput_MetaData), NewProp_BaseLayerInput_MetaData) }; // a0dc9905954a797009d1d7096d7718f4e2f30e58
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OverlayLayerInput = { "OverlayLayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, OverlayLayerInput), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayLayerInput_MetaData), NewProp_OverlayLayerInput_MetaData) }; // a0dc9905954a797009d1d7096d7718f4e2f30e58
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BasePosesInput = { "BasePosesInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BasePosesInput), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePosesInput_MetaData), NewProp_BasePosesInput_MetaData) }; // a0dc9905954a797009d1d7096d7718f4e2f30e58
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CurvesName = { "CurvesName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, CurvesName), Z_Construct_UScriptStruct_FCurvesData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvesName_MetaData), NewProp_CurvesName_MetaData) }; // 78f7ec7b3175c079cd70723e3fe551373b62fd5e
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AllSlotsName = { "AllSlotsName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, AllSlotsName), Z_Construct_UScriptStruct_FSlotsName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllSlotsName_MetaData), NewProp_AllSlotsName_MetaData) }; // 8650f99e02b10d0cdae859adb64949166648b32d
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ArmL_MS = { "ArmL_MS", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, ArmL_MS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_MS_MetaData), NewProp_ArmL_MS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ArmR_MS = { "ArmR_MS", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, ArmR_MS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_MS_MetaData), NewProp_ArmR_MS_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BlendFilterPelvis_Inner = { "BlendFilterPelvis", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlendFilterPelvis = { "BlendFilterPelvis", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterPelvis), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterPelvis_MetaData), NewProp_BlendFilterPelvis_MetaData) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BlendFilterSpine_Inner = { "BlendFilterSpine", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlendFilterSpine = { "BlendFilterSpine", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterSpine), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterSpine_MetaData), NewProp_BlendFilterSpine_MetaData) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BlendFilterHead_Inner = { "BlendFilterHead", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlendFilterHead = { "BlendFilterHead", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterHead), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterHead_MetaData), NewProp_BlendFilterHead_MetaData) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BlendFilterArmL_Inner = { "BlendFilterArmL", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlendFilterArmL = { "BlendFilterArmL", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterArmL), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterArmL_MetaData), NewProp_BlendFilterArmL_MetaData) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BlendFilterArmR_Inner = { "BlendFilterArmR", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlendFilterArmR = { "BlendFilterArmR", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterArmR), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterArmR_MetaData), NewProp_BlendFilterArmR_MetaData) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BlendFilterHandL_Inner = { "BlendFilterHandL", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlendFilterHandL = { "BlendFilterHandL", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterHandL), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterHandL_MetaData), NewProp_BlendFilterHandL_MetaData) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BlendFilterHandR_Inner = { "BlendFilterHandR", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlendFilterHandR = { "BlendFilterHandR", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterHandR), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterHandR_MetaData), NewProp_BlendFilterHandR_MetaData) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BlendFilterCurves_Inner = { "BlendFilterCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BlendFilterCurves = { "BlendFilterCurves", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterCurves_MetaData), NewProp_BlendFilterCurves_MetaData) }; // e4a891aefa4433bc2dce4a76c90c4cd3df1cf2fe
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseLayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverlayLayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BasePosesInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurvesName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllSlotsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArmL_MS,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArmR_MS,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterPelvis_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterPelvis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterSpine_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterSpine,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterHead_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterArmL_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterArmL,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterArmR_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterArmR,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterHandL_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterHandL,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterHandR_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterHandR,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendFilterCurves,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FJWAN_LayerBlendingLogic Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_JakubAnimNodesTool,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"JWAN_LayerBlendingLogic",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FJWAN_LayerBlendingLogic>(),
	alignof(FJWAN_LayerBlendingLogic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FJWAN_LayerBlendingLogic;
UScriptStruct* Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FJWAN_LayerBlendingLogic.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FJWAN_LayerBlendingLogic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(ETypeConstructPhase::Outer), TEXT("JWAN_LayerBlendingLogic"));
		}
		return Z_Registration_Info_UScriptStruct_FJWAN_LayerBlendingLogic.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FJWAN_LayerBlendingLogic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FJWAN_LayerBlendingLogic.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FJWAN_LayerBlendingLogic.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FJWAN_LayerBlendingLogic ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_LayerBlendingLogic_h__Script_JakubAnimNodesTool_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FCurvesData, Z_Construct_UScriptStruct_FCurvesData_Statics::NewStructOps, TEXT("CurvesData"),&Z_Registration_Info_UScriptStruct_FCurvesData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurvesData), 2029513851U) },
		{ Z_Construct_UScriptStruct_FSlotsName, Z_Construct_UScriptStruct_FSlotsName_Statics::NewStructOps, TEXT("SlotsName"),&Z_Registration_Info_UScriptStruct_FSlotsName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotsName), 2253453726U) },
		{ Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic, Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewStructOps, TEXT("JWAN_LayerBlendingLogic"),&Z_Registration_Info_UScriptStruct_FJWAN_LayerBlendingLogic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJWAN_LayerBlendingLogic), 3588797132U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_LayerBlendingLogic_h__Script_JakubAnimNodesTool_546dda79cd05962bbac2e39ca7f22b90c3d254af{
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
