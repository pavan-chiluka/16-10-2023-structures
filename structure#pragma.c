#include<stdio.h>
#pragma pack(1)
struct student 
{
	int data;
	char s1[50];
	float marks;
};
int main()
{
	struct student v1;
	printf("%ld",sizeof(v1));
}
