#include <stdio.h>

int main()
{

    int a = 10;
    printf("a in main() is: %d\n", a);
    {
        int b = 5;
        printf("Inside 1st block: \n");
        printf("a=%d\n", a);
        printf("b=%d\n", b);
    }

    {
        int c = 20;
        printf("Inside 2nd block: \n");
        printf("a=%d\n", a);
        printf("c=%d\n", c);
    }

    printf("back in main() \n");
    printf("a=%d\n", a);
    return 0;
}