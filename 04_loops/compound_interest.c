//Compound Interest
#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, n, q, a;
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("Set %d\n", i);

        printf("Enter principal (p): ");
        scanf("%f", &p);

        printf("Enter rate (r): ");
        scanf("%f", &r);

        printf("Enter number of years (n): ");
        scanf("%f", &n);

        printf("Enter compounding period (q): ");
        scanf("%f", &q);

        a = p * pow((1 + r / q), (n * q));

        printf("Amount = %.2f\n", a);
    }

    return 0;
}