#include<stdio.h>

int main(){
    
    printf("\n==================================\n");

    int number_1 = 0, number_2 = 0;
    int sum, sub, mul, div, squ1, squ2, mod;

    printf("Enter the first number: ");
    scanf("%d", &number_1);

    
    printf("Enter the second number: ");
    scanf("%d", &number_2);

    sum = number_1 + number_2;
    printf("%d + %d = %d\n", number_1, number_2, sum  );

    sub = number_1 - number_2;
    printf("%d - %d = %d\n", number_1, number_2, sub);

    mul = number_1 * number_2;
    printf("%d * %d = %d\n", number_1, number_2, mul);

    div = number_1 / number_2;
    printf("%d / %d = %d\n", number_1, number_2, div);

    squ1 = number_1 * number_1;
    printf("%d * %d = %d\n", number_1, number_1, squ1);

    squ2 = number_2 * number_2;
    printf("%d * %d = %d\n", number_2, number_2, squ2);

    mod = number_1 % number_2;
    printf("%d // %d = %d\n", number_1, number_2, mod);

    printf("==================================\n\n\n");

    return 0;
}