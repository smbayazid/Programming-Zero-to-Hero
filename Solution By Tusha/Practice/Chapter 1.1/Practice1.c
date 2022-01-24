#include <stdio.h>

int main(){

    printf("\n==================================\n");

    int age = 0;
    char NidYesNO = '';

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age == 18){
        printf("Do you have NID? (y/n): ");
        scanf("%c", &NidYesNO);

        if(NidYesNO == 'y'){
            printf("You can vote....");
        }
        else if(NidYesNO == 'n'){
            printf("Register your NID and go for vote quickly...");
        }
        else{
            printf("error!!!");
        }
    }

    else if(age > 18){
        printf("You can vote...");
    }

    else if(age < 18){
        printf("You are too young to vote... :(");
    }

    printf("\n==================================\n");

    return 0;
}