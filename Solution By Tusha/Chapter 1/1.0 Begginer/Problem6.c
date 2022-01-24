#include <stdio.h>

int main(){
    
    printf("\n==================================\n");

    int squreLenght, rectangleLenght, rectangleWidth, radiusOfCircle, triangleHeigth,  triangleBase;
    int areaOfSquare, areaOfRectangle;
    float areaOfCircle, areaOfTriangler;

    printf("Enter the lenght of a Square: ");
    scanf("%d", &squreLenght);
    areaOfSquare = squreLenght*squreLenght;
    printf("The area of the square is = %d", areaOfSquare);

    printf("\n- - - - - - - - - -\n");
    
    printf("Enter the lenght of a rectanglure: ");
    scanf("%d", &rectangleLenght);
    printf("Enter the width of a rectanglure: ");
    scanf("%d", &rectangleWidth);
    areaOfRectangle = rectangleLenght*rectangleWidth;
    printf("The area of the rectanrgula is = %d", areaOfRectangle);

    printf("\n- - - - - - - - - -\n");
    
    printf("Enter the radius: ");
    scanf("%d", &radiusOfCircle);
    areaOfCircle = 3.1416*(radiusOfCircle*radiusOfCircle);
    printf("The area of the circle is = %f", areaOfCircle);

    printf("\n- - - - - - - - - -\n");
    
    printf("Enter the heigth of a triangle: ");
    scanf("%d", &triangleHeigth);
    printf("Enter the width of a triangle: ");
    scanf("%d", &triangleBase);
    areaOfTriangler = 0.5*triangleHeigth*triangleBase;
    printf("The area of the triangle is = %f", areaOfTriangler);
    
    printf("\n==================================\n");

    return 0;
}