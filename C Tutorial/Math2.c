#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a,float b);

int main()
{
    float side=4;
    float rad=6;
    float a=5;
    float b=10;
    printf("\nArea of square = %f",squareArea(side));
    printf("\nArea of Circle = %f",circleArea(rad));
    printf("\nArea of Rectangle = %f",rectangleArea(a,b));

    return 0;
}

float squareArea(float side)
{
    return side*side;
}
float circleArea(float rad)
{
    return 3.14*rad*rad;
}
float rectangleArea(float a,float b)
{
    return a*b;
}