#include <stdio.h>

int main() {
    float total;
    int fulfillment;

    total = 0;

    printf("1. Delivery");
    printf("\n2. Pickup\n");
    scanf("%d", &fulfillment);

    if (fulfillment == 1) {
        total += 3;
    }
    else if(fulfillment == 2) {
        total += 0;
    }
    else {
        printf("Enter a valid option");
    }

    printf("\nYour total will be: $%f", total);
}