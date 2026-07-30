//Find the youngest among Ram, Shyam and Ajay
#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("enter age of ram,shyam and ajay:");
    scanf("%d %d %d",&ram,&shyam,&ajay);

    if(ram<shyam&&ram<ajay)
    printf("ram is the youngest");

    else if(shyam<ram&&shyam<ajay)
    printf("shyam is the youngest");
    
    else if(ajay<ram&&ajay<shyam)
    printf("ajay is the youngest");
return 0;
}