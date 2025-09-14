#include<stdio.h>

int main ()

{
    int j , n ;

    printf("Enter a number : \n\n");
    scanf("%d", &n);

    for ( j = 1; j <= 10 ; j++ ) {
        printf("%d x %d = %d \n", n, j, n*j);
    }

    return 0;
}