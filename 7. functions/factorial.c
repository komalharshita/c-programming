#include<stdio.h>

int fact(int);

int main(){

    int num , factorial ;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial = fact(num);
    printf("Factorial of the number is: %d", factorial);

    return 0 ;
}

int fact( int num ){

    int i ;
    int factorial = 1;
    for ( i = 1; i<= num ; i++){
        factorial = factorial * i ;
    return(factorial);
    }
}