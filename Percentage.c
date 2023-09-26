#include<stdio.h>
int calcPercentage(int science,int math,int sanskrit);
int main()
{
    int science=95;
    int math=99;
    int sanskrit = 100;

    printf("Percentage = %d ",science,math,sanskrit);

    return 0;
}

int calcPercentage(int science , int math,int sanskrit)
{
    return((science+math+sanskrit)/3);
}