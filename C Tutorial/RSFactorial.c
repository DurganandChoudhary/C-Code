#include<stdio.h>
int fact(int n);

int main()
{
    printf("Factorial = %d ",fact(5));

    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    
    int fact_1=fact(n-1);
    int fact_2=fact_1 * n;
    return fact_2;
}