#include <stdio.h>
int main()
{   
  int a1, a2, a3, sum ;
  
  printf("Enter the values of three angles in degrees: \n");
  scanf("%d %d %d", &a1, &a2, &a3);
  
  sum = a1 + a2+ a3 ;
  
  if ( sum == 180 ){
    printf("Valid triangle!");
  }
  
  else {
    printf("Invalid triangle!");
  }
    
    
  return 0 ;
}