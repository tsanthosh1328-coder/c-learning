#include <stdio.h>

int main() {
    
    float price[5] = {0.0};
    float Subtotal = 0.0;
    float Tax = 0.0;
    float Total = 0.0;
    
    for (int i = 0; i < 5; i++) {
        printf("Enter the price of item %d: ", i + 1);
        scanf("%f", &price[i]);
    }

    for (int i = 0; i < 5; i++) {
       Subtotal += price[i];
    }
    Tax = Subtotal * 0.1;
    Total = Subtotal + Tax;
    
    printf("\n--- Shopping Cart ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Price of item %d: $%.2f\n", i + 1, price[i]);
    }
    printf("\n");
    printf("Subtotal: $%.2f\n", Subtotal);
    printf("Tax: $%.2f\n", Tax);
    printf("Total: $%.2f\n", Total);
}