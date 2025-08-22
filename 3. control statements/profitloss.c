#include <stdio.h>
int main()
{   
  
    float cp , sp, profit, loss ;
    
    printf("Enter cost price and selling price: \n\n");
    scanf("%f %f", &cp, &sp);
    
    profit = sp - cp;
    loss = cp - sp ;
    
    if (profit > 0) {
      printf("The seller made profit of Rs%f \n", profit);
    }
    
    if (loss > 0) {
      printf("The seller incurred loss of Rs%f \n", loss);
    }
    
    if (profit == 0 && loss == 0) {
      printf("The seller made neither proft or loss");
    }
    
  return 0 ;
}