#include <stdio.h>

int main()
{

    char another;
    int number;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    do
    {
        printf("Enter a number: \n");
        scanf("%d", &number);

        if (number > 0)
        {
            printf("this is a positive number\n");
            positive_count++;
        }

        else if (number == 0)
        {
            printf("this number is zero\n");
            zero_count++;
        }

        else if (number < 0)
        {
            printf("this is a negative number\n");
            negative_count++;
        }

        printf("Want to print another number y/n: \n");
        fflush(stdin);
        scanf("%c", &another);
    }

    while (another == 'y');

    printf("||| ---------- RESULT ---------- |||\n");
    printf("Number of positive numbers entered are: %d\n", positive_count);
    printf("Number of negative numbers entered are: %d\n", negative_count);
    printf("Number of zeros entered are: %d\n", zero_count);
    return 0;
}
