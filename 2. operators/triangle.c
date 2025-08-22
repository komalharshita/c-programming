#include <stdio.h>
#include <math.h>

int main() {

    float a ,b, c, sp, area ;
    printf("Enter sides of a triangle:\n ");
    scanf("%f %f %f", &a, &b, &c);

    sp = (a + b + c) / 2 ;
    area = sqrt ( sp * (sp - a) * (sp - b) * (sp - c)) ;
    
    printf("\nArea of triangle: ", area);

    return 0 ;
}