#include<stdio.h>

int main()

{
    char day ;

    printf("Enter a weekday: m/t/w/t/f/s/ss\n\n");
    scanf(" %c", &day);

    switch(day)
    {
    case 'm' : 
      printf("Monday");
      break ;
    case 't' : 
      printf("Tuesday");
      break ;
    case 'w' : 
      printf("Wednesday");
      break ;
    case 'th' : 
      printf("Thursday");
      break ;
    case 'f' : 
      printf("Friday");
      break ;
    case 'sa' : 
      printf("Saturday");
      break ;
    case 'su' : 
      printf("Sunday");
      break ;
    default : 
      printf("Enter the correct character");
    
    }
return 0;

}