#include <stdio.h>
int main()
{
	int a,b,c,average ;
	
	printf("\n\tEnter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	
	average = (a+b+c)/2 ;
	
	printf("\n\nAverage is: %d\n" , average);
	
	return 0;
}


