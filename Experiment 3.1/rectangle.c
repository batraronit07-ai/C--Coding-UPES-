/* 5 WAP using ternary operator, the user should input the length and breadth
of a rectangle, one has to find out which rectangle has the highest
perimeter. The minimum number of rectangles should be three.*/

#include <stdio.h>

int main()
{
    float length1, breadth1, perimeter1;
    float length2, breadth2, perimeter2;
    float length3, breadth3, perimeter3; 
    float highest_perimeter;

    printf("Enter length of rectangle 1: ");
    scanf("%f", &length1);
    printf("Enter breadth of rectangle 1: ");
    scanf("%f", &breadth1);
    perimeter1 = 2 * (length1 + breadth1);

    printf("Enter length of rectangle 2: ");
    scanf("%f", &length2);
    printf("Enter breadth of rectangle 2: ");
    scanf("%f", &breadth2);
    perimeter2 = 2 * (length2 + breadth2);

    printf("Enter length of rectangle 3: ");
    scanf("%f", &length3);
    printf("Enter breadth of rectangle 3: ");
    scanf("%f", &breadth3);
    perimeter3 = 2 * (length3 + breadth3);

    highest_perimeter = (perimeter1 > perimeter2) ? ((perimeter1 > perimeter3) ? perimeter1 : perimeter3) : ((perimeter2 > perimeter3) ? perimeter2 : perimeter3);

    printf("\nPerimeter of Rectangle 1: %.2f\n", perimeter1);
    printf("Perimeter of Rectangle 2: %.2f\n", perimeter2);
    printf("Perimeter of Rectangle 3: %.2f\n", perimeter3);
    printf("The highest perimeter among the three rectangles is: %.2f\n", highest_perimeter);

    return 0;
}