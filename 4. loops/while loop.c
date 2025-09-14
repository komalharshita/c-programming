#include<stdio.h>

int main ()
{
    int i = 0;

    printf("Numbers from 0 to 10\n");

    while (i <= 10) {
        printf("%d", i);
        i++ ;
    }
    
    i = 10 ;

    printf("Numbers from 10 to 0\n");

    while (i >= 0){
        printf("%d", i);
        i-- ;
    }

    int u = 5 ;
    while ( u>=1){
        printf("Make the computer literate!\n");
        i = i+1 ;
    }

    float a = 10.0 ;
    
    while ( a<= 10.5){
        printf("Raindrops on roses...");
        printf("...and whiskers on kittens\n");
        a = a + 0.1 ;
    }

    return 0;
}