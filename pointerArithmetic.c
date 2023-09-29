#include<stdio.h>

int main()
{
    int age = 20;
    int _age=25;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %u \ndifference = %u\n",ptr,_ptr,ptr-_ptr);
    
    _ptr = &age;

    printf("comparision = %u\n",ptr == _ptr);

    return 0;
}