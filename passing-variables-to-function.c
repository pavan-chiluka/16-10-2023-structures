#include<stdio.h>
struct student
{
	int rollno;
	char s1[50];
	float marks;
};
int display(struct student v1,struct student v2)
{
	printf("%d %s %f",v1.rollno,v1.s1,v1.marks);
	printf("%d %s %f",v2.rollno,v2.s1,v2.marks);
}
int main()
{
	struct student v1={1,"pavan",9.0};
        struct student v2={2,"porsche",8.9};
	display(v1,v2);
}


