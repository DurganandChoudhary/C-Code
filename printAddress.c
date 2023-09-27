#include<stdio.h>
void printAddress(int *n);
int main()
{
    int n=4;
    printf("%p\n",&n);
    printAddress(&n);
    printf("address of n is : %u\n",&n);

    return 0;
}
void printAddress(int *n)
{
    printf("addreess of n is : %u\n",n);
}