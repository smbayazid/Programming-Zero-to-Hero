#include <stdio.h>

int main(){

    printf("\n==================================\n");

    float number1, number2;

    printf("Enter your 1st number: ");
    scanf("%f", &number1);

    printf("Enter your 2nd number: ");
    scanf("%f", &number2);
    printf("- - - - - - - - - -\n");

    if(number1 > number2){
        printf("Maximum number is %f", number1);
    }
    else if(number1 < number2){
        printf("Maximum number is %f", number2);
    }
    else if(number1 = number2){
        printf("Those numbers are Equal");
    }

    printf("\n==================================\n");

    return 0;
}