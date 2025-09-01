// enter 2 values of x and y and check whether the 3 conditiond are met. print correct if if the furst condition is met

#include <stdio.h>

int main()
{
    int a, b;
    printf("the  value of a is:");
    scanf("%d", &a);

    printf("the  value of b is:");
    scanf("%d", &b);

    printf("a > 0 && b > 0:%d\n", (a > 0 && b > 0));

    printf("a > 0 || b > 0:%d\n", (a > 0 || b > 0));

    printf("!(a>0) : %d\n", !(a > 0));

    return 0;
}