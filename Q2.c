#include <stdio.h>

int main() {
    int No_Of_Pizzas;
    int Total_Cost = 0;

    printf("\nHow many Pizza's You want? ");
    scanf("%d", &No_Of_Pizzas);
    
    if (No_Of_Pizzas > 1) {
        printf("Check Our Multi-Pizza Deals!!");
    }
    else {
        Total_Cost = No_Of_Pizzas * 8;
        printf("YOur Total Cost will be: %d", Total_Cost);
    }
}