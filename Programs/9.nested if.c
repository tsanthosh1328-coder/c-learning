// nested if 
#include <stdio.h>
#include <stdbool.h>

int main() {
    
    float price = 50;

    int is_premium = 0;
    int is_student = 0;

    printf("Do you have a premium membership? (1 for yes, 0 for no): ");
    scanf("%d", &is_premium);

    printf("Are you a student? (1 for yes, 0 for no): ");
    scanf("%d", &is_student);


    if (is_premium) {
        if (is_student) {
            price = price * 0.8 * 0.9; 
        } else {
            price = price * 0.8; 
        }
    } 
    else {
        if (is_student) {
            price = price * 0.9; 
        }
        else {
            price = price; 
        }
    }

    printf("The final price is: $ %.2f\n", price);

    return 0;
}