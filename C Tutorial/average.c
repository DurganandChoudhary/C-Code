#include<stdio.h>

int main()
{
    float x,y,z;
    printf("Enter x :");
    scanf("%f",&x);

    printf("Enter y :");
    scanf("%f",&y);

    printf("Enter z :");
    scanf("%f",&z);

    float avg = (x+y+z)/3;
    printf("Average = %f",avg);
    return 0;
}