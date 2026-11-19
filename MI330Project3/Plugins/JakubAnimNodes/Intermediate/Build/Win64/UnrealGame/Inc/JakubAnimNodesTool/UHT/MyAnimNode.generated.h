// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyAnimNode.h"

#ifdef JAKUBANIMNODESTOOL_MyAnimNode_generated_h
#error "MyAnimNode.generated.h already included, missing '#pragma once' in MyAnimNode.h"
#endif
#define JAKUBANIMNODESTOOL_MyAnimNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_LayeredBone *********************************************
struct Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics;
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBone(ETypeConstructPhase);

#define FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAnimNode_LayeredBone(ETypeConstructPhase::Inner); } \
	typedef FAnimNode_Base Super;


struct FAnimNode_LayeredBone;
// ********** End ScriptStruct FAnimNode_LayeredBone ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE5_8_AGLS_v2_0_0__UE5_8_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h

// ********** Begin Enum ELayeredBlendMode *********************************************************
#define FOREACH_ENUM_ELAYEREDBLENDMODE(op) \
	op(ELayeredBlendMode::BranchFilter) \
	op(ELayeredBlendMode::BlendMask) 

enum class ELayeredBlendMode : uint8;
template<> struct TIsUEnumClass<ELayeredBlendMode> { enum { Value = true }; };
template<> UE_NODEBUG JAKUBANIMNODESTOOL_NON_ATTRIBUTED_API UEnum* StaticEnum<ELayeredBlendMode>();
// ********** End Enum ELayeredBlendMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
