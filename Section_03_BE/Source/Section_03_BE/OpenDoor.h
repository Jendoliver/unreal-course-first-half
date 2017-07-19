// App||ElBotna Solutions ©

#pragma once

#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SECTION_03_BE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

	private:
		// Door's aperture angle fam
		UPROPERTY(EditAnywhere)
		float OpenAngle = -60.0f;

		// PressurePlate that triggers the door
		UPROPERTY(EditAnywhere)
		ATriggerVolume* PressurePlate;

		// Delay of the door (time for the door to close)
		UPROPERTY(EditAnywhere)
		float DoorCloseDelay = 3.0f;

		float LastDoorOpenTime;

		// Actor that can open the door
		AActor* ActorThatOpens;
		// Door which owns the property
		AActor* Owner;

	protected:
		// Called when the game starts
		virtual void BeginPlay() override;

		void OpenDoor();

		void CloseDoor();

	public:	
		// Called every frame
		virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		// Sets default values for this component's properties
		UOpenDoor();
	
};
