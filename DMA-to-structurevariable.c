#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int rollno;
	char s1[50];
	float marks;
};
int main()
{
struct student *v1;
int n,i;
scanf("%d",&n);
v1=(struct student*)malloc(n*sizeof(v1));
//scanf("%d %s %f",&((*v1).rollno)((*v1).s1),&((*v1).marks));
//here we use *v1 then no need to use -> we can use .p i
//but if we use v1 then must use -> because v1 is a pointertype.
//we can also write like this.
//scanf("%d %s %f",&(v1->rollno)(v1[i]->s1),&(v1[i].marks));
//printf("%d",(v1->rollno)(v1->s1),(v1->marks));
for(i=0;i<n;i++)
{
	scanf("%d %s %f",&(v1[i].rollno),(v1[i].s1),&(v1[i].marks));
	//here we cannot use -> this operator because we already took as array[](address)no need to use ->)
}
for(i=0;i<n;i++)
{
        printf("%d %s %f\n",(v1[i].rollno),(v1[i].s1),(v1[i].marks));
}
}




