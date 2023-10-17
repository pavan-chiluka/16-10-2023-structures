#include<stdio.h>
#include<stdlib.h>
union student
{
	int rollno;
};
struct student1
{
	union student u1;

};
int main()
{
	struct student1 *v1;
	v1=(struct student1*)malloc(sizeof(v1));
        printf("enter rollno");
	scanf("%d",&(v1->u1.rollno));
	printf("%d",(v1->u1.rollno));
}
