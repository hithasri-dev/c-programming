// Compute value of one number raised to another
#include<stdio.h>
int main()
{
    int i,power,x,y;
    printf("enter values of y and x:");
    scanf("%d %d",&y,&x);
    power=i=1;

    while(i<=y)
    {
    power=power*x;
    i++;
    }
    printf("%d is raised to the power of %d = %d\n",x,y,power);
    return 0;
}