#include<stdio.h>  
struct student  
{  
 	int regd;
 	float physics,math,chem;
 	float score;	
};
int main()
{
	struct student s[0];
	struct student *p=s;
	
	printf("Enter Regd_No , marks of physics,math, chem, and scor");
	scanf("%d %f %f %f %f",&s[1].regd , &s[1].physics,&s[1].math,&s[1].chem,&s[1].score);
	
}  
