#include <stdio.h>

int main() {
    int a, b, c;

    // clrscr(); // Commented out as it's not standard in C

    printf("\n\n\t Enter 1st number to add: ");
    scanf("%d", &a);

    printf("\n\t Enter 2nd number to add: ");
    scanf("%d", &b); // Corrected the typo here

    c = a + b;

    printf("\n\t The result of addition is: %d", c); // Fixed the print statement

    // getch(); // Commented out as it's not standard in C
    return 0;
}
