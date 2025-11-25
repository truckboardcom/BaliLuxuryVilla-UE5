// LuxuryVilla.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LuxuryVilla.generated.h"

UCLASS()
class VILLAPROJECT_API ALuxuryVilla : public AActor
{
    GENERATED_BODY()

public:    
    ALuxuryVilla();

protected:
    virtual void BeginPlay() override;

public:    
    virtual void Tick(float DeltaTime) override;

    // Villa Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Villa Components")
    class UStaticMeshComponent* MainBuilding;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Villa Components")
    class UStaticMeshComponent* InfinityPool;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Villa Components")
    class UStaticMeshComponent* TerraceDeck;

    // Lighting
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lighting")
    class UPointLightComponent* PoolLight;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lighting")
    class UDirectionalLightComponent* SunsetLight;

    // Interactive Features
    UFUNCTION(BlueprintCallable, Category = "Villa Functions")
    void TogglePoolLights();

    UFUNCTION(BlueprintCallable, Category = "Villa Functions")
    void OpenDoors();

    // Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Villa Settings")
    FLinearColor PoolLightColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Villa Settings")
    float DoorOpenSpeed;

private:
    bool bPoolLightsOn;
    bool bDoorsOpen;
};
