#include<stdio.h>

int main(){
    
    int  houseNumber, roadNumber, zipCode;
    char areaName[20], cityName[20];

    printf("Enter your house number: ");
    scanf("%d", &houseNumber);

    printf("Enter your road number: ");
    scanf("%d", &roadNumber);

    printf("Enter your area name: ");
    scanf("%s", &areaName);

    printf("Enter your city name: ");
    scanf("%s", &cityName);

    printf("Enter your zip code: ");
    scanf("%d", &zipCode);

    printf("\n==================================\n");

    printf("Address:\n");
    printf("\tHouse: %d, ", houseNumber);
    printf("Road: %d,\n", roadNumber);
    printf("\t%s, %s-%d,\n\tBangladesh", areaName, cityName, zipCode);

    printf("\n==================================\n\n\n");

    return 0;
}