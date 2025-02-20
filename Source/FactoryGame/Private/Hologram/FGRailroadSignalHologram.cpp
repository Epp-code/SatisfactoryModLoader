// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGRailroadSignalHologram.h"
#include "Net/UnrealNetwork.h"

AFGRailroadSignalHologram::AFGRailroadSignalHologram() : Super() {
	this->mSnappedConnection = nullptr;
	this->mSnappedRailroadTrack = nullptr;
	this->mUpgradeTarget = nullptr;
}
void AFGRailroadSignalHologram::BeginPlay(){ Super::BeginPlay(); }
void AFGRailroadSignalHologram::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void AFGRailroadSignalHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGRailroadSignalHologram, mSnappedConnection);
	DOREPLIFETIME(AFGRailroadSignalHologram, mSnappedRailroadTrack);
	DOREPLIFETIME(AFGRailroadSignalHologram, mUpgradeTarget);
}
void AFGRailroadSignalHologram::ScrollRotate(int32 delta, int32 step){ }
void AFGRailroadSignalHologram::PreHologramPlacement(const FHitResult& hitResult){ }
bool AFGRailroadSignalHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
bool AFGRailroadSignalHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
AActor* AFGRailroadSignalHologram::GetUpgradedActor() const{ return nullptr; }
bool AFGRailroadSignalHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
bool AFGRailroadSignalHologram::CanNudgeHologram() const{ return bool(); }
bool AFGRailroadSignalHologram::IsLocallyOwnedHologram() const{ return bool(); }
void AFGRailroadSignalHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGRailroadSignalHologram::CheckValidPlacement(){ }
