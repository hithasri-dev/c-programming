//Find absolute value
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);

    if(num<0)
    num=-num;
printf("absolute value:%d",num);

return 0;
}