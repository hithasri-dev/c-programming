//Overtime Pay of 10 Employee
#include<stdio.h>
int main()
{
    int i=1,hour;
    int otpay;

    while(i<=10)
    {
        printf("enter no. of hours worked:");
        scanf("%d",&hour);

        if(hour>=40)
        otpay=(hour-40)*120;
        else
        otpay=0;
    i++;

    printf("hours:%d\n overtime pay:%d\n",hour,otpay);
    
    }
return 0;
}
