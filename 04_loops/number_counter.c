#include <stdio.h>

int main()
{
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice;

    do
    {
        printf("Enter number: ");
        scanf("%d", &num);

        if(num > 0)
            positive++;
        else if(num < 0)
            negative++;
        else
            zero++;

        printf("Continue (y/n)? ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    printf("\nPositive = %d", positive);
    printf("\nNegative = %d", negative);
    printf("\nZero = %d", zero);

    return 0;
}
