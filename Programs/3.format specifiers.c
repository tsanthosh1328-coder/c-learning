#include <stdio.h>

int main() {
    float Apple = 1.5;
    float Bread = 2.99;
    float Milk = 1.25;
    float Total = Apple + Bread + Milk;


    printf("Price of Apple : $ %6.2f\n", Apple);
    printf("Price of Bread : $ %6.2f\n", Bread);
    printf("Price of Milk  : $ %6.2f\n", Milk);
    printf("-----------------------------\n");
    printf("Total Price    : $ %+6.2f\n", Total);

}