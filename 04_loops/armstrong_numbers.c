// program to print out all Armstrong numbers between 1 and 500
#include<stdio.h>
int main()
{
    int num,temp,digit,sum;
    
    num=1;
while(num<=500)
    {
    temp=num;
    sum=0;

  while(temp!=0)
  {
    digit=temp%10;
    sum=sum+digit*digit*digit;
    temp=temp/10;
  }
 if(sum==num)
   printf("%d\n",num);

   num++;
    }
return 0;

}