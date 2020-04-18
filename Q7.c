/*Problem: Given the length of four sides determine whether they can be used to create a polygon and determine if that polygon is a square. A polygon can be created if no single side is greater than the sum of the other three sides. Display a ONE when the status (polygon or square) is confirmed and ZERO when the status cannot be confirmed.

Example Execution #1:
Enter the length of the four sides: 4 3 2 9
Length of sides: 4, 3, 2, 9
Polygon status: 1
Square status: 0

Example Execution #2:
Enter the length of the four sides: 5 5 5 5
Length of sides: 5, 5, 5, 5
Polygon status: 1
Square status: 1

Example Execution #3:
Enter the length of the four sides: 84 25 20 15
Length of sides: 84, 25, 20, 15*/

#include <stdio.h>
 
int main()
{
	int a,b,c,d;
	printf("Enter 4 sides of length");
	scanf("%d\t %d\t %d\t %d",&a,&b,&c,&d);

if((a<=(b+c+d)) && (b<=(a+c+d)) && (c<=(a+b+d)) && (d<=(a+b+c)))
{
	printf("Poligon status:1");
}
else
{
	printf("Poligon status:0");
}

if(a==b && b==c &&c==d)
{
	printf("Square status:1");
}
else
{
	printf("Square status:0");
}
return 0;
}