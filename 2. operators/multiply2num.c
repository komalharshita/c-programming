#include <stdio.h>
int main()
{
	double a,b, product ;
	
	printf("Enter three numbers:");
	scanf ("%lf %lf", &a, &b);
	
	product = a*b;
	printf("Product will be = %.2lf", product);
	
	return 0;
}