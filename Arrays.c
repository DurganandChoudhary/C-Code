#include<stdio.h>

int main()
{
 
    int marks[3];
    printf("Physics : ");
    scanf("%d",&marks[0]);
    printf("Chemistry : ");
    scanf("%d",&marks[1]);
    printf("Maths : ");
    scanf("%d ",&marks[2]);
    printf("physics = %d, chemistry = %d , maths = %d",marks[0],marks[1],marks[2]);
    return 0;
}