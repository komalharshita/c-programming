#include <stdio.h>
int main()
{
    float height, weight ; 
    float bmi ;
    
    printf("Enter your height(in m) and weight(in kg) : \n\n");
    scanf("%f %f", &height, &weight);
    
    bmi = weight /(height * height) ;
    
    printf(" Your bmi is %f\n\n", bmi);
    
    if ( bmi < 15){
      printf("Starvation");
    }
    else if ( bmi > 15.1 && bmi < 17.5){
      printf("Anorexic");
    }
    else if ( bmi > 17.6  && bmi < 18.5){
      printf("Underweight");
    }
    else if ( bmi > 18.6 && bmi < 24.9){
      printf("Ideal");
    }
    else if ( bmi > 25 && bmi < 29.9){
      printf("Overweight"); }
      
    else if ( bmi > 30 && bmi < 30.9){
      printf("Obese");
    }
    else {
      printf("Morbidly obese");
    }
    
    return 0;
}