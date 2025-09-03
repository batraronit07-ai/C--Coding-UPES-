#include <stdio.h>

int main()
{

    int n, i, j, k, l;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (k = n; k >= 0; k--)
    {
        for (l = k; l >= 0; l--)
        {
            printf("*");
        }

        printf("\n");
    }
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

// incomplete

