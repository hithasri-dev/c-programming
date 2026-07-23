//Distance between two places on Earth
#include<stdio.h>
#include<math.h>
int main()
{
    float lat1,lat2,long1,long2,distance;
    printf("enter latitude and longitude of two places:");
    scanf("%f %f %f %f",&lat1,&long1,&lat2,&long2);
    distance=6371*acos(sin(lat1)*sin(lat2)+cos(lat1)*cos(lat2)*cos(long2-long1));
    printf("distance between two places:%.2f km",distance);
    return 0;
}