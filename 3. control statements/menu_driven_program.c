#include <stdio.h>
#include <stdlib.h>

int main() {

    int choice, num, i, fact ;

    while(1){

        printf("\n1. Factorial\n2. Prime \n3. Odd/Even \n4.Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);

            for ( int i = 1 ; i<= num ; i++){
                fact = fact * i ;
            }
            printf("Factorial of the number is:%d \n", fact);
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);

            for ( int i = 2; i<num ; i++){
                if ( num % i == 0){
                    printf("Not a prime number.\n");
                    break ;
                }
                if (i == num){
                    printf("Prime number\n");
                }
            }
            break ;

        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);

            if ( num % 2 == 0){
                printf("Even number\n");
            }
            else{
                printf("Odd number\n");
            }
            break ;

        case 4:
            exit(0) ;
        
        default:
            printf("Wrong choice!\n");
            break;
        }
    }


    return 0 ;
}