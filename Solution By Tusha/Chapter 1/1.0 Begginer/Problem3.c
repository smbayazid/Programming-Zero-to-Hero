#include <stdio.h>

int main(){

    char firstLetterOfName;
    
    printf("Enter First Letter of Your Name: ");
    scanf("%c",&firstLetterOfName);
    
    printf("Hello %c", &firstLetterOfName);

    return 0;
}