// Copyright RyanXu @CloudStudio

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTankDelegate);

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

public:
    //Called by engine when actor take damage
    virtual float TakeDamage(
        float DamageAmount,
        struct FDamageEvent const& DamageEvent,
        class AController* EventInstigator,
        AActor* DamageCauser) override;

    //Return current health as a percentage of starting health, between 0 and 1
    UFUNCTION(BlueprintPure, Category = "Health")
    float GetHealthPercent() const;

    FTankDelegate OnDeath;

private:
	ATank();

    UPROPERTY(EditDefaultsOnly, Category = "Setup")
    int32 StartingHealth = 100;

    UPROPERTY(VisibleAnyWhere, Category = "Health")
    int32 CurrentHealth;
};