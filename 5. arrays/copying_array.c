#include<stdio.h>

int main()
{
    int source[] = { 10, 20, 30, 40 ,50};
    int target[5];
    int size = sizeof (source)/ sizeof (source [0]);

    for (int i = 0; i < size; i++){
        target [i] = source [i];
    }

    printf("Elements in the target array:");

    for (int i = 0; i <size ; i++){
        printf("%d", target[i]);
    }

    return 0;
}