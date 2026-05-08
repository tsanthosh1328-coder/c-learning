#include <stdio.h>
#include <stdbool.h>

double celciustoFahrenheit (double C) {
    return (C*1.8 + 32);
}

double fahrenheittoCelcius (double F) {
    return ((F-32)/1.8);
}

bool isBoiling (double C) {
    return (C >= 100);
}

int main() {
    double temp = 0.0;
    int choice = 0;

    printf("Enter temperature : ");
    scanf("%lf", &temp);

    printf("Convert: 1) Celcius to Fahrenheit  2) Fahrenheit to Celcius\n");
    printf("Choice:");
    scanf("%d", &choice);
    printf("\n");

    if (choice == 1) {
        printf("%lf C = %.2lf F\n", temp, celciustoFahrenheit(temp));
        printf("Is it boiling?");
        if (isBoiling(temp)) {
            printf(" Yes\n");
        } else {
            printf(" No\n");
        }
    } else if (choice == 2) {
        printf("%lf F = %.2lf C\n", temp, fahrenheittoCelcius(temp));
        printf("Is it boiling?");
        if (isBoiling(fahrenheittoCelcius(temp))) {
            printf(" Yes\n");
        } else {
            printf(" No\n");
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
