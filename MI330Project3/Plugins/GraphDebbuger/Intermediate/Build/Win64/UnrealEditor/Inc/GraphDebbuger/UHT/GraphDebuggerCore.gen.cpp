// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphDebuggerCore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeGraphDebuggerCore() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_GraphDebbuger(ETypeConstructPhase);
GRAPHDEBBUGER_API UScriptStruct* Z_Construct_UScriptStruct_FGraphData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FGraphData ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FGraphData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FGraphData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGraphData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struktura przechowuj\xef\xbf\xbd""ca dane dla ka\xef\xbf\xbd""dego wykresu\n" },
#endif
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struktura przechowuj\xef\xbf\xbd""ca dane dla ka\xef\xbf\xbd""dego wykresu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineColor_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxisRange_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoNormalizeYAxis_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/GraphDebuggerCore.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGraphData constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YAxisRange;
	static void NewProp_bAutoNormalizeYAxis_SetBit(void* Obj)
	{
		((FGraphData*)Obj)->bAutoNormalizeYAxis = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoNormalizeYAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGraphData constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FGraphData Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphData, GraphName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphName_MetaData), NewProp_GraphName_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphData, LineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineColor_MetaData), NewProp_LineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphData, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_YAxisRange = { "YAxisRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphData, YAxisRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxisRange_MetaData), NewProp_YAxisRange_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoNormalizeYAxis = { "bAutoNormalizeYAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FGraphData), &UHT_STATICS::NewProp_bAutoNormalizeYAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoNormalizeYAxis_MetaData), NewProp_bAutoNormalizeYAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GraphName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_YAxisRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoNormalizeYAxis,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FGraphData Property Definitions *************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_GraphDebbuger,
	nullptr,
	&NewStructOps,
	"GraphData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FGraphData>(),
	alignof(FGraphData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGraphData;
UScriptStruct* Z_Construct_UScriptStruct_FGraphData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FGraphData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FGraphData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphData, (UObject*)Z_Construct_UPackage__Script_GraphDebbuger(ETypeConstructPhase::Outer), TEXT("GraphData"));
		}
		return Z_Registration_Info_UScriptStruct_FGraphData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FGraphData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGraphData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGraphData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FGraphData **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_ProgramingCpp_5_8_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebuggerCore_h__Script_GraphDebbuger_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FGraphData, Z_Construct_UScriptStruct_FGraphData_Statics::NewStructOps, TEXT("GraphData"),&Z_Registration_Info_UScriptStruct_FGraphData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphData), 1405837375U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_ProgramingCpp_5_8_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebuggerCore_h__Script_GraphDebbuger_4713d24724aac64f130c37decf1bc27373b36d90{
	TEXT("/Script/GraphDebbuger"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
