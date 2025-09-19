#include <stdio.h>
#include <stdlib.h>

int main(){

    int goals ;

    printf("Enter the number of goals scored against India: ");
    scanf("%d", &goals);

    if ( goals <= 5){
        goto sos ;
    }
    
    else {
        printf("About time soccer players learnt C\n");
        printf("and said goodbye to soccer\n");
        exit (1) ;
    }

    sos: printf("To err is human!\n");


    int i, j, k ;

    for ( i =1 ; i<=3 ; i++){
        for ( j=1 ; j<=3 ; j++){
            for ( k=1 ; k <=3 ; j++){
                if ( i == 3 && j == 3 && k == 3){
                    goto out ;
                }
                else{
                    printf("%d %d %d\n", i, j ,k);
                }
            }
        }
    }

    out : printf("Out of the loops at last!\n");
    
    return 0 ;
}