//Check whether area is greater than perimeter
#include<stdio.h>
int main()
{
    int breath,length,perimeter,area;
    printf("enter length and breath:");
    scanf("%d %d",&length,&breath);

    area=length*breath;
    perimeter=2*(length+breath);

    if(area>perimeter)
    printf("area is greater than perimeter");
else
printf("perimeter is greater than area");

return 0;
}