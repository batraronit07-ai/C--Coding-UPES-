#include <stdio.h>

void hello()
{
    printf("Hello World!\n");
    return;
}

int square(int x)
{

    return x * x;
}

int main()
{

    hello();

    int result = square(5);

    printf("the square of 5 is %d", result);

    return 0;
}