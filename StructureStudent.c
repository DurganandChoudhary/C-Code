#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int age;
    int rollNo;
    int marks
};

void display(struct Student stu){
    printf("Name: %s\n", stu.name);
    printf("Age: %d\n", stu.age);
    printf("Roll: %d\n", stu.rollNo);
    printf("Marks: %d\n", stu.marks);
    printf("\n");
    }

int main(){
    struct Student stu,stu1;
    struct Student *ptr= &stu;
    struct Student *ptr1= &stu1;

    strcpy(ptr->name,("raj"));
    ptr->age = 19;
    ptr->rollNo=9;

    
    strcpy(ptr1->name,("lucky"));
    ptr1->age= 20;
    ptr1->rollNo=25;

    display(stu);
    display(stu1);
    return 0;
}