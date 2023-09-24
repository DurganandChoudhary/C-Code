#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("%d\n",x>9&&x<100);
    printf("%d",x%2==0);
    return 0;
}