//Accept a number from user check if it is odd or even number. Use & operator.

#include<stdio.h>
int main()
{
	int a,r;
	printf("Enter a no");
	scanf("%d",&a);
	r=a&1;
	if(r==0)
		printf("No. is even");
	else
		printf("No is Odd");
	return 0;
}