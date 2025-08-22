#include <stdio.h>

int main()
{
    int age ;
    char hasVoterid ;

    printf("Enter your age\n");
    scanf("%d", &age );

    if (age >= 18) {
        printf("Do you have voter id? (y/n): ");
        scanf(" %c", &hasVoterid);

        if (hasVoterid == 'Y' || hasVoterid == 'y') {
            printf("\n\nYou are elgible to vote!");
        }

        else {
            printf("\n\nYou are not eligible to vote because you don't have voter id");
        }
    }

    else {
        printf("\n\nYou will be eligible to vote after 18");
    }


    return 0;
}
