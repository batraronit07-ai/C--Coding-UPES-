#include <stdio.h>

int main()
{

    int n, num1, num2, sum;

    printf("Enter the number of terms upto which you want the fibonacci series: ");
    scanf("%d", &n);
    num1 = 0;
    num2 = 1;

    for (int i = 1; i <= n ; i++)
    {
        sum = num1+num2;
        num1 = num2;
        num2 = sum;
        printf("%d\n", num1);
        printf("%d\n", num2);

    }
    return 0;
}

