// Calculate profit or loss
#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("enter cost price and selling price:");
    scanf("%d %d",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0)
    printf("its a profit of Rs:%d\n",p);
    else if(l>0)
    printf("its a loss of Rs:%d\n",l);
    else if(p==l)
    printf("there is no loss and no profit");
return 0;
}