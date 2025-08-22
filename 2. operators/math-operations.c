#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()

{
	int a,b,c ;
	clrscr();
	
	printf("\n\n\tEnter 1st number to add:");
	scanf("%d", &a);
	
	printf("/n/tEnter 2nd number to add:");
	scanf("%d", &b);
	
	c=a+b;
	
	printf("\n\t The result of addition: %d",c);
	
	return 0;
}
