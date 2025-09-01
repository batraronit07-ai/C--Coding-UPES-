// Wap to print numbers upto n using ddo while loop
#include<stdio.h>

int main() {

    int i = 0, n;

    printf("The value of n is:");
    scanf("%d", &n);

    do 
    {
        i = i + 1; 
        printf("%d\n", i);
    }

    while (i<n);
    return 0;
}

