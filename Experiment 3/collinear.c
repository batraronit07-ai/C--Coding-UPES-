// 3.	WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.

#include <stdio.h>

int main()
{
    int a1, b1, a2, b2, a3, b3, area;

    printf("The coordinates of 1st point are: ");
    scanf("%d, %d", &a1, &b1);

    printf("The coordinates of 2nd point are: ");
    scanf("%d, %d", &a2, &b2);

    printf("The coordinates of 3rd point are: ");
    scanf("%d, %d", &a3, &b3);

    if ((area = 1 / 2 * ((a1 * (b2 - b3)) + (a2 * (b3 - b1)) + (a3 * (b1 - b2))))== 0)
        printf("The points are collinear\n");

    else
        printf("The points are non-collinear\n");

    return 0;
}