#include <stdio.h>
#include <math.h>
int main()
{   
    printf("Hello, World!\n\n");
    
    int number, abs_value ; 
    
    printf("Enter a number : \n");
    scanf("%d", &number);
    
    abs_value = abs(number) ;
    
    printf("Absolute value of number is : %d\n\n", abs_value );
    
    int length = 5 ;
    int breadth = 1 ;
    int area, peri ;
    
    area = length * breadth ;
    peri = 2* (length + breadth) ;
    
    if (area > peri){
      printf("Area is greater than perimeter\n");
    }
    
    else {
      printf("Perimeter is greater than area\n");
    }
    
    return 0;
    
}