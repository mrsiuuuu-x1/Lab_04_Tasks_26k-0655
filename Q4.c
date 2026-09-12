#include <stdio.h>

int main() {
    int choice, total;

    total = 0;

    printf("What Type of crust you want? \n");
    printf("Enter choice: ");
    printf("\n1. Regular");
    printf("\n2. Thin");
    printf("\n3. Stuffed");
    printf("\nSelect: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Regular crust chosen: $0");
        printf("Your total will be: $%d", total);
    }
    else if (choice == 2) {
        printf("Think crust chosen: $1");
        total += 1;
        printf("Your total will be: $%d", total);
    }
    else if (choice == 3) {
        printf("Stuffed crust chosen: $2");
        total += 2;
        printf("Your total will be: $%d", total);
    }
    else {
        printf("Invalid choice selected! Try Again");
    }

}