//area and perimeter of rectangle,area and circumference of circle
#include<stdio.h>
int main()
{
    int length,breadth;
    float radius;
int rectangle_area,rectangle_perimeter;
float circle_area,circle_circumference;
    printf("enter length,breadth and radius:");
    scanf("%d %d %f",&length,&breadth,&radius);
rectangle_area=length*breadth;
rectangle_perimeter=2*(length+breadth);
circle_area=3.14*radius*radius;
circle_circumference=2*3.14*radius;
printf("rectangle area:%d\n",rectangle_area);
printf("rectangle perimeter:%d\n",rectangle_perimeter);
printf("circle area:%.2f\n",circle_area);
printf("circle circumference:%.2f\n",circle_circumference);
return 0;
}