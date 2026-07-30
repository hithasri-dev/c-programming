//Check whether three points are on one straight line
#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("enetr the points:");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);

    if((y2-y1)*(x3-x2)==(x2-x1)*(y3-y2))
    printf("three points are on one straight line");
else
printf("three points are not on straight line");

return 0;
}
