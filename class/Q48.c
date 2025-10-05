
#include <stdio.h>
int globalVar = 10; // Global variable
void myFunction()
{
    int localVar = 20;
    printf("Inside myFunction: globalVar = %d, localVar = %d\n", globalVar, localVar);
    globalVar = 15;
}
int main()
{
    int mainLocalVar = 30; // Local variable to main
    printf("Inside main (before function call): globalVar = %d, mainLocalVar = %d\n", globalVar, mainLocalVar);
    myFunction();
    printf("Inside main (after function call): globalVar = %d, mainLocalVar = %d\n", globalVar, mainLocalVar);
    return 0;
}

