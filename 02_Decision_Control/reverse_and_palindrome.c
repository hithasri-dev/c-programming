//Reverse a five-digit number and check whether both are equal
#include<stdio.h>
int main()
{
    int reverse,orginal;
    int d1,d2,d3,d4,d5,num,digit;
    printf("enter five digit nymber:");
    scanf("%d",&num);
    orginal=num;

    d1=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d4=num%10;
    num=num/10;
    d5=num%10;
    reverse= d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;
    printf("reverse number:%d\n",reverse);
    
    if(orginal==reverse)
    printf("both are equal");
    else
    printf("both are not equal");

return 0;

}
   