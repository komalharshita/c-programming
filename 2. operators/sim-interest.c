#include <stdio.h>
int main()
{
	float p,r,t,simple_interest ;  
	
	printf("\n\tEnter principle: ");
	scanf("%f", &p);
	
	printf("\n\tEnter rate: ");
	scanf("%f", &r);
	
	printf("\n\tEnter time: ");
	scanf("%f", &t);
	
	simple_interest= (p*r*t)/100 ;
	
	printf("\n\tSimple interest will be: %f", simple_interest);
	
	return 0;
	
}