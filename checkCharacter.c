#include<stdio.h>

void checkChar(char str[] , char ch);

int main()
{
    char str[] = "Rahul";
    char ch = 'a';
    checkChar(str , ch);

    return 0;
}

void checkChar(char str[], char ch)
{
     for(int i=0;str[i] != '\0';i++)
    {
        if(str[i] == ch)
        {
            printf("character is present :");
            return;
        }
    }
    printf("Character is not present !");
}
