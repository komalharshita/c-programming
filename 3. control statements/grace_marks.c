#include <stdio.h>

int main(){

    int class, subjects ;

    printf("Enter your class(1, 2, 3): ");
    scanf("%d", &class);

    printf("Enter the number of subjects you failed: ");
    scanf("%d", &subjects);

    if ( class == 1 && subjects > 3 ){
        printf("You will not get any grace marks!");
    }
    else {
        printf("You will get 5 grace marks per subject");
    }

    if ( class == 2 && subjects > 2 ){
        printf("You will not get any grace marks!");
    }
    else {
        printf("You will get 4 grace marks per subject");
    }

    if ( class == 3 && subjects > 1 ){
        printf("You will not get any grace marks!");
    }
    else {
        printf("You will get 5 grace marks per subject");
    }
}