//Steel Grade Program
#include<stdio.h>
int main()
{
    int hardness,tensile;
    float carbon;

    printf("enter hardness(<50) and tensile stregth(>0.7) and carbon content(5600):");
    scanf("%d %d %f",&hardness,&tensile,&carbon);
  if (hardness > 50 && carbon < 0.7 && tensile > 5600)
        printf("Grade = 10");
    else if (hardness > 50 && carbon < 0.7)
        printf("Grade = 9");
    else if (carbon < 0.7 && tensile > 5600)
        printf("Grade = 8");
    else if (hardness > 50 && tensile > 5600)
        printf("Grade = 7");
    else if (hardness > 50 || carbon < 0.7 || tensile > 5600)
        printf("Grade = 6");
    else
        printf("Grade = 5");

    return 0;
}

