#include <stdio.h>

int main(){

    printf("\n==================================\n");
    int lengthInCentimeter, lengthInCentimeterMod, lengthInMeter, lengthInKilometer;

    printf("Enter a number in Centimeter: ");
    scanf("%d", &lengthInCentimeter);
    lengthInMeter = lengthInCentimeter/100;
    lengthInCentimeterMod = lengthInCentimeter%100;
    printf("In Meter= %dM %dCM", lengthInMeter,lengthInCentimeterMod);

    printf("\n- - - - - - - - - -\n");

    lengthInMeter = lengthInCentimeter/1000;
    lengthInKilometer = lengthInMeter%1000;
    printf("In Kilometer: %dKM %dCM",lengthInKilometer,lengthInCentimeter);
    
    printf("\n==================================\n");
    return 0;
}