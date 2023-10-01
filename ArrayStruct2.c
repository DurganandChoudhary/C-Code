#include<stdio.h>
#include<string.h>

struct Student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct Student s1 = {4596,9.2,"Rahul"};
    printf("Student.roll = %d\n",s1.roll);

    struct Student *ptr = &s1;
    printf("Student roll = %d\n",(*ptr).roll);
    printf("Student->roll = %d\n",ptr->roll);

    return 0;
}