#include<stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter input : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       printf("%d  ",i);
        sum=sum+i;
    }
    printf("\nThe sum of first %d natural number is %d\n",n,sum);
    
    for(i=n;i>=1;i--)
    {
        printf("%d ",i);
    }

    return 0;
}