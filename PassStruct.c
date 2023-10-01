#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};
void printInfo(struct student s1);

int main()
{
    struct student s1 = {5478,9.2,"Aman"};
    //printf("Student.roll = %d\n",s1.roll);
    printInfo(s1);

    s1.roll = 1660; //change
    printf("student.roll = %d\n",s1.roll);



    return 0;
}

void printInfo(struct student s1)
{
    printf("Student Information\n");
    printf("Student.roll = %d\n",s1.roll);
    printf("student.name= %s\n",s1.name);
    printf("Student.cgpa = %f\n",s1.cgpa);

    
}