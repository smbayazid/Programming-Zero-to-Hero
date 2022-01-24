#include <stdio.h>

int main(){

    printf("\n==================================\n");

    float number1, number2, number3;

    printf("Enter the 1st number: ");
    scanf("%f", &number1);

    printf("Enter the 2nd number: ");
    scanf("%f", &number2);

    printf("Enter the 3rd number: ");
    scanf("%f", &number3);
    printf("- - - - - - - - - -\n");

    printf("%f,%f,%f\n", number1, number2, number3);

    if (number1 > number2 && number1 > number3){
        printf("Maximum number: %f", number1);
    }

    else if (number2 > number1 && number2 > number3){
        printf("Maximum number: %f", number2);
    }

    else if (number3 > number1 && number3 > number2){
        printf("Maximum number: %f", number3);
    }

    printf("\n==================================\n");

    return 0;
}