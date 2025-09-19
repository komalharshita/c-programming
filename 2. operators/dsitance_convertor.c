#include<stdio.h>
int main() {

    float km, m, cm, ft, inch ;

    printf("Enter the distance in kilometres: ");
    scanf("%f", &km);
    
    m = km * 1000 ;
    cm - m* 100 ;
    inch = cm / 2.54 ;
    ft = inch / 12 ;

    printf("Distance in metres: ", &m);
    printf("Distance in centimetres: ", &cm);
    printf("Distance in inches: ", &inch);
    printf("Distance in feet: ", &ft);

    return 0 ;
}