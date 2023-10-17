#include<stdio.h>
struct student
{
	int rollno;
	char str[30];
	struct student1
	{
		float marks;
	}v2;

};
int main()
{
	struct student v1;
	printf("%ld",sizeof(v1));
	printf("enter marks:");
	scanf("%f",&(v1.v2.marks));
	printf("enter rollno and name:");
	scanf("%d %s",&(v1.rollno),(v1.str));
	printf("%d %s %f",(v1.rollno),(v1.str),(v1.v2.marks));
}

