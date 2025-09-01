// WAP to print 1 to n numbers using a for loop

#include<stdio.h>

int main() {

    int i = 0, n;

    printf("The value of n is:");
    scanf("%d", &n);

    for ( i = 0 ; i < n ; i = i + 1)
    { 
        printf("%d", i);
    }
    return 0;
}

