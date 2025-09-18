#include <stdio.h>

int main() {
    int n, i;
    int integers[n];   
    int largest, second_largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);


    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &integers[i]);
    }

    if (integers[0] > integers[1]) {
        largest = integers[0];
        second_largest = integers[1];
    } else {
        largest = integers[1];
        second_largest = integers[0];
    }

    for (i = 2; i < n; i++) {
        if (integers[i] > largest) {
            second_largest = largest;
            largest = integers[i];
        } else if (integers[i] > second_largest && integers[i] != largest) {
            second_largest = integers[i];
        }
    }

    printf("Second largest element = %d\n", second_largest);

    return 0;
}