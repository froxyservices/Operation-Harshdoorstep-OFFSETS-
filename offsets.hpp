#pragma once
#include <cstdint>

// =====================================================================
//  Harsh Doorstop - UE 4.25 (Dumper-7 SDK dump)
//  Offsets verified against:
//   4.25.4-0+++UE4+Release-4.25-HarshDoorstop\CppSDK\SDK
// =====================================================================

namespace Offsets
{
	// Dumper-7 core (RVA, add base of HarshDoorstop.exe)
	inline constexpr std::uintptr_t GObjects = 0x427A688;
	inline constexpr std::uintptr_t GNames  = 0x4261C40;
	inline constexpr std::uintptr_t GWorld  = 0x43BC978;

	// UWorld
	inline constexpr std::uintptr_t UWorld_PersistentLevel = 0x30;   // verified in dump
	inline constexpr std::uintptr_t UWorld_LocalPlayers    = 0x38;   // verified in dump

	// ULevel
	inline constexpr std::uintptr_t ULevel_Actors      = 0x98;   // TArray<AActor*>::Data
	inline constexpr std::uintptr_t ULevel_ActorCount  = 0xA0;   // TArray<AActor*>::Num

	// ULocalPlayer
	inline constexpr std::uintptr_t ULocalPlayer_PlayerController = 0x30; // verified in dump

	// APlayerController / AController
	inline constexpr std::uintptr_t AController_Pawn              = 0x250; // verified in dump
	inline constexpr std::uintptr_t APlayerController_PlayerCameraManager = 0x2B8; // verified

	// APlayerCameraManager
	inline constexpr std::uintptr_t CameraManager_CameraCache = 0x290; // verified in dump
	inline constexpr std::uintptr_t CameraCache_POV          = 0x10;  // FMinimalViewInfo

	// FMinimalViewInfo
	inline constexpr std::uintptr_t POV_Location = 0x00; // FVector
	inline constexpr std::uintptr_t POV_Rotation = 0x0C; // FRotator
	inline constexpr std::uintptr_t POV_FOV      = 0x18; // float

	// AActor / APawn / ACharacter
	inline constexpr std::uintptr_t Actor_RootComponent = 0x130; // USceneComponent* (4.25 standard)
	inline constexpr std::uintptr_t APawn_PlayerState   = 0x240; // verified in dump
	inline constexpr std::uintptr_t ACharacter_Mesh     = 0x280; // verified in dump

	// USceneComponent
	inline constexpr std::uintptr_t SceneComponent_ComponentToWorld = 0x1C0; // FTransform (4.25 standard)
	inline constexpr std::uintptr_t Transform_Translation          = 0x00;  // FVector

	// USkinnedMeshComponent (for optional bone head)
	inline constexpr std::uintptr_t SkinnedMesh_ComponentSpaceTransformsArray = 0x680; // TArray<FTransform> (4.25 standard)

	// APlayerState
	inline constexpr std::uintptr_t PlayerState_PlayerName = 0x300; // FString (verified in dump)

	// ADFBasePlayerState
	inline constexpr std::uintptr_t PlayerState_TeamNum = 0x348; // uint8 (verified in dump)

	// ADFBaseCharacter
	inline constexpr std::uintptr_t Character_Health    = 0x5D8; // float (verified in dump)
	inline constexpr std::uintptr_t Character_MaxHealth = 0x618; // float (verified in dump)

	// Bones
	inline constexpr int HeadBone = 98;
}
