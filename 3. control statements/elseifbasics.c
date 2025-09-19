#include <stdio.h>
int main()
{
    int o = 4 , p = 12;
    
    if (o = 5 || p>50) {
      printf("Dean of students affairs\n");
    }
    else {
      printf("Dosa\n");
    }
    
    int i = 4, j = -1, k = 0, w, x, y, z ;
    
    w = i || j || k ;
    x = i && j && k ;
    y = i || j && k ;
    z = i && j || k ;
    
    printf("w = %d x = %d y = %d z = %d\n", w,x,y,z) ;
    
    int r = 20, e = 40 , a = 45 ;
    
    if (r>e && r>a){
      printf("biggest = %d\n\n", r);
    }
    else if (e>r && e>a){
      printf("biggest = %d\n\n", e);
    }
    else {
      printf("biggest = %d\n\n", a);
    }
    
    int ii = -4, jj, num ;
    
    jj = (num < 0 ? 0: num*num);
    printf("%d\n", jj);
    
    
    int f, n = 30 ;
    
    f = (n > 5 ? (n <=10 ? 100:200): 500);
    printf("%d\n", n);

    int n;
	
	  printf("Enter an integer:\n\n");
	  scanf("%d", &n);
	
	  if (n % 2 ==0 && n % 3 ==0 ){
		  printf("The number is divisible by both 2 and 3");
	  }
	
	  else {
		printf("The number is not divisible by both 2 and 3");
	  }
    
    return 0;
  
}