#include<stdio.h>
#define N 5

int main()
{
    int arr[N];
    int i , sum=0 ;
    
    for (i=0 ; i<N; ++i){
        printf("Enter Elements %d\n", i);
        scanf("%d", &arr[i]);
    }

    for (i=0; i<N; ++i){
        sum += arr[i];
        
    }

    printf("Sum of array elements is: %d\n", sum);

    return 0;
}