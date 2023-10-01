#include<stdio.h>

//user define
struct Student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct Student s1;
    s1.roll = 45;
    s1.cgpa = 8.55;
    //s1.name = "Rahul";
    strcpy(s1.name, "Rahul");

    printf("Student name = %s\n",s1.name);
    printf("Student roll no. %d\n",s1.roll);
    printf("Student cgpa = %.2f\n",s1.cgpa);

    return 0;
}