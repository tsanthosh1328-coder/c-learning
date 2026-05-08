#include <stdio.h>

int main() {
    int number = 0;
    char choice = '/0';

    while (choice != 'n' && choice != 'N') {
        printf("Enter a number: ");
        scanf("%d", &number);

        for (int i = 1; i < 11; i++) {
            printf("%d x %d = %d\n", number, i, number * i);
        }

        printf("\n");
        printf("Generate another? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");
    }
}