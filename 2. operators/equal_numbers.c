#include<stdio.h>

int main()
{
	int num1, num2;
	
	printf("Enter two numbers:\n\n");
	scanf("%d %d", &num1, &num2);
	
	if (num1>num2)
	{
		printf("\nnum1 is larger\n");
	}
	
	else if (num1<num2)
	{
		printf("\nnum2 is larger\n");
	}
	
	else {
		printf("\nBoth the numbers are equal\n");
	}
	
return 0;
}
