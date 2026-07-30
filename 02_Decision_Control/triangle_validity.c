//Check whether a triangle is valid
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three angles of a triangle:");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b+c==180)
    printf("traingle is valid");
else
printf("traingle is not valid");

return 0;
}