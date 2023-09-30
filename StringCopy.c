#include<stdio.h>

int main()
{
    char oldStr[] = "oldSr";
    char newStr[] = "newStr";

    strcpy(newStr,oldStr);
    puts(newStr);

    return 0;
}