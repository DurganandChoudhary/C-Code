#include <stdio.h>
#include <string.h>

typedef struct Address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
} add;

void printAdd(struct Address add);

int main()
{
    struct Address add[5];

    printf("Enter info for person 1 :\n ");
    scanf("%d", &add[0].houseNo);
    scanf("%d", &add[0].block);
    scanf("%s", &add[0].city);
    scanf("%s", &add[0].state);

    printf("Enter info for person 2 : \n");
    scanf("%d", &add[0].houseNo);
    scanf("%d", &add[0].block);
    scanf("%s", &add[0].city);
    scanf("%s", &add[0].state);

    printf("Enter info for person 3 : \n");
    scanf("%d", &add[0].houseNo);
    scanf("%d", &add[0].block);
    scanf("%s", &add[0].city);
    scanf("%s", &add[0].state);

    printf("Enter info for person 4 :\n");
    scanf("%d", &add[0].houseNo);
    scanf("%d", &add[0].block);
    scanf("%s", &add[0].city);
    scanf("%s", &add[0].state);

    printf("Enter info for person 5 : \n");
    scanf("%d", &add[0].houseNo);
    scanf("%d", &add[0].block);
    scanf("%s", &add[0].city);
    scanf("%s", &add[0].state);

    printAdd(add[0]);
    printAdd(add[1]);
    printAdd(add[2]);
    printAdd(add[3]);
    printAdd(add[4]);

    return 0;
}
void printAdd(struct Address add)
{
    printf("Address is : %d,%d,%d,%s,%s\n", add.houseNo, add.block, add.city, add.state);
}