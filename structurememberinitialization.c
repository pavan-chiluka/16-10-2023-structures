#include<stdio.h>
struct student 
{
	int data;
	char s1[50];
	float marks;
};
int main()
{
	//we can also assign like this.
	struct student v1={1,"pavan",7.5};
	printf("%d %s %.2f",v1.data,v1.s1,v1.marks);
       struct student v2;
       printf("enter data ,name,marks");
       scanf("%d %s %f",&(v2.data),(v2.s1),&(v2.marks));    
       printf("%d %s %f",(v2.data),(v2.s1),(v2.marks));  
}  

