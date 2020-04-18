/*Accept a number from user - if it is divisible by 3 print “three” ,
	if it is divisible by 7 print “seven” and if it is divisible by both(3,7) print “three -seven”.*/

#include<stdio.h>
int main()
{
	int no;
	printf("Enter no");
	scanf("%d",&no);
	if(no%3==0 && no%7==0)
		printf("Three-Seven");
	else if (no%3==0)
		printf("Three");
	else if (no%7==0)
		printf("Seven");
	return 0;
}