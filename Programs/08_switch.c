// switch 
#include <stdio.h>

int main() {

    printf(" --- Calculator --- \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");

    int choice = 0;
    float num1 = 0, num2 = 0;

    printf("Enter your choice : ");
    scanf("%d", &choice);
    
    printf("Enter first number : ");
    scanf("%f", &num1);
    printf("Enter second number : ");
    scanf("%f", &num2);

    printf("\n");
    
    switch (choice) {
        case 1:
            printf("Result : %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Result : %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Result : %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result : %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a valid operation.\n");
    }

}