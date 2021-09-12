// Shoot Them Up. All Rights Recerved


#include "UI/STUGameHUD.h"
//#include "..\..\Public\UI\STUGameHUD.h" 
#include "Engine/Canvas.h"
#include "Blueprint/UserWidget.h"

void ASTUGameHUD::DrawHUD()
{
    Super::DrawHUD();

    //DrawCrossHAir();
}

void ASTUGameHUD::BeginPlay()
{
    Super::BeginPlay();

    auto PlayerHUBWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHUDWidgetClass);
    if (PlayerHUBWidget)
    {
        PlayerHUBWidget->AddToViewport();
    }
}


void ASTUGameHUD::DrawCrossHAir()
{
    const TInterval<float> Center(Canvas->SizeX * 0.5f, Canvas->SizeY * 0.5f);

    const float HalfLineSize = 10.0f;
    const float LineThikness = 2.0f;
    const FLinearColor LineColor = FColor::Green;

    DrawLine(Center.Min - HalfLineSize, Center.Max, Center.Min + HalfLineSize, Center.Max, LineColor, LineThikness);
    DrawLine(Center.Min, Center.Max - HalfLineSize, Center.Min, Center.Max + HalfLineSize, LineColor, LineThikness);
}
