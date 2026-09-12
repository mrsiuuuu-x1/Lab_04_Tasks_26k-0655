#include <stdio.h>

int main() {
    char choice;
    float total;

    total = 0.0;

    printf("Your total is: $%f", total);
    printf("\nDo you want extra cheese?(Y/N) ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case 'Y':
    case 'y': 
        total+= 1.50;
        printf("Your total will be: $%f", total);
        break;
    case 'N':
    case 'n':
        printf("Your total will be: $%f", total);
        break;

    default:
        printf("Please enter a Y or N only :)");
        break;
    }
}