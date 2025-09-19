#include <stdio.h>

int main(){

    char ch ;

    printf("Enter any of the alphabets( a, b, c, d)");
    scanf("%d", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
        printf("a as in apple\n");
        break;

    case 'b':
    case 'B':
        printf("b as in brain\n");
        break ;
    
    case 'c':
    case 'C':
        printf("c as in cookie\n");
        break ;

    case 'd':
    case 'D':
        printf("d as in dosa\n");
        break ;
    
    default:
        printf("Wish you knew what are alphabets\n");
        break;
    }



    return 0 ;
}