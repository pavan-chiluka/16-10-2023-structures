#include<stdio.h>
typedef struct student
{
	int data;
	char s1[50];
	float marks;
}var;
int main()
{
	var v1;
	printf("%ld",sizeof(v1));
	scanf("%d %s %f",&(v1.data),(v1.s1),&(v1.marks));
	printf("%d %s %.2f",(v1.data),(v1.s1),(v1.marks));

}

