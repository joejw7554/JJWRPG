#pragma once

#include "CoreMinimal.h"
#include "Character/CCharacterBase.h"
#include "CAuraCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class USpringArmComponent;
class UCameraComponent;

UCLASS()
class AURA_API ACAuraCharacter : public ACCharacterBase
{
	GENERATED_BODY()

public:
	ACAuraCharacter();

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

private:
	// Camera Components
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	TObjectPtr<UCameraComponent> Camera;

	// Enhanced Input
	

	
};


