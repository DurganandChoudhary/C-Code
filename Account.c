#include<stdio.h>

typedef struct BankAccount
{
    int accountNo;
    char name[100];
}acc;

int main()
{
    acc acc1 = {123,"Rahul"};
    acc acc2 = {124,"Aman"};
    acc acc3 = {125,"Suraj"};

    printf("acc no = %d\n",acc1.accountNo);
    printf("name = %s\n",acc1.name);

    return 0;
}