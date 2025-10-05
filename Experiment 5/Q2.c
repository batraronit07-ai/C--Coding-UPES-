#include <stdio.h>

int main()
{

    int n, i, even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0, zero_count = 0;

    printf("Enter the value of n:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the value of elements of the array: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive_count++;
        }

        if (arr[i] < 0)
        {
            negative_count++;
        }

        if (arr[i] == 0)
        {
            zero_count++;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }

        if (arr[i] % 2 != 0)
        {
            odd_count++;
        }
    }

    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);
    printf("Number of positive numbers: %d\n", positive_count);
    printf("Number of negative numbers: %d\n", negative_count);
    printf("Number of zeros: %d", zero_count);
    return 0;
}