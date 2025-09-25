#include<stdio.h>

void message();

void italy();


int main(){

    message();
    printf("Cry, and you stop the monotony!\n");
    printf("I am in main\n");

    italy();

    return 0 ;
}

void message(){
    printf("Smile and the world smiles with you...");
}

void italy(){
    printf("I am in italy!!\n");
}