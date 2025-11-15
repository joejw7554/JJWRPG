#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "CAuraController.generated.h"

UCLASS()
class AURA_API ACAuraController : public APlayerController
{
	GENERATED_BODY()


public:
	ACAuraController();

protected:
	virtual void BeginPlay() override;

private:
	// Input Callbacks
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

private:
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<class UInputMappingContext> AuraContext;


	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<class UInputAction> MoveAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<class UInputAction> LookAction;

	
	
};
