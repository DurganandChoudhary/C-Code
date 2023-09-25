#include<stdio.h>
//Factorial
int main()
{
    int n;
    int fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Final Factorial is %d\n",fact);

   
    return 0;
}