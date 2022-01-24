#include <stdio.h>

int main(){

    printf("\n==================================\n");

    float firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber, totalNumber, avarageNumber;

    printf("Enter the 1st subject number: ");
    scanf("%f", &firstNumber);

    printf("Enter the 2nd subject number: ");
    scanf("%f", &secondNumber);

    printf("Enter the 3rd subject number: ");
    scanf("%f", &thirdNumber);

    printf("Enter the 4th subject number: ");
    scanf("%f", &fourthNumber);

    printf("Enter the 5th subject number: ");
    scanf("%f", &fifthNumber);

    printf("\n- - - - - - - - - -\n");

    totalNumber = firstNumber + secondNumber + thirdNumber + fourthNumber + fifthNumber;
    printf("Total Number = %f", totalNumber);

    printf("\n- - - - - - - - - -\n");

    avarageNumber = totalNumber/5;
    printf("Avarage Number = %f", avarageNumber);

    printf("\n- - - - - - - - - -\n");

    printf("\n==================================\n");
    return 0;
}