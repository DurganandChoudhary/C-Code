#include<stdio.h>

int main()
{
    int i,n,sum=0;
    float avg;
    printf("Input 10 numbers : \n");
    for(i=1;i<=10;i++)
    {
        printf("Number - %d :",i);
        scanf("%d",&n);
        sum = sum+n;
    }
    avg=sum/10.0;
    printf("The sum of 10 number is : %d\nThe average is :%f\n",sum,avg);
}