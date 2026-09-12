#include <stdio.h>

int main() {
    int time;
    float total;

    total = 20;

    printf("What time is it now? ");
    scanf("%d", &time);

    if (time >= 11 && time <= 14) {
        float discount = total * 0.1;
        total = total - discount;
        printf("Your total will be: $%f", total);
    }
    else {
        printf("Your total will be: $%f", total);
    }

}