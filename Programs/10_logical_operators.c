#include <stdio.h>

int main() {
    int age = 0;
    int height = 0;
    int hasParent = 0;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height in cm: ");
    scanf("%d", &height);
    printf("Do you have a parent? (1 for yes, 0 for no): ");
    scanf("%d", &hasParent);

    if ((age >= 18 && height >= 120 ) || (age >= 12 && hasParent == 1 && height >= 120)) {
        printf("You can ride!\n");
    } else if (height < 120) {
        printf("You must be at least 120 cm to ride.\n");
    } else if (age < 12) {
        printf("You must be at least 12 years old.\n");
    } else if (hasParent != 1) {
        printf("Sorry, under 18 must have a parent present.\n");
    }

    return 0;
}