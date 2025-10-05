#include <stdio.h>

int square(int x)
{

    return x * x;
}

int main()
{
    int n, result, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        result = square(i);
        printf("Square of %d is %d\n", i, result);
    }

    return 0;
}