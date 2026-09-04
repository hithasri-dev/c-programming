#include <stdio.h>

void primefactors(int num)
{
    int i;

    for(i = 2; i <= num; i++)
    {
        while(num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
    }
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Prime factors are: ");

    primefactors(num);

    return 0;
}