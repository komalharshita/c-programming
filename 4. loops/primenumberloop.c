#include<stdio.h>

int main() {
  int n, isPrime = 1 ;

  printf("Enter a number:");
  scanf("%d", &n);

  if (n<= 1) {
    printf("%d is not a prime number", n);
   }

  for (int i=2 ; i<= n / 2 ; i++){
    if (n % i == 0) {
      isPrime == 0 ;
    };

   }

  return 0;

 }