#include <stdio.h>

int main(){

    printf("\n==================================\n");

    float P, R, T, simpleInterest, compoundInterest;

    printf("Enter Principal: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter Time: ");
    scanf("%f", &T);

    printf("\n- - - - - - - - - -\n");

    simpleInterest = P*R*T/100;
    printf("Simple Interest is= %f", simpleInterest);
    printf("\n- - - - - - - - - -\n");



    printf("\n==================================\n");

    return 0;
}