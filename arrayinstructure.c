#include<stdio.h>
struct student
{
	int rollno;
	char s1[50];
	float marks;

};
int main()
{
	int i,n;
	scanf("%d",&n);
	struct student v1[n];
	for(i=0;i<n;i++)
	{
        scanf("%d %s %f",&(v1[i].rollno),(v1[i].s1),&(v1[i].marks));
	}
	for(i=0;i<n;i++)
        {
        printf("%d %s %f",(v1[i].rollno),(v1[i].s1),(v1[i].marks));
        }
}





