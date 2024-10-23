// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Week1/Public/Character/EditingCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditingCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Week1();
WEEK1_API UClass* Z_Construct_UClass_AEditingCharacter();
WEEK1_API UClass* Z_Construct_UClass_AEditingCharacter_NoRegister();
// End Cross Module References

// Begin Class AEditingCharacter
void AEditingCharacter::StaticRegisterNativesAEditingCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEditingCharacter);
UClass* Z_Construct_UClass_AEditingCharacter_NoRegister()
{
	return AEditingCharacter::StaticClass();
}
struct Z_Construct_UClass_AEditingCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/EditingCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/EditingCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEditingCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEditingCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Week1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEditingCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEditingCharacter_Statics::ClassParams = {
	&AEditingCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEditingCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEditingCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEditingCharacter()
{
	if (!Z_Registration_Info_UClass_AEditingCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEditingCharacter.OuterSingleton, Z_Construct_UClass_AEditingCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEditingCharacter.OuterSingleton;
}
template<> WEEK1_API UClass* StaticClass<AEditingCharacter>()
{
	return AEditingCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEditingCharacter);
AEditingCharacter::~AEditingCharacter() {}
// End Class AEditingCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Week1_Source_Week1_Public_Character_EditingCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEditingCharacter, AEditingCharacter::StaticClass, TEXT("AEditingCharacter"), &Z_Registration_Info_UClass_AEditingCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEditingCharacter), 2070294341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week1_Source_Week1_Public_Character_EditingCharacter_h_1678190846(TEXT("/Script/Week1"),
	Z_CompiledInDeferFile_FID_Week1_Source_Week1_Public_Character_EditingCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week1_Source_Week1_Public_Character_EditingCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
