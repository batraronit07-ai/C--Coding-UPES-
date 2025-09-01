// WAP to print eligible to vote

#include <stdio.h>

int main()
{

    int age;

    printf("my age is ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("I am eligible to vote");
    }

    else
    {
        printf("I am underage");
    }

    return 0;
}