#include<stdio.h>

int square(int x) {

    return x*x;
}

int main() {

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int result = square(arr[2]);

    printf("square of %d is %d", arr[2], result);
    return 0;

}
