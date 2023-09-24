#include<stdio.h>

int main()
{
    int age;
    printf("Enter age : ");
    scanf("%d",&age);

    if(age>18)
    {
        printf("adult\n");
        printf("they can vot\n");
        printf("they can drive\n");
    }
    else
    {
        printf("Not adult\n");
        printf("they can't vote \n");
        printf("they can't drive\n");
    }
    printf("thank you\n");
    return 0;

}