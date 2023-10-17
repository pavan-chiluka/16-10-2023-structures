#include<stdio.h>
struct student
{
	int rollno;
};
union student2
{
	struct student v1;
};
int main()
{
union student2 u1;
printf("enter rollno");
scanf("%d",&(u1.v1.rollno));
printf("%d",(u1.v1.rollno));
}
