// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuLanWidget.generated.h"

class UEditableTextBox;
class UButton;


/**
 * 
 */
UCLASS()
class SIMPLYLOVELY_PROJECT_API UMenuLanWidget : public UUserWidget
{
	GENERATED_BODY()


public:

	virtual void NativeOnInitialized() override;

	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_Host;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_Join;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> EditableTextBox_IP;

	UPROPERTY(EditAnywhere, Category="LAN")
	TSoftObjectPtr<UWorld> Level;

	UFUNCTION()
	void OnButtonHostClicked();

	UFUNCTION()
	void OnButtonJoinClicked();
	

	
};
