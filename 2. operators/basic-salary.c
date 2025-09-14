#include <stdio.h>
int main(){

    float bp, da, hra, grpay ;

    printf("Enter basic salary: \n");
    scanf("%d", &bp);

    da = 0.4* bp ;
    hra = 0.2* bp ;
    grpay = hra + da + bp ;
    
    printf("Basic salary: ", &bp);
    printf("Dearness allowance: ", &da);
    printf("House rent allowance: ", &hra);
    printf("Gross pay salary is: ", &grpay);

    return 0 ;


}