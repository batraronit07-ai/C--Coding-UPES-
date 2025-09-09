#include <stdio.h>

int main()
{

    int number, multiple;

    printf("enter the number whose table id to be printed");
    scanf("%d", &number);

    for (int i = 0; i <= 10; i++)
    {
        multiple = number * i;

        printf("%d * %d = %d\n", number, i, multiple);
    }
    return 0;
}