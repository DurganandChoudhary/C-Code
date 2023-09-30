#include<stdio.h>

int main()
{
    char firstStr[100] = "Hello ";
    char secString[] = "World";

    strcat(firstStr , secString);
    puts(firstStr);

    return 0;
}