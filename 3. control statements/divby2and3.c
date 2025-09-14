#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter an integer:\n\n");
	scanf("%d", &num);
	
	if (num % 2 ==0 && num % 3 ==0 )
	{
		printf("The number is divisible by both 2 and 3");
	}
	
	else {
		printf("The number is not divisible by both 2 and 3");
	}
	
return 0;
}
