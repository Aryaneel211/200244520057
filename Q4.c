//Accept a number from user check if it is odd or even number Use % operator.

#include<stdio.h>
int main()
{
	int no;
	printf("Enter no");
	scanf("%d",&no);
	if(no%2==0)
		printf("No. is even");
	else
		printf("No is Odd");
	return 0;
}