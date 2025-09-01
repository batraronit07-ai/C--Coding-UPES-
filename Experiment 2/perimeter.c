#include<stdio.h>

int main() {

    int length, width, perimeter, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    perimeter = 2 * (length + width);

    printf("The perimeter of the rectangle is: %d\n", perimeter);


    area = length * width;

    printf("The area of this rectangle is: %d\n", area );

    return 0;
    
}