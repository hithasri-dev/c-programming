//Factorial of a Number
#include<stdio.h>
int main()
{
    int fact,i,num;
    printf("enter number:");
    scanf("%d",&num);

    i=fact=1;
    while(i<=num)
    {
        fact=fact* i;
        i++;
    }
    printf("factorial number:%d\n",fact);
}