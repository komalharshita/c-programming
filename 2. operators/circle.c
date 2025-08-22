#include <stdio.h>
int main()
{
	int radius,area ;
	
	printf("\n\tEnter value of radius: ");
	scanf("%d", &radius);
	
	area= 3.14159*radius*radius ;
	
	printf("\n\tThe area of circle is: %d", area);
	
	return 0;
}