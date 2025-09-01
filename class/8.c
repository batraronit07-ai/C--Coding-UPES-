#include <stdio.h>

int main()
{

    int number;

    printf("The number of perople attending : ");
    scanf("%d", &number);

    if (number > 100)
        printf("The show is going to start");

    else
        printf("The show will start when nummber is greater than 10");

}