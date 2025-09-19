#include<stdio.h>

int main () {

    int amount, hun, fifty, tens,fives,twos,ones ,total;

    printf("Enter the amount: \n");
    scanf("%d", &amount);

    hun = amount / 100 ;
    amount %= 100 ;
    fifty = amount / 50 ;
    amount %= 50 ;
    tens = amount / 10 ;
    amount %= 10 ;
    fives = amount / 5 ;
    amount %= 5 ;
    twos = amount / 2 ;
    amount %= 2 ;
    ones = amount / 1 ;
    amount %= 1 ;

    total = hun + fifty + tens + fives + twos + ones ;

    printf("Smallest number of notes: %d", total);


    return 0 ;
}