#include <stdio.h>

int main() {
    int secret = 27;
    int number = 0;
    int guesses = 0;

    while (number != secret) {
        printf("Guess the number: ");
        scanf("%d", &number);
        guesses++;

        if (number < secret) {
            printf("Too low!\n");
        } else if (number > secret) {
            printf("Too high!\n");
        } else {
            printf("Correct! You got it in %d guesses.\n", guesses);
        }
    }
}