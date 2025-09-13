#include<stdio.h>

int main()
{
    int num, i ;
    unsigned long long factorial = 1;

    printf("Enter a positive integer:\n\n ");
    scanf("%d", &num);

    if (num<0){
        printf("Factorial of negative number doesnt exist\n");
    }

    else {
        for (i=1; i<=num ; i++){
            factorial *= i ;
        }
    }

    printf("Factorial of the given number is: %llu \n", factorial);

    return 0;
}