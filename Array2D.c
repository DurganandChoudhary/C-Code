#include<stdio.h>

int main()
{
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 88;
    marks[0][2] = 99;
    
    marks[1][0] = 90;
    marks[1][1] = 88;
    marks[1][2] = 99;

    printf("%d ",marks[0][1]);

    return 0;
}