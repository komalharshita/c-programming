#include<stdio.h>

int main ()

{
    int n, sum = 0 , i = 1 ;

    printf("Enter the value of n\n");
    scanf("%d", &n);

    while (n >= i)
    {
      sum += i ;
      i++ ;
    }   

    printf("The sum of first %d natural numbers is %d", n,sum);

return 0;
}