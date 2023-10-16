
#include<stdio.h>
struct student
{
	int rollno;
	char s1[50];
	float marks;
};
int display(int rollno,char s1[],float marks)
{
	printf("%d %s %f",rollno,s1,marks);
}
int main()
{
	struct student v1={1,"pavan",7.0};
	display(v1.rollno,v1.s1,v1.marks);
}




