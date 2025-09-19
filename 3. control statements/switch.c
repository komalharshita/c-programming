#include<stdio.h>

int main()

{
    int var = 1 ;

    switch (var)
    {
    case 1 : printf("statement1") ;
                  break ;
    case 2 : printf("statement2") ;
                  break ;
    case 3 : printf("statement3") ;
                  break ;
    case 4 : printf("statement4") ;
                  break ;
    case 5 : printf("statement5") ;
                  break ;
    case 6 : printf("statement6") ;
                  break ; 
    default : printf("default") ;
    }     
    
    int num ;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("I am in case 1\n");
        break;
    case 2:
        printf("I am in case 2\n");
        break ;
    case 3:
        printf("I am in case 2\n");
        break ;

    default:
        printf("I am in default!!");
        break ;
    }

    return 0;
}