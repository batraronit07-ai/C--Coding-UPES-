#include <stdio.h>

int main()
{
    int n, i, number, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int integers[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &integers[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &number);

    for (i = 0; i < n; i++)
    {
        if (integers[i] == number)
        {
            count++;
        }
    }

    printf("Frequency of %d is %d\n", number, count);

    return 0;
}