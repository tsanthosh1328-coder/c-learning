#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL)); 
    int secret = (rand() % 100 + 1);
    int number = 0;
    int guesses = 0;

    while (number != secret) {
        printf("Guess the number between 1 to 100: ");
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