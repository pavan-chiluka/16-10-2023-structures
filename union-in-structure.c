#include<stdio.h>
struct student
{
        int rollno;
        union student2
        {
                float marks;
        }v2;
};
int main()
{
        struct student v1;
        printf("enter marks");
        scanf("%f",&(v1.v2.marks));
	 printf("%f",(v1.v2.marks));

        printf("enter rollno");
        scanf("%d",&(v1.rollno));
        printf("%d",(v1.rollno));
}

