#include<stdio.h>
// SALTING

void salting(char password[]);

int main()
{   
    char password[100];
    scanf("%s",&password);
    salting(password);


    return 0;
}

void salting(char password[])
{
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass,password);  // newpass = "test"
    strcat(newPass , salt);    //newPass = "test"+"123"
    puts(newPass);
}