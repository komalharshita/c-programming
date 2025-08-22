#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter a year:\n\n");
	scanf("%d", &num);
	
	if (num % 4 == 0 )
	{
		printf("Leap year");
	}
	
	else {
		printf("Not a leap year");
	}
	
return 0;
}
