#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter an integer:\n\n");
	scanf("%d", &num);
	
	if (num % 2 == 0)
	{
		printf("\nThe number is even\n", num);
	}
	
	else {
		printf("\nThe number is odd\n", num);
	}
	
return 0;
}
