#include <stdio.h>

int main()
{
    int number = 1;
    int product = 1;

    while (number <= 5) {
        product *= number ;
        number++ ;

    printf("The product will be: %d \n", product);
    }
    
    return 0;
}