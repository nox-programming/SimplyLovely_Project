// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetLan/MenuLanWidget.h"

#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Kismet/GameplayStatics.h"

void UMenuLanWidget::NativeOnInitialized()
{
	Button_Host->OnClicked.AddDynamic(this,&UMenuLanWidget::OnButtonHostClicked);
	Button_Join->OnClicked.AddDynamic(this,&UMenuLanWidget::OnButtonJoinClicked);

	FInputModeUIOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(true);
}

void UMenuLanWidget::OnButtonHostClicked()
{
	FInputModeUIOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(false);

	UGameplayStatics::OpenLevelBySoftObjectPtr(this,Level,true,TEXT("listen"));
}
void UMenuLanWidget::OnButtonJoinClicked()
{
	FInputModeUIOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(false);

	const FString IP= EditableTextBox_IP->GetText().ToString();
	UGameplayStatics::OpenLevel(this,*IP);
}

