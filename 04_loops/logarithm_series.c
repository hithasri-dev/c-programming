#include<stdio.h>
#include<math.h>
int main()
{
    float x,sum=0,z;
    int i;
    printf("enter x:");
    scanf("%f",&x);
    z=x-1/x;
    for(i=1;i<=7;i++)
    {
    sum=sum+pow(z,i)/i;
    }
    printf("sum of the first seven terms:%.2f",sum);
    return 0;
}