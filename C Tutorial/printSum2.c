#include<stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter Input : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("Sum = %d\n",sum);

    for(i=n;i>=1;i--)
    {
        printf("%d ",i);
    }

    return 0;
}