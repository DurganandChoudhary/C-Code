#include<stdio.h>

int main()
{
    int i,sum=0;
    printf("The first 10 natural number is : \n");
    for(i=1;i<=10;i++)
    {
        sum += i;
        printf("%d\n",i);
    }
    printf("\nSum = %d",sum);
    return 0;   
}