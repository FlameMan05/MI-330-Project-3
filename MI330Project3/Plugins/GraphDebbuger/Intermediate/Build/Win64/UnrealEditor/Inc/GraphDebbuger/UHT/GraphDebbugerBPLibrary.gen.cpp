// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphDebbugerBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeGraphDebbugerBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_GraphDebbuger(ETypeConstructPhase);
GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UGraphDebbugerBPLibrary(ETypeConstructPhase);
GRAPHDEBBUGER_API UClass* Z_Construct_UClass_UGraphDebbugerBPLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UGraphDebbugerBPLibrary **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UGraphDebbugerBPLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "GraphDebbugerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/GraphDebbugerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function library class.\nEach function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n\nWhen declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\nBlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\nBlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\nDisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n                        Its lets you name the node using characters not allowed in C++ function names.\nCompactNodeTitle - the word(s) that appear on the node.\nKeywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n                        Good example is \"Print String\" node which you can find also by using keyword \"log\".\nCategory -      the category your node will be under in the Blueprint drop-down menu.\n\nFor more info on custom blueprint nodes visit documentation:\nhttps://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UGraphDebbugerBPLibrary constinit property declarations ******************
// ********** End Class UGraphDebbugerBPLibrary constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphDebbugerBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_GraphDebbuger,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UGraphDebbugerBPLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UGraphDebbugerBPLibrary;
UClass* Z_Construct_UClass_UGraphDebbugerBPLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UGraphDebbugerBPLibrary;
		if (!Z_Registration_Info_UClass_UGraphDebbugerBPLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("GraphDebbugerBPLibrary"),
				Z_Registration_Info_UClass_UGraphDebbugerBPLibrary.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_UGraphDebbugerBPLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UGraphDebbugerBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphDebbugerBPLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraphDebbugerBPLibrary.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGraphDebbugerBPLibrary);
UGraphDebbugerBPLibrary::~UGraphDebbugerBPLibrary() {}
// ********** End Class UGraphDebbugerBPLibrary ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_ProgramingCpp_5_8_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h__Script_GraphDebbuger_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraphDebbugerBPLibrary, TEXT("UGraphDebbugerBPLibrary"), &Z_Registration_Info_UClass_UGraphDebbugerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphDebbugerBPLibrary), 3948559124U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UE5_8_AGLS_ProgramingCpp_5_8_Plugins_GraphDebbuger_Source_GraphDebbuger_Public_GraphDebbugerBPLibrary_h__Script_GraphDebbuger_f24934717256de7d27c2e6a100a25c4e6a2a6479{
	TEXT("/Script/GraphDebbuger"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
