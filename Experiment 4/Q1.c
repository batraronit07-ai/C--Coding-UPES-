#include <stdio.h>
int x, y;
int sum(int x, int y)
{

    int sum = x + y;

    printf("Sum of x and y is %d\n", sum);
}

int product(int x, int y)
{

    int product = x * y;

    printf("product of x and y is %d\n", product);
}

int difference(int x, int y)
{

    int difference = x - y;

    printf("Difference of x and y is %d\n", difference);
}

int main()
{

    printf("Enter the value of x and y: ");
    scanf("%d, %d", &x, &y);

    difference(x, y);
    product(x, y);
    sum(x, y);

    return 0;
}