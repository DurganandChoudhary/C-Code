#include<stdio.h>

int main()
{
    int ivar = 1234;
    printf(":%*.*d:\n",13,7,ivar);
    printf(":%-*.*d:\n",13,7,ivar);
   

    return 0;
}