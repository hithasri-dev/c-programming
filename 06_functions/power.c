/* Program to calculate power of a value */ 
#include<stdio.h>
float power(float,int);
int main()
{
    float x,pow;
    int y,i;
    printf("enter x and y:");
    scanf("%f %d",&x,&y);
    pow=power(x,y);
    printf("%f with the power of %d is %.2f\n",x,y,pow);
    return 0;

}
float power(float x,int y)
{
  float p=1;
    int i;
    for(i=1;i<=y;i++)
    p=p*x;
return(p);
}