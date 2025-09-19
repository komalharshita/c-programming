#include <stdio.h>
int main()
{   
  
  int ram, shyam, ajay ;
  
  printf("Enter the ages of ram,shyam and ajay : \n");
  scanf("%d %d %d", &ram, &shyam, &ajay);
  
  if ( ram > shyam && ram > ajay)
    {
      printf("Ram is oldest of three");
    }
  if ( shyam > ram && shyam > ajay)
    {
      printf("Shyam is oldest of three");
    }
  if ( ajay > shyam && ajay > ram)
    {
      printf("Ajay is oldest of three");
    }
    
  return 0 ;
}