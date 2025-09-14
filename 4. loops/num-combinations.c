#include <stdio.h>

int main(){
    
    int a, b, c ;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("All possible combinations of %d ,%d, %d are : \n", a, b, c);

    for (int i = a; i <= c; i++) {
        for (int j = a; j <= c; j++) {
            for (int k = a; k <= c; k++) {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }


    return 0 ;
}