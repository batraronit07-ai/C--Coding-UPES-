#include <stdio.h>

int main()
{
    int celcius;

    printf("Enter the temperature in Celsius: ");
    scanf("%d", &celcius);

    float fahrenheit = (celcius * 9.0 / 5.0) + 32;

    printf("fahrenheit of 5 celcius is %f", fahrenheit);
    return 0;
}