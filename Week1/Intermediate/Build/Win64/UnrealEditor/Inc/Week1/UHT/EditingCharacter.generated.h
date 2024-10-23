// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/EditingCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEEK1_EditingCharacter_generated_h
#error "EditingCharacter.generated.h already included, missing '#pragma once' in EditingCharacter.h"
#endif
#define WEEK1_EditingCharacter_generated_h

#define FID_Week1_Source_Week1_Public_Character_EditingCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEditingCharacter(); \
	friend struct Z_Construct_UClass_AEditingCharacter_Statics; \
public: \
	DECLARE_CLASS(AEditingCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Week1"), NO_API) \
	DECLARE_SERIALIZER(AEditingCharacter)


#define FID_Week1_Source_Week1_Public_Character_EditingCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEditingCharacter(AEditingCharacter&&); \
	AEditingCharacter(const AEditingCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEditingCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEditingCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEditingCharacter) \
	NO_API virtual ~AEditingCharacter();


#define FID_Week1_Source_Week1_Public_Character_EditingCharacter_h_9_PROLOG
#define FID_Week1_Source_Week1_Public_Character_EditingCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week1_Source_Week1_Public_Character_EditingCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Week1_Source_Week1_Public_Character_EditingCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEEK1_API UClass* StaticClass<class AEditingCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week1_Source_Week1_Public_Character_EditingCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
