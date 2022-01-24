#include <stdio.h>

int main(){

printf("\n==================================\n");

float fahrenheit, convertCelsius, celsius, convertFarenhrit;

printf("Enter the Fharenheit Number: ");
scanf("%f",&fahrenheit);
convertCelsius = (fahrenheit - 32) * 5/9;
printf("Celsius: %f", convertCelsius);

printf("\n- - - - - - - - - -\n");

printf("\nEnter the Celsius Number: ");
scanf("%f", &celsius);
convertFarenhrit = (celsius * 9/5) + 32;
printf("Fharenheit: %f", convertFarenhrit);

printf("\n==================================\n");
return 0;
}