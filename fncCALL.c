#include<stdio.h>

void square(int n);
void _square(int* n);

int main()
{
    int num = 4;
    square(num);
    printf("Number = %d\n",num);

    _square(&num);
    printf("number = %d\n",num);

    return 0;
}
// call by value
void square(int n)
{
    n=n*n;
    printf("Square = %d\n",n);
}
void _square(int* n)
{
*n = (*n) * (*n);  //4*4
printf("Square = %d\n",*n);
}