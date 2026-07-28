/* Check whether a number is even or odd */ 
#include<stdio.h>
int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);
    if(num%2==0)
    printf("the number is even");
else
printf("the number is odd");
return 0;
}