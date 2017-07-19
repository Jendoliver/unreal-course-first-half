// App||ElBotna Solutions ©

#pragma once

#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SECTION_03_BE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

	private:
		UPROPERTY(EditAnywhere)
		float OpenAngle = 90.0f;

		UPROPERTY(EditAnywhere)
		ATriggerVolume* PressurePlate;

	protected:
		// Called when the game starts
		virtual void BeginPlay() override;

	public:	
		// Called every frame
		virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		// Sets default values for this component's properties
		UOpenDoor();
	
};
