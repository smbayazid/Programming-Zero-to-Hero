#include <stdio.h>

int main(){

    char name[30];
    int age;

    printf("Enter name: ");
    scanf("%s", &name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Hello %s, you are %d years old.", name, age);

    return 0;
}