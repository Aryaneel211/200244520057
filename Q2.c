/*Accept a marks from user and print it’s grade
a.	Mks>=75  grade A
b.	Mks>=55 grade B
c.	Mks>=35 grade c
d.	Else fail*/


#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks");
	scanf("%d",&marks);
	if(marks<0||marks>100)
		printf("Invalid Entry");
	else if (marks<35 && marks>0)
		printf("Fail");
	else if (marks>=35 && marks<55)
		printf("Grade C");
	else if (marks>=55 && marks<75)
		printf("Grade B");
	else if (marks>=75 && marks<=100)
		printf("Grade A");
	return 0;
}