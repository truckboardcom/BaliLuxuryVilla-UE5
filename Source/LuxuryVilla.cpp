// LuxuryVilla.cpp
#include "LuxuryVilla.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "UObject/ConstructorHelpers.h"

ALuxuryVilla::ALuxuryVilla()
{
    PrimaryActorTick.bCanEverTick = true;

    // Initialize components
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    // Main Building
    MainBuilding = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainBuilding"));
    MainBuilding->SetupAttachment(RootComponent);

    // Infinity Pool
    InfinityPool = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InfinityPool"));
    InfinityPool->SetupAttachment(RootComponent);
    InfinityPool->SetRelativeLocation(FVector(500.0f, 0.0f, -50.0f));

    // Terrace Deck
    TerraceDeck = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TerraceDeck"));
    TerraceDeck->SetupAttachment(RootComponent);
    TerraceDeck->SetRelativeLocation(FVector(300.0f, 0.0f, 0.0f));

    // Pool Light
    PoolLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PoolLight"));
    PoolLight->SetupAttachment(InfinityPool);
    PoolLight->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
    PoolLight->SetIntensity(5000.0f);
    PoolLight->SetAttenuationRadius(1000.0f);

    // Sunset Directional Light
    SunsetLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("SunsetLight"));
    SunsetLight->SetupAttachment(RootComponent);
    SunsetLight->SetRelativeRotation(FRotator(-30.0f, 180.0f, 0.0f));
    SunsetLight->SetLightColor(FLinearColor(1.0f, 0.6f, 0.3f)); // Warm sunset color

    // Default values
    PoolLightColor = FLinearColor(0.3f, 0.7f, 1.0f); // Blue pool light
    DoorOpenSpeed = 2.0f;
    bPoolLightsOn = true;
    bDoorsOpen = false;
}

void ALuxuryVilla::BeginPlay()
{
    Super::BeginPlay();

    // Initialize pool light with default color
    PoolLight->SetLightColor(PoolLightColor);
}

void ALuxuryVilla::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Add any per-frame logic here
    // For example, animating water reflections or door animations
}

void ALuxuryVilla::TogglePoolLights()
{
    bPoolLightsOn = !bPoolLightsOn;
    PoolLight->SetVisibility(bPoolLightsOn);

    UE_LOG(LogTemp, Warning, TEXT("Pool lights toggled: %s"), 
           bPoolLightsOn ? TEXT("ON") : TEXT("OFF"));
}

void ALuxuryVilla::OpenDoors()
{
    bDoorsOpen = !bDoorsOpen;

    // Add door opening animation logic here
    UE_LOG(LogTemp, Warning, TEXT("Doors %s"), 
           bDoorsOpen ? TEXT("OPENED") : TEXT("CLOSED"));
}
