// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRBaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBaseCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static FName NAME_AVRBaseCharacter_NotifyOfTeleport = FName(TEXT("NotifyOfTeleport"));
	void AVRBaseCharacter::NotifyOfTeleport()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_NotifyOfTeleport),NULL);
	}
	static FName NAME_AVRBaseCharacter_OnBeginWallPushback = FName(TEXT("OnBeginWallPushback"));
	void AVRBaseCharacter::OnBeginWallPushback(FHitResult HitResultOfImpact, bool bHadLocomotionInput, FVector HmdInput)
	{
		VRBaseCharacter_eventOnBeginWallPushback_Parms Parms;
		Parms.HitResultOfImpact=HitResultOfImpact;
		Parms.bHadLocomotionInput=bHadLocomotionInput ? true : false;
		Parms.HmdInput=HmdInput;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnBeginWallPushback),&Parms);
	}
	static FName NAME_AVRBaseCharacter_OnClimbingSteppedUp = FName(TEXT("OnClimbingSteppedUp"));
	void AVRBaseCharacter::OnClimbingSteppedUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnClimbingSteppedUp),NULL);
	}
	static FName NAME_AVRBaseCharacter_OnCustomMoveActionPerformed = FName(TEXT("OnCustomMoveActionPerformed"));
	void AVRBaseCharacter::OnCustomMoveActionPerformed(EVRMoveAction MoveActionType, FVector MoveActionVector, FRotator MoveActionRotator)
	{
		VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms Parms;
		Parms.MoveActionType=MoveActionType;
		Parms.MoveActionVector=MoveActionVector;
		Parms.MoveActionRotator=MoveActionRotator;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnCustomMoveActionPerformed),&Parms);
	}
	static FName NAME_AVRBaseCharacter_OnEndWallPushback = FName(TEXT("OnEndWallPushback"));
	void AVRBaseCharacter::OnEndWallPushback()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnEndWallPushback),NULL);
	}
	static FName NAME_AVRBaseCharacter_ReceiveNavigationMoveCompleted = FName(TEXT("ReceiveNavigationMoveCompleted"));
	void AVRBaseCharacter::ReceiveNavigationMoveCompleted(EPathFollowingResult::Type PathingResult)
	{
		VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms Parms;
		Parms.PathingResult=PathingResult;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_ReceiveNavigationMoveCompleted),&Parms);
	}
	static FName NAME_AVRBaseCharacter_Server_SendTransformCamera = FName(TEXT("Server_SendTransformCamera"));
	void AVRBaseCharacter::Server_SendTransformCamera(FBPVRComponentPosRep NewTransform)
	{
		VRBaseCharacter_eventServer_SendTransformCamera_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SendTransformCamera),&Parms);
	}
	static FName NAME_AVRBaseCharacter_Server_SendTransformLeftController = FName(TEXT("Server_SendTransformLeftController"));
	void AVRBaseCharacter::Server_SendTransformLeftController(FBPVRComponentPosRep NewTransform)
	{
		VRBaseCharacter_eventServer_SendTransformLeftController_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SendTransformLeftController),&Parms);
	}
	static FName NAME_AVRBaseCharacter_Server_SendTransformRightController = FName(TEXT("Server_SendTransformRightController"));
	void AVRBaseCharacter::Server_SendTransformRightController(FBPVRComponentPosRep NewTransform)
	{
		VRBaseCharacter_eventServer_SendTransformRightController_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SendTransformRightController),&Parms);
	}
	void AVRBaseCharacter::StaticRegisterNativesAVRBaseCharacter()
	{
		UClass* Class = AVRBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtendedSimpleMoveToLocation", (Native)&AVRBaseCharacter::execExtendedSimpleMoveToLocation },
			{ "GetMoveStatus", (Native)&AVRBaseCharacter::execGetMoveStatus },
			{ "GetTeleportLocation", (Native)&AVRBaseCharacter::execGetTeleportLocation },
			{ "GetVRForwardVector", (Native)&AVRBaseCharacter::execGetVRForwardVector },
			{ "GetVRLocation", (Native)&AVRBaseCharacter::execGetVRLocation },
			{ "GetVRRightVector", (Native)&AVRBaseCharacter::execGetVRRightVector },
			{ "GetVRRotation", (Native)&AVRBaseCharacter::execGetVRRotation },
			{ "GetVRUpVector", (Native)&AVRBaseCharacter::execGetVRUpVector },
			{ "HasPartialPath", (Native)&AVRBaseCharacter::execHasPartialPath },
			{ "NotifyOfTeleport", (Native)&AVRBaseCharacter::execNotifyOfTeleport },
			{ "OnBeginWallPushback", (Native)&AVRBaseCharacter::execOnBeginWallPushback },
			{ "OnCustomMoveActionPerformed", (Native)&AVRBaseCharacter::execOnCustomMoveActionPerformed },
			{ "OnEndWallPushback", (Native)&AVRBaseCharacter::execOnEndWallPushback },
			{ "RegenerateOffsetComponentToWorld", (Native)&AVRBaseCharacter::execRegenerateOffsetComponentToWorld },
			{ "Server_SendTransformCamera", (Native)&AVRBaseCharacter::execServer_SendTransformCamera },
			{ "Server_SendTransformLeftController", (Native)&AVRBaseCharacter::execServer_SendTransformLeftController },
			{ "Server_SendTransformRightController", (Native)&AVRBaseCharacter::execServer_SendTransformRightController },
			{ "SetCharacterHalfHeightVR", (Native)&AVRBaseCharacter::execSetCharacterHalfHeightVR },
			{ "SetCharacterSizeVR", (Native)&AVRBaseCharacter::execSetCharacterSizeVR },
			{ "StopNavigationMovement", (Native)&AVRBaseCharacter::execStopNavigationMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation()
	{
		struct VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms
		{
			FVector GoalLocation;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			bool bUsePathfinding;
			bool bProjectDestinationToNavigation;
			bool bCanStrafe;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool bAllowPartialPath;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bAllowPartialPath_SetBit = [](void* Obj){ ((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bAllowPartialPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowPartialPath_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCanStrafe_SetBit = [](void* Obj){ ((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bCanStrafe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanStrafe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanStrafe_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bProjectDestinationToNavigation_SetBit = [](void* Obj){ ((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bProjectDestinationToNavigation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectDestinationToNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bProjectDestinationToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProjectDestinationToNavigation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUsePathfinding_SetBit = [](void* Obj){ ((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bUsePathfinding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePathfinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePathfinding_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bStopOnOverlap_SetBit = [](void* Obj){ ((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bStopOnOverlap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopOnOverlap_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GoalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_GoalLocation_MetaData, ARRAY_COUNT(NewProp_GoalLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowPartialPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanStrafe,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProjectDestinationToNavigation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePathfinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopOnOverlap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptanceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GoalLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "bStopOnOverlap,bCanStrafe,bAllowPartialPath" },
				{ "Category", "VRBaseCharacter" },
				{ "CPP_Default_AcceptanceRadius", "-1.000000" },
				{ "CPP_Default_bAllowPartialPath", "true" },
				{ "CPP_Default_bCanStrafe", "false" },
				{ "CPP_Default_bProjectDestinationToNavigation", "true" },
				{ "CPP_Default_bStopOnOverlap", "false" },
				{ "CPP_Default_bUsePathfinding", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "An extended simple move to location with additional parameters" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "ExtendedSimpleMoveToLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus()
	{
		struct VRBaseCharacter_eventGetMoveStatus_Parms
		{
			TEnumAsByte<EPathFollowingStatus::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetMoveStatus_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRBaseCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetMoveStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VRBaseCharacter_eventGetMoveStatus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation()
	{
		struct VRBaseCharacter_eventGetTeleportLocation_Parms
		{
			FVector OriginalLocation;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetTeleportLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OriginalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetTeleportLocation_Parms, OriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGrip" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "A helper function that offsets a given vector by the roots collision location\npass in a teleport location and it provides the correct spot for it to be at your feet" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetTeleportLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820400, sizeof(VRBaseCharacter_eventGetTeleportLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector()
	{
		struct VRBaseCharacter_eventGetVRForwardVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetVRForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetVRForwardVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(VRBaseCharacter_eventGetVRForwardVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation()
	{
		struct VRBaseCharacter_eventGetVRLocation_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetVRLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetVRLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(VRBaseCharacter_eventGetVRLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector()
	{
		struct VRBaseCharacter_eventGetVRRightVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetVRRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetVRRightVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(VRBaseCharacter_eventGetVRRightVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation()
	{
		struct VRBaseCharacter_eventGetVRRotation_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetVRRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetVRRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(VRBaseCharacter_eventGetVRRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector()
	{
		struct VRBaseCharacter_eventGetVRUpVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetVRUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetVRUpVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(VRBaseCharacter_eventGetVRUpVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath()
	{
		struct VRBaseCharacter_eventHasPartialPath_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRBaseCharacter_eventHasPartialPath_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventHasPartialPath_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRBaseCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Returns true if the current PathFollowingComponent's path is partial (does not reach desired destination)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "HasPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VRBaseCharacter_eventHasPartialPath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGrip" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "NotifyOfTeleport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HmdInput = { UE4CodeGen_Private::EPropertyClass::Struct, "HmdInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventOnBeginWallPushback_Parms, HmdInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bHadLocomotionInput_SetBit = [](void* Obj){ ((VRBaseCharacter_eventOnBeginWallPushback_Parms*)Obj)->bHadLocomotionInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadLocomotionInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bHadLocomotionInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventOnBeginWallPushback_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHadLocomotionInput_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResultOfImpact = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResultOfImpact", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventOnBeginWallPushback_Parms, HitResultOfImpact), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HmdInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHadLocomotionInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitResultOfImpact,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Event triggered when beginning to be pushed back from a wall\nbHadLocomotionInput means that the character was moving itself\nHmdInput is how much the HMD moved in that tick so you can compare sizes to decide what to do" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "OnBeginWallPushback", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820C00, sizeof(VRBaseCharacter_eventOnBeginWallPushback_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Called when the client is in climbing mode and is stepped up onto a platform\nGenerally you should drop the climbing at this point and go into falling movement." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "OnClimbingSteppedUp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionRotator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms, MoveActionRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionVector = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms, MoveActionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveActionType = { UE4CodeGen_Private::EPropertyClass::Enum, "MoveActionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms, MoveActionType), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveActionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionRotator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Event triggered when a move action is performed, this is ran just prior to PerformMovement in the character tick" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "OnCustomMoveActionPerformed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820C00, sizeof(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Event triggered when beginning to be pushed back from a wall" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "OnEndWallPushback", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathingResult = { UE4CodeGen_Private::EPropertyClass::Byte, "PathingResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms, PathingResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathingResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRBaseCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Event when a navigation pathing operation has completed, auto calls stop movement for VR characters" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "ReceiveNavigationMoveCompleted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld()
	{
		struct VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms
		{
			bool bUpdateBounds;
			bool bCalculatePureYaw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCalculatePureYaw_SetBit = [](void* Obj){ ((VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bCalculatePureYaw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculatePureYaw = { UE4CodeGen_Private::EPropertyClass::Bool, "bCalculatePureYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCalculatePureYaw_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUpdateBounds_SetBit = [](void* Obj){ ((VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bUpdateBounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateBounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateBounds_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCalculatePureYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateBounds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Regenerates the base offsetcomponenttoworld that VR uses" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "RegenerateOffsetComponentToWorld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_SendTransformCamera_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "I'm sending it unreliable because it is being resent pretty often" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "Server_SendTransformCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRBaseCharacter_eventServer_SendTransformCamera_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_SendTransformLeftController_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "Server_SendTransformLeftController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRBaseCharacter_eventServer_SendTransformLeftController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_SendTransformRightController_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "Server_SendTransformRightController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRBaseCharacter_eventServer_SendTransformRightController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR()
	{
		struct VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HalfHeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "SetCharacterHalfHeightVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR()
	{
		struct VRBaseCharacter_eventSetCharacterSizeVR_Parms
		{
			float NewRadius;
			float NewHalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((VRBaseCharacter_eventSetCharacterSizeVR_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventSetCharacterSizeVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "NewHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventSetCharacterSizeVR_Parms, NewHalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius = { UE4CodeGen_Private::EPropertyClass::Float, "NewRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventSetCharacterSizeVR_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewHalfHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "SetCharacterSizeVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRBaseCharacter_eventSetCharacterSizeVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRBaseCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Instantly stops pathing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "StopNavigationMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister()
	{
		return AVRBaseCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRBaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation, "ExtendedSimpleMoveToLocation" }, // 1629435425
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus, "GetMoveStatus" }, // 1927090013
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation, "GetTeleportLocation" }, // 2494146082
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector, "GetVRForwardVector" }, // 2726144168
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation, "GetVRLocation" }, // 4289162428
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector, "GetVRRightVector" }, // 2506520755
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation, "GetVRRotation" }, // 3290650290
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector, "GetVRUpVector" }, // 3277419697
				{ &Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath, "HasPartialPath" }, // 447746840
				{ &Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport, "NotifyOfTeleport" }, // 1288819936
				{ &Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback, "OnBeginWallPushback" }, // 1830015328
				{ &Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp, "OnClimbingSteppedUp" }, // 2056856748
				{ &Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed, "OnCustomMoveActionPerformed" }, // 3607539781
				{ &Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback, "OnEndWallPushback" }, // 2388150593
				{ &Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted, "ReceiveNavigationMoveCompleted" }, // 2551304168
				{ &Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld, "RegenerateOffsetComponentToWorld" }, // 2558826930
				{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera, "Server_SendTransformCamera" }, // 3444960508
				{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController, "Server_SendTransformLeftController" }, // 919347494
				{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController, "Server_SendTransformRightController" }, // 2975162153
				{ &Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR, "SetCharacterHalfHeightVR" }, // 877739591
				{ &Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR, "SetCharacterSizeVR" }, // 2283731202
				{ &Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement, "StopNavigationMovement" }, // 3750899930
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "VRBaseCharacter.h" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultNavigationFilterClass_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultNavigationFilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultNavigationFilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000004, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, DefaultNavigationFilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DefaultNavigationFilterClass_MetaData, ARRAY_COUNT(NewProp_DefaultNavigationFilterClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightMotionController_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightMotionController = { UE4CodeGen_Private::EPropertyClass::Object, "RightMotionController", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, RightMotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_RightMotionController_MetaData, ARRAY_COUNT(NewProp_RightMotionController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftMotionController_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftMotionController = { UE4CodeGen_Private::EPropertyClass::Object, "LeftMotionController", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, LeftMotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_LeftMotionController_MetaData, ARRAY_COUNT(NewProp_LeftMotionController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentRelativeAttachment_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentRelativeAttachment = { UE4CodeGen_Private::EPropertyClass::Object, "ParentRelativeAttachment", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, ParentRelativeAttachment), Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister, METADATA_PARAMS(NewProp_ParentRelativeAttachment_MetaData, ARRAY_COUNT(NewProp_ParentRelativeAttachment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRReplicatedCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRReplicatedCamera = { UE4CodeGen_Private::EPropertyClass::Object, "VRReplicatedCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, VRReplicatedCamera), Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister, METADATA_PARAMS(NewProp_VRReplicatedCamera_MetaData, ARRAY_COUNT(NewProp_VRReplicatedCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMovementReference_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRMovementReference = { UE4CodeGen_Private::EPropertyClass::Object, "VRMovementReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a201d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, VRMovementReference), Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister, METADATA_PARAMS(NewProp_VRMovementReference_MetaData, ARRAY_COUNT(NewProp_VRMovementReference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetSmoother_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "This component is used with the normal character SkeletalMesh network smoothing system for simulated proxies\nIt will lerp the characters components back to zero on simulated proxies after a move is complete.\nThe simplest method of doing this was applying the exact same offset as the mesh gets to a base component that\ntracked objects are attached to." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetSmoother = { UE4CodeGen_Private::EPropertyClass::Object, "NetSmoother", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, NetSmoother), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_NetSmoother_MetaData, ARRAY_COUNT(NewProp_NetSmoother_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetComponentToWorld_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetComponentToWorld = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetComponentToWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, OffsetComponentToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_OffsetComponentToWorld_MetaData, ARRAY_COUNT(NewProp_OffsetComponentToWorld_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultNavigationFilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightMotionController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftMotionController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentRelativeAttachment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRReplicatedCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRMovementReference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NetSmoother,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetComponentToWorld,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVRBaseCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVRBaseCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRBaseCharacter, 105631461);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRBaseCharacter(Z_Construct_UClass_AVRBaseCharacter, &AVRBaseCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
