#include <stdio.h>
int main()
{
    int a , b, c ;
    
    printf("Enter the three sides of the triangle : \n\n");
    scanf("%d %d %d", &a,&b,&c);
    
    if (a == b && b == c){
      printf("The triangle is equilateral\n");
    }
    
    if (a == b || b == c || c == a){
      printf("The triangle is isosceles\n");
    }
    
    if ( a != b && b != c && c != a){
      printf("The triangle is scalene\n");
    }
}