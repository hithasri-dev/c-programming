//to Print the multiplication table of a number entered by the user.
#include<stdio.h>
int main()
{
    int i,num;
    printf("enter a num:");
    scanf("%d",&num);

    for(i=1;i<=10;i=i+1)
{
        printf("%d\t *\t %d :%d\n",num,i,num*i);
}
    return 0;
}