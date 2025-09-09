#include <stdio.h>

int main()
{

    int n, jump_here;

    printf("enter n: ");
    scanf("%d", &n);

    if (n == 0)
    {
        goto jump_here;
    }

    printf("you entered : %d\n", n);
jump_here:
    printf("Exiting the program");
    return 0;
}