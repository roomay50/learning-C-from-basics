#include <stdio.h>

int main(void){
  float DailyDrivingCost, TotalMilesDrivenPerDay, AverageMilesPerGallon, CostPerGallonofGasoline, ParkingFeesPerDay, TollsPerDay;
  
  // getting user input
  printf("%s","Enter TotalMilesDrivenPerDay: ");
  scanf("%f", &TotalMilesDrivenPerDay);
  printf("%s","Enter AverageMilesPerGallon: ");
  scanf("%f", &AverageMilesPerGallon);
  printf("%s","Enter CostPerGallonofGasoline: ");
  scanf("%f", &CostPerGallonofGasoline);
  printf("%s","Enter ParkingFeesPerDay: ");
  scanf("%f", &ParkingFeesPerDay);
  printf("%s","Enter TollsPerDay: ");
  scanf("%f", &TollsPerDay);

  DailyDrivingCost = (((TotalMilesDrivenPerDay/AverageMilesPerGallon) * CostPerGallonofGasoline) + ParkingFeesPerDay + TollsPerDay);

  printf("Your daily driving cost is %.2f", DailyDrivingCost);
}