#include<stdio.h>

void printHello();
void printGoodBye();

int main()
{
    printHello();
    printGoodBye();
    printHello();

    return 0;
}

void printHello()
{
    printf("Hello \n");

}

void printGoodBye()
{
    printf("Good Bye\n");
}