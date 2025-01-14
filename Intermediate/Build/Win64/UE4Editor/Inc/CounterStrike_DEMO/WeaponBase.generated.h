// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COUNTERSTRIKE_DEMO_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define COUNTERSTRIKE_DEMO_WeaponBase_generated_h

#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_SPARSE_DATA
#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire);


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire);


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CounterStrike_DEMO"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AWeaponBase, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(AWeaponBase, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AWeaponBase, DamageType); } \
	FORCEINLINE static uint32 __PPO__TracerTargetName() { return STRUCT_OFFSET(AWeaponBase, TracerTargetName); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(AWeaponBase, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__RateOfFire() { return STRUCT_OFFSET(AWeaponBase, RateOfFire); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(AWeaponBase, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__TracerEffect() { return STRUCT_OFFSET(AWeaponBase, TracerEffect); } \
	FORCEINLINE static uint32 __PPO__FireCameraShake() { return STRUCT_OFFSET(AWeaponBase, FireCameraShake); } \
	FORCEINLINE static uint32 __PPO__DefaultImpactEffect() { return STRUCT_OFFSET(AWeaponBase, DefaultImpactEffect); } \
	FORCEINLINE static uint32 __PPO__FleshImapctEffect() { return STRUCT_OFFSET(AWeaponBase, FleshImapctEffect); }


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_13_PROLOG
#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_PRIVATE_PROPERTY_OFFSET \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_SPARSE_DATA \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_RPC_WRAPPERS \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_INCLASS \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_PRIVATE_PROPERTY_OFFSET \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_SPARSE_DATA \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_INCLASS_NO_PURE_DECLS \
	CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COUNTERSTRIKE_DEMO_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CounterStrike_DEMO_Source_CounterStrike_DEMO_Public_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
