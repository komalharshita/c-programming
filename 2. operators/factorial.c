#include<stdio.h>

int main()

{
   int n, factorial = 1 ;

   printf("Enter a number\n");
   scanf("%d" , &n);

   for (int i = 1; n >= i ; i++ )
   {
     factorial *= i ;
   }
 
   printf("The factorial of %d is %d", n, factorial);
   
return 0 ;

}