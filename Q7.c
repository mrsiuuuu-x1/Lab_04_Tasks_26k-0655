#include <stdio.h>

int main() {
    float total;
    char has_id;

    total = 10;

    printf("Does the customer has a student id? ");
    scanf("%c", &has_id);

    if (has_id == 'Y' || has_id == 'y') {
        total -= 2;
        if (total < 0) {
            total = 0;
        }
        printf("Your total will be: $%f", total);
    }
    else if (has_id == 'N' || has_id == 'n') {
        printf("Your total will be: $%f", total);
    }
    else {
        printf("Enter a valid character :)");
    }

}