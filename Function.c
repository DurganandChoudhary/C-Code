#include<stdio.h>
//declaration/prototype
void printHello();
int main()
{
    printHello();   //function call
    printHello();
    printHello();

    return 0;
}
//Function Definition
void printHello()
{
    printf("Hello World !!!\n");
    printf("My name is DN \n");
}