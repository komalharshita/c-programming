#include<stdio.h>

int main()
{
    int number ;
    long long factorial = 1;

    printf("Input an integer: ");
    scanf("%d", &number);

    if ( number < 0 ) {
        printf("Enter a postitive integer");
        return 1;
    }
    
    while (number > 0) {
        factorial *= number ;
        number -- ;
    }

    printf("Factorial of given number is : %lf", factorial);
    
    return 0;
}