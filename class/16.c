// WAP to print first n natural numbers using while loop
#include<stdio.h>

int main() {

    int i = 0, n;

    printf("The value of n is:");
    scanf("%d", &n);

    while ( i < n)
    { 
        i = i + 1;
        printf("%d\n", i);
    }

    return 0;
}

