/* Calculate factorial value of an integer using a function */ 
#include<stdio.h>
int fac(int);
int main()
{
    int num,factorial;
    printf("enter a num:");
    scanf("%d",&num);
    factorial=fac(num);
    printf("factorial value of %d is %d\n",num,factorial);
    return 0;
}
int fac(int num)
{
    int i,factorial=1;
    for(i=1;i<=num;i++)
    factorial=factorial*i;
return(factorial);
}