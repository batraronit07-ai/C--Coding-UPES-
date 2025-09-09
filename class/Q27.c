#include<stdio.h>

int main() {

    int n;

    printf("enter n: ");
    scanf("%d", &n);

    if (n%2 == 0)
    {
        goto even;
    }

    else 
    {
        goto odd;
    }

odd: 
printf("%d is odd", n);
return 0;

even: 
printf("%d is even", n);
return 0;
}