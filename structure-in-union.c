#include<stdio.h>
union student1
{
   float marks;
   struct student
   {
	   int rollno;
   }v1;
};
int main()
{
	union student1 u1;
	printf("enter rollno");
	scanf("%d",&(u1.v1.rollno));
	printf("%d",(u1.v1.rollno));
	printf("enter marks");
	scanf("%f",&(u1.marks));
	printf("%f",(u1.marks));
	printf("%ld",sizeof(u1));


}


