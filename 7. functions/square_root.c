#include<stdio.h>
#include<math.h>

double squareroot (double num){

if (num < 0)
{
  printf("Square root of negative number does not exist");
  return -1 ;  
}

return sqrt(num);
}

int main()
{
    double number, result ;

    printf("Enter a number\n");
    scanf("%lf", &number);

    result = squareroot (number);

    if (result != 1) {
        printf("Sqaure root of %lf is %lf", number, result);
    }

    return 0;
}