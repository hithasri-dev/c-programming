#include <stdio.h>

int leapyear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int main()
{
    int year, result;

    printf("Enter a year: ");
    scanf("%d", &year);

    result = leapyear(year);

    if (result == 1)
        printf("Leap year");
    else
        printf("Not a leap year");

    return 0;
}
