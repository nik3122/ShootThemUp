// Shoot Them Up. All Rights Recerved

#pragma once

#include "CoreMinimal.h"
#include "STUBaseWeapon.h"
#include "PickUps/STUBasePickup.h"
#include "STUAmmoPickup.generated.h"

class ASTUBaseClass;

UCLASS()
class SHOOTTHEMUP_API ASTUAmmoPickup : public ASTUBasePickup
{
    GENERATED_BODY()
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Pickup", meta = (ClampMin = "1", ClampMax= "10"));
    int32 ClipsAmount = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Pickup")
    TSubclassOf<ASTUBaseWeapon> WeaponType;
    
private:
    virtual bool GivePickupTo(APawn* PlayerPawn) override;
};
