#include<stdio.h>
int sum(int n);
int main()
{
    printf("Sum = %d", sum(7));

    return 0;
}

int sum(int n)
{
    if(n == 1)
    {
        return 1;
    }

    int sumNm_1=sum(n-1);
    int sumN = sumNm_1 +n;
    return;
}