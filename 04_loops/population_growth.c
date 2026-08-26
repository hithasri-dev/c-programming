#include <stdio.h>

int main()
{
    float population = 100000;
    int year;

    for(year = 10; year >= 1; year--)
    {
        population = population / 1.10;

        printf("Year %d population = %.0f\n", year, population);
    }

    return 0;
}
