
#include "Character/CCharacterBase.h"
#include "Components/SkeletalMeshComponent.h"

ACCharacterBase::ACCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), "WeaponSocket");
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -90.f));
	GetMesh()->SetRelativeRotation(FRotator(0.f,-90.f,0.f));

}

void ACCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

