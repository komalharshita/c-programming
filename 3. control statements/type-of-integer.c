#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter an integer:\n\n");
	scanf("%d", &num);
	
	if (num>0)
	{
		printf("\nThe number is positive\n", num);
	}
	
	else if (num<0)
	{
		printf("\nThe number is negative\n", num);
	}
	
	else {
		printf("\nThe number is zero\n", num);
	}
	
return 0;
}
