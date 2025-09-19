#include <stdio.h>

int main () {

    float cp, sp, p, l ;
    printf("Enter cost price and selling price: \n");
    scanf("%f %f",&cp, &sp);

    p = sp - cp ;
    l = cp - sp ;

    if (p>0) {
        printf("The seller made a profit of Rs. %f\n", p);
    }
    if ( l > 0) {
        printf("The seller incurred a loss of Rs. %f\n", l);
    }
    if ( p == l){
        printf("There is no profit or loss. \n");
    }


}