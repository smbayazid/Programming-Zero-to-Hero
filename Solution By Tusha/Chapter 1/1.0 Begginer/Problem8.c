#include <stdio.h>

int main(){

    printf("\n==================================\n");

    int firstAngles, secondAngles, thirdAngles;

    printf("Enter the First Angles: ");
    scanf("%d", &firstAngles);

    printf("Enter the Second Angles: ");
    scanf("%d", &secondAngles);

    thirdAngles = 180 - (firstAngles + secondAngles);
    printf("Third angle is: %d", thirdAngles);

    printf("\n==================================\n");

    return 0;
}