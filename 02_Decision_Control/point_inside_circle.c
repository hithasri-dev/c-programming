//Check whether a point is inside, on or outside the circle
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r;
    int distance,px,py,distace;

    printf("enter x,y and radius:");
    scanf("%d %d %d",&x,&y,&r);
    printf("enter point of x and y:");
    scanf("%d %d",&px,&py);

    distance=sqrt(pow(px - x, 2) + pow(py - y, 2));

    if(distace<r)
    printf("point is inside circle");
else if(distance==r)
printf("point is on the circle");
else
printf("point is outside the circle");

return 0;
}