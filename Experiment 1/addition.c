#include<stdio.h>

int main() {

    int a, b, sum;

    printf("Value of a: ");
    scanf("%d", &a);

    printf("Value of b: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum of %d and %d is: %d\n", a, b, sum);

    return 0;
    
}