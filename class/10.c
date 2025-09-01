// WAP to check is a number is add or even and further check if it is greater than or less than 10

#include <stdio.h>

int main()
{

    int number;

    printf("the number is :");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        if (number > 10)

        {

            printf("the number is even and greater than 10");
        }

        else

        {

            printf("the number is even and less than 10");
        }
    }

    else
    {
        if (number > 10)

        {

            printf("the number is odd and greater than 10");
        }

        else

        {

            printf("the number is odd and less than 10");
        }
    }

    return 0;
}