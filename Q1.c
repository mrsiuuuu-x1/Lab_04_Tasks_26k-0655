#include <stdio.h>

int main() {
    int choice, No_Of_Pizzas;
    int Total_Cost = 0;
    
    printf("Choose Your Size: ");
    scanf("%s", &choice);

    switch(choice) {
        case 1: printf("Small Size Selected");
                break;
        case 2: printf("Medium Size Selected");
                break;   
        case 3: printf("Large Size Selected");
                break;
        default: printf("Invalid Choice! Try again");
    }
}