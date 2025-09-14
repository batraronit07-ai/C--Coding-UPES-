#include<stdio.h>

int main() {

    int n;
    int sum = 0;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    int marks[n];

    for (int i = 0 ; i<=n; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    printf("the sum of marks is %d", sum);
    return 0;

}