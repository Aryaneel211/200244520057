//Swap 2 variable without using 3rd variable 

#include<stdio.h>
int main()
{
	int a,b;
	a=5;
	b=6;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d\t%d\n",a,b);
	return 0;
}