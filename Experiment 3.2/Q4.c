#include <stdio.h>

int main()
{

    int population, rate;
    float new_population;

    population = 100000;
    rate = 10;

    for (int i = 1; i <= 10; i = i + 1)
    {
        new_population = population + (population/10);
        population = new_population;
        printf("The population of %d year of this decade is %f\n", i, new_population);
    }

    return 0;
}