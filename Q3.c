#include <stdio.h>

int main() {
    int quantity;

    printf("How many Pizza's You want? ");
    scanf("%d", &quantity);

    if (quantity == 1) {
        printf("You ordered 1 Pizza only.");
        printf("\nYour Total Cost is: $8");
    }
    else {
        if (quantity == 2) {
            printf("You ordered 2 Pizza only.");
            printf("\nYour Total Cost is: $15");
        }
        else {
            printf("You ordered 3 Pizza only.");
            printf("\nYour Total Cost is: $21");
        }
    }
}