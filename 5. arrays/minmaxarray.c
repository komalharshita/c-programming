#include<stdio.h>

int main()
{
    int arr [5] = { 7, 43, 90, 43, 11};
    int max = arr[0], min = arr[0] ;

    for (int i =1; i<5; i++)
     {
        if ( arr[i] > max){
            max = arr[i];
        }
        if ( arr[i] < min){
            min = arr[i];
        }
     }

    printf("Maximum element: %d\n", max);
    printf("Minimum element:%d\n", min);

    return 0;
}