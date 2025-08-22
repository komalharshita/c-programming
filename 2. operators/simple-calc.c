#include <stdio.h>
int main()
{
	double num1,num2 ;
	
	printf("Enter two integers: ");
	scanf("%lf %lf", &num1, &num2);
	
	printf("Sum is : %lf\n", num1+num2);
	printf("Difference is : %lf\n", num1-num2);
	printf("Product is : %lf\n", num1*num2);
	printf("Division is : %lf\n", num1/num2);
	
	return 0;
}