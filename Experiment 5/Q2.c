#include <stdio.h>

int main()
{
    int n, i;
    
    int positive_count = 0, negative_count = 0, even_count = 0, odd_count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int integers[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &integers[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (integers[i] >= 0)
            positive_count++;
        else
            negative_count++;

        if (integers[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);

    return 0;
}