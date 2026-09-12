#include <stdio.h>

int main() {
    int size, No_Of_Pizzas, crustType, hour, fulfillment;
    char cheese, studentId;
    float subtotal = 0.0, discount, deliveryFee = 0.0;
    int freeGarlicBread = 0;
    char *sizeName, *crustName;

    printf("========================================\n");
    printf("WELCOME TO SLICE & DICE PIZZA PALACE\n");
    printf("========================================\n");

    printf("Select pizza size (1.Small, 2.Medium, 3.Large): ");
    scanf("%d", &size);

    if (size == 1) sizeName = "Small";
    else if (size == 2) sizeName = "Medium";
    else if (size == 3) sizeName = "Large";
    else {
        printf("Invalid size.\n");
        return 0;
    }
    printf("%s size selected.\n", sizeName);

    printf("How many pizzas (1-3): ");
    scanf("%d", &No_Of_Pizzas);

    if (No_Of_Pizzas == 1) {
        subtotal = 8;
        printf("1 pizza: $8.00\n");
    }
    else if (No_Of_Pizzas == 2) {
        subtotal = 15;
        printf("2 pizzas: $15.00 (Save $1.00!)\n");
    }
    else if (No_Of_Pizzas == 3) {
        subtotal = 21;
        printf("3 pizzas: $21.00 (Save $3.00!)\n");
    }
    else {
        printf("Invalid quantity.\n");
        return 0;
    }

    printf("Select crust (1.Regular, 2.Thin, 3.Stuffed): ");
    scanf("%d", &crustType);

    if (crustType == 1) {
        crustName = "Regular";
        printf("Regular crust selected\n");
    }
    else if (crustType == 2) {
        crustName = "Thin";
        subtotal += 1;
        printf("Thin crust selected (+$1.00)\n");
    }
    else if (crustType == 3) {
        crustName = "Stuffed";
        subtotal += 2;
        printf("Stuffed crust selected (+$2.00)\n");
    }
    else {
        printf("Invalid crust choice.\n");
        return 0;
    }

    printf("Extra cheese (Y/N): ");
    scanf(" %c", &cheese);

    if (cheese == 'Y' || cheese == 'y') {
        cheese = 'Y';
        subtotal += 1.50;
        printf("Extra cheese added (+$1.50)\n");
    }
    else if (cheese == 'N' || cheese == 'n') {
        cheese = 'N';
    }
    else {
        printf("Please enter a Y or N only :)\n");
        cheese = 'N';
    }

    printf("Enter current hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 11 && hour <= 14) {
        discount = subtotal * 0.10;
        subtotal -= discount;
        printf("Happy Hour 10%% discount applied! (-$%.2f)\n", discount);
    }

    printf("Student ID (Y/N): ");
    scanf(" %c", &studentId);

    if (studentId == 'Y' || studentId == 'y') {
        studentId = 'Y';
        subtotal -= 2.00;
        if (subtotal < 0) {
            subtotal = 0;
        }
        printf("Student discount applied! (-$2.00)\n");
    }
    else if (studentId == 'N' || studentId == 'n') {
        studentId = 'N';
    }
    else {
        printf("Please enter a Y or N only :)\n");
        studentId = 'N';
    }

    if (No_Of_Pizzas == 3 && crustType == 3) {
        freeGarlicBread = 1;
        printf("You get free garlic bread!\n");
    }

    printf("Fulfillment (1.Pickup, 2.Delivery): ");
    scanf("%d", &fulfillment);

    if (fulfillment == 2) {
        deliveryFee = 3.00;
        subtotal += deliveryFee;
        printf("Delivery selected (+$3.00)\n");
    }
    else if (fulfillment == 1) {
        printf("Pickup selected\n");
    }
    else {
        printf("Invalid fulfillment option.\n");
        return 0;
    }

    printf("========================================\n");
    printf("ORDER RECEIPT\n");
    printf("========================================\n");
    printf("Pizza Size: %s\n", sizeName);
    printf("Quantity: %d pizza(s)\n", No_Of_Pizzas);
    printf("Crust Type: %s\n", crustName);
    printf("Extra Cheese: %s\n", (cheese == 'Y') ? "Yes" : "No");
    printf("Student ID: %s\n", (studentId == 'Y') ? "Yes" : "No");
    printf("Fulfillment: %s\n", (fulfillment == 2) ? "Delivery" : "Pickup");

    if (freeGarlicBread) {
        printf("----------------------------------------\n");
        printf("BONUS: Free Garlic Bread included!\n");
    }

    printf("========================================\n");
    printf("FINAL TOTAL: $%.2f\n", subtotal);
    printf("========================================\n");
    printf("Thank you for dining with us!\n");
    printf("Have a slice-tastic day!\n");
    printf("========================================\n");

    return 0;
}