
//Accept 10 number user and do sum of it.(do not use array)

#include<stdio.h>
 
int main()
{
	int sum=0,num,i;
	printf("Enter 10 numbers : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num);
		sum+=num;
	}
	printf("Sum = %d",sum);
	return 0;
}