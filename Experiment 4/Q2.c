#include<stdio.h>

int gv = 10;

int a() {

    int lv = 20;
    printf("inside a: ");
    printf("local variable: %d\n", lv);
    printf("global variable: %d\n", gv);
}

int main() {

    printf("global variable: %d", gv, a());
    return 0;
}