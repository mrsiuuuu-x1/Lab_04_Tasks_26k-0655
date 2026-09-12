#include <stdio.h>

int main() {
    int No_Of_Pizzas;
    char chose_stuff_crust;

    printf("How many Pizzas would you like to order: ");
    scanf("%d", &No_Of_Pizzas);
    printf("\nHas the customer chosen Stuffed crust? ");
    scanf(" %c", &chose_stuff_crust);

    if (chose_stuff_crust != 'Y' && chose_stuff_crust != 'y' && chose_stuff_crust != 'N' && chose_stuff_crust != 'n') {
        printf("Enter a valid choice");
    }
    else if (No_Of_Pizzas >=3 && (chose_stuff_crust == 'Y' || chose_stuff_crust == 'y')) {
        printf("You get free garlic bread");
    }
    else {
        printf("Thank You for your order!");
    }

}