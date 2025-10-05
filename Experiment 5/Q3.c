#include <stdio.h>

int main()
{

    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the value of elements of the array: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int number, count = 0;

    printf("Enter the number whose frequency is to be found: ");
    scanf("%d", &number);

    for (i = 0; i < n; i++)
    {
        if (number == arr[i])
        {
            count++;
        }
    }

    printf("frequency of %d in array is %d", number, count);
    return 0;
}